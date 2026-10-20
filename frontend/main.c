// Open4DBoxing in a window: SDL2 gives the screen (mode 13h's 320x200 scaled to the window, 4:3), the keyboard (PC
// scan codes to the game's keyboard handler), the mouse (the mouse driver's position and buttons) and the sound
// (the PC speaker, rendered from the timer chip's state); the game's clock runs at real time, a video frame at a time.
//   open4dboxing GAMEDIR [ARGS]: GAMEDIR holds the game's files; ARGS are the game's own (BOX.BAT's are "n pc15.drv d")
// For scripted runs: OPEN4DBOXING_FRAMES=N ends after N frames, OPEN4DBOXING_FAST runs without waiting for real time,
// OPEN4DBOXING_SHOTS=N,M,... writes shot-N.tga at those frames, OPEN4DBOXING_KEYS="FRAME:scan:1|0,..." presses keys.
#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "asm2c.h"
#include "game.h"
#include "pit.h"

#define FRAME_US 14268  // a VGA frame: 1000000 / 70.086
#define AUDIO_RATE 44100

static SDL_Window *window;
static SDL_Renderer *renderer;
static SDL_Texture *texture;
static SDL_AudioDeviceID audioDevice;
static bool fast, quit;
static long lastFrame = -1;
static uint64_t startUs;
static const char *scriptShots, *scriptKeys;

static uint64_t real_us(void)
{
  uint64_t c = SDL_GetPerformanceCounter(), f = SDL_GetPerformanceFrequency();
  return c / f * 1000000 + c % f * 1000000 / f;
}

static uint8_t pc_scan(SDL_Scancode c, bool *extended)
{
  *extended = false;
  if (c >= SDL_SCANCODE_A && c <= SDL_SCANCODE_Z)
  {
    static const uint8_t s[26] = { 0x1E, 0x30, 0x2E, 0x20, 0x12, 0x21, 0x22, 0x23, 0x17, 0x24, 0x25, 0x26, 0x32,
                                   0x31, 0x18, 0x19, 0x10, 0x13, 0x1F, 0x14, 0x16, 0x2F, 0x11, 0x2D, 0x15, 0x2C };
    return s[c - SDL_SCANCODE_A];
  }
  if (c >= SDL_SCANCODE_1 && c <= SDL_SCANCODE_0) return (uint8_t)(2 + c - SDL_SCANCODE_1);
  if (c >= SDL_SCANCODE_F1 && c <= SDL_SCANCODE_F10) return (uint8_t)(0x3B + c - SDL_SCANCODE_F1);
  switch (c)
  {
  case SDL_SCANCODE_ESCAPE: return 0x01;
  case SDL_SCANCODE_MINUS: return 0x0C;
  case SDL_SCANCODE_EQUALS: return 0x0D;
  case SDL_SCANCODE_BACKSPACE: return 0x0E;
  case SDL_SCANCODE_TAB: return 0x0F;
  case SDL_SCANCODE_LEFTBRACKET: return 0x1A;
  case SDL_SCANCODE_RIGHTBRACKET: return 0x1B;
  case SDL_SCANCODE_RETURN: return 0x1C;
  case SDL_SCANCODE_KP_ENTER: *extended = true; return 0x1C;
  case SDL_SCANCODE_LCTRL: return 0x1D;
  case SDL_SCANCODE_RCTRL: *extended = true; return 0x1D;
  case SDL_SCANCODE_SEMICOLON: return 0x27;
  case SDL_SCANCODE_APOSTROPHE: return 0x28;
  case SDL_SCANCODE_GRAVE: return 0x29;
  case SDL_SCANCODE_LSHIFT: return 0x2A;
  case SDL_SCANCODE_BACKSLASH: return 0x2B;
  case SDL_SCANCODE_COMMA: return 0x33;
  case SDL_SCANCODE_PERIOD: return 0x34;
  case SDL_SCANCODE_SLASH: return 0x35;
  case SDL_SCANCODE_RSHIFT: return 0x36;
  case SDL_SCANCODE_KP_MULTIPLY: return 0x37;
  case SDL_SCANCODE_LALT: return 0x38;
  case SDL_SCANCODE_RALT: *extended = true; return 0x38;
  case SDL_SCANCODE_SPACE: return 0x39;
  case SDL_SCANCODE_CAPSLOCK: return 0x3A;
  case SDL_SCANCODE_KP_7: return 0x47;
  case SDL_SCANCODE_KP_8: return 0x48;
  case SDL_SCANCODE_KP_9: return 0x49;
  case SDL_SCANCODE_KP_MINUS: return 0x4A;
  case SDL_SCANCODE_KP_4: return 0x4B;
  case SDL_SCANCODE_KP_5: return 0x4C;
  case SDL_SCANCODE_KP_6: return 0x4D;
  case SDL_SCANCODE_KP_PLUS: return 0x4E;
  case SDL_SCANCODE_KP_1: return 0x4F;
  case SDL_SCANCODE_KP_2: return 0x50;
  case SDL_SCANCODE_KP_3: return 0x51;
  case SDL_SCANCODE_KP_0: return 0x52;
  case SDL_SCANCODE_KP_PERIOD: return 0x53;
  case SDL_SCANCODE_HOME: *extended = true; return 0x47;
  case SDL_SCANCODE_UP: *extended = true; return 0x48;
  case SDL_SCANCODE_PAGEUP: *extended = true; return 0x49;
  case SDL_SCANCODE_LEFT: *extended = true; return 0x4B;
  case SDL_SCANCODE_RIGHT: *extended = true; return 0x4D;
  case SDL_SCANCODE_END: *extended = true; return 0x4F;
  case SDL_SCANCODE_DOWN: *extended = true; return 0x50;
  case SDL_SCANCODE_PAGEDOWN: *extended = true; return 0x51;
  case SDL_SCANCODE_INSERT: *extended = true; return 0x52;
  case SDL_SCANCODE_DELETE: *extended = true; return 0x53;
  default: return 0;
  }
}

