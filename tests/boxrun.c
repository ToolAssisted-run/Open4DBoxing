// boxrun GAMEDIR SCRIPT [TPB]: the game headless, driven by a script as the oracle's (the workspace's oracle-run):
//   shot FRAME PATH   a screenshot at that video frame, a 640x400 24-bit TGA as the oracle writes them
//   key FRAME NAME 1|0   a key pressed (1) or released (0) at that frame (names: a-z, 0-9, enter, esc, space,
//                        left, right, up, down, f1-f10, tab, backspace, lshift, rshift, lctrl, lalt, kp0-kp9,
//                        kpenter)
//   mouse FRAME X Y      the mouse moved to X,Y (the screen's 320x200 pixels) at that frame
//   click FRAME left|right 1|0   a mouse button pressed (1) or released (0)
//   joy FRAME X Y BUTTONS   the first joystick (plugged in from then on) at X,Y (0-255, 128 the centre) with the
//                     buttons of the mask held (bit 0 the first)
//   ram FRAME PATH       the emulated memory (640 KB) written to PATH at that frame
//   vram FRAME PATH      the video card's memory, DAC and attribute palette written to PATH as the oracle writes them
//                        (DOSBox-X's layout: u32 size, a VGA's planes interleaved, linear[4 * address + plane]; the
//                        CGA's 16 KB as they are)
//   poke FRAME SEG:OFF HEXBYTES   bytes written into the emulated memory at that frame (a test's alignment with the
//                     oracle: the random generator's state DS:8472, for one)
//   end FRAME         the end
// CYCLES: the machine's speed as DOSBox's cycles (instructions a millisecond; default 22000, the oracle's 486)
// OPEN4DBOXING_PROGRAM=4DBEGA.EXE: which build runs (4DBMCGA.EXE, 4DBEGA.EXE, 4DBCGA.EXE, 4DBTDY.EXE)
// OPEN4DBOXING_BOOTFRAMES=N: the script's frames are the oracle's, whose game starts N frames after its boot (DOS loads
// it meanwhile): the events happen N frames earlier here and the clock starts N frames later; N may have a fraction
// (74.3): the program then starts that far into a frame (the machine idle before)
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "asm2c.h"
#include "replay.h"
#include "cheats.h"
#include "drivers.h"
#include "game.h"
#include "opl.h"
#include "pit.h"
#include "sb.h"
#include "tandy.h"

typedef struct { int frame; char kind[8]; char arg[256]; int value; char bytes[256]; int buttons; int index; } Event;
static Event *events;  // (the script's events, as many as it has)
static int eventsCap;
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
  static uint64_t totals[4];
  int n = pit_render(game_now(), 44100, buf, 4410), m;
  totals[0] += (uint64_t)n;
  if ((m = opl_render(game_now(), 44100, buf, 4410)) > n) n = m;
  totals[1] += (uint64_t)m;
  if ((m = tandy_render(game_now(), 44100, buf, 4410)) > n) n = m;
  totals[2] += (uint64_t)m;
  if ((m = sb_render(game_now(), 44100, buf, 4410)) > n) n = m;
  totals[3] += (uint64_t)m;
  if (getenv("OPEN4DBOXING_STATS")) fprintf(stderr, "audio: pit %llu opl %llu tandy %llu sb %llu\n", (unsigned long long)totals[0], (unsigned long long)totals[1], (unsigned long long)totals[2], (unsigned long long)totals[3]);
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
  if (!strcmp(name, "rshift")) return 0x36;
  if (!strcmp(name, "kpenter")) return 0x1C;
  if (name[0] == 'k' && name[1] == 'p' && name[2] >= '0' && name[2] <= '9' && !name[3])
  {
    static const uint8_t kp[10] = {0x52, 0x4F, 0x50, 0x51, 0x4B, 0x4C, 0x4D, 0x47, 0x48, 0x49};
    return kp[name[2] - '0'];
  }
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

