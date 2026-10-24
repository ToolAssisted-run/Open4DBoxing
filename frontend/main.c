// Open4DBoxing in a window: SDL2 gives the screen (mode 13h's 320x200 scaled to the window, 4:3), the keyboard (PC
// scan codes to the game's keyboard handler), the mouse (the mouse driver's position and buttons) and the sound (the
// speaker, the AdLib, the Tandy chip and the Sound Blaster, rendered from the chips' state); the game's clock runs at
// real time, a video frame at a time. F4 opens the in-game menu (overlay_menu.c): settings, cheats, quit.
//   open4dboxing GAMEDIR [ARGS]: GAMEDIR holds the game's files; ARGS are the game's own (BOX.BAT's are "n pc15.drv d";
//   without them the settings' sound driver)
// For scripted runs: OPEN4DBOXING_FRAMES=N ends after N frames, OPEN4DBOXING_FAST runs without waiting for real time,
// OPEN4DBOXING_SHOTS=N,M,... writes shot-N.tga at those frames, OPEN4DBOXING_KEYS="FRAME:scan:1|0,..." presses keys,
// OPEN4DBOXING_TAPS="FRAME:SDLSCANCODE,..." taps keys as SDL events (F4 = 61 opens the menu),
// OPEN4DBOXING_WAV=PATH records the sound, OPEN4DBOXING_CHEATS="invulnerable one_blow_kills" turns cheats on,
// OPEN4DBOXING_MT32ROMS=DIR names the MT-32's ROMs' folder (else the settings', the user's data folder's roms, the
// program's, the game's folder).
#include <SDL.h>
#include <dirent.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#ifdef _WIN32
#include <direct.h>
#else
#include <sys/stat.h>
#endif

#include "asm2c.h"
#include "cheats.h"
#include "disks.h"
#include "camera.h"
#include "game.h"
#include "opl.h"
#include "overlay_menu.h"
#include "pit.h"
#include "sb.h"
#include "settings.h"
#include "tandy.h"

// a frame: a VGA's 70.086 Hz for the MCGA build, the CGA-type cards' 59.92 Hz for the others (game.c times them so)
static int frameUs = 14268;
#define FRAME_US frameUs
#define AUDIO_RATE 44100

static SDL_Window *window;
static SDL_Renderer *renderer;
static SDL_Texture *texture, *texture2x;
static SDL_AudioDeviceID audioDevice;
static os_settings S;
static bool fast, quit;
static long lastFrame = -1;
static uint64_t startUs, menuUs, frameCount;
static const char *scriptShots, *scriptKeys, *scriptTaps;
static FILE *wav;
static uint32_t wavFrames;

static uint64_t real_us(void)
{
  uint64_t c = SDL_GetPerformanceCounter(), f = SDL_GetPerformanceFrequency();
  return c / f * 1000000 + c % f * 1000000 / f;
}

static void notify_player(const char *msg)
{
  fputs(msg, stderr);
#ifdef _WIN32
  SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "Open4DBoxing", msg, NULL);
#endif
}