static void mouse_position(int wx, int wy)
{
  int w, h;
  SDL_GetRendererOutputSize(renderer, &w, &h);
  float lx, ly;
  SDL_RenderWindowToLogical(renderer, wx, wy, &lx, &ly);
  (void)w, (void)h;
  int x = (int)(lx * 2), y = (int)ly;  // the driver's coordinates: 0-639 by 0-199 in mode 13h
  if (x < 0) x = 0;
  if (x > 639) x = 639;
  if (y < 0) y = 0;
  if (y > 199) y = 199;
  asm_mouse.dx = (i16)(asm_mouse.dx + (x - asm_mouse.x));
  asm_mouse.dy = (i16)(asm_mouse.dy + (y - asm_mouse.y));
  asm_mouse.x = (u16)x;
  asm_mouse.y = (u16)y;
}

static void pump(void)
{
  SDL_Event e;
  while (SDL_PollEvent(&e))
  {
    switch (e.type)
    {
    case SDL_QUIT: quit = true; break;
    case SDL_KEYDOWN:
    case SDL_KEYUP:
      if (e.key.repeat) break;
      if (e.type == SDL_KEYDOWN && e.key.keysym.scancode == SDL_SCANCODE_RETURN && (e.key.keysym.mod & KMOD_ALT))
      {
        bool full = SDL_GetWindowFlags(window) & SDL_WINDOW_FULLSCREEN_DESKTOP;
        SDL_SetWindowFullscreen(window, full ? 0 : SDL_WINDOW_FULLSCREEN_DESKTOP);
        break;
      }
      {
        bool ext;
        uint8_t scan = pc_scan(e.key.keysym.scancode, &ext);
        if (scan) game_key(scan, ext, e.type == SDL_KEYDOWN);
      }
      break;
    case SDL_MOUSEMOTION: mouse_position(e.motion.x, e.motion.y); break;
    case SDL_MOUSEBUTTONDOWN:
    case SDL_MOUSEBUTTONUP:
    {
      u16 bit = e.button.button == SDL_BUTTON_LEFT ? 1 : e.button.button == SDL_BUTTON_RIGHT ? 2 : 0;
      if (e.type == SDL_MOUSEBUTTONDOWN) asm_mouse.buttons |= bit;
      else asm_mouse.buttons &= (u16)~bit;
      mouse_position(e.button.x, e.button.y);
      break;
    }
    default: break;
    }
  }
}