static int event_order(const void *a, const void *b)
{
  const Event *x = a, *y = b;
  if (x->frame != y->frame) return x->frame < y->frame ? -1 : 1;
  return x->index < y->index ? -1 : x->index > y->index;
}

// a replay (OPEN4DBOXING_REPLAY=LOG, the replay variant boxreplay): the oracle's log drives the program; the script's
// inputs are in it already, only its screenshots, memory dumps and end are taken
static bool replaying;
static bool frame(void *ctx, uint64_t n)
{
  (void)ctx;
  if (wav) wav_frame();
  if (getenv("OPEN4DBOXING_STATS") && n % 1000 == 0) fprintf(stderr, "frame %llu: clock frame %llu (%llu ticks), %llu instructions, %llu rand() calls\n", (unsigned long long)n, (unsigned long long)(game_now() / 17025), (unsigned long long)game_now(), (unsigned long long)asm_icount, (unsigned long long)randCalls);
  while (next < nEvents && events[next].frame <= (int)n)
  {
    Event *e = &events[next++];
    if (replaying && strcmp(e->kind, "shot") && strcmp(e->kind, "ram") && strcmp(e->kind, "vram") && strcmp(e->kind, "poke") && strcmp(e->kind, "end")) continue;  // (a replay's input is the log's; a poke both machines take)
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
    else if (!strcmp(e->kind, "joy"))
    {
      asm_joystick.present = 1;
      asm_joystick.x[0] = (u8)atoi(e->arg);
      asm_joystick.y[0] = (u8)e->value;
      asm_joystick.buttons = (u8)(e->buttons & 3);
    }
    else if (!strcmp(e->kind, "click"))
    {
      u16 bit = !strcmp(e->arg, "right") ? 2 : 1;
      if (e->value) asm_mouse.buttons |= bit;
      else asm_mouse.buttons &= (u16)~bit;
    }
    else if (!strcmp(e->kind, "vram"))
    {
      FILE *f = fopen(e->arg, "wb");
      if (f)
      {
        static u8 linear[0x40000];
        u32 n = sizeof linear;
        memset(linear, 0, sizeof linear);
        if (vga.planar)
          for (u32 a = 0; a < 0x10000; a++)
            for (int p = 0; p < 4; p++) linear[4 * a + (u32)p] = vga.plane[p][a];
        else if (asm_video_mode() == 0x13)  // (chain-4: the address's low two bits pick the plane)
          for (u32 x = 0; x < 0x10000; x++) linear[((x & ~3u) << 2) + (x & 3)] = g_mem[0xA0000 + x];
        else if (asm_machine == 3)  // (the Tandy's: the machine's RAM, compared with the memory)
          n = 0;
        else  // (the CGA's memory: 16 KB at B800)
        {
          n = 0x4000;
          memcpy(linear, g_mem + 0xB8000, n);
        }
        fwrite(&n, 4, 1, f);
        fwrite(linear, 1, n, f);
        fwrite(asm_dac, 1, sizeof asm_dac, f);
        fwrite(asm_machine == 3 ? tandyVideo.pal : vga.attr, 1, 16, f);  // (the Tandy's palette registers)
        fclose(f);
      }
    }
    else if (!strcmp(e->kind, "ram"))
    {
      FILE *f = fopen(e->arg, "wb");
      if (f) { fwrite(g_mem, 1, 0xA0000, f); fclose(f); }
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

#ifdef ASM_REPLAY
static int lastFrame = -1;  // the oracle's last frame end the replay reached
static bool replay_frame(int n) { lastFrame = n; return frame(NULL, (uint64_t)n); }
#endif

static uint32_t traceRing[64];
static int traceN;
static void dump_ds(const char *what, uint16_t off, int n)
{
  fprintf(stderr, "%s DS:%04X:", what, off);
  for (int k = 0; k < n; k++) fprintf(stderr, " %02X", *far_ptr(g_dsSeg, (uint16_t)(off + k)));
  fprintf(stderr, "\n");
}
// OPEN4DBOXING_CALLWATCH=HEX (a function by its address in the disassembly, e.g. 25BB0196): each entry of that function logged with the frame and
// the first two words above the return address (its first two arguments, by the C convention) and the return address
// (a far call's; the segment is the loaded one)
static uint32_t callWatch;
// OPEN4DBOXING_PROFILE=F1,F2: the functions entered between those frames counted, the 30 most frequent listed at the end
static long profFrom = -1, profTo = -1;
static struct { uint32_t a; long n; } prof[4096];
static int profN;
static void profile(uint32_t a)
{
  long f = (long)(game_now() / 17025);
  if (f < profFrom || f >= profTo) return;
  for (int k = 0; k < profN; k++) if (prof[k].a == a) { prof[k].n++; return; }
  if (profN < 4096) { prof[profN].a = a; prof[profN++].n = 1; }
}
static void profile_dump(void)
{
  if (profFrom < 0) return;
  for (int k = 0; k < profN; k++) for (int j = k + 1; j < profN; j++) if (prof[j].n > prof[k].n) { typeof(prof[0]) t = prof[k]; prof[k] = prof[j]; prof[j] = t; }
  fprintf(stderr, "profile of frames %ld-%ld (%d functions):\n", profFrom, profTo, profN);
  for (int k = 0; k < profN && k < 30; k++) fprintf(stderr, "  %08X %ld\n", prof[k].a, prof[k].n);
}
static void trace(uint32_t a)
{
  cheats_fn(a);
  if (profFrom >= 0) profile(a);
  if (a == callWatch) fprintf(stderr, "call: frame %llu: %08X(%04X, %04X) from %04X:%04X\n", (unsigned long long)(game_now() / 17025), a, M16(SS, R.sp + 4), M16(SS, R.sp + 6), M16(SS, R.sp + 2), M16(SS, R.sp));
  traceRing[traceN++ % 64] = a;
  if (a == 0x3337052E) randCalls++;
  if (a == 0x2AFC2302 && getenv("OPEN4DBOXING_TRACE")) { uint16_t np = *(uint16_t *)far_ptr(R.ss, R.sp + 4), sz = *(uint16_t *)far_ptr(R.ss, R.sp + 6); fprintf(stderr, "reservememory(\"%.12s\" at DS:%04X, %04X paragraphs) ds=%04X\n", (char *)far_ptr(R.ds, np), np, sz, R.ds); } if (getenv("OPEN4DBOXING_PEEK") && (a == 0x10000000 || a == 0x2AFC0A8C || a == 0x33371730 || a == 0x333707E8)) dump_ds("peek", (uint16_t)strtol(getenv("OPEN4DBOXING_PEEK"), NULL, 16), 24); if (getenv("OPEN4DBOXING_TRACE") && atoi(getenv("OPEN4DBOXING_TRACE")) > 1) fprintf(stderr, "%04X:%04X ds=%04X ss=%04X sp=%04X ax=%04X bx=%04X cx=%04X dx=%04X si=%04X di=%04X es=%04X\n", a >> 16, a & 0xFFFF, R.ds, R.ss, R.sp, R.ax, R.bx, R.cx, R.dx, R.si, R.di, R.es); }
#ifdef ASM_REPLAY
// OPEN4DBOXING_COVERAGE=PATH (a replay): the map of the instructions that ran (CS * 16 + IP, a byte each) to PATH,
// and to PATH.drv the segments the sound drivers were loaded at (their code's addresses in the map)
static void dump_coverage(void)
{
  const char *path = getenv("OPEN4DBOXING_COVERAGE");
  if (!path) return;
  FILE *f = fopen(path, "wb");
  if (f) { fwrite(asm_cov, 1, sizeof asm_cov, f); fclose(f); }
  char drv[1100];
  snprintf(drv, sizeof drv, "%s.drv", path);
  if ((f = fopen(drv, "w")))
  {
    for (int k = 0; k < 5; k++)
      if (*game_drivers[k].seg) fprintf(f, "%s %04X\n", game_drivers[k].file, *game_drivers[k].seg);
    fclose(f);
  }
}
#endif
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
  fprintf(stderr, "watch: frame %llu: icount %llu instr %llu: %05X written with %04X (cs=%04X ds=%04X es=%04X ss=%04X sp=%04X si=%04X di=%04X bp=%04X)\n", (unsigned long long)(game_now() / 17025), (unsigned long long)asm_icount, (unsigned long long)(asm_icount - asm_waits), a, v, R.cs, R.ds, R.es, R.ss, R.sp, R.si, R.di, R.bp);
  trace_dump();
}

int main(int argc, char **argv)
{
  if (getenv("OPEN4DBOXING_WATCH")) { asm_watchAddr = (uint32_t)strtol(getenv("OPEN4DBOXING_WATCH"), NULL, 16); asm_watch_hook = watch_hit; }
  if (getenv("OPEN4DBOXING_CALLWATCH")) callWatch = (uint32_t)strtoul(getenv("OPEN4DBOXING_CALLWATCH"), NULL, 16);
  if (getenv("OPEN4DBOXING_PROFILE")) { sscanf(getenv("OPEN4DBOXING_PROFILE"), "%ld,%ld", &profFrom, &profTo); atexit(profile_dump); }
  if (getenv("OPEN4DBOXING_TRACE") || callWatch || profFrom >= 0) asm_fn_hook = trace;
  atexit(trace_dump);
  asm_fatal_hook = trace_dump;
  atexit(dump_memory);
#ifdef ASM_REPLAY
  atexit(dump_coverage);
#endif
  if (argc < 3) { fprintf(stderr, "usage: boxrun GAMEDIR SCRIPT [CYCLES]\n"); return 2; }
  FILE *f = fopen(argv[2], "r");
  if (!f) { fprintf(stderr, "boxrun: cannot read %s\n", argv[2]); return 2; }
  char line[512];
  while (fgets(line, sizeof line, f))
  {
    if (nEvents == eventsCap)
    {
      eventsCap = eventsCap ? 2 * eventsCap : 4096;
      events = realloc(events, sizeof *events * (size_t)eventsCap);
      if (!events) { fprintf(stderr, "boxrun: out of memory\n"); return 2; }
    }
    if (!strncmp(line, "ramat ", 6))  // ramat POS PATH: the memory at the program's instruction count POS (a replay's)
    {
#ifdef ASM_REPLAY
      unsigned long long pos;
      char path[256];
      if (sscanf(line, "ramat %llu %255s", &pos, path) == 2) replay_ram_at((u64)pos, path);
#endif
      continue;
    }
    Event *e = &events[nEvents];
    e->value = 0;
    int n = sscanf(line, "%7s %d %255s %d", e->kind, &e->frame, e->arg, &e->value);
    if (n >= 3 && !strcmp(e->kind, "poke")) sscanf(line, "%*s %*d %*s %255s", e->bytes);
    e->buttons = 0;
    if (n >= 4 && !strcmp(e->kind, "joy")) sscanf(line, "%*s %*d %*s %*d %d", &e->buttons);
    if (n >= 2) nEvents++;
  }
  fclose(f);
  for (int k = 0; k < nEvents; k++) events[k].index = k;
  qsort(events, (size_t)nEvents, sizeof events[0], event_order);  // by frame, a frame's events in the script's order
  // the clock: the oracle's (DOSBox-X in the sandbox starts at 2017-05-27 12:44:28 UTC, 14:44:28 local), unless
  // OPEN4DBOXING_EPOCH gives other seconds since 1970 (local)
  double bootFrames = getenv("OPEN4DBOXING_BOOTFRAMES") ? atof(getenv("OPEN4DBOXING_BOOTFRAMES")) : 0;
  int boot = (int)bootFrames;
  // (a frame as game.c times it: the VGA's for the MCGA build, the CGA-type cards' 59.92 Hz for the others)
  const char *programName = getenv("OPEN4DBOXING_PROGRAM");
  bool cgaTiming = programName && strcasecmp(programName, "4DBMCGA.EXE") != 0;
  const double frameTicks = cgaTiming ? 238944.0 * PIT_HZ / 14318180.0 : 359200.0 * PIT_HZ / 25175000.0;
  // (a replay's frames are the oracle's own, from its log: its events stay where they are)
  bool replayMode = false;
#ifdef ASM_REPLAY
  replayMode = getenv("OPEN4DBOXING_REPLAY") != NULL;
#endif
  if (!replayMode)
    for (int k = 0; k < nEvents; k++) events[k].frame -= boot;
  GameHost host = { argv[1], getenv("OPEN4DBOXING_PROGRAM"), getenv("OPEN4DBOXING_ARGS") ? getenv("OPEN4DBOXING_ARGS") : "n pc15.drv d", frame, NULL, NULL, argc > 3 ? (uint32_t)atoi(argv[3]) : 22000,
                    (getenv("OPEN4DBOXING_EPOCH") ? strtoll(getenv("OPEN4DBOXING_EPOCH"), NULL, 10) : 1495889068 + 7200) };
  // the game's writes (its saved defaults, CONFIG1.DAT) go to a scratch folder: the game's own stays as it is
  char writeDir[] = "/tmp/open4dboxing-XXXXXX";
  if (mkdtemp(writeDir)) host.writeDir = writeDir;
  host.startTicks = (int64_t)(boot * frameTicks);
  host.idleTicks = (uint64_t)((bootFrames - boot) * frameTicks);  // (the fraction: the program starts mid-frame)
  if (getenv("OPEN4DBOXING_WAV") && (wav = fopen(getenv("OPEN4DBOXING_WAV"), "wb"))) wav_header(0);
  // OPEN4DBOXING_CHEATS="invulnerable untouchable inexhaustible one_blow_kills": the cheats on from the start
  for (const char *p = getenv("OPEN4DBOXING_CHEATS"); p && *p;)
  {
    size_t n = strcspn(p, " ,");
    if (n == 12 && !strncmp(p, "invulnerable", 12)) game_cheats.invulnerable = 1;
    else if (n == 11 && !strncmp(p, "untouchable", 11)) game_cheats.untouchable = 1;
    else if (n == 13 && !strncmp(p, "inexhaustible", 13)) game_cheats.inexhaustible = 1;
    else if (n == 14 && !strncmp(p, "one_blow_kills", 14)) game_cheats.oneBlowKills = 1;
    p += n;
    while (*p == ' ' || *p == ',') p++;
  }
#ifdef ASM_REPLAY
  if (getenv("OPEN4DBOXING_REPLAY"))
  {
    replaying = true;
    host.idleTicks = 0;  // (the oracle's frames come from its log; the clocks start where its program started)
    if (!replay_open(getenv("OPEN4DBOXING_REPLAY"), replay_frame)) { fprintf(stderr, "boxrun: cannot read %s\n", getenv("OPEN4DBOXING_REPLAY")); return 2; }
  }
#endif
  int code = game_run(&host);
#ifdef ASM_REPLAY
  if (replaying)
  {
    bool same = replay_finish();
    printf("boxrun: done, exit %d\n", code);
    printf("boxrun: the last frame %d\n", lastFrame);
    return same ? 0 : 1;
  }
#endif
  if (wav) { wav_header(wavFrames); fclose(wav); }
  if (host.writeDir)
  {
    DIR *d = opendir(host.writeDir);
    if (d) { for (struct dirent *e; (e = readdir(d));) if (e->d_name[0] != '.') { char p[1200]; snprintf(p, sizeof p, "%s/%s", host.writeDir, e->d_name); remove(p); } closedir(d); }
    rmdir(host.writeDir);
  }
  printf("boxrun: done, exit %d\n", code);
  return 0;
}
