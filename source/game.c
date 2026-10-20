// The game as DOS runs it (game.h): the environment, the program segment prefix and the executable at the
// segments DOSBox-X gave them (so that every pointer is the original's), the BIOS's data and vectors, then the C
// runtime's start-up, which parses the command line and calls main. Time passes at the program's backward jumps
// (asm_back_slow): the timer chip's interrupts go to the program's handler, the frames to the host, the host's keys
// to the program's keyboard handler.
#include "game.h"

#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "asm2c.h"
#include "box_core.h"
#include "dos.h"
#include "dosmem.h"
#include "drivers.h"
#include "exe.h"
#include "pit.h"

#define BIOS_TIMER_OFF (ASM_BIOS_VECTOR_OFF + 8)  // the BIOS's INT 8 handler: the tick count

static const GameHost *host;
static jmp_buf exitJump;
static int exitCode;
static uint64_t now, lastIrq, frames, nextFrame;
static uint8_t keyQueue[64];
static int keyHead, keyTail;
static uint8_t port60;
static uint8_t picMask = 0xB8;
static uint8_t retrace;

#define FRAME_TICKS 17025  // the PIT ticks of a VGA frame (1193182 / 70.086)

const uint8_t *game_screen(void) { return g_mem + 0xA0000; }
const uint8_t (*game_palette(void))[3] { return asm_dac; }

static void key_byte(uint8_t b)
{
  int next = (keyTail + 1) % 64;
  if (next == keyHead) return;
  keyQueue[keyTail] = b;
  keyTail = next;
}

void game_key(uint8_t scan, bool extended, bool pressed)
{
  if (extended) key_byte(0xE0);
  key_byte((uint8_t)(scan | (pressed ? 0 : 0x80)));
}

uint64_t game_now(void) { return now; }

static void game_exit(int code)
{
  exitCode = code;
  longjmp(exitJump, 1);
}

static uint32_t dos_answer(void *ctx, int ah)
{
  (void)ctx;
  if (ah == 0x2A) return (uint32_t)(1991 << 16) | (7 << 8) | 30;  // the date: 1991-07-30 (the files')
  if (ah == 0x2C) return 0;                                       // the time: midnight
  return 0;
}

static DosHost dosHost = { NULL, dos_answer, game_exit, NULL };

static u16 port_in(u16 port)
{
  u8 v;
  if (port == 0x60) return port60;
  if (port == 0x61) return 0;
  if (port == 0x21) return picMask;
  if (port == 0x3DA) return retrace ^= 0x09;
  if (pit_in(port, now, &v)) return v;
  return 0xFF;
}

static bool port_out(u16 port, u8 value)
{
  if (port == 0x20) return true;  // the end of an interrupt
  if (port == 0x21) { picMask = value; pit_out(port, value, now); return true; }
  if (pit_out(port, value, now)) return true;
  return false;
}

// the sound driver: where the game loaded it (its file read into a block of its own)
static void read_hook(const char *name, u16 seg, u16 off, u16 len)
{
  (void)len;
  size_t n = strlen(name);
  if (off == 0 && n > 4 && !strcasecmp(name + n - 4, ".DRV"))
  {
    if (!strcasecmp(name, "PC15.DRV")) pc15_seg = seg;
    else fprintf(stderr, "game: the sound driver %s is not available yet\n", name);
  }
}

// the BIOS's code the program's handlers chain to: the timer's tick count; the sound driver's entries
static void outside(u16 seg, u16 off)
{
  if (seg == pc15_seg && pc15_seg && pc15_run(off)) return;
  if (seg != 0xF000) fprintf(stderr, "game: outside call %04X:%04X (driver at %04X)\n", seg, off, pc15_seg);
  if (seg != 0xF000) asm_unknown_call(seg, off);
  if (off >= ASM_BIOS_VECTOR_OFF && off < ASM_BIOS_VECTOR_OFF + 256 && off != BIOS_TIMER_OFF)
  {
    asm_bios_service((u8)(off - ASM_BIOS_VECTOR_OFF));
    R.sp += 6;
    return;
  }
  if (off == BIOS_TIMER_OFF)
  {
    u32 ticks = (u32)mem_r16(0x46C) | ((u32)mem_r16(0x46E) << 16);
    ticks++;
    mem_w16(0x46C, (u16)ticks);
    mem_w16(0x46E, (u16)(ticks >> 16));
  }
  R.sp += 6;
}

