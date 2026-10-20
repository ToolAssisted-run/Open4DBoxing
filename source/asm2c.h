// The emulated 8086 that the recompiled functions (the workspace's work/asm2c.py: functions whose decompilation
// failed, recompiled statement for statement from the machine code) run on: the registers and flags, memory
// through the segment registers (far_ptr: the data segment image, the shared block, the rest of the
// megabyte), the stack in the data segment as on the 8086 (SS = DS, the stack pointer shared with the
// translated C through g_sp), and the calls between recompiled and C code.
#ifndef OPEN4DBOXING_ASM2C_H
#define OPEN4DBOXING_ASM2C_H

#include "types.h"

typedef struct
{
  u16 ax, bx, cx, dx, si, di, bp, sp, es, ds, ss, cs;
  bool cf, zf, sf, of, pf, af, df;
} Regs;
extern Regs R;

// memory
#define SEGV_DS R.ds
#define SEGV_ES R.es
#define SEGV_SS R.ss
#define SEGV_CS R.cs
// (FS and GS: 386 prefixes decoded in bytes that are not code; never reached)
#define SEGV_FS R.ds
#define SEGV_GS R.ds
// memory: the megabyte (types.h)
#define M8(s, a) (*(u8a *)far_ptr(SEGV_##s, (u16)(a)))
#define M16(s, a) (*(u16a *)far_ptr(SEGV_##s, (u16)(a)))
// writes: a watched address (asm_watchAddr, for the tests' debugging) reports its writer
extern u32 asm_watchAddr;
void asm_watch_hit(u32 addr, u16 value);
extern void (*asm_watch_hook)(u32 addr, u16 value);
static inline void asm_wr8(u16 seg, u16 off, u8 v)
{
  u32 a = ((u32)seg << 4) + off;
  if (a == asm_watchAddr) asm_watch_hit(a, v);
  g_mem[a] = v;
}
static inline void asm_wr16(u16 seg, u16 off, u16 v)
{
  u32 a = ((u32)seg << 4) + off;
  if (a == asm_watchAddr || a + 1 == asm_watchAddr) asm_watch_hit(a, v);
  g_mem[a] = (u8)v;
  g_mem[a + 1] = (u8)(v >> 8);
}
#define W8(s, a, v) asm_wr8(SEGV_##s, (u16)(a), (u8)(v))
#define W16(s, a, v) asm_wr16(SEGV_##s, (u16)(a), (u16)(v))
#define SETL(r, v) ((r) = (u16)(((r) & 0xFF00) | (u8)(v)))
#define SETH(r, v) ((r) = (u16)(((r) & 0x00FF) | ((u16)(u8)(v) << 8)))

// the stack
#define PUSH(v) \
  do { \
    u16 v_ = (u16)(v); \
    R.sp -= 2; \
    W16(SS, R.sp, v_); \
  } while (0)
static inline u16 asm_pop(void)
{
  u16 v = M16(SS, R.sp);
  R.sp += 2;
  return v;
}
#define POP() asm_pop()
#define ARG(k) M16(SS, (u16)(R.sp + 2 * (k)))

// entry (the wrapper pushes the arguments and a return address) and exit; entered from C, DS and SS are the
// data segment, entered from recompiled code (g_asmCall) the registers are as the caller left them
extern bool g_asmCall;
#define ASM_ENTER() \
  u16 asm_entry_sp_ = g_sp; \
  R.sp = g_sp; \
  if (!g_asmCall) R.ds = R.ss = g_dsSeg; \
  g_asmCall = 0
#define ASM_LEAVE() (g_sp = asm_entry_sp_, R.sp = asm_entry_sp_)
// a call from recompiled code: the callee's frame goes below the return address; the caller's stack pointer
// comes back as it was (the callee's own return pops it)
#define CALL_BEGIN(retbytes) \
  { \
    u16 csp_ = R.sp; \
    g_sp = (u16)(csp_ - (retbytes))
#define CALL_END() \
  R.sp = csp_; \
  g_sp = csp_; \
  }

