// The emulated 8086's state for the recompiled program (asm2c.h) and what the program cannot do by itself: the
// interrupts (the program's own handlers through its vector table, else the BIOS's and DOS's services), the ports
// (the timer chip, the interrupt controller, the keyboard, the VGA's DAC and status, the sound chips), and the
// passing of time (asm_back_slow: the host's clock, from which the timer's interrupts and the keys come).
#include "asm2c.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// a fatal error of the emulation: abort(), or exit() when the host wants its hooks run (a memory dump)
void (*asm_fatal_hook)(void);
static void asm_fatal(void) { if (asm_fatal_hook) asm_fatal_hook(); if (getenv("OPEN4DBOXING_DUMP")) exit(3); abort(); }

#include "dos.h"
#include "dosmem.h"
#include "pit.h"

u8 g_mem[MEM_SIZE];
AsmMouse asm_mouse;
AsmJoystick asm_joystick;
void (*asm_sti_hook)(void);
// the driver keeps the cursor within the ranges set (as DOSBox's does at once)
void asm_mouse_clamp(void)
{
  if ((i16)asm_mouse.x < (i16)asm_mouse.minX) asm_mouse.x = asm_mouse.minX;
  if ((i16)asm_mouse.x > (i16)asm_mouse.maxX) asm_mouse.x = asm_mouse.maxX;
  if ((i16)asm_mouse.y < (i16)asm_mouse.minY) asm_mouse.y = asm_mouse.minY;
  if ((i16)asm_mouse.y > (i16)asm_mouse.maxY) asm_mouse.y = asm_mouse.maxY;
}
u16 g_dsSeg;
u16 g_sp = 0xFFFE;
Regs R;
bool g_asmCall;
void (*asm_fn_hook)(u32 addr);
int asm_backBudget = 1;
u64 asm_icount;
u32 asm_watchAddr = 0xFFFFFFFF;
void (*asm_watch_hook)(u32 addr, u16 value);
void asm_watch_hit(u32 addr, u16 value) { if (asm_watch_hook) asm_watch_hook(addr, value); }

// the program's code: the segments its functions live in (asm_vector_is_programs)
static u16 programFirstSeg = 0x0823, programEndSeg = 0x3A00;
void asm_set_program_segments(u16 first, u16 end) { programFirstSeg = first; programEndSeg = end; }

bool asm_vector_is_programs(u8 n)
{
  u16 seg = mem_r16((u32)n * 4 + 2);
  return seg >= programFirstSeg && seg < programEndSeg;
}

// an interrupt: as the 8086 takes it (the flags, CS and IP pushed; the handler returns with iret, recompiled as
// a pop of the three)
void asm_interrupt(u8 n)
{
  u16 off = mem_r16((u32)n * 4), seg = mem_r16((u32)n * 4 + 2);
  u16 cs = R.cs;
  PUSH(FLAGS16());
  PUSH(R.cs);
  PUSH(0);
  R.if_ = false;  // (the handler runs with interrupts off until it allows them or returns)
  asm_far_call(seg, off);
  // the handler returned with iret (the flags from the frame) or retf 2 (its own flags: a service's answer, as
  // INT 16h's ZF); the registers as it left them (a service's results; a hardware interrupt's handler preserves them)
  R.cs = cs;
}

// a divide error: the C runtime's handler (INT 0) prints "run-time error" and exits; here it is reported
void asm_divide_error(u16 ip)
{
  fprintf(stderr, "asm2c: divide error at %04X:%04X\n", R.cs, ip);
  asm_fatal();
}

// the VGA: the DAC (3C8 index, 3C9 red, green, blue: the palette the frontend shows) and the status register
// (3DA: the retrace bit, from the host's clock: asm_port_hook)
u8 asm_dac[256][3];
static u8 dacIndex, dacPart;
u16 (*asm_port_hook)(u16 port);
bool (*asm_port_out_hook)(u16 port, u8 value);
u32 asm_ioCostIn, asm_ioCostOut, asm_ioCostIn16, asm_ioCostOut16, asm_vramCost;
u32 (*asm_vram_cost_hook)(void);
void (*asm_idle_hook)(void);
void asm_idle(void) { if (asm_idle_hook) asm_idle_hook(); }

u16 asm_port_in(u16 port)
{
  if (asm_port_hook) return asm_port_hook(port);
  return 0xFF;
}