// the program's folder (SDL's; the current one if it cannot tell), or its subfolder sub
static void program_dir(char *dir, size_t n, const char *sub)
{
  char *base = SDL_GetBasePath();
  snprintf(dir, n, "%s%s", base ? base : "./", sub);
  if (base) SDL_free(base);
  size_t len = strlen(dir);
  if (len > 1 && (dir[len - 1] == '/' || dir[len - 1] == '\\')) dir[len - 1] = 0;
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

// the keys the game saw pressed: their releases still reach it while the menu shows, and it gets no release of a key it
// did not see pressed (one held from the menu)
static bool gameDown[2][128];
static void game_key_event(uint8_t scan, bool extended, bool pressed)
{
  // (the cosmetic camera's keys: the shadow's alone)
  if (!extended && scan >= 0x3B && scan <= 0x44 && camera_get()) { camera_key(scan - 0x3B, pressed); return; }
  if (!pressed && !gameDown[extended][scan & 0x7F]) return;
  gameDown[extended][scan & 0x7F] = pressed;
  game_key(scan, extended, pressed);
}

static void mouse_position(int wx, int wy)
{
  float lx, ly;
  SDL_RenderWindowToLogical(renderer, wx, wy, &lx, &ly);
  int x = (int)(lx * 2), y = (int)(S.use_correct_aspect_ratio ? ly * 200 / 240 : ly);  // the driver's 0-639 by 0-199
  if (x < 0) x = 0;
  if (x > 639) x = 639;
  if (y < 0) y = 0;
  if (y > 199) y = 199;
  asm_mouse.dx = (i16)(asm_mouse.dx + (x - asm_mouse.x));
  asm_mouse.dy = (i16)(asm_mouse.dy + (y - asm_mouse.y));
  asm_mouse.x = (u16)x;
  asm_mouse.y = (u16)y;
  asm_mouse_clamp();
}

static void mouse_button(const SDL_Event *e)
{
  u16 bit = e->button.button == SDL_BUTTON_LEFT ? 1 : e->button.button == SDL_BUTTON_RIGHT ? 2 : 0;
  if (e->type == SDL_MOUSEBUTTONDOWN) asm_mouse.buttons |= bit;
  else asm_mouse.buttons &= (u16)~bit;
  mouse_position(e->button.x, e->button.y);
}

// Alt+Enter: fullscreen on or off (not the game's)
static bool fullscreen_key(const SDL_Event *e)
{
  if (e->type != SDL_KEYDOWN || !(e->key.keysym.mod & KMOD_ALT) || (e->key.keysym.sym != SDLK_RETURN && e->key.keysym.sym != SDLK_KP_ENTER)) return false;
  if (!e->key.repeat && window)
  {
    bool full = !(SDL_GetWindowFlags(window) & SDL_WINDOW_FULLSCREEN_DESKTOP);
    SDL_SetWindowFullscreen(window, full ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0);
    SDL_ShowCursor(full ? SDL_DISABLE : SDL_ENABLE);
  }
  return true;
}

static void setup_video(void)
{
  SDL_RenderSetLogicalSize(renderer, 320, S.use_correct_aspect_ratio ? 240 : 200);  // (the VGA's 320x200 on a 4:3 screen)
#if SDL_VERSION_ATLEAST(2, 0, 5)
  SDL_RenderSetIntegerScale(renderer, S.use_integer_scaling ? SDL_TRUE : SDL_FALSE);
#endif
  if (texture) SDL_DestroyTexture(texture);
  if (texture2x) SDL_DestroyTexture(texture2x);
  texture = texture2x = NULL;
  SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, S.scaling_type == SCALING_BLURRY ? "linear" : "nearest");
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, 320, 200);
  if (S.scaling_type == SCALING_FUZZY)
  {
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");
    texture2x = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_TARGET, 640, 400);
    if (!texture2x) fprintf(stderr, "open4dboxing: no render target (%s): sharp scaling\n", SDL_GetError());
  }
}

