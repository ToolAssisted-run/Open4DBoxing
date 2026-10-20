// boxrun GAMEDIR SCRIPT [TPB]: the game headless, driven by a script as the oracle's (the workspace's oracle-run):
//   shot FRAME PATH   a screenshot at that video frame, a 640x400 24-bit TGA as the oracle writes them
//   key FRAME NAME 1|0   a key pressed (1) or released (0) at that frame (names: a-z, 0-9, enter, esc, space,
//                        left, right, up, down, f1-f10)
//   mouse FRAME X Y      the mouse moved to X,Y (the screen's 320x200 pixels) at that frame
//   click FRAME left|right 1|0   a mouse button pressed (1) or released (0)
//   poke FRAME SEG:OFF HEXBYTES   bytes written into the emulated memory at that frame (a test's alignment with the
//                     oracle: the random generator's state DS:8472, for one)
//   end FRAME         the end
// CYCLES: the machine's speed as DOSBox's cycles (instructions a millisecond; default 22000, the oracle's 486)
// OPEN4DBOXING_BOOTFRAMES=N: the script's frames are the oracle's, whose game starts N frames after its boot (DOS loads
// it meanwhile): the events happen N frames earlier here and the clock starts N frames later
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "asm2c.h"
#include "game.h"
#include "opl.h"
#include "pit.h"
#include "sb.h"
#include "tandy.h"

typedef struct { int frame; char kind[8]; char arg[256]; int value; char bytes[256]; } Event;
static Event events[4096];
// OPEN4DBOXING_WAV=PATH: the sound (the speaker, the AdLib, the Tandy, the Sound Blaster) to a WAV file, 44100 Hz mono
static FILE *wav;
static uint32_t wavFrames;
static void put32(uint32_t v, FILE *f) { for (int k = 0; k < 4; k++) fputc((int)(v >> 8 * k) & 0xFF, f); }
static void wav_header(uint32_t n)
{
  fseek(wav, 0, SEEK_SET);
  fwrite("RIFF", 1, 4, wav); put32(36 + n * 2, wav); fwrite("WAVEfmt ", 1, 8, wav); put32(16, wav);
  fputc(1, wav); fputc(0, wav); fputc(1, wav); fputc(0, wav); put32(44100, wav); put32(44100 * 2, wav);
  fputc(2, wav); fputc(0, wav); fputc(16, wav); fputc(0, wav); fwrite("data", 1, 4, wav); put32(n * 2, wav);
}
static void wav_frame(void)
{
  static int16_t buf[4410];
  memset(buf, 0, sizeof buf);
  int n = pit_render(game_now(), 44100, buf, 4410), m;
  if ((m = opl_render(game_now(), 44100, buf, 4410)) > n) n = m;
  if ((m = tandy_render(game_now(), 44100, buf, 4410)) > n) n = m;
  if ((m = sb_render(game_now(), 44100, buf, 4410)) > n) n = m;
  if (n > 0) { fwrite(buf, 2, (size_t)n, wav); wavFrames += (uint32_t)n; }
}
static uint64_t randCalls;
static int nEvents, next;

static int scan_code(const char *name)
{
  static const char *row1 = "1234567890-=", *row2 = "qwertyuiop[]", *row3 = "asdfghjkl;'`", *row4 = "\\zxcvbnm,./";
  if (strlen(name) == 1)
  {
    const char *p;
    if ((p = strchr(row1, name[0]))) return 2 + (int)(p - row1);
    if ((p = strchr(row2, name[0]))) return 0x10 + (int)(p - row2);
    if ((p = strchr(row3, name[0]))) return 0x1E + (int)(p - row3);
    if ((p = strchr(row4, name[0]))) return 0x2B + (int)(p - row4);
  }
  if (!strcmp(name, "enter")) return 0x1C;
  if (!strcmp(name, "esc")) return 0x01;
  if (!strcmp(name, "space")) return 0x39;
  if (!strcmp(name, "tab")) return 0x0F;
  if (!strcmp(name, "backspace")) return 0x0E;
  if (!strcmp(name, "left")) return 0x4B;
  if (!strcmp(name, "right")) return 0x4D;
  if (!strcmp(name, "up")) return 0x48;
  if (!strcmp(name, "down")) return 0x50;
  if (!strcmp(name, "lshift")) return 0x2A;
  if (!strcmp(name, "lctrl")) return 0x1D;
  if (!strcmp(name, "lalt")) return 0x38;
  if (name[0] == 'f' && atoi(name + 1) >= 1 && atoi(name + 1) <= 10) return 0x3B + atoi(name + 1) - 1;
  if (name[0] == 'k' && name[1] == 'p') return 0x47 + (name[2] - '1');
  fprintf(stderr, "boxrun: unknown key %s\n", name);
  return 0;
}