void asm_port_out(u16 port, u16 value)
{
  if (asm_port_out_hook && asm_port_out_hook(port, (u8)value)) return;
  if (vga_port_out(port, (u8)value)) return;
  if (port == 0x3D8) { cga.mode = (u8)value; return; }
  if (port == 0x3D9) { cga.color = (u8)value; return; }
  if (port == 0x3DA) { tandyVideo.index = (u8)value; return; }  // (the Tandy's video array: the index)
  if (port == 0x3DE) { if ((tandyVideo.index & 0x10) && tandyVideo.index < 0x20) tandyVideo.pal[tandyVideo.index & 0x0F] = (u8)(value & 0x0F); return; }
  if (port == 0x3DF) { tandyVideo.page = (u8)value; return; }
  if (port == 0x3C8) { dacIndex = (u8)value; dacPart = 0; }
  else if (port == 0x3C9)
  {
    asm_dac[dacIndex][dacPart] = (u8)(value & 0x3F);
    if (++dacPart == 3) { dacPart = 0; dacIndex++; }
  }
}

// the BIOS's and DOS's services; the program's own handlers first (it hooks INT 9, 16h, 23h, 24h and the timer)
bool (*asm_int_hook)(u8 n);
static u8 videoMode = 3;
u8 asm_video_mode(void) { return videoMode; }
CgaState cga;
TandyState tandyVideo;
// the CGA's and Tandy's 16 colours (RGBI; 6 brown), as the DAC
static void rgbi_dac(void)
{
  for (int k = 0; k < 16; k++)
  {
    int i = (k >> 3) & 1;
    asm_dac[k][0] = (u8)(42 * ((k >> 2) & 1) + 21 * i);
    asm_dac[k][1] = (u8)((k & 7) == 6 && !i ? 21 : 42 * ((k >> 1) & 1) + 21 * i);
    asm_dac[k][2] = (u8)(42 * (k & 1) + 21 * i);
  }
}
// a mode set (INT 10h 00h): the VGA's planes and registers (vga.c), the CGA's and Tandy's memory cleared and their
// registers as the BIOS leaves them, the DAC the modes imply
void asm_video_set_mode(u8 mode)
{
  vga_set_mode(mode);
  if (vga.planar)
  {
    if (mode == 0x0D || mode == 0x0E)
      // the BIOS's DAC for the 200-line modes: the CGA's 16 colours, bit 4 the intensity (bits 3 and 5 not looked
      // at; colour 6 brown), as the palette registers say them
      for (int k = 0; k < 64; k++)
      {
        int i = (k >> 4) & 1;
        asm_dac[k][0] = (u8)(42 * ((k >> 2) & 1) + 21 * i);
        asm_dac[k][1] = (u8)((k & 7) == 6 && !i ? 21 : 42 * ((k >> 1) & 1) + 21 * i);
        asm_dac[k][2] = (u8)(42 * (k & 1) + 21 * i);
      }
    else  // the others': the EGA's 64 colours (rgbRGB: primary 2/3, secondary 1/3)
      for (int k = 0; k < 64; k++)
      {
        asm_dac[k][0] = (u8)(42 * ((k >> 2) & 1) + 21 * ((k >> 5) & 1));
        asm_dac[k][1] = (u8)(42 * ((k >> 1) & 1) + 21 * ((k >> 4) & 1));
        asm_dac[k][2] = (u8)(42 * (k & 1) + 21 * ((k >> 3) & 1));
      }
  }
  else if (mode <= 6 || mode == 8 || mode == 9 || mode == 0x0A)
  {
    memset(g_mem + 0xB8000, 0, 0x8000);
    cga.mode = (u8)(mode == 4 || mode == 5 ? 0x0A : mode == 6 ? 0x1E : 0x29);  // (graphics on, 320x200; 640x200 bw)
    cga.color = 0x30;  // (palette 1 at high intensity, black background)
    tandyVideo.page = 0;
    for (int k = 0; k < 16; k++) tandyVideo.pal[k] = (u8)k;
    rgbi_dac();
  }
}

void asm_int(u8 n)
{
  if (asm_vector_is_programs(n)) { asm_interrupt(n); return; }
  asm_bios_service(n);
}