// flags
// the flags word (pushf, lahf: its low byte) and back (popf, sahf); the interrupts stay enabled (bit 9)
#define FLAGS16() ((u16)(0x0202 | R.cf | R.pf << 2 | R.af << 4 | R.zf << 6 | R.sf << 7 | R.df << 10 | R.of << 11))
#define FLAGS8() ((u8)FLAGS16())
static inline void SETFLAGS8(u8 v) { R.cf = v & 1; R.pf = (v >> 2) & 1; R.af = (v >> 4) & 1; R.zf = (v >> 6) & 1; R.sf = (v >> 7) & 1; }
static inline void SETFLAGS16(u16 v) { SETFLAGS8((u8)v); R.df = (v >> 10) & 1; R.of = (v >> 11) & 1; }
static inline bool asm_parity(u8 v)
{
  v ^= v >> 4;
  v ^= v >> 2;
  v ^= v >> 1;
  return !(v & 1);
}
#define FLAGS_SZP8(r) (R.zf = (u8)(r) == 0, R.sf = ((r) & 0x80) != 0, R.pf = asm_parity((u8)(r)))
#define FLAGS_SZP16(r) (R.zf = (u16)(r) == 0, R.sf = ((r) & 0x8000) != 0, R.pf = asm_parity((u8)(r)))
static inline u8 ADD8(u8 a, u8 b) { unsigned r = a + b; R.cf = r > 0xFF; R.of = ((a ^ r) & (b ^ r) & 0x80) != 0; R.af = ((a ^ b ^ r) & 0x10) != 0; FLAGS_SZP8(r); return (u8)r; }
static inline u16 ADD16(u16 a, u16 b) { unsigned r = a + b; R.cf = r > 0xFFFF; R.of = ((a ^ r) & (b ^ r) & 0x8000) != 0; R.af = ((a ^ b ^ r) & 0x10) != 0; FLAGS_SZP16(r); return (u16)r; }
static inline u8 ADC8(u8 a, u8 b) { unsigned r = a + b + R.cf; R.cf = r > 0xFF; R.of = ((a ^ r) & (b ^ r) & 0x80) != 0; R.af = ((a ^ b ^ r) & 0x10) != 0; FLAGS_SZP8(r); return (u8)r; }
static inline u16 ADC16(u16 a, u16 b) { unsigned r = a + b + R.cf; R.cf = r > 0xFFFF; R.of = ((a ^ r) & (b ^ r) & 0x8000) != 0; R.af = ((a ^ b ^ r) & 0x10) != 0; FLAGS_SZP16(r); return (u16)r; }
static inline u8 SUB8(u8 a, u8 b) { unsigned r = (unsigned)a - b; R.cf = a < b; R.of = ((a ^ b) & (a ^ r) & 0x80) != 0; R.af = ((a ^ b ^ r) & 0x10) != 0; FLAGS_SZP8(r); return (u8)r; }
static inline u16 SUB16(u16 a, u16 b) { unsigned r = (unsigned)a - b; R.cf = a < b; R.of = ((a ^ b) & (a ^ r) & 0x8000) != 0; R.af = ((a ^ b ^ r) & 0x10) != 0; FLAGS_SZP16(r); return (u16)r; }
static inline u8 SBB8(u8 a, u8 b) { unsigned c = R.cf, r = (unsigned)a - b - c; R.cf = (unsigned)a < (unsigned)b + c; R.of = ((a ^ b) & (a ^ r) & 0x80) != 0; R.af = ((a ^ b ^ r) & 0x10) != 0; FLAGS_SZP8(r); return (u8)r; }
static inline u16 SBB16(u16 a, u16 b) { unsigned c = R.cf, r = (unsigned)a - b - c; R.cf = (unsigned)a < (unsigned)b + c; R.of = ((a ^ b) & (a ^ r) & 0x8000) != 0; R.af = ((a ^ b ^ r) & 0x10) != 0; FLAGS_SZP16(r); return (u16)r; }
static inline u8 AND8(u8 a, u8 b) { u8 r = a & b; R.cf = R.of = 0; FLAGS_SZP8(r); return r; }
static inline u16 AND16(u16 a, u16 b) { u16 r = a & b; R.cf = R.of = 0; FLAGS_SZP16(r); return r; }
static inline u8 OR8(u8 a, u8 b) { u8 r = a | b; R.cf = R.of = 0; FLAGS_SZP8(r); return r; }
static inline u16 OR16(u16 a, u16 b) { u16 r = a | b; R.cf = R.of = 0; FLAGS_SZP16(r); return r; }
static inline u8 XOR8(u8 a, u8 b) { u8 r = a ^ b; R.cf = R.of = 0; FLAGS_SZP8(r); return r; }
static inline u16 XOR16(u16 a, u16 b) { u16 r = a ^ b; R.cf = R.of = 0; FLAGS_SZP16(r); return r; }
static inline u8 INC8(u8 a) { bool c = R.cf; u8 r = ADD8(a, 1); R.cf = c; return r; }
static inline u16 INC16(u16 a) { bool c = R.cf; u16 r = ADD16(a, 1); R.cf = c; return r; }
static inline u8 DEC8(u8 a) { bool c = R.cf; u8 r = SUB8(a, 1); R.cf = c; return r; }
static inline u16 DEC16(u16 a) { bool c = R.cf; u16 r = SUB16(a, 1); R.cf = c; return r; }
static inline u8 NEG8(u8 a) { u8 r = SUB8(0, a); R.cf = a != 0; return r; }
static inline u16 NEG16(u16 a) { u16 r = SUB16(0, a); R.cf = a != 0; return r; }
// shifts and rotates by n (masked to 5 bits as on the 286+; the counts here are small)
static inline u8 SHL8(u8 a, u8 n) { n &= 31; if (!n) return a; unsigned r = (unsigned)a << n; R.cf = (r >> 8) & 1; FLAGS_SZP8(r); R.of = (((r >> 7) & 1) ^ R.cf) != 0; return (u8)r; }
static inline u16 SHL16(u16 a, u8 n) { n &= 31; if (!n) return a; u32 r = (u32)a << n; R.cf = (r >> 16) & 1; FLAGS_SZP16(r); R.of = (((r >> 15) & 1) ^ R.cf) != 0; return (u16)r; }
#define SAL8 SHL8
#define SAL16 SHL16
static inline u8 SHR8(u8 a, u8 n) { n &= 31; if (!n) return a; R.cf = n <= 8 ? (a >> (n - 1)) & 1 : 0; u8 r = n < 8 ? a >> n : 0; FLAGS_SZP8(r); R.of = n == 1 && (a & 0x80); return r; }
static inline u16 SHR16(u16 a, u8 n) { n &= 31; if (!n) return a; R.cf = n <= 16 ? (a >> (n - 1)) & 1 : 0; u16 r = n < 16 ? a >> n : 0; FLAGS_SZP16(r); R.of = n == 1 && (a & 0x8000); return r; }
static inline u8 SAR8(u8 a, u8 n) { n &= 31; if (!n) return a; i8 s = (i8)a; R.cf = ((n < 8 ? s >> (n - 1) : s >> 7)) & 1; u8 r = (u8)(n < 8 ? s >> n : s >> 7); FLAGS_SZP8(r); R.of = 0; return r; }
static inline u16 SAR16(u16 a, u8 n) { n &= 31; if (!n) return a; i16 s = (i16)a; R.cf = ((n < 16 ? s >> (n - 1) : s >> 15)) & 1; u16 r = (u16)(n < 16 ? s >> n : s >> 15); FLAGS_SZP16(r); R.of = 0; return r; }
static inline u8 ROL8(u8 a, u8 n) { n &= 7; u8 r = (u8)((a << n) | (a >> ((8 - n) & 7))); if (n) R.cf = r & 1; return r; }
static inline u16 ROL16(u16 a, u8 n) { n &= 15; u16 r = (u16)((a << n) | (a >> ((16 - n) & 15))); if (n) R.cf = r & 1; return r; }
static inline u8 ROR8(u8 a, u8 n) { n &= 7; u8 r = (u8)((a >> n) | (a << ((8 - n) & 7))); if (n) R.cf = (r >> 7) & 1; return r; }
static inline u16 ROR16(u16 a, u8 n) { n &= 15; u16 r = (u16)((a >> n) | (a << ((16 - n) & 15))); if (n) R.cf = (r >> 15) & 1; return r; }
static inline u8 RCL8(u8 a, u8 n) { for (n &= 31; n; n--) { bool c = a & 0x80; a = (u8)((a << 1) | R.cf); R.cf = c; } return a; }
static inline u16 RCL16(u16 a, u8 n) { for (n &= 31; n; n--) { bool c = a & 0x8000; a = (u16)((a << 1) | R.cf); R.cf = c; } return a; }
static inline u8 RCR8(u8 a, u8 n) { for (n &= 31; n; n--) { bool c = a & 1; a = (u8)((a >> 1) | (R.cf << 7)); R.cf = c; } return a; }
static inline u16 RCR16(u16 a, u8 n) { for (n &= 31; n; n--) { bool c = a & 1; a = (u16)((a >> 1) | (R.cf << 15)); R.cf = c; } return a; }
// multiplication and division
static inline void MUL8(u8 b) { R.ax = (u16)((u8)R.ax * b); R.cf = R.of = (R.ax >> 8) != 0; }
static inline void MUL16(u16 b) { u32 r = (u32)R.ax * b; R.ax = (u16)r; R.dx = (u16)(r >> 16); R.cf = R.of = R.dx != 0; }
static inline void IMUL8(u8 b) { i16 r = (i16)((i8)R.ax * (i8)b); R.ax = (u16)r; R.cf = R.of = r != (i8)r; }
static inline void IMUL16(u16 b) { i32 r = (i32)(i16)R.ax * (i16)b; R.ax = (u16)r; R.dx = (u16)((u32)r >> 16); R.cf = R.of = r != (i16)r; }
static inline u16 IMUL3(u16 a, u16 b) { i32 r = (i32)(i16)a * (i16)b; R.cf = R.of = r != (i16)r; return (u16)r; }
// a divide error (INT 0): the program's handler, if it has one (asm_divide_error: ip = the instruction's offset)
void asm_divide_error(u16 ip);
static inline void DIV8(u8 b, u16 ip) { if (!b || R.ax / b > 0xFF) { asm_divide_error(ip); return; } u16 a = R.ax; R.ax = (u16)(((a % b) << 8) | (a / b)); }
static inline void DIV16(u16 b, u16 ip) { u32 a = ((u32)R.dx << 16) | R.ax; if (!b || a / b > 0xFFFF) { asm_divide_error(ip); return; } R.ax = (u16)(a / b); R.dx = (u16)(a % b); }
static inline void IDIV8(u8 b, u16 ip) { i16 a = (i16)R.ax; if (!b) { asm_divide_error(ip); return; } i16 q = a / (i8)b; if (q != (i8)q) { asm_divide_error(ip); return; } R.ax = (u16)(((u8)(a % (i8)b) << 8) | (u8)q); }
static inline void IDIV16(u16 b, u16 ip) { i32 a = (i32)(((u32)R.dx << 16) | R.ax); if (!b) { asm_divide_error(ip); return; } i32 q = a / (i16)b; if (q != (i16)q) { asm_divide_error(ip); return; } R.ax = (u16)q; R.dx = (u16)(a % (i16)b); }