static uint32_t argb[64000];  // the picture shown: the game's screen through the DAC, the menu over it
static void draw_screen(void)
{
  const uint8_t *vram = game_screen();
  const uint8_t (*dac)[3] = game_palette();
  for (int k = 0; k < 64000; k++)
  {
    const uint8_t *c = dac[vram[k]];
    argb[k] = 0xFF000000u | (uint32_t)((c[0] << 2 | c[0] >> 4) << 16 | (c[1] << 2 | c[1] >> 4) << 8 | (c[2] << 2 | c[2] >> 4));
  }
  overlay_menu_compose(argb);
  SDL_UpdateTexture(texture, NULL, argb, 320 * 4);
  SDL_RenderClear(renderer);
  if (texture2x)  // fuzzy: nearest-neighbour to twice the size, then smooth to the window
  {
    SDL_SetRenderTarget(renderer, texture2x);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_SetRenderTarget(renderer, NULL);
    SDL_RenderCopy(renderer, texture2x, NULL, NULL);
  }
  else SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

static void script_taps(uint64_t n);
static bool listed(const char *list, uint64_t n);
static void shot(uint64_t n);
// the in-game menu, opened by pump(): it runs here, 70 frames a second, until it closes; the game waits meanwhile,
// inside its call of the frontend, its clock stopped (menuUs), its sound paused
static void menu_run(void)
{
  overlay_menu_open();
  uint64_t start = real_us(), next = start;
  if (audioDevice) SDL_PauseAudioDevice(audioDevice, 1);
  while (overlay_menu_is_open())
  {
    SDL_Event ev;
    while (SDL_PollEvent(&ev))
    {
      if (ev.type == SDL_QUIT) overlay_menu_close(), exit(0);
      if (fullscreen_key(&ev)) continue;
      if (ev.type == SDL_KEYUP)  // (a key the game saw pressed is released to it)
      {
        bool ext;
        uint8_t sc = pc_scan(ev.key.keysym.scancode, &ext);
        if (sc) game_key_event(sc, ext, false);
      }
      overlay_menu_event(&ev);
    }
    int action = overlay_menu_frame();
    if (action == OVERLAY_MENU_QUIT) exit(0);
    draw_screen();
    frameCount++;
    if (getenv("OPEN4DBOXING_MENUDBG"))
    {
      int page, dialog; const char *item, *sub, *setting;
      overlay_menu_state(&page, &item, &sub, &setting, &dialog);
      fprintf(stderr, "menu frame %llu: page %d item %s sub %s setting %s dialog %d\n", (unsigned long long)frameCount, page, item ? item : "-", sub ? sub : "-", setting ? setting : "-", dialog);
    }
    if (scriptTaps) script_taps(frameCount);
    if (scriptShots && listed(scriptShots, frameCount)) shot(frameCount);
    if (lastFrame >= 0 && (long)frameCount >= lastFrame) overlay_menu_close(), exit(0);
    next += 1000000 / 70;
    uint64_t now = real_us();
    if (next > now + 1000) SDL_Delay((uint32_t)((next - now) / 1000));
    else if (now > next + 100000) next = now;
  }
  if (audioDevice) SDL_PauseAudioDevice(audioDevice, 0);
  menuUs += real_us() - start;
}

// the joystick: the first one plugged in (the settings' enable_joystick), as the game port's first joystick: a
// joystick's first two axes, hat and first two buttons in their order; a game controller's left stick, D-pad, and
// A as the port's second button (the game's punch) and B as its first (the game's other action)
static SDL_Joystick *joy;
static SDL_GameController *pad;
static void joystick_open(int index)
{
  if (SDL_IsGameController(index) && (pad = SDL_GameControllerOpen(index))) joy = SDL_GameControllerGetJoystick(pad);
  else joy = SDL_JoystickOpen(index);
  if (joy) fprintf(stderr, "open4dboxing: the joystick: %s\n", SDL_JoystickName(joy));
  asm_joystick.present = joy != NULL;
}
static void joystick_close(void)
{
  if (pad) SDL_GameControllerClose(pad);
  else if (joy) SDL_JoystickClose(joy);
  pad = NULL, joy = NULL;
  asm_joystick.present = 0;
}
static void joystick_read(void)
{
  if (!joy) return;
  int x, y, b = 0;
  if (pad)
  {
    x = SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_LEFTX);
    y = SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_LEFTY);
    if (SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_DPAD_LEFT)) x = -32768;
    if (SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_DPAD_RIGHT)) x = 32767;
    if (SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_DPAD_UP)) y = -32768;
    if (SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_DPAD_DOWN)) y = 32767;
    b = (SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_A) ? 2 : 0) | (SDL_GameControllerGetButton(pad, SDL_CONTROLLER_BUTTON_B) ? 1 : 0);
  }
  else
  {
    x = SDL_JoystickGetAxis(joy, 0);
    y = SDL_JoystickNumAxes(joy) > 1 ? SDL_JoystickGetAxis(joy, 1) : 0;
    if (SDL_JoystickNumHats(joy) > 0)
    {
      Uint8 h = SDL_JoystickGetHat(joy, 0);
      if (h & SDL_HAT_LEFT) x = -32768;
      if (h & SDL_HAT_RIGHT) x = 32767;
      if (h & SDL_HAT_UP) y = -32768;
      if (h & SDL_HAT_DOWN) y = 32767;
    }
    b = (SDL_JoystickGetButton(joy, 0) ? 1 : 0) | (SDL_JoystickGetButton(joy, 1) ? 2 : 0);
  }
  asm_joystick.x[0] = (u8)((x + 32768) >> 8);
  asm_joystick.y[0] = (u8)((y + 32768) >> 8);
  asm_joystick.buttons = (u8)b;
}

static void pump(void)
{
  SDL_Event e;
  while (SDL_PollEvent(&e))
  {
    if (e.type == SDL_QUIT) { quit = true; continue; }
    if (fullscreen_key(&e)) continue;
    int menu = overlay_menu_open_event(&e);
    if (menu == 1) menu_run();
    if (menu) continue;
    switch (e.type)
    {
    case SDL_KEYDOWN:
    case SDL_KEYUP:
      if (e.key.repeat) break;
      {
        bool ext;
        uint8_t scan = pc_scan(e.key.keysym.scancode, &ext);
        if (scan) game_key_event(scan, ext, e.type == SDL_KEYDOWN);
      }
      break;
    case SDL_MOUSEMOTION: mouse_position(e.motion.x, e.motion.y); break;
    case SDL_MOUSEBUTTONDOWN:
    case SDL_MOUSEBUTTONUP: mouse_button(&e); break;
    case SDL_JOYDEVICEADDED: if (!joy && S.enable_joystick) joystick_open(e.jdevice.which); break;
    case SDL_JOYDEVICEREMOVED: if (joy && e.jdevice.which == SDL_JoystickInstanceID(joy)) joystick_close(); break;
    default: break;
    }
  }
}