// the BIOS's and DOS's own services (the program's handlers chain to them through the vectors they saved)
void asm_bios_service(u8 n)
{
  if (asm_int_hook && asm_int_hook(n)) return;
  u8 ah = (u8)(R.ax >> 8), al = (u8)R.ax;
  if (n == 0x10)
  {
    if (ah == 0x00) { videoMode = al & 0x7F; asm_video_set_mode(videoMode); return; }
    if (ah == 0x0F) { R.ax = (u16)(0x2800 | videoMode); R.bx &= 0x00FF; return; }
    if (ah == 0x0B)  // the CGA's palette (BH = 1: BL its number) and background / border (BH = 0: BL the colour)
    {
      if (R.bx >> 8) cga.color = (u8)((cga.color & ~0x20) | ((R.bx & 1) << 5));
      else cga.color = (u8)((cga.color & 0x20) | (R.bx & 0x1F));
      return;
    }
    if (ah == 0x10 && al == 0x00) { vga_attribute((u8)R.bx, (u8)(R.bx >> 8)); return; }  // a palette register (EGA)
    if (ah == 0x10 && al == 0x12)  // a block of DAC registers from ES:DX
    {
      for (u16 k = 0; k < R.cx; k++)
        for (int c = 0; c < 3; c++) asm_dac[(R.bx + k) & 0xFF][c] = *far_ptr(R.es, (u16)(R.dx + 3 * k + c)) & 0x3F;
      return;
    }
    if (ah == 0x10 && al == 0x10)
    {
      asm_dac[R.bx & 0xFF][0] = (u8)(R.dx >> 8) & 0x3F;
      asm_dac[R.bx & 0xFF][1] = (u8)(R.cx >> 8) & 0x3F;
      asm_dac[R.bx & 0xFF][2] = (u8)R.cx & 0x3F;
      return;
    }
    if (ah == 0x10) return;
    if (ah == 0x1A && al == 0x00) { R.ax = (u16)((R.ax & 0xFF00) | 0x1A); R.bx = 0x0008; return; }  // a VGA with a colour display
    if (ah == 0x12 && (R.bx & 0xFF) == 0x10) { R.bx = 0x0003; R.cx = 0; return; }  // EGA information: colour, 256 KB
    if (ah == 0x0E || ah == 0x02 || ah == 0x01 || ah == 0x06 || ah == 0x09) return;  // text output, the cursor: nothing to see
    fprintf(stderr, "asm2c: int 10h AX=%04X\n", R.ax);
    return;
  }
  if (n == 0x15)  // the BIOS's system services: a PS/2 mouse there is not (C2xx), the rest unsupported
  {
    R.cf = 1;
    R.ax = (u16)((R.ax & 0xFF) | 0x8600);
    return;
  }
  if (n == 0x33)  // the mouse driver (as DOSBox-X's): present, two buttons; its position and buttons are the host's
  {
    static int dbg = -1;
    if (dbg < 0) dbg = getenv("OPEN4DBOXING_MOUSEDBG") != NULL;
    if (dbg) fprintf(stderr, "int 33h AX=%04X BX=%04X CX=%04X DX=%04X\n", R.ax, R.bx, R.cx, R.dx);
    switch (R.ax)
    {
    case 0x0000: R.ax = 0xFFFF; R.bx = 2; asm_mouse.x = 320; asm_mouse.y = 100; asm_mouse.shown = 0; asm_mouse.minX = asm_mouse.minY = 0; asm_mouse.maxX = 639; asm_mouse.maxY = 199; return;
    case 0x0001: asm_mouse.shown++; return;
    case 0x0002: asm_mouse.shown--; return;
    case 0x0003: R.bx = asm_mouse.buttons; R.cx = asm_mouse.x; R.dx = asm_mouse.y; return;
    case 0x0004: asm_mouse.x = R.cx; asm_mouse.y = R.dx; asm_mouse_clamp(); return;
    case 0x0005: R.ax = asm_mouse.buttons; R.bx = 0; R.cx = asm_mouse.x; R.dx = asm_mouse.y; return;  // (presses since: none)
    case 0x0006: R.ax = asm_mouse.buttons; R.bx = 0; R.cx = asm_mouse.x; R.dx = asm_mouse.y; return;  // (releases since: none)
    case 0x0007: asm_mouse.minX = R.cx; asm_mouse.maxX = R.dx; asm_mouse_clamp(); return;
    case 0x0008: asm_mouse.minY = R.cx; asm_mouse.maxY = R.dx; asm_mouse_clamp(); return;
    case 0x000B: R.cx = asm_mouse.dx; R.dx = asm_mouse.dy; asm_mouse.dx = asm_mouse.dy = 0; return;
    case 0x000F: asm_mouse.ratioX = R.cx; asm_mouse.ratioY = R.dx; return;
    case 0x0021: R.ax = 0xFFFF; R.bx = 2; return;  // a software reset
    case 0x0024: R.bx = 0x0805; R.cx = 4; R.dx = 0; return;  // version 8.05, PS/2
    default: return;
    }
  }
  if (n == 0x1A)  // the BIOS's clock: the tick count (0040:006C), the midnight flag (0040:0070)
  {
    if (ah == 0x00)
    {
      R.cx = mem_r16(0x46E);
      R.dx = mem_r16(0x46C);
      R.ax = (u16)(R.ax & 0xFF00) | g_mem[0x470];
      g_mem[0x470] = 0;
      return;
    }
    if (ah == 0x01) { mem_w16(0x46C, R.dx); mem_w16(0x46E, R.cx); g_mem[0x470] = 0; return; }
    return;
  }
  if (n == 0x16)  // the BIOS's keyboard: no key waiting (the program hooks this interrupt itself soon after)
  {
    if (ah == 0x00) { R.ax = 0; return; }
    if (ah == 0x01) { R.zf = 1; R.ax = 0; return; }
    if (ah == 0x02) { R.ax &= 0xFF00; return; }
    return;
  }
  if (n == 0x21)
  {
    u16 largest = 0;
    if (getenv("DOS_DEBUG") && (ah == 0x48 || ah == 0x49 || ah == 0x4A))
      fprintf(stderr, "dos: int 21h AX=%04X BX=%04X ES=%04X (memory)\n", R.ax, R.bx, R.es);
    if (ah == 0x48)
    {
      u16 seg = asm2c_dos_alloc(R.bx, &largest);
      if (getenv("DOS_DEBUG")) fprintf(stderr, "dos: alloc %04X paragraphs -> %04X\n", R.bx, seg);
      if (seg) { R.ax = seg; R.cf = 0; }
      else { R.ax = 8; R.bx = largest; R.cf = 1; }
      return;
    }
    if (ah == 0x49) { R.cf = !asm2c_dos_free(R.es); if (R.cf) R.ax = 9; return; }
    if (ah == 0x4A)
    {
      R.cf = !asm2c_dos_resize(R.es, R.bx, &largest);
      if (R.cf) { R.ax = 8; R.bx = largest; }
      return;
    }
    if (dos_int21()) return;
  }
  fprintf(stderr, "asm2c: int %02X AX=%04X (not served)\n", n, R.ax);
}