static void draw_screen(void)
{
  static uint32_t argb[64000];
  const uint8_t *vram = game_screen();
  const uint8_t (*dac)[3] = game_palette();
  for (int k = 0; k < 64000; k++)
  {
    const uint8_t *c = dac[vram[k]];
    argb[k] = 0xFF000000u | (uint32_t)((c[0] << 2 | c[0] >> 4) << 16 | (c[1] << 2 | c[1] >> 4) << 8 | (c[2] << 2 | c[2] >> 4));
  }
  SDL_UpdateTexture(texture, NULL, argb, 320 * 4);
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

static void shot(uint64_t n)
{
  char name[64];
  snprintf(name, sizeof name, "shot-%llu.tga", (unsigned long long)n);
  FILE *f = fopen(name, "wb");
  if (!f) return;
  unsigned char hdr[18] = { 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640 & 255, 640 >> 8, 400 & 255, 400 >> 8, 24, 0x20 };
  fwrite(hdr, 1, 18, f);
  const uint8_t *s = game_screen();
  const uint8_t (*pal)[3] = game_palette();
  static unsigned char row[640 * 3];
  for (int y = 0; y < 400; y++)
  {
    for (int x = 0; x < 640; x++)
    {
      const uint8_t *c = pal[s[(y / 2) * 320 + x / 2]];
      row[x * 3] = (unsigned char)((c[2] << 2) | (c[2] >> 4));
      row[x * 3 + 1] = (unsigned char)((c[1] << 2) | (c[1] >> 4));
      row[x * 3 + 2] = (unsigned char)((c[0] << 2) | (c[0] >> 4));
    }
    fwrite(row, 1, sizeof row, f);
  }
  fclose(f);
}

static bool listed(const char *list, uint64_t n)
{
  for (const char *p = list; p && *p;)
  {
    char *end;
    unsigned long long v = strtoull(p, &end, 10);
    if (end == p) break;
    if (v == n) return true;
    p = end;
    while (*p == ',' || *p == ' ') p++;
  }
  return false;
}

// OPEN4DBOXING_KEYS="FRAME:SCAN:DOWN,...": a key (its scan code, hexadecimal) pressed or released at a frame
static void script_keys(uint64_t n)
{
  for (const char *p = scriptKeys; p && *p;)
  {
    char *end;
    unsigned long long f = strtoull(p, &end, 10);
    if (end == p || *end != ':') break;
    unsigned scan = (unsigned)strtoul(end + 1, &end, 16);
    int down = *end == ':' ? atoi(end + 1) : 1;
    if (f == n) game_key((uint8_t)(scan & 0xFF), scan > 0xFF, down != 0);
    while (*end && *end != ',') end++;
    p = *end ? end + 1 : end;
  }
}

static void sound(void)
{
  static int16_t buf[AUDIO_RATE / 10];
  int n = pit_render(game_now(), AUDIO_RATE, buf, (int)(sizeof buf / sizeof *buf));
  if (n > 0 && audioDevice)
  {
    // (stay close to real time: at most about a tenth of a second queued)
    if (SDL_GetQueuedAudioSize(audioDevice) < AUDIO_RATE / 10 * sizeof *buf) SDL_QueueAudio(audioDevice, buf, (Uint32)(n * sizeof *buf));
  }
}

static bool frame(void *ctx, uint64_t n)
{
  (void)ctx;
  if (scriptKeys) script_keys(n);
  if (scriptShots && listed(scriptShots, n)) shot(n);
  if (lastFrame >= 0 && (long)n >= lastFrame) return false;
  draw_screen();
  sound();
  pump();
  if (!fast)
  {
    uint64_t due = startUs + n * (uint64_t)FRAME_US, now = real_us();
    if (due > now + 1000) SDL_Delay((uint32_t)((due - now) / 1000));
    if (now > due + 200000) startUs = now - n * (uint64_t)FRAME_US;  // (fell far behind: no catching up)
  }
  return !quit;
}

int main(int argc, char **argv)
{
  if (argc < 2)
  {
    fprintf(stderr, "usage: open4dboxing GAMEDIR [ARGS]\n  GAMEDIR: the game's files; ARGS: the game's own (BOX.BAT's: n pc15.drv d)\n");
    return 2;
  }
  static char cmdline[256];
  for (int k = 2; k < argc; k++)
  {
    if (k > 2) strncat(cmdline, " ", sizeof cmdline - strlen(cmdline) - 1);
    strncat(cmdline, argv[k], sizeof cmdline - strlen(cmdline) - 1);
  }
  if (argc == 2) strcpy(cmdline, "n pc15.drv d");
  fast = getenv("OPEN4DBOXING_FAST") != NULL;
  scriptShots = getenv("OPEN4DBOXING_SHOTS");
  scriptKeys = getenv("OPEN4DBOXING_KEYS");
  if (getenv("OPEN4DBOXING_FRAMES")) lastFrame = atol(getenv("OPEN4DBOXING_FRAMES"));
  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0) { fprintf(stderr, "open4dboxing: SDL: %s\n", SDL_GetError()); return 1; }
  window = SDL_CreateWindow("Open4DBoxing", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 960, 720, SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  if (!renderer) renderer = SDL_CreateRenderer(window, -1, 0);
  SDL_RenderSetLogicalSize(renderer, 320, 240);  // 4:3, as the monitor showed mode 13h
  SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "nearest");
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, 320, 200);
  SDL_AudioSpec want = { .freq = AUDIO_RATE, .format = AUDIO_S16SYS, .channels = 1, .samples = 1024 }, have;
  audioDevice = SDL_OpenAudioDevice(NULL, 0, &want, &have, 0);
  if (audioDevice) SDL_PauseAudioDevice(audioDevice, 0);
  startUs = real_us();
  GameHost host = { argv[1], cmdline, frame, NULL, 2 };
  int code = game_run(&host);
  if (audioDevice) SDL_CloseAudioDevice(audioDevice);
  SDL_Quit();
  return code < 0 ? 0 : code;
}
