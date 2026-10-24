// The cosmetic camera (camera.h). The game's camera and its fight are not apart: the camera's keys and views change
// how long a frame's drawing takes, and the fight reads a local its drawing left (the miss's stamina), so a camera
// key the game sees changes the fight. Here the game never sees one. A machine's state is its globals (state.h) and
// its program's stack (fiber.h): the shadow is that state kept between frames, given back to the program's stack
// for its own frame and taken again after it (the stack at the same addresses, so every pointer on it holds).
//
// A frame: the game's frame runs as ever; then the game's state is kept, the shadow's given back; the shadow takes
// the fight's state as the game had it at the frame's start (the data the search hashes, but what the camera itself
// writes there: the limbs' drawing order, the view's transforms), the game's mouse, the keys the host gave the game
// for the frame, and the cameras' keys; it runs its frame unheard; its picture is kept to be shown; and the game's
// state is given back. The shadow's fight is the game's at each frame's start; after a frame it may be a step apart
// where the two frames' timer ticks fall apart (the game's view is not the shadow's): the next frame's start mends
// it. Should the shadow drift from the game (eight frames in a row apart), it is made again from the game, and the
// last camera's key pressed for it again.
#include "camera.h"

#include <stdlib.h>
#include <string.h>

#include "asm2c.h"
#include "game.h"
#include "state.h"

// the fight's state in the MCGA build's data segment (the search's hash's parts, but the camera's: the limbs'
// drawing order 5A1C-5A1F, 89FE-89FF, A6B0-A6BF, B6B8-B6FF, BD08-BD13 and CF34-CF47)
static const struct { uint16_t off, n; } k_fight[] = {
  { 0xBA12, 0xF4 }, { 0xBB06, 0xF4 }, { 0xA488, 0x74 }, { 0xA4FC, 0x74 }, { 0x8472, 4 }, { 0x89F6, 8 },
  { 0x8A40, 2 },    { 0x8CC8, 16 },   { 0x8E3E, 8 },    { 0x9302, 2 },    { 0xAEC0, 2 }, { 0xB130, 16 },
  { 0xCC58, 4 },    { 0xCF02, 0x32 }, { 0xCF48, 0x1A },
};
#define DRIFT_FRAMES 8

typedef struct
{
  uint8_t *globals;
  uint8_t *stack;
  size_t stackLen, stackCap;
  void *sp;
} Machine;

static bool want;           // the host's setting
static bool have;           // a shadow made
static Fiber *fiber;        // the program's stack
static bool *done;          // the program ended (game.c's)
static void (*key_byte)(uint8_t b);
static size_t globalsSize;
static Machine game, shadow;
static uint8_t given[0x10000];  // the game's data segment at the frame's start
static AsmMouse givenMouse;
static uint8_t keyLog[256], camKeys[64], releases[16];
static int nKeyLog, nCamKeys, nReleases;
static int lastCamera = -1, drift;
static uint8_t screen[320 * 200], palette[256][3];
static bool shown;

void camera_set(bool on)
{
  want = on;
  if (!on) have = shown = false;
}
bool camera_get(void) { return want; }

void camera_key(int n, bool pressed)
{
  if (n < 0 || n > 9 || nCamKeys == (int)sizeof camKeys) return;
  camKeys[nCamKeys++] = (uint8_t)((0x3B + n) | (pressed ? 0 : 0x80));
  if (pressed) lastCamera = n;
}

void camera_log_key(uint8_t b)
{
  if (have && nKeyLog < (int)sizeof keyLog) keyLog[nKeyLog++] = b;
}

// a machine's globals, out and in (the visitors' order: the megabyte first)
static void count_size(void *data, size_t size, void *ctx) { (void)data; *(size_t *)ctx += size; }
static void copy_out(void *data, size_t size, void *ctx)
{
  uint8_t **p = ctx;
  memcpy(*p, data, size);
  *p += size;
}
static void copy_in(void *data, size_t size, void *ctx)
{
  uint8_t **p = ctx;
  memcpy(data, *p, size);
  *p += size;
}

static bool keep(Machine *m)
{
  if (!m->globals && !(m->globals = malloc(globalsSize))) return false;
  uint8_t *p = m->globals;
  game_state_visit(copy_out, &p);
  m->sp = fiber_sp(fiber);
  m->stackLen = (size_t)((uint8_t *)fiber_top(fiber) - (uint8_t *)m->sp);
  if (m->stackLen > m->stackCap)
  {
    uint8_t *s = realloc(m->stack, m->stackLen);
    if (!s) return false;
    m->stack = s, m->stackCap = m->stackLen;
  }
  memcpy(m->stack, m->sp, m->stackLen);
  return true;
}