// string instructions (DF = 0 in these programs)
#define MOVSB() (W8(ES, R.di, M8(DS, R.si)), R.si += R.df ? -1 : 1, R.di += R.df ? -1 : 1)
#define MOVSW() (W16(ES, R.di, M16(DS, R.si)), R.si += R.df ? -2 : 2, R.di += R.df ? -2 : 2)
#define STOSB() (W8(ES, R.di, R.ax), R.di += R.df ? -1 : 1)
#define STOSW() (W16(ES, R.di, R.ax), R.di += R.df ? -2 : 2)
#define LODSB() (SETL(R.ax, M8(DS, R.si)), R.si += R.df ? -1 : 1)
#define LODSW() (R.ax = M16(DS, R.si), R.si += R.df ? -2 : 2)
#define SCASB() (SUB8((u8)R.ax, M8(ES, R.di)), R.di += R.df ? -1 : 1)
#define CMPSB() (SUB8(M8(DS, R.si), M8(ES, R.di)), R.si += R.df ? -1 : 1, R.di += R.df ? -1 : 1)
#define SCASW() (SUB16(R.ax, M16(ES, R.di)), R.di += R.df ? -2 : 2)
#define CMPSW() (SUB16(M16(DS, R.si), M16(ES, R.di)), R.si += R.df ? -2 : 2, R.di += R.df ? -2 : 2)
#define REPESCASW() for (; R.cx && (R.cx--, asm_icount++, SCASW(), R.zf);)
#define REPNESCASW() for (; R.cx && (R.cx--, asm_icount++, SCASW(), !R.zf);)
#define REPECMPSW() for (; R.cx && (R.cx--, asm_icount++, CMPSW(), R.zf);)
#define REPNECMPSB() for (; R.cx && (R.cx--, asm_icount++, CMPSB(), !R.zf);)
#define REPNECMPSW() for (; R.cx && (R.cx--, asm_icount++, CMPSW(), !R.zf);)
#define REPMOVSB() for (asm_icount += R.cx; R.cx; R.cx--) MOVSB()
#define REPMOVSW() for (asm_icount += R.cx; R.cx; R.cx--) MOVSW()
#define REPSTOSB() for (asm_icount += R.cx; R.cx; R.cx--) STOSB()
#define REPSTOSW() for (asm_icount += R.cx; R.cx; R.cx--) STOSW()
#define REPESCASB() do { for (; R.cx && (R.cx--, asm_icount++, SCASB(), R.zf);) { } } while (0)
#define REPNESCASB() do { for (; R.cx && (R.cx--, asm_icount++, SCASB(), !R.zf);) { } } while (0)
#define REPECMPSB() do { for (; R.cx && (R.cx--, asm_icount++, CMPSB(), R.zf);) { } } while (0)