// time passes: the timer's interrupts, the keys, the frames
void asm_back_slow(void)
{
  asm_backBudget = 8;
  now += (uint64_t)host->ticksPerBack * 8;
  for (;;)
  {
    uint64_t t = pit_next_irq(lastIrq);
    if (t > now) break;
    lastIrq = t;
    if (!(picMask & 1)) asm_interrupt(8);
  }
  if (keyHead != keyTail && !(picMask & 2))
  {
    port60 = keyQueue[keyHead];
    keyHead = (keyHead + 1) % 64;
    asm_interrupt(9);
  }
  while (now >= nextFrame)
  {
    nextFrame += FRAME_TICKS;
    if (!host->frame(host->ctx, frames++)) game_exit(-1);
  }
}

static void w8(u32 a, u8 v) { g_mem[a] = v; }

int game_run(const GameHost *h)
{
  host = h;
  memset(g_mem, 0, sizeof g_mem);
  now = lastIrq = frames = 0;
  nextFrame = FRAME_TICKS;
  keyHead = keyTail = 0;
  pit_reset();
  // the BIOS: every vector to the BIOS's own code (F000:xxxx, which does nothing here but return), the timer's
  // (F000:FEA5), the data area (the equipment: a colour display, no floppies; the video mode 3; 640 KB)
  for (int n = 0; n < 256; n++) { mem_w16((u32)n * 4, (u16)(ASM_BIOS_VECTOR_OFF + n)); mem_w16((u32)n * 4 + 2, 0xF000); }
  mem_w16(0x410, 0x0021);
  mem_w16(0x413, 640);
  w8(0x449, 3);
  mem_w16(0x44A, 80);
  // the environment and the program segment prefix, as DOS makes them
  u32 env = (u32)GAME_ENV_SEG << 4;
  const char *envs = "COMSPEC=Z:\\COMMAND.COM\0PATH=Z:\\\0";
  memcpy(g_mem + env, envs, 33);
  g_mem[env + 33] = 0;
  mem_w16(env + 34, 1);
  strcpy((char *)g_mem + env + 36, "C:\\BOX\\4DBMCGA.EXE");
  u32 psp = (u32)GAME_PSP_SEG << 4;
  g_mem[psp] = 0xCD; g_mem[psp + 1] = 0x20;
  mem_w16(psp + 2, GAME_MEM_END);
  mem_w16(psp + 0x2C, GAME_ENV_SEG);
  char tail[128];
  snprintf(tail, sizeof tail, " %s", host->cmdline ? host->cmdline : "");
  g_mem[psp + 0x80] = (u8)strlen(tail);
  memcpy(g_mem + psp + 0x81, tail, strlen(tail));
  g_mem[psp + 0x81 + strlen(tail)] = 0x0D;
  // DOS's memory: the program gets everything from its PSP on (its start-up gives back what it does not need)
  dos_set_arena((u16)(GAME_PSP_SEG - 1), GAME_MEM_END);
  dos_owner = GAME_PSP_SEG;
  u16 seg = dos_alloc(dos_largest_free());
  if (seg != GAME_PSP_SEG) { fprintf(stderr, "game: the program's block is at %04X, not %04X\n", seg, GAME_PSP_SEG); return -1; }
  char path[1024];
  snprintf(path, sizeof path, "%s/4DBMCGA.EXE", host->gameDir ? host->gameDir : ".");
  ExeInfo e;
  if (!exe_load(path, GAME_LOAD_SEG, &e))
  {
    snprintf(path, sizeof path, "%s/4dbmcga.exe", host->gameDir ? host->gameDir : ".");
    if (!exe_load(path, GAME_LOAD_SEG, &e)) { fprintf(stderr, "game: cannot load %s\n", path); return -1; }
  }
  g_dsSeg = GAME_DS_SEG;
  asm_set_program_segments(GAME_LOAD_SEG, (u16)(GAME_LOAD_SEG + e.imageParagraphs + 0x1000));
  dosHost.gameDir = host->gameDir;
  dos_attach(&dosHost);
  asm_port_hook = port_in;
  asm_port_out_hook = port_out;
  asm_outside_hook = outside;
  dos_read_hook = read_hook;
  pc15_seg = 0;
  // the registers as DOS starts the program
  R = (Regs){ 0 };
  R.ds = R.es = GAME_PSP_SEG;
  R.ss = e.ss;
  R.sp = g_sp = e.sp;
  R.cs = e.cs;
  asm_backBudget = 1;
  exitCode = 0;
  if (!setjmp(exitJump)) box_crt0();
  dos_close_all();
  return exitCode;
}