static void shot(const char *path)
{
  FILE *f = fopen(path, "wb");
  if (!f) { fprintf(stderr, "boxrun: cannot write %s\n", path); return; }
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

static bool frame(void *ctx, uint64_t n)
{
  (void)ctx;
  if (wav) wav_frame();
  if (getenv("OPEN4DBOXING_STATS") && n % 25 == 0) fprintf(stderr, "frame %llu: %llu instructions, %llu rand() calls\n", (unsigned long long)n, (unsigned long long)asm_icount, (unsigned long long)randCalls);
  while (next < nEvents && events[next].frame <= (int)n)
  {
    Event *e = &events[next++];
    if (!strcmp(e->kind, "shot")) shot(e->arg);
    else if (!strcmp(e->kind, "key")) game_key((uint8_t)scan_code(e->arg), false, e->value != 0);
    else if (!strcmp(e->kind, "mouse"))
    {
      int x = atoi(e->arg) * 2, y = e->value;
      asm_mouse.dx = (i16)(asm_mouse.dx + (x - asm_mouse.x));
      asm_mouse.dy = (i16)(asm_mouse.dy + (y - asm_mouse.y));
      asm_mouse.x = (u16)x;
      asm_mouse.y = (u16)y;
      asm_mouse_clamp();
    }
    else if (!strcmp(e->kind, "click"))
    {
      u16 bit = !strcmp(e->arg, "right") ? 2 : 1;
      if (e->value) asm_mouse.buttons |= bit;
      else asm_mouse.buttons &= (u16)~bit;
    }
    else if (!strcmp(e->kind, "poke"))
    {
      unsigned seg = (unsigned)strtoul(e->arg, NULL, 16), off = (unsigned)strtoul(strchr(e->arg, ':') ? strchr(e->arg, ':') + 1 : "0", NULL, 16);
      const char *hex = e->bytes;
      for (int k = 0; hex[2 * k] && hex[2 * k + 1]; k++)
      {
        char b[3] = { hex[2 * k], hex[2 * k + 1], 0 };
        *far_ptr((u16)seg, (u16)(off + k)) = (u8)strtoul(b, NULL, 16);
      }
    }
    else if (!strcmp(e->kind, "end")) return false;
  }
  return true;
}

static uint32_t traceRing[64];
static int traceN;
static void dump_ds(const char *what, uint16_t off, int n)
{
  fprintf(stderr, "%s DS:%04X:", what, off);
  for (int k = 0; k < n; k++) fprintf(stderr, " %02X", *far_ptr(g_dsSeg, (uint16_t)(off + k)));
  fprintf(stderr, "\n");
}
static void trace(uint32_t a) { traceRing[traceN++ % 64] = a; if (a == 0x3337052E) randCalls++;
  if (a == 0x2AFC2302 && getenv("OPEN4DBOXING_TRACE")) { uint16_t np = *(uint16_t *)far_ptr(R.ss, R.sp + 4), sz = *(uint16_t *)far_ptr(R.ss, R.sp + 6); fprintf(stderr, "reservememory(\"%.12s\" at DS:%04X, %04X paragraphs) ds=%04X\n", (char *)far_ptr(R.ds, np), np, sz, R.ds); } if (getenv("OPEN4DBOXING_PEEK") && (a == 0x10000000 || a == 0x2AFC0A8C || a == 0x33371730 || a == 0x333707E8)) dump_ds("peek", (uint16_t)strtol(getenv("OPEN4DBOXING_PEEK"), NULL, 16), 24); if (getenv("OPEN4DBOXING_TRACE") && atoi(getenv("OPEN4DBOXING_TRACE")) > 1) fprintf(stderr, "%04X:%04X ds=%04X ss=%04X sp=%04X ax=%04X bx=%04X cx=%04X dx=%04X si=%04X di=%04X es=%04X\n", a >> 16, a & 0xFFFF, R.ds, R.ss, R.sp, R.ax, R.bx, R.cx, R.dx, R.si, R.di, R.es); }
static void dump_memory(void)
{
  const char *path = getenv("OPEN4DBOXING_DUMP");
  if (!path) return;
  FILE *f = fopen(path, "wb");
  if (f) { fwrite(g_mem, 1, 0xA0000, f); fclose(f); }
}
static void trace_dump(void)
{
  if (!getenv("OPEN4DBOXING_TRACE")) return;
  fprintf(stderr, "the last functions entered:");
  for (int k = traceN > 64 ? traceN - 64 : 0; k < traceN; k++) fprintf(stderr, " %04X:%04X", traceRing[k % 64] >> 16, traceRing[k % 64] & 0xFFFF);
  fprintf(stderr, "\n");
}

static void watch_hit(uint32_t a, uint16_t v)
{
  fprintf(stderr, "watch: %05X written with %04X (cs=%04X ds=%04X es=%04X ss=%04X sp=%04X si=%04X di=%04X bp=%04X)\n", a, v, R.cs, R.ds, R.es, R.ss, R.sp, R.si, R.di, R.bp);
  trace_dump();
}

int main(int argc, char **argv)
{
  if (getenv("OPEN4DBOXING_WATCH")) { asm_watchAddr = (uint32_t)strtol(getenv("OPEN4DBOXING_WATCH"), NULL, 16); asm_watch_hook = watch_hit; }
  if (getenv("OPEN4DBOXING_TRACE")) asm_fn_hook = trace;
  atexit(trace_dump);
  asm_fatal_hook = trace_dump;
  atexit(dump_memory);
  if (argc < 3) { fprintf(stderr, "usage: boxrun GAMEDIR SCRIPT [CYCLES]\n"); return 2; }
  FILE *f = fopen(argv[2], "r");
  if (!f) { fprintf(stderr, "boxrun: cannot read %s\n", argv[2]); return 2; }
  char line[512];
  while (fgets(line, sizeof line, f) && nEvents < 4096)
  {
    Event *e = &events[nEvents];
    e->value = 0;
    int n = sscanf(line, "%7s %d %255s %d", e->kind, &e->frame, e->arg, &e->value);
    if (n >= 3 && !strcmp(e->kind, "poke")) sscanf(line, "%*s %*d %*s %255s", e->bytes);
    if (n >= 2) nEvents++;
  }
  fclose(f);
  // the clock: the oracle's (DOSBox-X in the sandbox starts at 2017-05-27 12:44:28 UTC, 14:44:28 local), unless
  // OPEN4DBOXING_EPOCH gives other seconds since 1970 (local)
  int boot = getenv("OPEN4DBOXING_BOOTFRAMES") ? atoi(getenv("OPEN4DBOXING_BOOTFRAMES")) : 0;
  for (int k = 0; k < nEvents; k++) events[k].frame -= boot;
  GameHost host = { argv[1], getenv("OPEN4DBOXING_ARGS") ? getenv("OPEN4DBOXING_ARGS") : "n pc15.drv d", frame, NULL, NULL, argc > 3 ? (uint32_t)atoi(argv[3]) : 22000,
                    (getenv("OPEN4DBOXING_EPOCH") ? strtoll(getenv("OPEN4DBOXING_EPOCH"), NULL, 10) : 1495889068 + 7200) };
  host.startTicks = (int64_t)boot * 17025;
  if (getenv("OPEN4DBOXING_WAV") && (wav = fopen(getenv("OPEN4DBOXING_WAV"), "wb"))) wav_header(0);
  int code = game_run(&host);
  if (wav) { wav_header(wavFrames); fclose(wav); }
  printf("boxrun: done, exit %d\n", code);
  return 0;
}