void asm_unknown_call(u16 seg, u16 off)
{
  fprintf(stderr, "asm2c: call to %04X:%04X, which is not known\n", seg, off);
  asm_fatal();
}

void asm_bad_switch_at(u16 seg, u16 off, u16 index)
{
  fprintf(stderr, "asm2c: a jump table index out of range at %04X:%04X (Ghidra's segment): index %04X\n", seg, off, index);
  asm_fatal();
}

void asm_bad_switch(void)
{
  fprintf(stderr, "asm2c: a jump table index out of range\n");
  asm_fatal();
}

void asm_unhandled(void)
{
  fprintf(stderr, "asm2c: an instruction the recompiler could not translate\n");
  asm_fatal();
}

// a call or jump to code outside the program: the BIOS's (the program's interrupt handlers chain to the old
// vectors), which does nothing here but return (the timer's tick count is the host's)
bool (*asm_dispatch_hook)(u16 seg, u16 off);
void asm_far_call(u16 seg, u16 off) { if (!asm_dispatch_hook || !asm_dispatch_hook(seg, off)) asm_outside(seg, off); }
void asm_near_call(u16 seg, u16 off) { if (!asm_dispatch_hook || !asm_dispatch_hook(seg, off)) asm_outside(seg, off); }
void asm_far_jump(u16 seg, u16 off) { if (!asm_dispatch_hook || !asm_dispatch_hook(seg, off)) asm_outside(seg, off); }
void asm_near_jump(u16 seg, u16 off) { if (!asm_dispatch_hook || !asm_dispatch_hook(seg, off)) asm_outside(seg, off); }
void (*asm_outside_hook)(u16 seg, u16 off);
void asm_outside(u16 seg, u16 off)
{
  // the C library's int86(): "int n; retf" built on the stack and called
  const u8 *code = far_ptr(seg, off);
  if (code[0] == 0xCD && code[2] == 0xCB)
  {
    asm_int(code[1]);
    R.sp += 4;
    return;
  }
  if (asm_outside_hook) { asm_outside_hook(seg, off); return; }
  if (seg == 0xF000 && off >= ASM_BIOS_VECTOR_OFF && off < ASM_BIOS_VECTOR_OFF + 256)
  {
    // the BIOS's handler of interrupt n, reached through its vector (pushf + call far, or a chained jump): the
    // service, then its iret with the flags it answers in
    asm_bios_service((u8)(off - ASM_BIOS_VECTOR_OFF));
    R.sp += 6;
    return;
  }
  asm_unknown_call(seg, off);
}