static void shot(uint64_t n)
{
  char name[64];
  snprintf(name, sizeof name, "shot-%llu.tga", (unsigned long long)n);
  FILE *f = fopen(name, "wb");
  if (!f) return;
  unsigned char hdr[18] = { 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640 & 255, 640 >> 8, 400 & 255, 400 >> 8, 24, 0x20 };
  fwrite(hdr, 1, 18, f);
  static unsigned char row[640 * 3];
  for (int y = 0; y < 400; y++)
  {
    for (int x = 0; x < 640; x++)
    {
      uint32_t c = argb[(y / 2) * 320 + x / 2];
      row[x * 3] = (unsigned char)c;
      row[x * 3 + 1] = (unsigned char)(c >> 8);
      row[x * 3 + 2] = (unsigned char)(c >> 16);
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

// OPEN4DBOXING_WAV=PATH: the sound to a WAV file (44100 Hz, mono, 16-bit), for scripted runs
static void put32(uint32_t v, FILE *f) { for (int k = 0; k < 4; k++) fputc((int)(v >> 8 * k) & 0xFF, f); }
static void wav_header(uint32_t n)
{
  fseek(wav, 0, SEEK_SET);
  fwrite("RIFF", 1, 4, wav); put32(36 + n * 2, wav); fwrite("WAVEfmt ", 1, 8, wav); put32(16, wav);
  fputc(1, wav); fputc(0, wav); fputc(1, wav); fputc(0, wav); put32(AUDIO_RATE, wav); put32(AUDIO_RATE * 2, wav);
  fputc(2, wav); fputc(0, wav); fputc(16, wav); fputc(0, wav); fwrite("data", 1, 4, wav); put32(n * 2, wav);
}

#ifdef HAVE_MT32EMU
// the MT-32 (Munt's libmt32emu, built in from extern/munt): its ROMs the user's (see mt32_open); the MT15 driver's
// MIDI at its time, rendered with the game's sound
#define MT32EMU_API_TYPE 1
#include <mt32emu.h>
static mt32emu_context mt32;
// its reports: no debugging messages; the messages the game shows on its display, once each
static mt32emu_report_handler_version MT32EMU_C_CALL mt32_version(mt32emu_report_handler_i i)
{
  (void)i;
  return MT32EMU_REPORT_HANDLER_VERSION_0;
}
static void MT32EMU_C_CALL mt32_debug(void *data, const char *fmt, va_list list) { (void)data, (void)fmt, (void)list; }
static void MT32EMU_C_CALL mt32_lcd(void *data, const char *message)
{
  static char last[64];
  (void)data;
  if (!strncmp(last, message, sizeof last - 1)) return;
  snprintf(last, sizeof last, "%s", message);
  fprintf(stderr, "open4dboxing: the MT-32's display: %s\n", message);
}
static const mt32emu_report_handler_i_v0 mt32Reports = { mt32_version, mt32_debug, NULL, NULL, mt32_lcd };
// the ROMs: every file of a directory tried for each machine in turn (the MT-32s of 1987-89 first, whose sound the
// game was made for; then the later MT-32s and the CM-32L); the first machine whose control and PCM ROMs are there
static bool mt32_try(const char *dir)
{
  static const char *machines[] = { "mt32_1_07", "mt32_1_06", "mt32_1_05", "mt32_1_04", "mt32_bluer", "mt32_2_07",
                                    "mt32_2_06", "mt32_2_04", "mt32_2_03", "cm32l_1_02", "cm32l_1_00", "cm32ln_1_00" };
  DIR *d = opendir(dir);
  if (!d) return false;
  char names[64][256];
  int n = 0;
  for (struct dirent *e; (e = readdir(d)) && n < 64;)
    if (e->d_name[0] != '.') snprintf(names[n++], sizeof names[0], "%s", e->d_name);
  closedir(d);
  mt32emu_report_handler_i reports = { &mt32Reports };
  for (unsigned m = 0; m < sizeof machines / sizeof *machines; m++)
  {
    mt32 = mt32emu_create_context(reports, NULL);
    bool control = false, pcm = false;
    char path[5000];
    for (int k = 0; k < n; k++)
    {
      int w = snprintf(path, sizeof path, "%s/%s", dir, names[k]);
      if (w < 0 || w >= (int)sizeof path) continue;
      mt32emu_return_code rc = mt32emu_add_machine_rom_file(mt32, machines[m], path);
      if (rc == MT32EMU_RC_ADDED_CONTROL_ROM) control = true;
      if (rc == MT32EMU_RC_ADDED_PCM_ROM) pcm = true;
    }
    mt32emu_set_stereo_output_samplerate(mt32, AUDIO_RATE);
    if (control && pcm && mt32emu_open_synth(mt32) == MT32EMU_RC_OK)
    {
      fprintf(stderr, "open4dboxing: the MT-32 (%s) from %s\n", machines[m], dir);
      return true;
    }
    mt32emu_free_context(mt32);
    mt32 = NULL;
  }
  return false;
}

// where the ROMs are looked for: OPEN4DBOXING_MT32ROMS, Open4DBoxing.ini's mt32_roms, the roms folder next to the
// program, the program's folder (as the game's disks)
static bool mt32_open(void)
{
  char dirs[4][1100];
  int n = 0;
  if (getenv("OPEN4DBOXING_MT32ROMS")) snprintf(dirs[n++], sizeof dirs[0], "%s", getenv("OPEN4DBOXING_MT32ROMS"));
  if (S.mt32_roms[0]) snprintf(dirs[n++], sizeof dirs[0], "%s", S.mt32_roms);
  for (int k = 0; k < 2; k++) program_dir(dirs[n++], sizeof dirs[0], k == 0 ? "roms" : "");
  for (int k = 0; k < n; k++)
    if (mt32_try(dirs[k])) return true;
  fprintf(stderr, "open4dboxing: no MT-32 ROMs (a control ROM and a PCM ROM, any names) in:\n");
  for (int k = 0; k < n; k++) fprintf(stderr, "  %s\n", dirs[k]);
  return false;
}
#endif

// the MT15 driver's MIDI (game.h's host.midi): to the MT-32, at the sample its PIT time falls on
static void midi(void *ctx, uint8_t b, uint64_t t)
{
  (void)ctx;
#ifdef HAVE_MT32EMU
  if (mt32) mt32emu_parse_stream_at(mt32, &b, 1, mt32emu_convert_output_to_synth_timestamp(mt32, (mt32emu_bit32u)(t * AUDIO_RATE / 1193182)));
#else
  (void)b, (void)t;
#endif
}

static void sound(void)
{
  static int16_t buf[AUDIO_RATE / 10];
  memset(buf, 0, sizeof buf);
  int n = pit_render(game_now(), AUDIO_RATE, buf, (int)(sizeof buf / sizeof *buf)), m;
  if ((m = opl_render(game_now(), AUDIO_RATE, buf, (int)(sizeof buf / sizeof *buf))) > n) n = m;
  if ((m = tandy_render(game_now(), AUDIO_RATE, buf, (int)(sizeof buf / sizeof *buf))) > n) n = m;
  if ((m = sb_render(game_now(), AUDIO_RATE, buf, (int)(sizeof buf / sizeof *buf))) > n) n = m;
#ifdef HAVE_MT32EMU
  if (mt32 && n > 0)
  {
    static int16_t st[2 * (AUDIO_RATE / 10)];
    mt32emu_render_bit16s(mt32, st, (mt32emu_bit32u)n);
    for (int k = 0; k < n; k++)
    {
      int v = buf[k] + (st[2 * k] + st[2 * k + 1]) / 2;
      buf[k] = (int16_t)(v > 32767 ? 32767 : v < -32768 ? -32768 : v);
    }
  }
#endif
  if (S.volume < 15)
    for (int k = 0; k < n; k++) buf[k] = (int16_t)(buf[k] * S.volume / 15);
  if (n > 0 && wav) { fwrite(buf, 2, (size_t)n, wav); wavFrames += (uint32_t)n; }
  if (n > 0 && audioDevice)
  {
    // (stay close to real time: at most about a tenth of a second queued)
    if (SDL_GetQueuedAudioSize(audioDevice) < AUDIO_RATE / 10 * sizeof *buf) SDL_QueueAudio(audioDevice, buf, (Uint32)(n * sizeof *buf));
  }
}

// OPEN4DBOXING_TAPS="FRAME:SDLSCANCODE,...": a key tapped at a frame as SDL's events (the menu's F4 among them)
static void script_taps(uint64_t n)
{
  for (const char *p = scriptTaps; p && *p;)
  {
    char *end;
    unsigned long long f = strtoull(p, &end, 10);
    if (end == p || *end != ':') break;
    int code = (int)strtol(end + 1, &end, 10);
    if (f == n)
    {
      SDL_Event e = { 0 };
      e.type = SDL_KEYDOWN;
      e.key.keysym.scancode = (SDL_Scancode)code;
      e.key.keysym.sym = SDL_GetKeyFromScancode((SDL_Scancode)code);
      e.key.state = SDL_PRESSED;
      SDL_PushEvent(&e);
      e.type = SDL_KEYUP;
      e.key.state = SDL_RELEASED;
      SDL_PushEvent(&e);
    }
    while (*end && *end != ',') end++;
    p = *end ? end + 1 : end;
  }
}

static bool frame(void *ctx, uint64_t n)
{
  (void)ctx;
  frameCount = n;
  camera_set(S.cosmetic_camera != 0);
  if (scriptKeys) script_keys(n);
  if (scriptTaps) script_taps(n);
  if (lastFrame >= 0 && (long)n >= lastFrame) return false;
  draw_screen();
  if (scriptShots && listed(scriptShots, n)) shot(n);
  sound();
  pump();
  joystick_read();
  if (!fast)
  {
    uint64_t due = startUs + menuUs + n * (uint64_t)FRAME_US, now = real_us();
    if (due > now + 1000) SDL_Delay((uint32_t)((due - now) / 1000));
    if (now > due + 200000) startUs = now - menuUs - n * (uint64_t)FRAME_US;  // (fell far behind: no catching up)
  }
  return !quit;
}

// the CHEATS page's switches and the game's (source/cheats.h)
static overlay_menu_cheats menuCheats;
static void cheats_from_menu(void)
{
  game_cheats.invulnerable = menuCheats.invulnerable;
  game_cheats.untouchable = menuCheats.untouchable;
  game_cheats.inexhaustible = menuCheats.inexhaustible;
  game_cheats.oneBlowKills = menuCheats.oneBlowKills;
}
// how the menu's settings take effect (overlay_menu_host.apply); the volume is read as the sound goes out
static void menu_apply(int what)
{
  if (what & OVERLAY_MENU_APPLY_CHEATS) cheats_from_menu();
  if (what & OVERLAY_MENU_APPLY_FULLSCREEN) SDL_SetWindowFullscreen(window, S.start_fullscreen ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0);
  if (what & OVERLAY_MENU_APPLY_VIDEO) setup_video();
}

// Open4DBoxing.ini: the first of the current folder's, the one next to the program and the game folder's; the menu's
// Open4DBoxing.cfg next to it, or in the game's folder without one. 1: read
static void warn_ini(const char *m) { fprintf(stderr, "open4dboxing: %s\n", m); }
static int settings_files(const char *gameDir, char *ini, size_t iniSize, char *cfg, size_t cfgSize)
{
  char cands[3][1100];
  int n = 0;
  snprintf(cands[n++], sizeof cands[0], "Open4DBoxing.ini");
  char *base = SDL_GetBasePath();
  if (base) snprintf(cands[n++], sizeof cands[0], "%sOpen4DBoxing.ini", base), SDL_free(base);
  snprintf(cands[n++], sizeof cands[0], "%s/Open4DBoxing.ini", gameDir);
  ini[0] = 0;
  for (int k = 0; k < n && !ini[0]; k++)
  {
    FILE *f = fopen(cands[k], "rb");
    size_t len = strlen(cands[k]);
    if (f) fclose(f);
    if (f && len < iniSize) memcpy(ini, cands[k], len + 1);
  }
  const char *slash = strrchr(ini, '/'), *bslash = strrchr(ini, '\\');
  if (bslash && (!slash || bslash > slash)) slash = bslash;
  if (!ini[0]) snprintf(cfg, cfgSize, "%s/Open4DBoxing.cfg", gameDir);
  else if (!slash) snprintf(cfg, cfgSize, "Open4DBoxing.cfg");
  else snprintf(cfg, cfgSize, "%.*sOpen4DBoxing.cfg", (int)(slash - ini + 1), ini);
  return ini[0] && settings_load(&S, ini, warn_ini);
}

// OPEN4DBOXING_CHEATS="NAME ...": cheats on from the start (scripted runs; the in-game menu's CHEATS page sets them
// otherwise): invulnerable, untouchable, inexhaustible, one_blow_kills
static void script_cheats(const char *list)
{
  for (const char *p = list; p && *p;)
  {
    size_t n = strcspn(p, " ,");
    if (n == 12 && !strncmp(p, "invulnerable", 12)) game_cheats.invulnerable = 1;
    else if (n == 11 && !strncmp(p, "untouchable", 11)) game_cheats.untouchable = 1;
    else if (n == 13 && !strncmp(p, "inexhaustible", 13)) game_cheats.inexhaustible = 1;
    else if (n == 14 && !strncmp(p, "one_blow_kills", 14)) game_cheats.oneBlowKills = 1;
    else fprintf(stderr, "open4dboxing: OPEN4DBOXING_CHEATS: no cheat \"%.*s\"\n", (int)n, p);
    p += n;
    while (*p == ' ' || *p == ',') p++;
  }
  menuCheats.invulnerable = game_cheats.invulnerable;
  menuCheats.untouchable = game_cheats.untouchable;
  menuCheats.inexhaustible = game_cheats.inexhaustible;
  menuCheats.oneBlowKills = game_cheats.oneBlowKills;
}

int main(int argc, char **argv)
{
  // the game: the first argument's folder (the two floppies' images, or their files); without one (started with a
  // double-click), the floppies' images in the roms folder next to the program, or next to it
  static char *args[64], here[1100], roms[1100];
  program_dir(roms, sizeof roms, "roms");
  program_dir(here, sizeof here, "");
  if (argc < 2)
  {
    const char *found = disks_present(roms) ? roms : disks_present(here) ? here : NULL;
    if (!found)
    {
      char msg[3000];
      snprintf(msg, sizeof msg,
               "The game's disks are not there: put disk1.img and disk2.img, the images of 4D Sports Boxing's two floppies (see "
               "README.md), in the roms folder next to the program:\n  %s\nor next to the program:\n  %s\n\n"
               "usage: open4dboxing [GAMEDIR [ARGS]]\n  GAMEDIR: a folder with disk1.img and disk2.img, or with the floppies' files\n"
               "  ARGS: the game's own, as BOX.BAT's \"n pc15.drv d\"; without them the settings' sound driver\n", roms, here);
      notify_player(msg);
      return 2;
    }
    args[0] = argv[0];
    args[1] = (char *)found;
    argc = 2;
    argv = args;
  }
  // the game's writes (its boxers, its Hall of Fame, a saved career, the system panel's defaults): with the disks'
  // images (never written), in the save folder next to the program
  static char saveDir[1100];
  if (disks_present(argv[1]))
  {
    program_dir(saveDir, sizeof saveDir, "save");
#ifdef _WIN32
    _mkdir(saveDir);
#else
    mkdir(saveDir, 0755);
#endif
  }
  fast = getenv("OPEN4DBOXING_FAST") != NULL;
  scriptShots = getenv("OPEN4DBOXING_SHOTS");
  scriptKeys = getenv("OPEN4DBOXING_KEYS");
  scriptTaps = getenv("OPEN4DBOXING_TAPS");
  if (getenv("OPEN4DBOXING_FRAMES")) lastFrame = atol(getenv("OPEN4DBOXING_FRAMES"));
  // the settings (Open4DBoxing.ini, then the menu's Open4DBoxing.cfg unless the ini is newer); a scripted run
  // (OPEN4DBOXING_FAST) reads neither: it goes the same way whatever the player's settings
  settings_defaults(&S);
  char iniPath[1100] = "", cfgPath[1100] = "";
  if (!fast)
  {
    if (settings_files(argv[1], iniPath, sizeof iniPath, cfgPath, sizeof cfgPath)) fprintf(stderr, "open4dboxing: settings from %s\n", iniPath);
    if (overlay_menu_load_cfg(&S, cfgPath, iniPath, warn_ini)) fprintf(stderr, "open4dboxing: the in-game menu's settings from %s\n", cfgPath);
  }
  script_cheats(getenv("OPEN4DBOXING_CHEATS"));
  static char cmdline[256];
  for (int k = 2; k < argc; k++)
  {
    if (k > 2) strncat(cmdline, " ", sizeof cmdline - strlen(cmdline) - 1);
    strncat(cmdline, argv[k], sizeof cmdline - strlen(cmdline) - 1);
  }
  if (argc == 2) snprintf(cmdline, sizeof cmdline, "n %s d", settings_sound_files[S.sound]);
  // the build: the settings' video card, or OPEN4DBOXING_PROGRAM (4DBEGA.EXE, ...)
  const char *program = getenv("OPEN4DBOXING_PROGRAM") ? getenv("OPEN4DBOXING_PROGRAM") : settings_video_files[S.video];
  if (strcasecmp(program, "4DBMCGA.EXE") != 0) frameUs = 16689;
  // the MT-32's driver needs the synthesizer and its ROMs; a driver the settings chose falls back to the Sound
  // Blaster's without them, one the command line named stays (the game plays without music, as it would)
  bool mt15 = strstr(cmdline, "mt15") || strstr(cmdline, "MT15");
  if (mt15)
  {
#ifdef HAVE_MT32EMU
    if (!mt32_open())
#else
    fprintf(stderr, "open4dboxing: built without the MT-32 (Munt's libmt32emu)\n");
#endif
    {
      if (argc == 2) snprintf(cmdline, sizeof cmdline, "n %s d", settings_sound_files[SOUND_SB]), fprintf(stderr, "open4dboxing: the Sound Blaster's sound instead\n");
      else fprintf(stderr, "open4dboxing: the MT-32's music goes nowhere\n");
    }
  }
  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_JOYSTICK | SDL_INIT_GAMECONTROLLER) < 0) { fprintf(stderr, "open4dboxing: SDL: %s\n", SDL_GetError()); return 1; }
  int w = S.window_width > 0 ? S.window_width : 960, h = S.window_height > 0 ? S.window_height : (S.use_correct_aspect_ratio ? 720 : 600);
  window = SDL_CreateWindow("Open4DBoxing", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w, h,
                            SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI | (S.start_fullscreen ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0));
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  if (!renderer) renderer = SDL_CreateRenderer(window, -1, 0);
  setup_video();
  if (S.start_fullscreen) SDL_ShowCursor(SDL_DISABLE);
  SDL_AudioSpec want = { .freq = AUDIO_RATE, .format = AUDIO_S16SYS, .channels = 1, .samples = 1024 }, have;
  audioDevice = SDL_OpenAudioDevice(NULL, 0, &want, &have, 0);
  if (audioDevice) SDL_PauseAudioDevice(audioDevice, 0);
  if (S.enable_joystick && SDL_NumJoysticks() > 0) joystick_open(0);
  overlay_menu_host menuHost = { &S, window, renderer, menu_apply, NULL, "", &menuCheats };
  snprintf(menuHost.cfg_path, sizeof menuHost.cfg_path, "%s", fast ? "" : cfgPath);
  overlay_menu_init(&menuHost);
  if (getenv("OPEN4DBOXING_WAV") && (wav = fopen(getenv("OPEN4DBOXING_WAV"), "wb"))) wav_header(0);
  time_t t0 = time(NULL);
  struct tm *gm = gmtime(&t0);
  struct tm g = gm ? *gm : (struct tm){ 0 };
  g.tm_isdst = -1;
  time_t asLocal = mktime(&g);  // (the UTC fields taken as local: the difference is the zone's offset)
  int64_t local = (int64_t)t0 + (asLocal != (time_t)-1 ? (int64_t)t0 - (int64_t)asLocal : 0);  // local time, as DOS's clock shows it
  startUs = real_us();
  GameHost host = { argv[1], program, cmdline, frame, midi, NULL, getenv("OPEN4DBOXING_CYCLES") ? (uint32_t)atoi(getenv("OPEN4DBOXING_CYCLES")) : 22000,
                    getenv("OPEN4DBOXING_EPOCH") ? strtoll(getenv("OPEN4DBOXING_EPOCH"), NULL, 10) : local, 0 };
  host.writeDir = saveDir[0] ? saveDir : NULL;
  int code = game_run(&host);
  if (code < 0 && game_error()[0])
  {
    char msg[1400];
    snprintf(msg, sizeof msg, "Open4DBoxing could not start the game:\n%s\n", game_error());
    notify_player(msg);
  }
  if (overlay_menu_is_open()) overlay_menu_close();
  if (wav) { wav_header(wavFrames); fclose(wav); }
  if (audioDevice) SDL_CloseAudioDevice(audioDevice);
  joystick_close();
#ifdef HAVE_MT32EMU
  if (mt32) mt32emu_free_context(mt32);
#endif
  SDL_Quit();
  return code < 0 ? 0 : code;
}