static void give_back(const Machine *m)
{
  uint8_t *p = m->globals;
  game_state_visit(copy_in, &p);
  memcpy(m->sp, m->stack, m->stackLen);
  fiber_set_sp(fiber, m->sp);
}

void camera_start(Fiber *program, bool *programDone, void (*keyByte)(uint8_t b))
{
  fiber = program;
  done = programDone;
  key_byte = keyByte;
  have = shown = false;
  nKeyLog = nCamKeys = nReleases = 0;
  if (!globalsSize) game_state_visit(count_size, &globalsSize);
}

void camera_before_frame(void)
{
  if (!have) return;
  memcpy(given, g_mem + ((uint32_t)g_dsSeg << 4), sizeof given);
  givenMouse = asm_mouse;
}

// made again from the game: the game's state is the shadow's, the last camera's key pressed (released a frame later)
static void make_shadow(void)
{
  if (!keep(&game)) return;
  if (!shadow.globals && !(shadow.globals = malloc(globalsSize))) return;
  memcpy(shadow.globals, game.globals, globalsSize);
  if (game.stackLen > shadow.stackCap)
  {
    uint8_t *s = realloc(shadow.stack, game.stackLen);
    if (!s) return;
    shadow.stack = s, shadow.stackCap = game.stackLen;
  }
  memcpy(shadow.stack, game.stack, game.stackLen);
  shadow.stackLen = game.stackLen, shadow.sp = game.sp;
  have = true;
  drift = 0;
  nKeyLog = 0;
  if (lastCamera >= 0 && nCamKeys < (int)sizeof camKeys)
  {
    camKeys[nCamKeys++] = (uint8_t)(0x3B + lastCamera);
    if (nReleases < (int)sizeof releases) releases[nReleases++] = (uint8_t)((0x3B + lastCamera) | 0x80);
  }
}

void camera_after_frame(void)
{
  if (!want || game_program_index() != 0)
  {
    have = shown = false;
    nCamKeys = nReleases = 0;
    return;
  }
  if (!have)
  {
    make_shadow();
    return;
  }
  if (!keep(&game)) return;
  give_back(&shadow);
  // the fight's state as the game had it at the frame's start, its mouse, its keys, the cameras'
  uint8_t *ds = g_mem + ((uint32_t)g_dsSeg << 4);
  for (size_t k = 0; k < sizeof k_fight / sizeof *k_fight; k++) memcpy(ds + k_fight[k].off, given + k_fight[k].off, k_fight[k].n);
  asm_mouse = givenMouse;
  for (int k = 0; k < nKeyLog; k++) key_byte(keyLog[k]);
  for (int k = 0; k < nCamKeys; k++) key_byte(camKeys[k]);
  nKeyLog = nCamKeys = 0;
  game_quiet = true;
  fiber_resume(fiber);
  game_quiet = false;
  if (*done)
  {
    // (the shadow's program ended: the shadow is gone, the game goes on)
    *done = false;
    have = shown = false;
  }
  else
  {
    shown = false;  // (game_screen: the machine's own, the shadow's)
    memcpy(screen, game_screen(), sizeof screen);
    memcpy(palette, game_palette(), sizeof palette);
    shown = true;
    // apart from the game after the frame, frame after frame: made again
    const uint8_t *gameDs = game.globals + ((uint32_t)g_dsSeg << 4);
    bool apart = false;
    for (size_t k = 0; k < sizeof k_fight / sizeof *k_fight && !apart; k++)
      apart = memcmp(ds + k_fight[k].off, gameDs + k_fight[k].off, k_fight[k].n) != 0;
    drift = apart ? drift + 1 : 0;
    if (drift >= DRIFT_FRAMES) have = false;
    else keep(&shadow);
  }
  give_back(&game);
  // the releases of the keys pressed for a shadow made again, at the next frame
  for (int k = 0; k < nReleases && nCamKeys < (int)sizeof camKeys; k++) camKeys[nCamKeys++] = releases[k];
  nReleases = 0;
}

const uint8_t *camera_screen(void) { return want && shown ? screen : NULL; }
const uint8_t (*camera_palette(void))[3] { return want && shown ? (const uint8_t(*)[3])palette : NULL; }