// what the recompiled code cannot do by itself
u16 asm_port_in(u16 port);
void asm_port_out(u16 port, u16 value);
// the VGA DAC (the palette: 256 colours, 6 bits a component) as the programs and drivers set it
extern u8 asm_dac[256][3];
void asm_int(u8 n);
// the BIOS's and DOS's own services, without the program's handlers (asm_int goes through those first)
void asm_bios_service(u8 n);
// the BIOS's handlers: the vector of interrupt n points at F000:(ASM_BIOS_VECTOR_OFF + n), where the service is done
#define ASM_BIOS_VECTOR_OFF 0xFE00
void asm_unknown_call(u16 seg, u16 off);
void asm_bad_switch(void);

// the interrupts a program's runtime serves (DOS files, the clock, ...): true if it did; asm_int serves the rest
extern bool (*asm_int_hook)(u8 n);
// the ports a frontend serves (the VGA status 3DAh: the retrace, in real time): the value read
extern u16 (*asm_port_hook)(u16 port);
// the ports a frontend takes the writes of (the PIT, the speaker): true if it took it
extern bool (*asm_port_out_hook)(u16 port, u8 value);
// calls and jumps through pointers, to the recompiled functions by their runtime address (box_core.c); the
// runtime answers the ones outside the program (the BIOS's: asm_outside)
void asm_far_call(u16 seg, u16 off);
void asm_near_call(u16 seg, u16 off);
void asm_far_jump(u16 seg, u16 off);
void asm_near_jump(u16 seg, u16 off);
void asm_outside(u16 seg, u16 off);  // a call or jump to code that is not the program's (the BIOS's)
extern void (*asm_outside_hook)(u16 seg, u16 off);
void asm_set_program_segments(u16 first, u16 end);  // the program's code: from the first segment to the end
u8 asm_video_mode(void);
// the instructions executed (each basic block charges its count at its start; a repeated string instruction its
// repetitions): the host's clock (as DOSBox's cycles: an instruction a cycle)
extern u64 asm_icount;
#define ASM_COST(n) (asm_icount += (n))
// a backward jump: time passes; every so many the host looks at its clock (interrupts, frames, keys)
extern int asm_backBudget;
void asm_back_slow(void);
static inline void asm_back(void) { if (--asm_backBudget <= 0) asm_back_slow(); }
#define ASM_BACK() asm_back()
// a function's entry, for traces
extern void (*asm_fn_hook)(u32 addr);
#define FN(x) do { if (asm_fn_hook) asm_fn_hook(x); } while (0)
void asm_unhandled(void);
extern void (*asm_fatal_hook)(void);  // a fatal error of the emulation: the host's last words (a trace)
#define ASM_UNHANDLED() asm_unhandled()
// the mouse (INT 33h): its position (the driver's virtual coordinates: 0-639 by 0-199 in mode 13h), buttons
// (bit 0 left, bit 1 right) and motion since the last read, as the host sets them
typedef struct { u16 x, y, buttons, minX, maxX, minY, maxY, ratioX, ratioY; i16 dx, dy; int shown; } AsmMouse;
extern AsmMouse asm_mouse;
void asm_mouse_clamp(void);  // the position back within the ranges (the host, after moving it)
// the game port (201h): two joysticks' axes (0-255, 128 the centre) and their buttons (bit 0 and 1 the first's,
// 2 and 3 the second's, set while pressed), as the host sets them; absent, the port reads as an empty one
typedef struct { int present; u8 x[2], y[2], buttons; } AsmJoystick;
extern AsmJoystick asm_joystick;
// an interrupt: the handler the vector table names, with an interrupt frame (flags, CS, IP) on the stack
void asm_interrupt(u8 n);
// the interrupt vector at n: the program's (its handler is recompiled) or not
bool asm_vector_is_programs(u8 n);
#define ASM_PORT_IN(p) asm_port_in(p)
#define ASM_PORT_OUT(p, v) asm_port_out(p, v)
#define ASM_PORT_OUT16(p, v) (asm_port_out(p, (u8)(v)), asm_port_out((u16)((p) + 1), (u8)((v) >> 8)))
#define ASM_INT(n) asm_int(n)
#define ASM_UNKNOWN_CALL(s, o) asm_unknown_call(s, o)
#define ASM_BAD_SWITCH() asm_bad_switch()
void asm_bad_switch_at(u16 seg, u16 off, u16 index);
#define ASM_BAD_SWITCH_AT(s, o, i) asm_bad_switch_at(s, o, i)

#endif
