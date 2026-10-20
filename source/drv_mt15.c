// MT15.DRV (the game's mt15 sound driver) recompiled from its machine code (the workspace's work/asm2c.py,
// work/drv_gen.sh): generated, do not edit. mt15_seg is the segment the game loaded it at.
#include "drivers.h"
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-variable"
u16 mt15_seg;


// ---- recompiled bodies
static void a_mt15_0000(void);
static void a_mt15_0003(void);
static void a_mt15_0006(void);
static void a_mt15_0009(void);
static void a_mt15_000c(void);
static void a_mt15_000f(void);
static void a_mt15_0012(void);
static void a_mt15_0015(void);
static void a_mt15_0018(void);
static void a_mt15_001b(void);
static void a_mt15_001e(void);
static void a_mt15_0021(void);
static void a_mt15_0024(void);
static void a_mt15_0027(void);
static void a_mt15_002a(void);
static void a_mt15_002d(void);
static void a_mt15_0030(void);
static void a_mt15_0033(void);
static void a_mt15_0036(void);
static void a_mt15_0039(void);
static void a_mt15_003c(void);
static void a_mt15_003f(void);
static void a_mt15_0042(void);
static void a_mt15_02ba(void);
static void a_mt15_02bf(void);
static void a_mt15_02c4(void);
static void a_mt15_02c9(void);
static void a_mt15_02db(void);
static void a_mt15_02ed(void);
static void a_mt15_0330(void);
static void a_mt15_0380(void);
static void a_mt15_0386(void);
static void a_mt15_03cb(void);
static void a_mt15_03d1(void);
static void a_mt15_042f(void);
static void a_mt15_0457(void);
static void a_mt15_045c(void);
static void a_mt15_0461(void);
static void a_mt15_0468(void);
static void a_mt15_046d(void);
static void a_mt15_04a6(void);
static void a_mt15_04bd(void);
static void a_mt15_04c6(void);
static void a_mt15_04e0(void);
static void a_mt15_04e5(void);
static void a_mt15_04f8(void);
static void a_mt15_04fe(void);
static void a_mt15_050f(void);
static void a_mt15_0514(void);
static void a_mt15_052c(void);
static void a_mt15_054f(void);
static void a_mt15_0574(void);
static void a_mt15_0579(void);
static void a_mt15_05d5(void);
static void a_mt15_05e4(void);
static void a_mt15_05ec(void);
static void a_mt15_0628(void);
static void a_mt15_0632(void);
static void a_mt15_0648(void);
static void a_mt15_064d(void);
static void a_mt15_066f(void);
static void a_mt15_0678(void);
static void a_mt15_0691(void);
static void a_mt15_06b3(void);
static void a_mt15_06bc(void);
static void a_mt15_06d5(void);
static void a_mt15_0195(void);
static void a_mt15_02b2(void);
static void a_mt15_0233(void);
static void a_mt15_01c7(void);
static void a_mt15_044e(void);

// Recompiled from the machine code by the workspace's work/asm2c.py (the decompilation of these functions
// failed); see asm2c.h.

// 1000:0000 FUN_1000_0000  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0000(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_0406;                                    // 0000 jmp 0x406
L_0406:   ASM_COST(1); R.cx = (u16)(0xffff);                           // 0406 mov cx, 0xffff
L_0409:   ASM_COST(2); SETL(R.ax, 0xff);                               // 0409 mov al, 0xff
  PUSH(0x040e); a_mt15_01c7();                                 // 040b call 0x1c7
  ASM_COST(2); SUB16(R.ax, 0x0);                               // 040e cmp ax, 0
  if (--R.cx != 0 && !R.zf) { ASM_BACK(); goto L_0409; }       // 0411 loopne 0x409
  ASM_COST(1); R.cx = (u16)(0xffff);                           // 0413 mov cx, 0xffff
L_0416:   ASM_COST(2); SETL(R.ax, 0x3f);                               // 0416 mov al, 0x3f
  PUSH(0x041b); a_mt15_01c7();                                 // 0418 call 0x1c7
  ASM_COST(2); SUB16(R.ax, 0x0);                               // 041b cmp ax, 0
  if (--R.cx != 0 && !R.zf) { ASM_BACK(); goto L_0416; }       // 041e loopne 0x416
  ASM_COST(2);                                                 // 0420 push cs
  PUSH(mt15_seg); PUSH(0x0424); a_mt15_044e();                 // 0421 call 0x44e
  ASM_COST(5); R.cx = (u16)(0x17);                             // 0424 mov cx, 0x17
  R.bx = (u16)(0x176);                                         // 0427 mov bx, 0x176
  PUSH(R.cs);                                                  // 042a push cs
  R.es = POP();                                                // 042b pop es
  PUSH(0x042f); a_mt15_02b2();                                 // 042c call 0x2b2
  ASM_COST(2); R.ax = (u16)(0xfff6);                           // 042f mov ax, 0xfff6
  R.sp += 4; goto L_ret;                                       // 0432 retf
L_ret:
  return;
}

static u16 f_mt15_0000(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0000();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0003 FUN_1000_0003  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0003(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_0433;                                    // 0003 jmp 0x433
L_0433:   ASM_COST(2);                                                 // 0433 push cs
  PUSH(mt15_seg); PUSH(0x0437); a_mt15_044e();                 // 0434 call 0x44e
  ASM_COST(1); R.cx = (u16)(0xffff);                           // 0437 mov cx, 0xffff
L_043a:   ASM_COST(2); SETL(R.ax, 0xff);                               // 043a mov al, 0xff
  PUSH(0x043f); a_mt15_01c7();                                 // 043c call 0x1c7
  ASM_COST(2); SUB16(R.ax, 0x0);                               // 043f cmp ax, 0
  if (--R.cx != 0 && !R.zf) { ASM_BACK(); goto L_043a; }       // 0442 loopne 0x43a
  ASM_COST(2); R.dx = (u16)(0x330);                            // 0444 mov dx, 0x330
  R.cx = (u16)(0xffff);                                        // 0447 mov cx, 0xffff
L_044a:   ASM_COST(2); SETL(R.ax, ASM_PORT_IN(R.dx));                  // 044a in al, dx
  if (--R.cx != 0) { ASM_BACK(); goto L_044a; }                // 044b loop 0x44a
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 044d retf
L_ret:
  return;
}

static u16 f_mt15_0003(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0003();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0006 FUN_1000_0006  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0006(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_044e;                                    // 0006 jmp 0x44e
L_044e:   ASM_COST(1); SETH(R.dx, 0xf);                                // 044e mov dh, 0xf
L_0450:   ASM_COST(3); SETL(R.ax, 0xb0);                               // 0450 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0452 or al, dh
  PUSH(0x0457); a_mt15_0233();                                 // 0454 call 0x233
  ASM_COST(2); SETL(R.ax, 0x7b);                               // 0457 mov al, 0x7b
  PUSH(0x045c); a_mt15_0233();                                 // 0459 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 045c mov al, 0
  PUSH(0x0461); a_mt15_0233();                                 // 045e call 0x233
  ASM_COST(3); SETL(R.ax, 0xb0);                               // 0461 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0463 or al, dh
  PUSH(0x0468); a_mt15_0233();                                 // 0465 call 0x233
  ASM_COST(2); SETL(R.ax, 0x79);                               // 0468 mov al, 0x79
  PUSH(0x046d); a_mt15_0233();                                 // 046a call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 046d mov al, 0
  PUSH(0x0472); a_mt15_0233();                                 // 046f call 0x233
  ASM_COST(2); SETH(R.dx, DEC8((u8)(R.dx >> 8)));              // 0472 dec dh
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0450; }      // 0474 jg 0x450
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0476 retf
L_ret:
  return;
}

static u16 f_mt15_0006(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0006();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0009 FUN_1000_0009  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0009(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_0477;                                    // 0009 jmp 0x477
L_0477:   ASM_COST(9); PUSH(R.bp);                                     // 0477 push bp
  R.bp = (u16)(R.sp);                                          // 0478 mov bp, sp
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 047a mov bx, word ptr [bp + 8]
  SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 047d mov al, byte ptr [bp + 0xc]
  W8(DS, (u16)(R.bx + 0x3), (u8)R.ax);                         // 0480 mov byte ptr [bx + 3], al
  W8(DS, (u16)(R.bx + 0x6), (u8)R.ax);                         // 0483 mov byte ptr [bx + 6], al
  { u16 a_ = (u16)(R.bp + 0x10); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0486 les bx, ptr [bp + 0x10]
  SUB8(M8(ES, (u16)(R.bx + 0x15)), 0x0);                       // 0489 cmp byte ptr es:[bx + 0x15], 0
  if (!R.zf) goto L_0494;                                      // 048e jne 0x494
  ASM_COST(2); SETL(R.ax, 0x7f);                               // 0490 mov al, 0x7f
  goto L_0497;                                                 // 0492 jmp 0x497
L_0494:   ASM_COST(1); SETL(R.ax, M8(SS, (u16)(R.bp + 0xe)));          // 0494 mov al, byte ptr [bp + 0xe]
L_0497:   ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0497 mov bx, word ptr [bp + 8]
  W8(DS, (u16)(R.bx + 0x4), (u8)R.ax);                         // 049a mov byte ptr [bx + 4], al
  PUSH(R.ax);                                                  // 049d push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 049e mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0x90));                             // 04a1 or al, 0x90
  PUSH(0x04a6); a_mt15_0233();                                 // 04a3 call 0x233
  ASM_COST(2); SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));          // 04a6 mov al, byte ptr [bp + 0xc]
  PUSH(0x04ac); a_mt15_0233();                                 // 04a9 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 04ac pop ax
  PUSH(0x04b0); a_mt15_0233();                                 // 04ad call 0x233
  ASM_COST(2); R.bp = POP();                                   // 04b0 pop bp
  R.sp += 4; goto L_ret;                                       // 04b1 retf
L_ret:
  return;
}

static u16 f_mt15_0009(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4, u16 p5)
{
  ASM_ENTER();
  PUSH((u16)p5);
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0009();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:000C FUN_1000_000c  FIX: recompiled from the machine code (asm2c)
static void a_mt15_000c(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_04b2;                                    // 000c jmp 0x4b2
L_04b2:   ASM_COST(5); PUSH(R.bp);                                     // 04b2 push bp
  R.bp = (u16)(R.sp);                                          // 04b3 mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 04b5 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0x80));                             // 04b8 or al, 0x80
  PUSH(0x04bd); a_mt15_0233();                                 // 04ba call 0x233
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 04bd mov bx, word ptr [bp + 8]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x6)));                       // 04c0 mov al, byte ptr [bx + 6]
  PUSH(0x04c6); a_mt15_0233();                                 // 04c3 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 04c6 mov al, 0
  PUSH(0x04cb); a_mt15_0233();                                 // 04c8 call 0x233
  ASM_COST(2); R.bp = POP();                                   // 04cb pop bp
  R.sp += 4; goto L_ret;                                       // 04cc retf
L_ret:
  return;
}

static u16 f_mt15_000c(u16 p0, u16 p1)
{
  ASM_ENTER();
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_000c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:000F FUN_1000_000f  FIX: recompiled from the machine code (asm2c)
static void a_mt15_000f(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_04cd;                                    // 000f jmp 0x4cd
L_04cd:   ASM_COST(4); PUSH(R.bp);                                     // 04cd push bp
  R.bp = (u16)(R.sp);                                          // 04ce mov bp, sp
  R.bp = POP();                                                // 04d0 pop bp
  R.sp += 4; goto L_ret;                                       // 04d1 retf
L_ret:
  return;
}

static u16 f_mt15_000f(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_000f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0012 FUN_1000_0012  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0012(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_04d2;                                    // 0012 jmp 0x4d2
L_04d2:   ASM_COST(6); PUSH(R.bp);                                     // 04d2 push bp
  R.bp = (u16)(R.sp);                                          // 04d3 mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 04d5 mov ax, word ptr [bp + 6]
  R.ax = (u16)(AND16(R.ax, 0xf));                              // 04d8 and ax, 0xf
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 04db or al, 0xb0
  PUSH(0x04e0); a_mt15_0233();                                 // 04dd call 0x233
  ASM_COST(2); SETL(R.ax, 0x7);                                // 04e0 mov al, 7
  PUSH(0x04e5); a_mt15_0233();                                 // 04e2 call 0x233
  ASM_COST(2); SETL(R.ax, M8(SS, (u16)(R.bp + 0xa)));          // 04e5 mov al, byte ptr [bp + 0xa]
  PUSH(0x04eb); a_mt15_0233();                                 // 04e8 call 0x233
  ASM_COST(2); R.bp = POP();                                   // 04eb pop bp
  R.sp += 4; goto L_ret;                                       // 04ec retf
L_ret:
  return;
}

static u16 f_mt15_0012(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0012();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0015 FUN_1000_0015  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0015(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_04ed;                                    // 0015 jmp 0x4ed
L_04ed:   ASM_COST(5); PUSH(R.bp);                                     // 04ed push bp
  R.bp = (u16)(R.sp);                                          // 04ee mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 04f0 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 04f3 or al, 0xb0
  PUSH(0x04f8); a_mt15_0233();                                 // 04f5 call 0x233
  ASM_COST(2); SETL(R.ax, M8(SS, (u16)(R.bp + 0xa)));          // 04f8 mov al, byte ptr [bp + 0xa]
  PUSH(0x04fe); a_mt15_0233();                                 // 04fb call 0x233
  ASM_COST(2); SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));          // 04fe mov al, byte ptr [bp + 0xc]
  PUSH(0x0504); a_mt15_0233();                                 // 0501 call 0x233
  ASM_COST(2); R.bp = POP();                                   // 0504 pop bp
  R.sp += 4; goto L_ret;                                       // 0505 retf
L_ret:
  return;
}

static u16 f_mt15_0015(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0015();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0018 FUN_1000_0018  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0018(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_0506;                                    // 0018 jmp 0x506
L_0506:   ASM_COST(1); SETH(R.dx, 0xf);                                // 0506 mov dh, 0xf
L_0508:   ASM_COST(3); SETL(R.ax, 0xb0);                               // 0508 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 050a or al, dh
  PUSH(0x050f); a_mt15_0233();                                 // 050c call 0x233
  ASM_COST(2); SETL(R.ax, 0x79);                               // 050f mov al, 0x79
  PUSH(0x0514); a_mt15_0233();                                 // 0511 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 0514 mov al, 0
  PUSH(0x0519); a_mt15_0233();                                 // 0516 call 0x233
  ASM_COST(3); SETH(R.dx, DEC8((u8)(R.dx >> 8)));              // 0519 dec dh
  SUB8((u8)(R.dx >> 8), 0xff);                                 // 051b cmp dh, 0xff
  if (!R.zf) { ASM_BACK(); goto L_0508; }                      // 051e jne 0x508
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0520 retf
L_ret:
  return;
}

static u16 f_mt15_0018(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0018();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:001B FUN_1000_001b  FIX: recompiled from the machine code (asm2c)
static void a_mt15_001b(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_0521;                                    // 001b jmp 0x521
L_0521:   ASM_COST(5); PUSH(R.bp);                                     // 0521 push bp
  R.bp = (u16)(R.sp);                                          // 0522 mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 0524 mov ax, word ptr [bp + 0xa]
  SETL(R.ax, OR8((u8)R.ax, 0xe0));                             // 0527 or al, 0xe0
  PUSH(0x052c); a_mt15_0233();                                 // 0529 call 0x233
  ASM_COST(5); R.ax = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 052c mov ax, word ptr [bp + 8]
  R.ax = (u16)(ADD16(R.ax, 0x2000));                           // 052f add ax, 0x2000
  PUSH(R.ax);                                                  // 0532 push ax
  SETL(R.ax, AND8((u8)R.ax, 0x7f));                            // 0533 and al, 0x7f
  PUSH(0x0538); a_mt15_0233();                                 // 0535 call 0x233
  ASM_COST(5); R.ax = POP();                                   // 0538 pop ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0539 shl ax, 1
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 053b mov al, ah
  SETL(R.ax, AND8((u8)R.ax, 0x7f));                            // 053d and al, 0x7f
  PUSH(0x0542); a_mt15_0233();                                 // 053f call 0x233
  ASM_COST(2); R.bp = POP();                                   // 0542 pop bp
  R.sp += 4; goto L_ret;                                       // 0543 retf
L_ret:
  return;
}

static u16 f_mt15_001b(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_001b();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:001E FUN_1000_001e  FIX: recompiled from the machine code (asm2c)
static void a_mt15_001e(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_0569;                                    // 001e jmp 0x569
L_0569:   ASM_COST(5); PUSH(R.bp);                                     // 0569 push bp
  R.bp = (u16)(R.sp);                                          // 056a mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 056c mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 056f or al, 0xb0
  PUSH(0x0574); a_mt15_0233();                                 // 0571 call 0x233
  ASM_COST(2); SETL(R.ax, 0x7b);                               // 0574 mov al, 0x7b
  PUSH(0x0579); a_mt15_0233();                                 // 0576 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 0579 mov al, 0
  PUSH(0x057e); a_mt15_0233();                                 // 057b call 0x233
  ASM_COST(2); R.bp = POP();                                   // 057e pop bp
  R.sp += 4; goto L_ret;                                       // 057f retf
L_ret:
  return;
}

static u16 f_mt15_001e(u16 p0)
{
  ASM_ENTER();
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_001e();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0021 FUN_1000_0021  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0021(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_0580;                                    // 0021 jmp 0x580
L_0580:   ASM_COST(5); PUSH(R.bp);                                     // 0580 push bp
  R.bp = (u16)(R.sp);                                          // 0581 mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0583 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xc0));                             // 0586 or al, 0xc0
  PUSH(0x058b); a_mt15_0233();                                 // 0588 call 0x233
  ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 058b les bx, ptr [bp + 0xc]
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x44)));                      // 058e mov al, byte ptr es:[bx + 0x44]
  PUSH(0x0595); a_mt15_0233();                                 // 0592 call 0x233
  ASM_COST(6); SETL(R.ax, M8(ES, (u16)(R.bx + 0x12)));         // 0595 mov al, byte ptr es:[bx + 0x12]
  W8(CS, (u16)(0x194), (u8)R.ax);                              // 0599 mov byte ptr cs:[0x194], al
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 059d mov ax, word ptr [bp + 6]
  SETL(R.ax, AND8((u8)R.ax, 0xf));                             // 05a0 and al, 0xf
  SUB16(R.ax, 0xa);                                            // 05a2 cmp ax, 0xa
  if (R.zf) goto L_05a8;                                       // 05a5 je 0x5a8
  ASM_COST(1); R.ax = (u16)(DEC16(R.ax));                      // 05a7 dec ax
L_05a8:   ASM_COST(12); SETL(R.cx, 0x4);                               // 05a8 mov cl, 4
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 05aa shl al, cl
  SETL(R.cx, (u8)R.ax);                                        // 05ac mov cl, al
  SETL(R.ax, M8(CS, (u16)(0x193)));                            // 05ae mov al, byte ptr cs:[0x193]
  SETL(R.ax, AND8((u8)R.ax, 0xf));                             // 05b2 and al, 0xf
  SETL(R.ax, OR8((u8)R.ax, (u8)R.cx));                         // 05b4 or al, cl
  W8(CS, (u16)(0x193), (u8)R.ax);                              // 05b6 mov byte ptr cs:[0x193], al
  R.cx = (u16)(0x4);                                           // 05ba mov cx, 4
  R.bx = (u16)(0x191);                                         // 05bd mov bx, 0x191
  PUSH(R.cs);                                                  // 05c0 push cs
  R.es = POP();                                                // 05c1 pop es
  PUSH(0x05c5); a_mt15_02b2();                                 // 05c2 call 0x2b2
  ASM_COST(3); SETL(R.ax, M8(ES, (u16)(R.bx + 0x45)));         // 05c5 mov al, byte ptr es:[bx + 0x45]
  SUB8((u8)R.ax, 0x0);                                         // 05c9 cmp al, 0
  if (R.zf) goto L_05e4;                                       // 05cb je 0x5e4
  ASM_COST(3); R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));       // 05cd mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 05d0 or al, 0xb0
  PUSH(0x05d5); a_mt15_0233();                                 // 05d2 call 0x233
  ASM_COST(2); SETL(R.ax, 0x7);                                // 05d5 mov al, 7
  PUSH(0x05da); a_mt15_0233();                                 // 05d7 call 0x233
  ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 05da les bx, ptr [bp + 0xc]
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x45)));                      // 05dd mov al, byte ptr es:[bx + 0x45]
  PUSH(0x05e4); a_mt15_0233();                                 // 05e1 call 0x233
L_05e4:   ASM_COST(3); R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));       // 05e4 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 05e7 or al, 0xb0
  PUSH(0x05ec); a_mt15_0233();                                 // 05e9 call 0x233
  ASM_COST(2); SETL(R.ax, 0xa);                                // 05ec mov al, 0xa
  PUSH(0x05f1); a_mt15_0233();                                 // 05ee call 0x233
  ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 05f1 les bx, ptr [bp + 0xc]
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x46)));                      // 05f4 mov al, byte ptr es:[bx + 0x46]
  PUSH(0x05fb); a_mt15_0233();                                 // 05f8 call 0x233
  ASM_COST(2); R.bp = POP();                                   // 05fb pop bp
  R.sp += 4; goto L_ret;                                       // 05fc retf
L_ret:
  return;
}

static u16 f_mt15_0021(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0021();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0024 FUN_1000_0024  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0024(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_0544;                                    // 0024 jmp 0x544
L_0544:   ASM_COST(5); PUSH(R.bp);                                     // 0544 push bp
  R.bp = (u16)(R.sp);                                          // 0545 mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0547 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xe0));                             // 054a or al, 0xe0
  PUSH(0x054f); a_mt15_0233();                                 // 054c call 0x233
  ASM_COST(6); R.ax = (u16)(M16(SS, (u16)(R.bp + 0xa)));       // 054f mov ax, word ptr [bp + 0xa]
  R.bx = (u16)(0x3c);                                          // 0552 mov bx, 0x3c
  MUL16(R.bx);                                                 // 0555 mul bx
  PUSH(R.ax);                                                  // 0557 push ax
  SETL(R.ax, AND8((u8)R.ax, 0x7f));                            // 0558 and al, 0x7f
  PUSH(0x055d); a_mt15_0233();                                 // 055a call 0x233
  ASM_COST(5); R.ax = POP();                                   // 055d pop ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 055e shl ax, 1
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 0560 mov al, ah
  SETL(R.ax, AND8((u8)R.ax, 0x7f));                            // 0562 and al, 0x7f
  PUSH(0x0567); a_mt15_0233();                                 // 0564 call 0x233
  ASM_COST(2); R.bp = POP();                                   // 0567 pop bp
  R.sp += 4; goto L_ret;                                       // 0568 retf
L_ret:
  return;
}

static u16 f_mt15_0024(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0024();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0027 FUN_1000_0027  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0027(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_05fd;                                    // 0027 jmp 0x5fd
L_05fd:   ASM_COST(5); PUSH(R.bp);                                     // 05fd push bp
  R.bp = (u16)(R.sp);                                          // 05fe mov bp, sp
  { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0600 les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x35)), 0x1);                       // 0603 cmp byte ptr es:[bx + 0x35], 1
  if (!R.zf) goto L_0656;                                      // 0608 jne 0x656
  ASM_COST(5); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 060a mov bx, word ptr [bp + 8]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x22)));                      // 060d mov al, byte ptr [bx + 0x22]
  SETL(R.ax, ADD8((u8)R.ax, M8(DS, (u16)(R.bx + 0x3))));       // 0610 add al, byte ptr [bx + 3]
  SUB8((u8)R.ax, M8(DS, (u16)(R.bx + 0x6)));                   // 0613 cmp al, byte ptr [bx + 6]
  if (R.zf) goto L_0656;                                       // 0616 je 0x656
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0618 mov bx, word ptr [bp + 8]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x6)));                       // 061b mov al, byte ptr [bx + 6]
  SETL(R.dx, (u8)R.ax);                                        // 061e mov dl, al
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0620 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0x80));                             // 0623 or al, 0x80
  PUSH(0x0628); a_mt15_0233();                                 // 0625 call 0x233
  ASM_COST(2); SETL(R.ax, (u8)R.dx);                           // 0628 mov al, dl
  PUSH(0x062d); a_mt15_0233();                                 // 062a call 0x233
  ASM_COST(2); SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));           // 062d xor al, al
  PUSH(0x0632); a_mt15_0233();                                 // 062f call 0x233
  ASM_COST(8); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0632 mov bx, word ptr [bp + 8]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x22)));                      // 0635 mov al, byte ptr [bx + 0x22]
  SETL(R.ax, ADD8((u8)R.ax, M8(DS, (u16)(R.bx + 0x3))));       // 0638 add al, byte ptr [bx + 3]
  W8(DS, (u16)(R.bx + 0x6), (u8)R.ax);                         // 063b mov byte ptr [bx + 6], al
  SETL(R.dx, (u8)R.ax);                                        // 063e mov dl, al
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0640 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0x90));                             // 0643 or al, 0x90
  PUSH(0x0648); a_mt15_0233();                                 // 0645 call 0x233
  ASM_COST(2); SETL(R.ax, (u8)R.dx);                           // 0648 mov al, dl
  PUSH(0x064d); a_mt15_0233();                                 // 064a call 0x233
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 064d mov bx, word ptr [bp + 8]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x4)));                       // 0650 mov al, byte ptr [bx + 4]
  PUSH(0x0656); a_mt15_0233();                                 // 0653 call 0x233
L_0656:   ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0656 les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x28)), 0x4);                       // 0659 cmp byte ptr es:[bx + 0x28], 4
  if (!R.zf) goto L_067b;                                      // 065e jne 0x67b
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0660 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x1c)));                   // 0663 mov ax, word ptr [bx + 0x1c]
  PUSH(R.ax);                                                  // 0666 push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0667 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 066a or al, 0xb0
  PUSH(0x066f); a_mt15_0233();                                 // 066c call 0x233
  ASM_COST(2); SETL(R.ax, 0x1);                                // 066f mov al, 1
  PUSH(0x0674); a_mt15_0233();                                 // 0671 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 0674 pop ax
  PUSH(0x0678); a_mt15_0233();                                 // 0675 call 0x233
  ASM_COST(1); goto L_069a;                                    // 0678 jmp 0x69a
L_067b:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x28)), 0x2);          // 067b cmp byte ptr es:[bx + 0x28], 2
  if (!R.zf) goto L_069a;                                      // 0680 jne 0x69a
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0682 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x1c)));                   // 0685 mov ax, word ptr [bx + 0x1c]
  PUSH(R.ax);                                                  // 0688 push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0689 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xe0));                             // 068c or al, 0xe0
  PUSH(0x0691); a_mt15_0233();                                 // 068e call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 0691 mov al, 0
  PUSH(0x0696); a_mt15_0233();                                 // 0693 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 0696 pop ax
  PUSH(0x069a); a_mt15_0233();                                 // 0697 call 0x233
L_069a:   ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 069a les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x4);                       // 069d cmp byte ptr es:[bx + 0x19], 4
  if (!R.zf) goto L_06bf;                                      // 06a2 jne 0x6bf
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 06a4 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 06a7 mov ax, word ptr [bx + 0x14]
  PUSH(R.ax);                                                  // 06aa push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 06ab mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 06ae or al, 0xb0
  PUSH(0x06b3); a_mt15_0233();                                 // 06b0 call 0x233
  ASM_COST(2); SETL(R.ax, 0x1);                                // 06b3 mov al, 1
  PUSH(0x06b8); a_mt15_0233();                                 // 06b5 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06b8 pop ax
  PUSH(0x06bc); a_mt15_0233();                                 // 06b9 call 0x233
  ASM_COST(1); goto L_06de;                                    // 06bc jmp 0x6de
L_06bf:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x2);          // 06bf cmp byte ptr es:[bx + 0x19], 2
  if (!R.zf) goto L_06de;                                      // 06c4 jne 0x6de
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 06c6 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 06c9 mov ax, word ptr [bx + 0x14]
  PUSH(R.ax);                                                  // 06cc push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 06cd mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xe0));                             // 06d0 or al, 0xe0
  PUSH(0x06d5); a_mt15_0233();                                 // 06d2 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 06d5 mov al, 0
  PUSH(0x06da); a_mt15_0233();                                 // 06d7 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06da pop ax
  PUSH(0x06de); a_mt15_0233();                                 // 06db call 0x233
L_06de:   ASM_COST(2); R.bp = POP();                                   // 06de pop bp
  R.sp += 4; goto L_ret;                                       // 06df retf
L_ret:
  return;
}

static u16 f_mt15_0027(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0027();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:002A FUN_1000_002a  FIX: recompiled from the machine code (asm2c)
static void a_mt15_002a(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_06e0;                                    // 002a jmp 0x6e0
L_06e0:   ASM_COST(4); PUSH(R.bp);                                     // 06e0 push bp
  R.bp = (u16)(R.sp);                                          // 06e1 mov bp, sp
  R.bp = POP();                                                // 06e3 pop bp
  R.sp += 4; goto L_ret;                                       // 06e4 retf
L_ret:
  return;
}

static u16 f_mt15_002a(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_002a();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:002D FUN_1000_002d  FIX: recompiled from the machine code (asm2c)
static void a_mt15_002d(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_06e5;                                    // 002d jmp 0x6e5
L_06e5:   ASM_COST(4); PUSH(R.bp);                                     // 06e5 push bp
  R.bp = (u16)(R.sp);                                          // 06e6 mov bp, sp
  R.bp = POP();                                                // 06e8 pop bp
  R.sp += 4; goto L_ret;                                       // 06e9 retf
L_ret:
  return;
}

static u16 f_mt15_002d(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_002d();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0030 FUN_1000_0030  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0030(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_06ea;                                    // 0030 jmp 0x6ea
L_06ea:   ASM_COST(4); PUSH(R.bp);                                     // 06ea push bp
  R.bp = (u16)(R.sp);                                          // 06eb mov bp, sp
  R.bp = POP();                                                // 06ed pop bp
  R.sp += 4; goto L_ret;                                       // 06ee retf
L_ret:
  return;
}

static u16 f_mt15_0030(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0030();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0033 FUN_1000_0033  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0033(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_06ef;                                    // 0033 jmp 0x6ef
L_06ef:   ASM_COST(4); PUSH(R.bp);                                     // 06ef push bp
  R.bp = (u16)(R.sp);                                          // 06f0 mov bp, sp
  R.bp = POP();                                                // 06f2 pop bp
  R.sp += 4; goto L_ret;                                       // 06f3 retf
L_ret:
  return;
}

static u16 f_mt15_0033(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0033();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0036 FUN_1000_0036  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0036(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_06f4;                                    // 0036 jmp 0x6f4
L_06f4:   ASM_COST(5); PUSH(R.bp);                                     // 06f4 push bp
  R.bp = (u16)(R.sp);                                          // 06f5 mov bp, sp
  R.ax = (u16)(0xff);                                          // 06f7 mov ax, 0xff
  R.bp = POP();                                                // 06fa pop bp
  R.sp += 4; goto L_ret;                                       // 06fb retf
L_ret:
  return;
}

static u16 f_mt15_0036(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0036();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0039 FUN_1000_0039  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0039(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_03f3;                                    // 0039 jmp 0x3f3
L_03f3:   ASM_COST(4); PUSH(R.bp);                                     // 03f3 push bp
  R.bp = (u16)(R.sp);                                          // 03f4 mov bp, sp
  R.cx = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 03f6 mov cx, word ptr [bp + 6]
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 03f9 mov bx, word ptr [bp + 8]
L_03fc:   ASM_COST(2); SETL(R.ax, M8(DS, (u16)(R.bx)));                // 03fc mov al, byte ptr [bx]
  PUSH(0x0401); a_mt15_0233();                                 // 03fe call 0x233
  ASM_COST(2); R.bx = (u16)(INC16(R.bx));                      // 0401 inc bx
  if (--R.cx != 0) { ASM_BACK(); goto L_03fc; }                // 0402 loop 0x3fc
  ASM_COST(2); R.bp = POP();                                   // 0404 pop bp
  R.sp += 4; goto L_ret;                                       // 0405 retf
L_ret:
  return;
}

static u16 f_mt15_0039(u16 p0, u16 p1)
{
  ASM_ENTER();
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0039();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:003C FUN_1000_003c  FIX: recompiled from the machine code (asm2c)
static void a_mt15_003c(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_02f4;                                    // 003c jmp 0x2f4
L_02f4:   ASM_COST(5); PUSH(R.si);                                     // 02f4 push si
  R.ax = (u16)(0xffff);                                        // 02f5 mov ax, 0xffff
  R.si = (u16)(M16(CS, (u16)(0x174)));                         // 02f8 mov si, word ptr cs:[0x174]
  SUB16(R.si, M16(CS, (u16)(0x172)));                          // 02fd cmp si, word ptr cs:[0x172]
  if (R.zf) goto L_0319;                                       // 0302 je 0x319
  ASM_COST(5); SETH(R.ax, 0x0);                                // 0304 mov ah, 0
  SETL(R.ax, M8(CS, (u16)(R.si + 0x14a)));                     // 0306 mov al, byte ptr cs:[si + 0x14a]
  R.si = (u16)(INC16(R.si));                                   // 030b inc si
  SUB16(R.si, 0x28);                                           // 030c cmp si, 0x28
  if (!R.zf) goto L_0314;                                      // 030f jne 0x314
  ASM_COST(1); R.si = (u16)(0x0);                              // 0311 mov si, 0
L_0314:   ASM_COST(1); W16(CS, (u16)(0x174), R.si);                    // 0314 mov word ptr cs:[0x174], si
L_0319:   ASM_COST(2); R.si = POP();                                   // 0319 pop si
  R.sp += 4; goto L_ret;                                       // 031a retf
L_ret:
  return;
}

static u16 f_mt15_003c(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_003c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:003F FUN_1000_003f  FIX: recompiled from the machine code (asm2c)
static void a_mt15_003f(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_031b;                                    // 003f jmp 0x31b
L_031b:   ASM_COST(5); PUSH(R.bp);                                     // 031b push bp
  R.bp = (u16)(R.sp);                                          // 031c mov bp, sp
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 031e les bx, ptr [bp + 8]
  R.cx = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0321 mov cx, word ptr [bp + 6]
  PUSH(0x0327); a_mt15_02b2();                                 // 0324 call 0x2b2
  ASM_COST(2); R.bp = POP();                                   // 0327 pop bp
  R.sp += 4; goto L_ret;                                       // 0328 retf
L_ret:
  return;
}

static u16 f_mt15_003f(u16 p0, u16 p1)
{
  ASM_ENTER();
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_003f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0042 FUN_1000_0042  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0042(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_0329;                                    // 0042 jmp 0x329
L_0329:   ASM_COST(20); PUSH(R.bp);                                    // 0329 push bp
  R.bp = (u16)(R.sp);                                          // 032a mov bp, sp
  PUSH(FLAGS16());                                             // 032c pushf
  PUSH(R.si);                                                  // 032d push si
  PUSH(R.di);                                                  // 032e push di
  PUSH(R.ds);                                                  // 032f push ds
  PUSH(R.es);                                                  // 0330 push es
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0331 xor al, al
  W8(CS, (u16)(0x45), (u8)R.ax);                               // 0333 mov byte ptr cs:[0x45], al
  W8(CS, (u16)(0x46), (u8)R.ax);                               // 0337 mov byte ptr cs:[0x46], al
  W8(CS, (u16)(0x47), (u8)R.ax);                               // 033b mov byte ptr cs:[0x47], al
  W8(CS, (u16)(0x48), (u8)R.ax);                               // 033f mov byte ptr cs:[0x48], al
  { u16 a_ = (u16)(R.bp + 0x6); R.si = (u16)(M16(SS, a_)); R.ds = M16(SS, (u16)(a_ + 2)); } // 0343 lds si, ptr [bp + 6]
  PUSH(R.cs);                                                  // 0346 push cs
  R.es = POP();                                                // 0347 pop es
  SETL(R.ax, M8(DS, (u16)(R.si)));                             // 0348 mov al, byte ptr [si]
  R.si = (u16)(INC16(R.si));                                   // 034a inc si
  W8(CS, (u16)(0x49), (u8)R.ax);                               // 034b mov byte ptr cs:[0x49], al
  SETL(R.ax, OR8((u8)R.ax, (u8)R.ax));                         // 034f or al, al
  if (!R.zf) goto L_0356;                                      // 0351 jne 0x356
  ASM_COST(1); goto L_03ec;                                    // 0353 jmp 0x3ec
L_0356:   ASM_COST(17); R.di = (u16)(0x4a);                            // 0356 mov di, 0x4a
  W8(ES, (u16)(R.di), 0x5);                                    // 0359 mov byte ptr es:[di], 5
  R.di = (u16)(INC16(R.di));                                   // 035d inc di
  SETL(R.ax, M8(CS, (u16)(0x45)));                             // 035e mov al, byte ptr cs:[0x45]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 0362 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 0365 inc di
  SETL(R.ax, M8(CS, (u16)(0x46)));                             // 0366 mov al, byte ptr cs:[0x46]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 036a mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 036d inc di
  SETL(R.ax, M8(DS, (u16)(R.si)));                             // 036e mov al, byte ptr [si]
  PUSH(R.ax);                                                  // 0370 push ax
  R.cx = (u16)(0x8);                                           // 0371 mov cx, 8
  R.df = 0;                                                    // 0374 cld
  REPMOVSB();                                                  // 0375 rep movsb byte ptr es:[di], byte ptr [si]
  R.bx = (u16)(0x4a);                                          // 0377 mov bx, 0x4a
  R.cx = (u16)(0xb);                                           // 037a mov cx, 0xb
  PUSH(0x0380); a_mt15_02b2();                                 // 037d call 0x2b2
  ASM_COST(2); R.ax = (u16)(0xfde8);                           // 0380 mov ax, 0xfde8
  PUSH(0x0386); a_mt15_0195();                                 // 0383 call 0x195
  ASM_COST(5); SETL(R.ax, M8(CS, (u16)(0x46)));                // 0386 mov al, byte ptr cs:[0x46]
  SETL(R.ax, ADD8((u8)R.ax, 0x8));                             // 038a add al, 8
  W8(CS, (u16)(0x46), (u8)R.ax);                               // 038c mov byte ptr cs:[0x46], al
  SETL(R.ax, AND8((u8)R.ax, 0x80));                            // 0390 and al, 0x80
  if (R.zf) goto L_039f;                                       // 0392 je 0x39f
  ASM_COST(3); SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));           // 0394 xor al, al
  W8(CS, (u16)(0x46), (u8)R.ax);                               // 0396 mov byte ptr cs:[0x46], al
  W8(CS, (u16)(0x45), INC8(M8(CS, (u16)(0x45))));              // 039a inc byte ptr cs:[0x45]
L_039f:   ASM_COST(3); R.ax = POP();                                   // 039f pop ax
  SUB8((u8)R.ax, 0x2);                                         // 03a0 cmp al, 2
  if (!R.zf) goto L_03db;                                      // 03a2 jne 0x3db
  ASM_COST(15); R.di = (u16)(0x4a);                            // 03a4 mov di, 0x4a
  W8(ES, (u16)(R.di), 0x8);                                    // 03a7 mov byte ptr es:[di], 8
  R.di = (u16)(INC16(R.di));                                   // 03ab inc di
  SETL(R.ax, M8(CS, (u16)(0x47)));                             // 03ac mov al, byte ptr cs:[0x47]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 03b0 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 03b3 inc di
  SETL(R.ax, M8(CS, (u16)(0x48)));                             // 03b4 mov al, byte ptr cs:[0x48]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 03b8 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 03bb inc di
  R.cx = (u16)(0xf6);                                          // 03bc mov cx, 0xf6
  R.df = 0;                                                    // 03bf cld
  REPMOVSB();                                                  // 03c0 rep movsb byte ptr es:[di], byte ptr [si]
  R.bx = (u16)(0x4a);                                          // 03c2 mov bx, 0x4a
  R.cx = (u16)(0xf9);                                          // 03c5 mov cx, 0xf9
  PUSH(0x03cb); a_mt15_02b2();                                 // 03c8 call 0x2b2
  ASM_COST(2); R.ax = (u16)(0xfde8);                           // 03cb mov ax, 0xfde8
  PUSH(0x03d1); a_mt15_0195();                                 // 03ce call 0x195
  ASM_COST(3); SETL(R.ax, M8(CS, (u16)(0x47)));                // 03d1 mov al, byte ptr cs:[0x47]
  SETL(R.ax, ADD8((u8)R.ax, 0x2));                             // 03d5 add al, 2
  W8(CS, (u16)(0x47), (u8)R.ax);                               // 03d7 mov byte ptr cs:[0x47], al
L_03db:   ASM_COST(5); SETL(R.ax, M8(CS, (u16)(0x49)));                // 03db mov al, byte ptr cs:[0x49]
  SETL(R.ax, DEC8((u8)R.ax));                                  // 03df dec al
  W8(CS, (u16)(0x49), (u8)R.ax);                               // 03e1 mov byte ptr cs:[0x49], al
  SETL(R.ax, OR8((u8)R.ax, (u8)R.ax));                         // 03e5 or al, al
  if (R.zf) goto L_03ec;                                       // 03e7 je 0x3ec
  ASM_COST(1); ASM_BACK(); goto L_0356;                        // 03e9 jmp 0x356
L_03ec:   ASM_COST(7); R.es = POP();                                   // 03ec pop es
  R.ds = POP();                                                // 03ed pop ds
  R.di = POP();                                                // 03ee pop di
  R.si = POP();                                                // 03ef pop si
  SETFLAGS16(POP());                                           // 03f0 popf
  R.bp = POP();                                                // 03f1 pop bp
  R.sp += 4; goto L_ret;                                       // 03f2 retf
L_ret:
  return;
}

static u16 f_mt15_0042(u16 p0)
{
  ASM_ENTER();
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0042();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:02BA FUN_1000_02ba  FIX: recompiled from the machine code (asm2c)
static void a_mt15_02ba(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, 0x41);                               // 02ba mov al, 0x41
  PUSH(0x02bf); a_mt15_0233();                                 // 02bc call 0x233
  ASM_COST(2); SETL(R.ax, 0x10);                               // 02bf mov al, 0x10
  PUSH(0x02c4); a_mt15_0233();                                 // 02c1 call 0x233
  ASM_COST(2); SETL(R.ax, 0x16);                               // 02c4 mov al, 0x16
  PUSH(0x02c9); a_mt15_0233();                                 // 02c6 call 0x233
  ASM_COST(2); SETL(R.ax, 0x12);                               // 02c9 mov al, 0x12
  PUSH(0x02ce); a_mt15_0233();                                 // 02cb call 0x233
  ASM_COST(1); R.dx = (u16)(0x0);                              // 02ce mov dx, 0
L_02d1:   ASM_COST(4); SETL(R.ax, M8(ES, (u16)(R.si)));                // 02d1 mov al, byte ptr es:[si]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 02d4 xor ah, ah
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 02d6 add dx, ax
  PUSH(0x02db); a_mt15_0233();                                 // 02d8 call 0x233
  ASM_COST(2); R.ax = (u16)(0x3e8);                            // 02db mov ax, 0x3e8
  PUSH(0x02e1); a_mt15_0195();                                 // 02de call 0x195
  ASM_COST(2); R.si = (u16)(INC16(R.si));                      // 02e1 inc si
  if (--R.cx != 0) { ASM_BACK(); goto L_02d1; }                // 02e2 loop 0x2d1
  ASM_COST(4); SETL(R.ax, (u8)R.dx);                           // 02e4 mov al, dl
  SETL(R.ax, NEG8((u8)R.ax));                                  // 02e6 neg al
  SETL(R.ax, AND8((u8)R.ax, 0x7f));                            // 02e8 and al, 0x7f
  PUSH(0x02ed); a_mt15_0233();                                 // 02ea call 0x233
  ASM_COST(2); SETL(R.ax, 0xf7);                               // 02ed mov al, 0xf7
  PUSH(0x02f2); a_mt15_0233();                                 // 02ef call 0x233
  ASM_COST(2); R.si = POP();                                   // 02f2 pop si
  R.sp += 2; goto L_ret;                                       // 02f3 ret
L_ret:
  return;
}

static u16 f_mt15_02ba(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_mt15_02ba();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:02BF FUN_1000_02bf  FIX: recompiled from the machine code (asm2c)
static void a_mt15_02bf(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, 0x10);                               // 02bf mov al, 0x10
  PUSH(0x02c4); a_mt15_0233();                                 // 02c1 call 0x233
  ASM_COST(2); SETL(R.ax, 0x16);                               // 02c4 mov al, 0x16
  PUSH(0x02c9); a_mt15_0233();                                 // 02c6 call 0x233
  ASM_COST(2); SETL(R.ax, 0x12);                               // 02c9 mov al, 0x12
  PUSH(0x02ce); a_mt15_0233();                                 // 02cb call 0x233
  ASM_COST(1); R.dx = (u16)(0x0);                              // 02ce mov dx, 0
L_02d1:   ASM_COST(4); SETL(R.ax, M8(ES, (u16)(R.si)));                // 02d1 mov al, byte ptr es:[si]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 02d4 xor ah, ah
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 02d6 add dx, ax
  PUSH(0x02db); a_mt15_0233();                                 // 02d8 call 0x233
  ASM_COST(2); R.ax = (u16)(0x3e8);                            // 02db mov ax, 0x3e8
  PUSH(0x02e1); a_mt15_0195();                                 // 02de call 0x195
  ASM_COST(2); R.si = (u16)(INC16(R.si));                      // 02e1 inc si
  if (--R.cx != 0) { ASM_BACK(); goto L_02d1; }                // 02e2 loop 0x2d1
  ASM_COST(4); SETL(R.ax, (u8)R.dx);                           // 02e4 mov al, dl
  SETL(R.ax, NEG8((u8)R.ax));                                  // 02e6 neg al
  SETL(R.ax, AND8((u8)R.ax, 0x7f));                            // 02e8 and al, 0x7f
  PUSH(0x02ed); a_mt15_0233();                                 // 02ea call 0x233
  ASM_COST(2); SETL(R.ax, 0xf7);                               // 02ed mov al, 0xf7
  PUSH(0x02f2); a_mt15_0233();                                 // 02ef call 0x233
  ASM_COST(2); R.si = POP();                                   // 02f2 pop si
  R.sp += 2; goto L_ret;                                       // 02f3 ret
L_ret:
  return;
}

static u16 f_mt15_02bf(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_mt15_02bf();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:02C4 FUN_1000_02c4  FIX: recompiled from the machine code (asm2c)
static void a_mt15_02c4(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, 0x16);                               // 02c4 mov al, 0x16
  PUSH(0x02c9); a_mt15_0233();                                 // 02c6 call 0x233
  ASM_COST(2); SETL(R.ax, 0x12);                               // 02c9 mov al, 0x12
  PUSH(0x02ce); a_mt15_0233();                                 // 02cb call 0x233
  ASM_COST(1); R.dx = (u16)(0x0);                              // 02ce mov dx, 0
L_02d1:   ASM_COST(4); SETL(R.ax, M8(ES, (u16)(R.si)));                // 02d1 mov al, byte ptr es:[si]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 02d4 xor ah, ah
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 02d6 add dx, ax
  PUSH(0x02db); a_mt15_0233();                                 // 02d8 call 0x233
  ASM_COST(2); R.ax = (u16)(0x3e8);                            // 02db mov ax, 0x3e8
  PUSH(0x02e1); a_mt15_0195();                                 // 02de call 0x195
  ASM_COST(2); R.si = (u16)(INC16(R.si));                      // 02e1 inc si
  if (--R.cx != 0) { ASM_BACK(); goto L_02d1; }                // 02e2 loop 0x2d1
  ASM_COST(4); SETL(R.ax, (u8)R.dx);                           // 02e4 mov al, dl
  SETL(R.ax, NEG8((u8)R.ax));                                  // 02e6 neg al
  SETL(R.ax, AND8((u8)R.ax, 0x7f));                            // 02e8 and al, 0x7f
  PUSH(0x02ed); a_mt15_0233();                                 // 02ea call 0x233
  ASM_COST(2); SETL(R.ax, 0xf7);                               // 02ed mov al, 0xf7
  PUSH(0x02f2); a_mt15_0233();                                 // 02ef call 0x233
  ASM_COST(2); R.si = POP();                                   // 02f2 pop si
  R.sp += 2; goto L_ret;                                       // 02f3 ret
L_ret:
  return;
}

static u16 f_mt15_02c4(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_mt15_02c4();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:02C9 FUN_1000_02c9  FIX: recompiled from the machine code (asm2c)
static void a_mt15_02c9(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, 0x12);                               // 02c9 mov al, 0x12
  PUSH(0x02ce); a_mt15_0233();                                 // 02cb call 0x233
  ASM_COST(1); R.dx = (u16)(0x0);                              // 02ce mov dx, 0
L_02d1:   ASM_COST(4); SETL(R.ax, M8(ES, (u16)(R.si)));                // 02d1 mov al, byte ptr es:[si]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 02d4 xor ah, ah
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 02d6 add dx, ax
  PUSH(0x02db); a_mt15_0233();                                 // 02d8 call 0x233
  ASM_COST(2); R.ax = (u16)(0x3e8);                            // 02db mov ax, 0x3e8
  PUSH(0x02e1); a_mt15_0195();                                 // 02de call 0x195
  ASM_COST(2); R.si = (u16)(INC16(R.si));                      // 02e1 inc si
  if (--R.cx != 0) { ASM_BACK(); goto L_02d1; }                // 02e2 loop 0x2d1
  ASM_COST(4); SETL(R.ax, (u8)R.dx);                           // 02e4 mov al, dl
  SETL(R.ax, NEG8((u8)R.ax));                                  // 02e6 neg al
  SETL(R.ax, AND8((u8)R.ax, 0x7f));                            // 02e8 and al, 0x7f
  PUSH(0x02ed); a_mt15_0233();                                 // 02ea call 0x233
  ASM_COST(2); SETL(R.ax, 0xf7);                               // 02ed mov al, 0xf7
  PUSH(0x02f2); a_mt15_0233();                                 // 02ef call 0x233
  ASM_COST(2); R.si = POP();                                   // 02f2 pop si
  R.sp += 2; goto L_ret;                                       // 02f3 ret
L_ret:
  return;
}

static u16 f_mt15_02c9(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_mt15_02c9();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:02DB FUN_1000_02db  FIX: recompiled from the machine code (asm2c)
static void a_mt15_02db(void)
{
  R.cs = mt15_seg;
  goto L_02db;
L_02d1:   ASM_COST(4); SETL(R.ax, M8(ES, (u16)(R.si)));                // 02d1 mov al, byte ptr es:[si]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 02d4 xor ah, ah
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 02d6 add dx, ax
  PUSH(0x02db); a_mt15_0233();                                 // 02d8 call 0x233
L_02db:   ASM_COST(2); R.ax = (u16)(0x3e8);                            // 02db mov ax, 0x3e8
  PUSH(0x02e1); a_mt15_0195();                                 // 02de call 0x195
  ASM_COST(2); R.si = (u16)(INC16(R.si));                      // 02e1 inc si
  if (--R.cx != 0) { ASM_BACK(); goto L_02d1; }                // 02e2 loop 0x2d1
  ASM_COST(4); SETL(R.ax, (u8)R.dx);                           // 02e4 mov al, dl
  SETL(R.ax, NEG8((u8)R.ax));                                  // 02e6 neg al
  SETL(R.ax, AND8((u8)R.ax, 0x7f));                            // 02e8 and al, 0x7f
  PUSH(0x02ed); a_mt15_0233();                                 // 02ea call 0x233
  ASM_COST(2); SETL(R.ax, 0xf7);                               // 02ed mov al, 0xf7
  PUSH(0x02f2); a_mt15_0233();                                 // 02ef call 0x233
  ASM_COST(2); R.si = POP();                                   // 02f2 pop si
  R.sp += 2; goto L_ret;                                       // 02f3 ret
L_ret:
  return;
}

static u16 f_mt15_02db(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_mt15_02db();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:02ED FUN_1000_02ed  FIX: recompiled from the machine code (asm2c)
static void a_mt15_02ed(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, 0xf7);                               // 02ed mov al, 0xf7
  PUSH(0x02f2); a_mt15_0233();                                 // 02ef call 0x233
  ASM_COST(2); R.si = POP();                                   // 02f2 pop si
  R.sp += 2; goto L_ret;                                       // 02f3 ret
L_ret:
  return;
}

static u16 f_mt15_02ed(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_mt15_02ed();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0330 FUN_1000_0330  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0330(void)
{
  R.cs = mt15_seg;
  ASM_COST(14); PUSH(R.es);                                    // 0330 push es
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0331 xor al, al
  W8(CS, (u16)(0x45), (u8)R.ax);                               // 0333 mov byte ptr cs:[0x45], al
  W8(CS, (u16)(0x46), (u8)R.ax);                               // 0337 mov byte ptr cs:[0x46], al
  W8(CS, (u16)(0x47), (u8)R.ax);                               // 033b mov byte ptr cs:[0x47], al
  W8(CS, (u16)(0x48), (u8)R.ax);                               // 033f mov byte ptr cs:[0x48], al
  { u16 a_ = (u16)(R.bp + 0x6); R.si = (u16)(M16(SS, a_)); R.ds = M16(SS, (u16)(a_ + 2)); } // 0343 lds si, ptr [bp + 6]
  PUSH(R.cs);                                                  // 0346 push cs
  R.es = POP();                                                // 0347 pop es
  SETL(R.ax, M8(DS, (u16)(R.si)));                             // 0348 mov al, byte ptr [si]
  R.si = (u16)(INC16(R.si));                                   // 034a inc si
  W8(CS, (u16)(0x49), (u8)R.ax);                               // 034b mov byte ptr cs:[0x49], al
  SETL(R.ax, OR8((u8)R.ax, (u8)R.ax));                         // 034f or al, al
  if (!R.zf) goto L_0356;                                      // 0351 jne 0x356
  ASM_COST(1); goto L_03ec;                                    // 0353 jmp 0x3ec
L_0356:   ASM_COST(17); R.di = (u16)(0x4a);                            // 0356 mov di, 0x4a
  W8(ES, (u16)(R.di), 0x5);                                    // 0359 mov byte ptr es:[di], 5
  R.di = (u16)(INC16(R.di));                                   // 035d inc di
  SETL(R.ax, M8(CS, (u16)(0x45)));                             // 035e mov al, byte ptr cs:[0x45]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 0362 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 0365 inc di
  SETL(R.ax, M8(CS, (u16)(0x46)));                             // 0366 mov al, byte ptr cs:[0x46]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 036a mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 036d inc di
  SETL(R.ax, M8(DS, (u16)(R.si)));                             // 036e mov al, byte ptr [si]
  PUSH(R.ax);                                                  // 0370 push ax
  R.cx = (u16)(0x8);                                           // 0371 mov cx, 8
  R.df = 0;                                                    // 0374 cld
  REPMOVSB();                                                  // 0375 rep movsb byte ptr es:[di], byte ptr [si]
  R.bx = (u16)(0x4a);                                          // 0377 mov bx, 0x4a
  R.cx = (u16)(0xb);                                           // 037a mov cx, 0xb
  PUSH(0x0380); a_mt15_02b2();                                 // 037d call 0x2b2
  ASM_COST(2); R.ax = (u16)(0xfde8);                           // 0380 mov ax, 0xfde8
  PUSH(0x0386); a_mt15_0195();                                 // 0383 call 0x195
  ASM_COST(5); SETL(R.ax, M8(CS, (u16)(0x46)));                // 0386 mov al, byte ptr cs:[0x46]
  SETL(R.ax, ADD8((u8)R.ax, 0x8));                             // 038a add al, 8
  W8(CS, (u16)(0x46), (u8)R.ax);                               // 038c mov byte ptr cs:[0x46], al
  SETL(R.ax, AND8((u8)R.ax, 0x80));                            // 0390 and al, 0x80
  if (R.zf) goto L_039f;                                       // 0392 je 0x39f
  ASM_COST(3); SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));           // 0394 xor al, al
  W8(CS, (u16)(0x46), (u8)R.ax);                               // 0396 mov byte ptr cs:[0x46], al
  W8(CS, (u16)(0x45), INC8(M8(CS, (u16)(0x45))));              // 039a inc byte ptr cs:[0x45]
L_039f:   ASM_COST(3); R.ax = POP();                                   // 039f pop ax
  SUB8((u8)R.ax, 0x2);                                         // 03a0 cmp al, 2
  if (!R.zf) goto L_03db;                                      // 03a2 jne 0x3db
  ASM_COST(15); R.di = (u16)(0x4a);                            // 03a4 mov di, 0x4a
  W8(ES, (u16)(R.di), 0x8);                                    // 03a7 mov byte ptr es:[di], 8
  R.di = (u16)(INC16(R.di));                                   // 03ab inc di
  SETL(R.ax, M8(CS, (u16)(0x47)));                             // 03ac mov al, byte ptr cs:[0x47]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 03b0 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 03b3 inc di
  SETL(R.ax, M8(CS, (u16)(0x48)));                             // 03b4 mov al, byte ptr cs:[0x48]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 03b8 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 03bb inc di
  R.cx = (u16)(0xf6);                                          // 03bc mov cx, 0xf6
  R.df = 0;                                                    // 03bf cld
  REPMOVSB();                                                  // 03c0 rep movsb byte ptr es:[di], byte ptr [si]
  R.bx = (u16)(0x4a);                                          // 03c2 mov bx, 0x4a
  R.cx = (u16)(0xf9);                                          // 03c5 mov cx, 0xf9
  PUSH(0x03cb); a_mt15_02b2();                                 // 03c8 call 0x2b2
  ASM_COST(2); R.ax = (u16)(0xfde8);                           // 03cb mov ax, 0xfde8
  PUSH(0x03d1); a_mt15_0195();                                 // 03ce call 0x195
  ASM_COST(3); SETL(R.ax, M8(CS, (u16)(0x47)));                // 03d1 mov al, byte ptr cs:[0x47]
  SETL(R.ax, ADD8((u8)R.ax, 0x2));                             // 03d5 add al, 2
  W8(CS, (u16)(0x47), (u8)R.ax);                               // 03d7 mov byte ptr cs:[0x47], al
L_03db:   ASM_COST(5); SETL(R.ax, M8(CS, (u16)(0x49)));                // 03db mov al, byte ptr cs:[0x49]
  SETL(R.ax, DEC8((u8)R.ax));                                  // 03df dec al
  W8(CS, (u16)(0x49), (u8)R.ax);                               // 03e1 mov byte ptr cs:[0x49], al
  SETL(R.ax, OR8((u8)R.ax, (u8)R.ax));                         // 03e5 or al, al
  if (R.zf) goto L_03ec;                                       // 03e7 je 0x3ec
  ASM_COST(1); ASM_BACK(); goto L_0356;                        // 03e9 jmp 0x356
L_03ec:   ASM_COST(7); R.es = POP();                                   // 03ec pop es
  R.ds = POP();                                                // 03ed pop ds
  R.di = POP();                                                // 03ee pop di
  R.si = POP();                                                // 03ef pop si
  SETFLAGS16(POP());                                           // 03f0 popf
  R.bp = POP();                                                // 03f1 pop bp
  R.sp += 4; goto L_ret;                                       // 03f2 retf
L_ret:
  return;
}

static u16 f_mt15_0330(u16 p0)
{
  ASM_ENTER();
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0330();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0380 FUN_1000_0380  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0380(void)
{
  R.cs = mt15_seg;
  goto L_0380;
L_0356:   ASM_COST(17); R.di = (u16)(0x4a);                            // 0356 mov di, 0x4a
  W8(ES, (u16)(R.di), 0x5);                                    // 0359 mov byte ptr es:[di], 5
  R.di = (u16)(INC16(R.di));                                   // 035d inc di
  SETL(R.ax, M8(CS, (u16)(0x45)));                             // 035e mov al, byte ptr cs:[0x45]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 0362 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 0365 inc di
  SETL(R.ax, M8(CS, (u16)(0x46)));                             // 0366 mov al, byte ptr cs:[0x46]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 036a mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 036d inc di
  SETL(R.ax, M8(DS, (u16)(R.si)));                             // 036e mov al, byte ptr [si]
  PUSH(R.ax);                                                  // 0370 push ax
  R.cx = (u16)(0x8);                                           // 0371 mov cx, 8
  R.df = 0;                                                    // 0374 cld
  REPMOVSB();                                                  // 0375 rep movsb byte ptr es:[di], byte ptr [si]
  R.bx = (u16)(0x4a);                                          // 0377 mov bx, 0x4a
  R.cx = (u16)(0xb);                                           // 037a mov cx, 0xb
  PUSH(0x0380); a_mt15_02b2();                                 // 037d call 0x2b2
L_0380:   ASM_COST(2); R.ax = (u16)(0xfde8);                           // 0380 mov ax, 0xfde8
  PUSH(0x0386); a_mt15_0195();                                 // 0383 call 0x195
  ASM_COST(5); SETL(R.ax, M8(CS, (u16)(0x46)));                // 0386 mov al, byte ptr cs:[0x46]
  SETL(R.ax, ADD8((u8)R.ax, 0x8));                             // 038a add al, 8
  W8(CS, (u16)(0x46), (u8)R.ax);                               // 038c mov byte ptr cs:[0x46], al
  SETL(R.ax, AND8((u8)R.ax, 0x80));                            // 0390 and al, 0x80
  if (R.zf) goto L_039f;                                       // 0392 je 0x39f
  ASM_COST(3); SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));           // 0394 xor al, al
  W8(CS, (u16)(0x46), (u8)R.ax);                               // 0396 mov byte ptr cs:[0x46], al
  W8(CS, (u16)(0x45), INC8(M8(CS, (u16)(0x45))));              // 039a inc byte ptr cs:[0x45]
L_039f:   ASM_COST(3); R.ax = POP();                                   // 039f pop ax
  SUB8((u8)R.ax, 0x2);                                         // 03a0 cmp al, 2
  if (!R.zf) goto L_03db;                                      // 03a2 jne 0x3db
  ASM_COST(15); R.di = (u16)(0x4a);                            // 03a4 mov di, 0x4a
  W8(ES, (u16)(R.di), 0x8);                                    // 03a7 mov byte ptr es:[di], 8
  R.di = (u16)(INC16(R.di));                                   // 03ab inc di
  SETL(R.ax, M8(CS, (u16)(0x47)));                             // 03ac mov al, byte ptr cs:[0x47]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 03b0 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 03b3 inc di
  SETL(R.ax, M8(CS, (u16)(0x48)));                             // 03b4 mov al, byte ptr cs:[0x48]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 03b8 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 03bb inc di
  R.cx = (u16)(0xf6);                                          // 03bc mov cx, 0xf6
  R.df = 0;                                                    // 03bf cld
  REPMOVSB();                                                  // 03c0 rep movsb byte ptr es:[di], byte ptr [si]
  R.bx = (u16)(0x4a);                                          // 03c2 mov bx, 0x4a
  R.cx = (u16)(0xf9);                                          // 03c5 mov cx, 0xf9
  PUSH(0x03cb); a_mt15_02b2();                                 // 03c8 call 0x2b2
  ASM_COST(2); R.ax = (u16)(0xfde8);                           // 03cb mov ax, 0xfde8
  PUSH(0x03d1); a_mt15_0195();                                 // 03ce call 0x195
  ASM_COST(3); SETL(R.ax, M8(CS, (u16)(0x47)));                // 03d1 mov al, byte ptr cs:[0x47]
  SETL(R.ax, ADD8((u8)R.ax, 0x2));                             // 03d5 add al, 2
  W8(CS, (u16)(0x47), (u8)R.ax);                               // 03d7 mov byte ptr cs:[0x47], al
L_03db:   ASM_COST(5); SETL(R.ax, M8(CS, (u16)(0x49)));                // 03db mov al, byte ptr cs:[0x49]
  SETL(R.ax, DEC8((u8)R.ax));                                  // 03df dec al
  W8(CS, (u16)(0x49), (u8)R.ax);                               // 03e1 mov byte ptr cs:[0x49], al
  SETL(R.ax, OR8((u8)R.ax, (u8)R.ax));                         // 03e5 or al, al
  if (R.zf) goto L_03ec;                                       // 03e7 je 0x3ec
  ASM_COST(1); ASM_BACK(); goto L_0356;                        // 03e9 jmp 0x356
L_03ec:   ASM_COST(7); R.es = POP();                                   // 03ec pop es
  R.ds = POP();                                                // 03ed pop ds
  R.di = POP();                                                // 03ee pop di
  R.si = POP();                                                // 03ef pop si
  SETFLAGS16(POP());                                           // 03f0 popf
  R.bp = POP();                                                // 03f1 pop bp
  R.sp += 4; goto L_ret;                                       // 03f2 retf
L_ret:
  return;
}

static u16 f_mt15_0380(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0380();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0386 FUN_1000_0386  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0386(void)
{
  R.cs = mt15_seg;
  goto L_0386;
L_0356:   ASM_COST(17); R.di = (u16)(0x4a);                            // 0356 mov di, 0x4a
  W8(ES, (u16)(R.di), 0x5);                                    // 0359 mov byte ptr es:[di], 5
  R.di = (u16)(INC16(R.di));                                   // 035d inc di
  SETL(R.ax, M8(CS, (u16)(0x45)));                             // 035e mov al, byte ptr cs:[0x45]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 0362 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 0365 inc di
  SETL(R.ax, M8(CS, (u16)(0x46)));                             // 0366 mov al, byte ptr cs:[0x46]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 036a mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 036d inc di
  SETL(R.ax, M8(DS, (u16)(R.si)));                             // 036e mov al, byte ptr [si]
  PUSH(R.ax);                                                  // 0370 push ax
  R.cx = (u16)(0x8);                                           // 0371 mov cx, 8
  R.df = 0;                                                    // 0374 cld
  REPMOVSB();                                                  // 0375 rep movsb byte ptr es:[di], byte ptr [si]
  R.bx = (u16)(0x4a);                                          // 0377 mov bx, 0x4a
  R.cx = (u16)(0xb);                                           // 037a mov cx, 0xb
  PUSH(0x0380); a_mt15_02b2();                                 // 037d call 0x2b2
  ASM_COST(2); R.ax = (u16)(0xfde8);                           // 0380 mov ax, 0xfde8
  PUSH(0x0386); a_mt15_0195();                                 // 0383 call 0x195
L_0386:   ASM_COST(5); SETL(R.ax, M8(CS, (u16)(0x46)));                // 0386 mov al, byte ptr cs:[0x46]
  SETL(R.ax, ADD8((u8)R.ax, 0x8));                             // 038a add al, 8
  W8(CS, (u16)(0x46), (u8)R.ax);                               // 038c mov byte ptr cs:[0x46], al
  SETL(R.ax, AND8((u8)R.ax, 0x80));                            // 0390 and al, 0x80
  if (R.zf) goto L_039f;                                       // 0392 je 0x39f
  ASM_COST(3); SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));           // 0394 xor al, al
  W8(CS, (u16)(0x46), (u8)R.ax);                               // 0396 mov byte ptr cs:[0x46], al
  W8(CS, (u16)(0x45), INC8(M8(CS, (u16)(0x45))));              // 039a inc byte ptr cs:[0x45]
L_039f:   ASM_COST(3); R.ax = POP();                                   // 039f pop ax
  SUB8((u8)R.ax, 0x2);                                         // 03a0 cmp al, 2
  if (!R.zf) goto L_03db;                                      // 03a2 jne 0x3db
  ASM_COST(15); R.di = (u16)(0x4a);                            // 03a4 mov di, 0x4a
  W8(ES, (u16)(R.di), 0x8);                                    // 03a7 mov byte ptr es:[di], 8
  R.di = (u16)(INC16(R.di));                                   // 03ab inc di
  SETL(R.ax, M8(CS, (u16)(0x47)));                             // 03ac mov al, byte ptr cs:[0x47]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 03b0 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 03b3 inc di
  SETL(R.ax, M8(CS, (u16)(0x48)));                             // 03b4 mov al, byte ptr cs:[0x48]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 03b8 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 03bb inc di
  R.cx = (u16)(0xf6);                                          // 03bc mov cx, 0xf6
  R.df = 0;                                                    // 03bf cld
  REPMOVSB();                                                  // 03c0 rep movsb byte ptr es:[di], byte ptr [si]
  R.bx = (u16)(0x4a);                                          // 03c2 mov bx, 0x4a
  R.cx = (u16)(0xf9);                                          // 03c5 mov cx, 0xf9
  PUSH(0x03cb); a_mt15_02b2();                                 // 03c8 call 0x2b2
  ASM_COST(2); R.ax = (u16)(0xfde8);                           // 03cb mov ax, 0xfde8
  PUSH(0x03d1); a_mt15_0195();                                 // 03ce call 0x195
  ASM_COST(3); SETL(R.ax, M8(CS, (u16)(0x47)));                // 03d1 mov al, byte ptr cs:[0x47]
  SETL(R.ax, ADD8((u8)R.ax, 0x2));                             // 03d5 add al, 2
  W8(CS, (u16)(0x47), (u8)R.ax);                               // 03d7 mov byte ptr cs:[0x47], al
L_03db:   ASM_COST(5); SETL(R.ax, M8(CS, (u16)(0x49)));                // 03db mov al, byte ptr cs:[0x49]
  SETL(R.ax, DEC8((u8)R.ax));                                  // 03df dec al
  W8(CS, (u16)(0x49), (u8)R.ax);                               // 03e1 mov byte ptr cs:[0x49], al
  SETL(R.ax, OR8((u8)R.ax, (u8)R.ax));                         // 03e5 or al, al
  if (R.zf) goto L_03ec;                                       // 03e7 je 0x3ec
  ASM_COST(1); ASM_BACK(); goto L_0356;                        // 03e9 jmp 0x356
L_03ec:   ASM_COST(7); R.es = POP();                                   // 03ec pop es
  R.ds = POP();                                                // 03ed pop ds
  R.di = POP();                                                // 03ee pop di
  R.si = POP();                                                // 03ef pop si
  SETFLAGS16(POP());                                           // 03f0 popf
  R.bp = POP();                                                // 03f1 pop bp
  R.sp += 4; goto L_ret;                                       // 03f2 retf
L_ret:
  return;
}

static u16 f_mt15_0386(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0386();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:03CB FUN_1000_03cb  FIX: recompiled from the machine code (asm2c)
static void a_mt15_03cb(void)
{
  R.cs = mt15_seg;
  goto L_03cb;
L_0356:   ASM_COST(17); R.di = (u16)(0x4a);                            // 0356 mov di, 0x4a
  W8(ES, (u16)(R.di), 0x5);                                    // 0359 mov byte ptr es:[di], 5
  R.di = (u16)(INC16(R.di));                                   // 035d inc di
  SETL(R.ax, M8(CS, (u16)(0x45)));                             // 035e mov al, byte ptr cs:[0x45]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 0362 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 0365 inc di
  SETL(R.ax, M8(CS, (u16)(0x46)));                             // 0366 mov al, byte ptr cs:[0x46]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 036a mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 036d inc di
  SETL(R.ax, M8(DS, (u16)(R.si)));                             // 036e mov al, byte ptr [si]
  PUSH(R.ax);                                                  // 0370 push ax
  R.cx = (u16)(0x8);                                           // 0371 mov cx, 8
  R.df = 0;                                                    // 0374 cld
  REPMOVSB();                                                  // 0375 rep movsb byte ptr es:[di], byte ptr [si]
  R.bx = (u16)(0x4a);                                          // 0377 mov bx, 0x4a
  R.cx = (u16)(0xb);                                           // 037a mov cx, 0xb
  PUSH(0x0380); a_mt15_02b2();                                 // 037d call 0x2b2
  ASM_COST(2); R.ax = (u16)(0xfde8);                           // 0380 mov ax, 0xfde8
  PUSH(0x0386); a_mt15_0195();                                 // 0383 call 0x195
  ASM_COST(5); SETL(R.ax, M8(CS, (u16)(0x46)));                // 0386 mov al, byte ptr cs:[0x46]
  SETL(R.ax, ADD8((u8)R.ax, 0x8));                             // 038a add al, 8
  W8(CS, (u16)(0x46), (u8)R.ax);                               // 038c mov byte ptr cs:[0x46], al
  SETL(R.ax, AND8((u8)R.ax, 0x80));                            // 0390 and al, 0x80
  if (R.zf) goto L_039f;                                       // 0392 je 0x39f
  ASM_COST(3); SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));           // 0394 xor al, al
  W8(CS, (u16)(0x46), (u8)R.ax);                               // 0396 mov byte ptr cs:[0x46], al
  W8(CS, (u16)(0x45), INC8(M8(CS, (u16)(0x45))));              // 039a inc byte ptr cs:[0x45]
L_039f:   ASM_COST(3); R.ax = POP();                                   // 039f pop ax
  SUB8((u8)R.ax, 0x2);                                         // 03a0 cmp al, 2
  if (!R.zf) goto L_03db;                                      // 03a2 jne 0x3db
  ASM_COST(15); R.di = (u16)(0x4a);                            // 03a4 mov di, 0x4a
  W8(ES, (u16)(R.di), 0x8);                                    // 03a7 mov byte ptr es:[di], 8
  R.di = (u16)(INC16(R.di));                                   // 03ab inc di
  SETL(R.ax, M8(CS, (u16)(0x47)));                             // 03ac mov al, byte ptr cs:[0x47]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 03b0 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 03b3 inc di
  SETL(R.ax, M8(CS, (u16)(0x48)));                             // 03b4 mov al, byte ptr cs:[0x48]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 03b8 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 03bb inc di
  R.cx = (u16)(0xf6);                                          // 03bc mov cx, 0xf6
  R.df = 0;                                                    // 03bf cld
  REPMOVSB();                                                  // 03c0 rep movsb byte ptr es:[di], byte ptr [si]
  R.bx = (u16)(0x4a);                                          // 03c2 mov bx, 0x4a
  R.cx = (u16)(0xf9);                                          // 03c5 mov cx, 0xf9
  PUSH(0x03cb); a_mt15_02b2();                                 // 03c8 call 0x2b2
L_03cb:   ASM_COST(2); R.ax = (u16)(0xfde8);                           // 03cb mov ax, 0xfde8
  PUSH(0x03d1); a_mt15_0195();                                 // 03ce call 0x195
  ASM_COST(3); SETL(R.ax, M8(CS, (u16)(0x47)));                // 03d1 mov al, byte ptr cs:[0x47]
  SETL(R.ax, ADD8((u8)R.ax, 0x2));                             // 03d5 add al, 2
  W8(CS, (u16)(0x47), (u8)R.ax);                               // 03d7 mov byte ptr cs:[0x47], al
L_03db:   ASM_COST(5); SETL(R.ax, M8(CS, (u16)(0x49)));                // 03db mov al, byte ptr cs:[0x49]
  SETL(R.ax, DEC8((u8)R.ax));                                  // 03df dec al
  W8(CS, (u16)(0x49), (u8)R.ax);                               // 03e1 mov byte ptr cs:[0x49], al
  SETL(R.ax, OR8((u8)R.ax, (u8)R.ax));                         // 03e5 or al, al
  if (R.zf) goto L_03ec;                                       // 03e7 je 0x3ec
  ASM_COST(1); ASM_BACK(); goto L_0356;                        // 03e9 jmp 0x356
L_03ec:   ASM_COST(7); R.es = POP();                                   // 03ec pop es
  R.ds = POP();                                                // 03ed pop ds
  R.di = POP();                                                // 03ee pop di
  R.si = POP();                                                // 03ef pop si
  SETFLAGS16(POP());                                           // 03f0 popf
  R.bp = POP();                                                // 03f1 pop bp
  R.sp += 4; goto L_ret;                                       // 03f2 retf
L_ret:
  return;
}

static u16 f_mt15_03cb(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_03cb();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:03D1 FUN_1000_03d1  FIX: recompiled from the machine code (asm2c)
static void a_mt15_03d1(void)
{
  R.cs = mt15_seg;
  goto L_03d1;
L_0356:   ASM_COST(17); R.di = (u16)(0x4a);                            // 0356 mov di, 0x4a
  W8(ES, (u16)(R.di), 0x5);                                    // 0359 mov byte ptr es:[di], 5
  R.di = (u16)(INC16(R.di));                                   // 035d inc di
  SETL(R.ax, M8(CS, (u16)(0x45)));                             // 035e mov al, byte ptr cs:[0x45]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 0362 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 0365 inc di
  SETL(R.ax, M8(CS, (u16)(0x46)));                             // 0366 mov al, byte ptr cs:[0x46]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 036a mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 036d inc di
  SETL(R.ax, M8(DS, (u16)(R.si)));                             // 036e mov al, byte ptr [si]
  PUSH(R.ax);                                                  // 0370 push ax
  R.cx = (u16)(0x8);                                           // 0371 mov cx, 8
  R.df = 0;                                                    // 0374 cld
  REPMOVSB();                                                  // 0375 rep movsb byte ptr es:[di], byte ptr [si]
  R.bx = (u16)(0x4a);                                          // 0377 mov bx, 0x4a
  R.cx = (u16)(0xb);                                           // 037a mov cx, 0xb
  PUSH(0x0380); a_mt15_02b2();                                 // 037d call 0x2b2
  ASM_COST(2); R.ax = (u16)(0xfde8);                           // 0380 mov ax, 0xfde8
  PUSH(0x0386); a_mt15_0195();                                 // 0383 call 0x195
  ASM_COST(5); SETL(R.ax, M8(CS, (u16)(0x46)));                // 0386 mov al, byte ptr cs:[0x46]
  SETL(R.ax, ADD8((u8)R.ax, 0x8));                             // 038a add al, 8
  W8(CS, (u16)(0x46), (u8)R.ax);                               // 038c mov byte ptr cs:[0x46], al
  SETL(R.ax, AND8((u8)R.ax, 0x80));                            // 0390 and al, 0x80
  if (R.zf) goto L_039f;                                       // 0392 je 0x39f
  ASM_COST(3); SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));           // 0394 xor al, al
  W8(CS, (u16)(0x46), (u8)R.ax);                               // 0396 mov byte ptr cs:[0x46], al
  W8(CS, (u16)(0x45), INC8(M8(CS, (u16)(0x45))));              // 039a inc byte ptr cs:[0x45]
L_039f:   ASM_COST(3); R.ax = POP();                                   // 039f pop ax
  SUB8((u8)R.ax, 0x2);                                         // 03a0 cmp al, 2
  if (!R.zf) goto L_03db;                                      // 03a2 jne 0x3db
  ASM_COST(15); R.di = (u16)(0x4a);                            // 03a4 mov di, 0x4a
  W8(ES, (u16)(R.di), 0x8);                                    // 03a7 mov byte ptr es:[di], 8
  R.di = (u16)(INC16(R.di));                                   // 03ab inc di
  SETL(R.ax, M8(CS, (u16)(0x47)));                             // 03ac mov al, byte ptr cs:[0x47]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 03b0 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 03b3 inc di
  SETL(R.ax, M8(CS, (u16)(0x48)));                             // 03b4 mov al, byte ptr cs:[0x48]
  W8(ES, (u16)(R.di), (u8)R.ax);                               // 03b8 mov byte ptr es:[di], al
  R.di = (u16)(INC16(R.di));                                   // 03bb inc di
  R.cx = (u16)(0xf6);                                          // 03bc mov cx, 0xf6
  R.df = 0;                                                    // 03bf cld
  REPMOVSB();                                                  // 03c0 rep movsb byte ptr es:[di], byte ptr [si]
  R.bx = (u16)(0x4a);                                          // 03c2 mov bx, 0x4a
  R.cx = (u16)(0xf9);                                          // 03c5 mov cx, 0xf9
  PUSH(0x03cb); a_mt15_02b2();                                 // 03c8 call 0x2b2
  ASM_COST(2); R.ax = (u16)(0xfde8);                           // 03cb mov ax, 0xfde8
  PUSH(0x03d1); a_mt15_0195();                                 // 03ce call 0x195
L_03d1:   ASM_COST(3); SETL(R.ax, M8(CS, (u16)(0x47)));                // 03d1 mov al, byte ptr cs:[0x47]
  SETL(R.ax, ADD8((u8)R.ax, 0x2));                             // 03d5 add al, 2
  W8(CS, (u16)(0x47), (u8)R.ax);                               // 03d7 mov byte ptr cs:[0x47], al
L_03db:   ASM_COST(5); SETL(R.ax, M8(CS, (u16)(0x49)));                // 03db mov al, byte ptr cs:[0x49]
  SETL(R.ax, DEC8((u8)R.ax));                                  // 03df dec al
  W8(CS, (u16)(0x49), (u8)R.ax);                               // 03e1 mov byte ptr cs:[0x49], al
  SETL(R.ax, OR8((u8)R.ax, (u8)R.ax));                         // 03e5 or al, al
  if (R.zf) goto L_03ec;                                       // 03e7 je 0x3ec
  ASM_COST(1); ASM_BACK(); goto L_0356;                        // 03e9 jmp 0x356
L_03ec:   ASM_COST(7); R.es = POP();                                   // 03ec pop es
  R.ds = POP();                                                // 03ed pop ds
  R.di = POP();                                                // 03ee pop di
  R.si = POP();                                                // 03ef pop si
  SETFLAGS16(POP());                                           // 03f0 popf
  R.bp = POP();                                                // 03f1 pop bp
  R.sp += 4; goto L_ret;                                       // 03f2 retf
L_ret:
  return;
}

static u16 f_mt15_03d1(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_03d1();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:042F FUN_1000_042f  FIX: recompiled from the machine code (asm2c)
static void a_mt15_042f(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); R.ax = (u16)(0xfff6);                           // 042f mov ax, 0xfff6
  R.sp += 4; goto L_ret;                                       // 0432 retf
L_ret:
  return;
}

static u16 f_mt15_042f(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_042f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0457 FUN_1000_0457  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0457(void)
{
  R.cs = mt15_seg;
  goto L_0457;
L_0450:   ASM_COST(3); SETL(R.ax, 0xb0);                               // 0450 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0452 or al, dh
  PUSH(0x0457); a_mt15_0233();                                 // 0454 call 0x233
L_0457:   ASM_COST(2); SETL(R.ax, 0x7b);                               // 0457 mov al, 0x7b
  PUSH(0x045c); a_mt15_0233();                                 // 0459 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 045c mov al, 0
  PUSH(0x0461); a_mt15_0233();                                 // 045e call 0x233
  ASM_COST(3); SETL(R.ax, 0xb0);                               // 0461 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0463 or al, dh
  PUSH(0x0468); a_mt15_0233();                                 // 0465 call 0x233
  ASM_COST(2); SETL(R.ax, 0x79);                               // 0468 mov al, 0x79
  PUSH(0x046d); a_mt15_0233();                                 // 046a call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 046d mov al, 0
  PUSH(0x0472); a_mt15_0233();                                 // 046f call 0x233
  ASM_COST(2); SETH(R.dx, DEC8((u8)(R.dx >> 8)));              // 0472 dec dh
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0450; }      // 0474 jg 0x450
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0476 retf
L_ret:
  return;
}

static u16 f_mt15_0457(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0457();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:045C FUN_1000_045c  FIX: recompiled from the machine code (asm2c)
static void a_mt15_045c(void)
{
  R.cs = mt15_seg;
  goto L_045c;
L_0450:   ASM_COST(3); SETL(R.ax, 0xb0);                               // 0450 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0452 or al, dh
  PUSH(0x0457); a_mt15_0233();                                 // 0454 call 0x233
  ASM_COST(2); SETL(R.ax, 0x7b);                               // 0457 mov al, 0x7b
  PUSH(0x045c); a_mt15_0233();                                 // 0459 call 0x233
L_045c:   ASM_COST(2); SETL(R.ax, 0x0);                                // 045c mov al, 0
  PUSH(0x0461); a_mt15_0233();                                 // 045e call 0x233
  ASM_COST(3); SETL(R.ax, 0xb0);                               // 0461 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0463 or al, dh
  PUSH(0x0468); a_mt15_0233();                                 // 0465 call 0x233
  ASM_COST(2); SETL(R.ax, 0x79);                               // 0468 mov al, 0x79
  PUSH(0x046d); a_mt15_0233();                                 // 046a call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 046d mov al, 0
  PUSH(0x0472); a_mt15_0233();                                 // 046f call 0x233
  ASM_COST(2); SETH(R.dx, DEC8((u8)(R.dx >> 8)));              // 0472 dec dh
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0450; }      // 0474 jg 0x450
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0476 retf
L_ret:
  return;
}

static u16 f_mt15_045c(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_045c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0461 FUN_1000_0461  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0461(void)
{
  R.cs = mt15_seg;
  goto L_0461;
L_0450:   ASM_COST(3); SETL(R.ax, 0xb0);                               // 0450 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0452 or al, dh
  PUSH(0x0457); a_mt15_0233();                                 // 0454 call 0x233
  ASM_COST(2); SETL(R.ax, 0x7b);                               // 0457 mov al, 0x7b
  PUSH(0x045c); a_mt15_0233();                                 // 0459 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 045c mov al, 0
  PUSH(0x0461); a_mt15_0233();                                 // 045e call 0x233
L_0461:   ASM_COST(3); SETL(R.ax, 0xb0);                               // 0461 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0463 or al, dh
  PUSH(0x0468); a_mt15_0233();                                 // 0465 call 0x233
  ASM_COST(2); SETL(R.ax, 0x79);                               // 0468 mov al, 0x79
  PUSH(0x046d); a_mt15_0233();                                 // 046a call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 046d mov al, 0
  PUSH(0x0472); a_mt15_0233();                                 // 046f call 0x233
  ASM_COST(2); SETH(R.dx, DEC8((u8)(R.dx >> 8)));              // 0472 dec dh
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0450; }      // 0474 jg 0x450
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0476 retf
L_ret:
  return;
}

static u16 f_mt15_0461(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0461();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0468 FUN_1000_0468  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0468(void)
{
  R.cs = mt15_seg;
  goto L_0468;
L_0450:   ASM_COST(3); SETL(R.ax, 0xb0);                               // 0450 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0452 or al, dh
  PUSH(0x0457); a_mt15_0233();                                 // 0454 call 0x233
  ASM_COST(2); SETL(R.ax, 0x7b);                               // 0457 mov al, 0x7b
  PUSH(0x045c); a_mt15_0233();                                 // 0459 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 045c mov al, 0
  PUSH(0x0461); a_mt15_0233();                                 // 045e call 0x233
  ASM_COST(3); SETL(R.ax, 0xb0);                               // 0461 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0463 or al, dh
  PUSH(0x0468); a_mt15_0233();                                 // 0465 call 0x233
L_0468:   ASM_COST(2); SETL(R.ax, 0x79);                               // 0468 mov al, 0x79
  PUSH(0x046d); a_mt15_0233();                                 // 046a call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 046d mov al, 0
  PUSH(0x0472); a_mt15_0233();                                 // 046f call 0x233
  ASM_COST(2); SETH(R.dx, DEC8((u8)(R.dx >> 8)));              // 0472 dec dh
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0450; }      // 0474 jg 0x450
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0476 retf
L_ret:
  return;
}

static u16 f_mt15_0468(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0468();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:046D FUN_1000_046d  FIX: recompiled from the machine code (asm2c)
static void a_mt15_046d(void)
{
  R.cs = mt15_seg;
  goto L_046d;
L_0450:   ASM_COST(3); SETL(R.ax, 0xb0);                               // 0450 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0452 or al, dh
  PUSH(0x0457); a_mt15_0233();                                 // 0454 call 0x233
  ASM_COST(2); SETL(R.ax, 0x7b);                               // 0457 mov al, 0x7b
  PUSH(0x045c); a_mt15_0233();                                 // 0459 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 045c mov al, 0
  PUSH(0x0461); a_mt15_0233();                                 // 045e call 0x233
  ASM_COST(3); SETL(R.ax, 0xb0);                               // 0461 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0463 or al, dh
  PUSH(0x0468); a_mt15_0233();                                 // 0465 call 0x233
  ASM_COST(2); SETL(R.ax, 0x79);                               // 0468 mov al, 0x79
  PUSH(0x046d); a_mt15_0233();                                 // 046a call 0x233
L_046d:   ASM_COST(2); SETL(R.ax, 0x0);                                // 046d mov al, 0
  PUSH(0x0472); a_mt15_0233();                                 // 046f call 0x233
  ASM_COST(2); SETH(R.dx, DEC8((u8)(R.dx >> 8)));              // 0472 dec dh
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0450; }      // 0474 jg 0x450
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0476 retf
L_ret:
  return;
}

static u16 f_mt15_046d(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_046d();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:04A6 FUN_1000_04a6  FIX: recompiled from the machine code (asm2c)
static void a_mt15_04a6(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));          // 04a6 mov al, byte ptr [bp + 0xc]
  PUSH(0x04ac); a_mt15_0233();                                 // 04a9 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 04ac pop ax
  PUSH(0x04b0); a_mt15_0233();                                 // 04ad call 0x233
  ASM_COST(2); R.bp = POP();                                   // 04b0 pop bp
  R.sp += 4; goto L_ret;                                       // 04b1 retf
L_ret:
  return;
}

static u16 f_mt15_04a6(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_04a6();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:04BD FUN_1000_04bd  FIX: recompiled from the machine code (asm2c)
static void a_mt15_04bd(void)
{
  R.cs = mt15_seg;
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 04bd mov bx, word ptr [bp + 8]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x6)));                       // 04c0 mov al, byte ptr [bx + 6]
  PUSH(0x04c6); a_mt15_0233();                                 // 04c3 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 04c6 mov al, 0
  PUSH(0x04cb); a_mt15_0233();                                 // 04c8 call 0x233
  ASM_COST(2); R.bp = POP();                                   // 04cb pop bp
  R.sp += 4; goto L_ret;                                       // 04cc retf
L_ret:
  return;
}

static u16 f_mt15_04bd(u16 p0, u16 p1)
{
  ASM_ENTER();
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_04bd();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:04C6 FUN_1000_04c6  FIX: recompiled from the machine code (asm2c)
static void a_mt15_04c6(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, 0x0);                                // 04c6 mov al, 0
  PUSH(0x04cb); a_mt15_0233();                                 // 04c8 call 0x233
  ASM_COST(2); R.bp = POP();                                   // 04cb pop bp
  R.sp += 4; goto L_ret;                                       // 04cc retf
L_ret:
  return;
}

static u16 f_mt15_04c6(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_04c6();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:04E0 FUN_1000_04e0  FIX: recompiled from the machine code (asm2c)
static void a_mt15_04e0(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, 0x7);                                // 04e0 mov al, 7
  PUSH(0x04e5); a_mt15_0233();                                 // 04e2 call 0x233
  ASM_COST(2); SETL(R.ax, M8(SS, (u16)(R.bp + 0xa)));          // 04e5 mov al, byte ptr [bp + 0xa]
  PUSH(0x04eb); a_mt15_0233();                                 // 04e8 call 0x233
  ASM_COST(2); R.bp = POP();                                   // 04eb pop bp
  R.sp += 4; goto L_ret;                                       // 04ec retf
L_ret:
  return;
}

static u16 f_mt15_04e0(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_04e0();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:04E5 FUN_1000_04e5  FIX: recompiled from the machine code (asm2c)
static void a_mt15_04e5(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, M8(SS, (u16)(R.bp + 0xa)));          // 04e5 mov al, byte ptr [bp + 0xa]
  PUSH(0x04eb); a_mt15_0233();                                 // 04e8 call 0x233
  ASM_COST(2); R.bp = POP();                                   // 04eb pop bp
  R.sp += 4; goto L_ret;                                       // 04ec retf
L_ret:
  return;
}

static u16 f_mt15_04e5(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_04e5();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:04F8 FUN_1000_04f8  FIX: recompiled from the machine code (asm2c)
static void a_mt15_04f8(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, M8(SS, (u16)(R.bp + 0xa)));          // 04f8 mov al, byte ptr [bp + 0xa]
  PUSH(0x04fe); a_mt15_0233();                                 // 04fb call 0x233
  ASM_COST(2); SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));          // 04fe mov al, byte ptr [bp + 0xc]
  PUSH(0x0504); a_mt15_0233();                                 // 0501 call 0x233
  ASM_COST(2); R.bp = POP();                                   // 0504 pop bp
  R.sp += 4; goto L_ret;                                       // 0505 retf
L_ret:
  return;
}

static u16 f_mt15_04f8(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_04f8();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:04FE FUN_1000_04fe  FIX: recompiled from the machine code (asm2c)
static void a_mt15_04fe(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));          // 04fe mov al, byte ptr [bp + 0xc]
  PUSH(0x0504); a_mt15_0233();                                 // 0501 call 0x233
  ASM_COST(2); R.bp = POP();                                   // 0504 pop bp
  R.sp += 4; goto L_ret;                                       // 0505 retf
L_ret:
  return;
}

static u16 f_mt15_04fe(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_04fe();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:050F FUN_1000_050f  FIX: recompiled from the machine code (asm2c)
static void a_mt15_050f(void)
{
  R.cs = mt15_seg;
  goto L_050f;
L_0508:   ASM_COST(3); SETL(R.ax, 0xb0);                               // 0508 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 050a or al, dh
  PUSH(0x050f); a_mt15_0233();                                 // 050c call 0x233
L_050f:   ASM_COST(2); SETL(R.ax, 0x79);                               // 050f mov al, 0x79
  PUSH(0x0514); a_mt15_0233();                                 // 0511 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 0514 mov al, 0
  PUSH(0x0519); a_mt15_0233();                                 // 0516 call 0x233
  ASM_COST(3); SETH(R.dx, DEC8((u8)(R.dx >> 8)));              // 0519 dec dh
  SUB8((u8)(R.dx >> 8), 0xff);                                 // 051b cmp dh, 0xff
  if (!R.zf) { ASM_BACK(); goto L_0508; }                      // 051e jne 0x508
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0520 retf
L_ret:
  return;
}

static u16 f_mt15_050f(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_050f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0514 FUN_1000_0514  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0514(void)
{
  R.cs = mt15_seg;
  goto L_0514;
L_0508:   ASM_COST(3); SETL(R.ax, 0xb0);                               // 0508 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 050a or al, dh
  PUSH(0x050f); a_mt15_0233();                                 // 050c call 0x233
  ASM_COST(2); SETL(R.ax, 0x79);                               // 050f mov al, 0x79
  PUSH(0x0514); a_mt15_0233();                                 // 0511 call 0x233
L_0514:   ASM_COST(2); SETL(R.ax, 0x0);                                // 0514 mov al, 0
  PUSH(0x0519); a_mt15_0233();                                 // 0516 call 0x233
  ASM_COST(3); SETH(R.dx, DEC8((u8)(R.dx >> 8)));              // 0519 dec dh
  SUB8((u8)(R.dx >> 8), 0xff);                                 // 051b cmp dh, 0xff
  if (!R.zf) { ASM_BACK(); goto L_0508; }                      // 051e jne 0x508
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0520 retf
L_ret:
  return;
}

static u16 f_mt15_0514(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0514();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:052C FUN_1000_052c  FIX: recompiled from the machine code (asm2c)
static void a_mt15_052c(void)
{
  R.cs = mt15_seg;
  ASM_COST(5); R.ax = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 052c mov ax, word ptr [bp + 8]
  R.ax = (u16)(ADD16(R.ax, 0x2000));                           // 052f add ax, 0x2000
  PUSH(R.ax);                                                  // 0532 push ax
  SETL(R.ax, AND8((u8)R.ax, 0x7f));                            // 0533 and al, 0x7f
  PUSH(0x0538); a_mt15_0233();                                 // 0535 call 0x233
  ASM_COST(5); R.ax = POP();                                   // 0538 pop ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0539 shl ax, 1
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 053b mov al, ah
  SETL(R.ax, AND8((u8)R.ax, 0x7f));                            // 053d and al, 0x7f
  PUSH(0x0542); a_mt15_0233();                                 // 053f call 0x233
  ASM_COST(2); R.bp = POP();                                   // 0542 pop bp
  R.sp += 4; goto L_ret;                                       // 0543 retf
L_ret:
  return;
}

static u16 f_mt15_052c(u16 p0, u16 p1)
{
  ASM_ENTER();
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_052c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:054F FUN_1000_054f  FIX: recompiled from the machine code (asm2c)
static void a_mt15_054f(void)
{
  R.cs = mt15_seg;
  ASM_COST(6); R.ax = (u16)(M16(SS, (u16)(R.bp + 0xa)));       // 054f mov ax, word ptr [bp + 0xa]
  R.bx = (u16)(0x3c);                                          // 0552 mov bx, 0x3c
  MUL16(R.bx);                                                 // 0555 mul bx
  PUSH(R.ax);                                                  // 0557 push ax
  SETL(R.ax, AND8((u8)R.ax, 0x7f));                            // 0558 and al, 0x7f
  PUSH(0x055d); a_mt15_0233();                                 // 055a call 0x233
  ASM_COST(5); R.ax = POP();                                   // 055d pop ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 055e shl ax, 1
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 0560 mov al, ah
  SETL(R.ax, AND8((u8)R.ax, 0x7f));                            // 0562 and al, 0x7f
  PUSH(0x0567); a_mt15_0233();                                 // 0564 call 0x233
  ASM_COST(2); R.bp = POP();                                   // 0567 pop bp
  R.sp += 4; goto L_ret;                                       // 0568 retf
L_ret:
  return;
}

static u16 f_mt15_054f(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_054f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0574 FUN_1000_0574  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0574(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, 0x7b);                               // 0574 mov al, 0x7b
  PUSH(0x0579); a_mt15_0233();                                 // 0576 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 0579 mov al, 0
  PUSH(0x057e); a_mt15_0233();                                 // 057b call 0x233
  ASM_COST(2); R.bp = POP();                                   // 057e pop bp
  R.sp += 4; goto L_ret;                                       // 057f retf
L_ret:
  return;
}

static u16 f_mt15_0574(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0574();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0579 FUN_1000_0579  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0579(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, 0x0);                                // 0579 mov al, 0
  PUSH(0x057e); a_mt15_0233();                                 // 057b call 0x233
  ASM_COST(2); R.bp = POP();                                   // 057e pop bp
  R.sp += 4; goto L_ret;                                       // 057f retf
L_ret:
  return;
}

static u16 f_mt15_0579(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0579();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:05D5 FUN_1000_05d5  FIX: recompiled from the machine code (asm2c)
static void a_mt15_05d5(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, 0x7);                                // 05d5 mov al, 7
  PUSH(0x05da); a_mt15_0233();                                 // 05d7 call 0x233
  ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 05da les bx, ptr [bp + 0xc]
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x45)));                      // 05dd mov al, byte ptr es:[bx + 0x45]
  PUSH(0x05e4); a_mt15_0233();                                 // 05e1 call 0x233
  ASM_COST(3); R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));       // 05e4 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 05e7 or al, 0xb0
  PUSH(0x05ec); a_mt15_0233();                                 // 05e9 call 0x233
  ASM_COST(2); SETL(R.ax, 0xa);                                // 05ec mov al, 0xa
  PUSH(0x05f1); a_mt15_0233();                                 // 05ee call 0x233
  ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 05f1 les bx, ptr [bp + 0xc]
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x46)));                      // 05f4 mov al, byte ptr es:[bx + 0x46]
  PUSH(0x05fb); a_mt15_0233();                                 // 05f8 call 0x233
  ASM_COST(2); R.bp = POP();                                   // 05fb pop bp
  R.sp += 4; goto L_ret;                                       // 05fc retf
L_ret:
  return;
}

static u16 f_mt15_05d5(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_05d5();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:05E4 FUN_1000_05e4  FIX: recompiled from the machine code (asm2c)
static void a_mt15_05e4(void)
{
  R.cs = mt15_seg;
  ASM_COST(3); R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));       // 05e4 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 05e7 or al, 0xb0
  PUSH(0x05ec); a_mt15_0233();                                 // 05e9 call 0x233
  ASM_COST(2); SETL(R.ax, 0xa);                                // 05ec mov al, 0xa
  PUSH(0x05f1); a_mt15_0233();                                 // 05ee call 0x233
  ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 05f1 les bx, ptr [bp + 0xc]
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x46)));                      // 05f4 mov al, byte ptr es:[bx + 0x46]
  PUSH(0x05fb); a_mt15_0233();                                 // 05f8 call 0x233
  ASM_COST(2); R.bp = POP();                                   // 05fb pop bp
  R.sp += 4; goto L_ret;                                       // 05fc retf
L_ret:
  return;
}

static u16 f_mt15_05e4(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_05e4();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:05EC FUN_1000_05ec  FIX: recompiled from the machine code (asm2c)
static void a_mt15_05ec(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, 0xa);                                // 05ec mov al, 0xa
  PUSH(0x05f1); a_mt15_0233();                                 // 05ee call 0x233
  ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 05f1 les bx, ptr [bp + 0xc]
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x46)));                      // 05f4 mov al, byte ptr es:[bx + 0x46]
  PUSH(0x05fb); a_mt15_0233();                                 // 05f8 call 0x233
  ASM_COST(2); R.bp = POP();                                   // 05fb pop bp
  R.sp += 4; goto L_ret;                                       // 05fc retf
L_ret:
  return;
}

static u16 f_mt15_05ec(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_05ec();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0628 FUN_1000_0628  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0628(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, (u8)R.dx);                           // 0628 mov al, dl
  PUSH(0x062d); a_mt15_0233();                                 // 062a call 0x233
  ASM_COST(2); SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));           // 062d xor al, al
  PUSH(0x0632); a_mt15_0233();                                 // 062f call 0x233
  ASM_COST(8); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0632 mov bx, word ptr [bp + 8]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x22)));                      // 0635 mov al, byte ptr [bx + 0x22]
  SETL(R.ax, ADD8((u8)R.ax, M8(DS, (u16)(R.bx + 0x3))));       // 0638 add al, byte ptr [bx + 3]
  W8(DS, (u16)(R.bx + 0x6), (u8)R.ax);                         // 063b mov byte ptr [bx + 6], al
  SETL(R.dx, (u8)R.ax);                                        // 063e mov dl, al
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0640 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0x90));                             // 0643 or al, 0x90
  PUSH(0x0648); a_mt15_0233();                                 // 0645 call 0x233
  ASM_COST(2); SETL(R.ax, (u8)R.dx);                           // 0648 mov al, dl
  PUSH(0x064d); a_mt15_0233();                                 // 064a call 0x233
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 064d mov bx, word ptr [bp + 8]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x4)));                       // 0650 mov al, byte ptr [bx + 4]
  PUSH(0x0656); a_mt15_0233();                                 // 0653 call 0x233
  ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0656 les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x28)), 0x4);                       // 0659 cmp byte ptr es:[bx + 0x28], 4
  if (!R.zf) goto L_067b;                                      // 065e jne 0x67b
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0660 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x1c)));                   // 0663 mov ax, word ptr [bx + 0x1c]
  PUSH(R.ax);                                                  // 0666 push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0667 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 066a or al, 0xb0
  PUSH(0x066f); a_mt15_0233();                                 // 066c call 0x233
  ASM_COST(2); SETL(R.ax, 0x1);                                // 066f mov al, 1
  PUSH(0x0674); a_mt15_0233();                                 // 0671 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 0674 pop ax
  PUSH(0x0678); a_mt15_0233();                                 // 0675 call 0x233
  ASM_COST(1); goto L_069a;                                    // 0678 jmp 0x69a
L_067b:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x28)), 0x2);          // 067b cmp byte ptr es:[bx + 0x28], 2
  if (!R.zf) goto L_069a;                                      // 0680 jne 0x69a
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0682 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x1c)));                   // 0685 mov ax, word ptr [bx + 0x1c]
  PUSH(R.ax);                                                  // 0688 push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0689 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xe0));                             // 068c or al, 0xe0
  PUSH(0x0691); a_mt15_0233();                                 // 068e call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 0691 mov al, 0
  PUSH(0x0696); a_mt15_0233();                                 // 0693 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 0696 pop ax
  PUSH(0x069a); a_mt15_0233();                                 // 0697 call 0x233
L_069a:   ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 069a les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x4);                       // 069d cmp byte ptr es:[bx + 0x19], 4
  if (!R.zf) goto L_06bf;                                      // 06a2 jne 0x6bf
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 06a4 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 06a7 mov ax, word ptr [bx + 0x14]
  PUSH(R.ax);                                                  // 06aa push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 06ab mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 06ae or al, 0xb0
  PUSH(0x06b3); a_mt15_0233();                                 // 06b0 call 0x233
  ASM_COST(2); SETL(R.ax, 0x1);                                // 06b3 mov al, 1
  PUSH(0x06b8); a_mt15_0233();                                 // 06b5 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06b8 pop ax
  PUSH(0x06bc); a_mt15_0233();                                 // 06b9 call 0x233
  ASM_COST(1); goto L_06de;                                    // 06bc jmp 0x6de
L_06bf:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x2);          // 06bf cmp byte ptr es:[bx + 0x19], 2
  if (!R.zf) goto L_06de;                                      // 06c4 jne 0x6de
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 06c6 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 06c9 mov ax, word ptr [bx + 0x14]
  PUSH(R.ax);                                                  // 06cc push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 06cd mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xe0));                             // 06d0 or al, 0xe0
  PUSH(0x06d5); a_mt15_0233();                                 // 06d2 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 06d5 mov al, 0
  PUSH(0x06da); a_mt15_0233();                                 // 06d7 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06da pop ax
  PUSH(0x06de); a_mt15_0233();                                 // 06db call 0x233
L_06de:   ASM_COST(2); R.bp = POP();                                   // 06de pop bp
  R.sp += 4; goto L_ret;                                       // 06df retf
L_ret:
  return;
}

static u16 f_mt15_0628(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0628();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0632 FUN_1000_0632  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0632(void)
{
  R.cs = mt15_seg;
  ASM_COST(8); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0632 mov bx, word ptr [bp + 8]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x22)));                      // 0635 mov al, byte ptr [bx + 0x22]
  SETL(R.ax, ADD8((u8)R.ax, M8(DS, (u16)(R.bx + 0x3))));       // 0638 add al, byte ptr [bx + 3]
  W8(DS, (u16)(R.bx + 0x6), (u8)R.ax);                         // 063b mov byte ptr [bx + 6], al
  SETL(R.dx, (u8)R.ax);                                        // 063e mov dl, al
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0640 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0x90));                             // 0643 or al, 0x90
  PUSH(0x0648); a_mt15_0233();                                 // 0645 call 0x233
  ASM_COST(2); SETL(R.ax, (u8)R.dx);                           // 0648 mov al, dl
  PUSH(0x064d); a_mt15_0233();                                 // 064a call 0x233
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 064d mov bx, word ptr [bp + 8]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x4)));                       // 0650 mov al, byte ptr [bx + 4]
  PUSH(0x0656); a_mt15_0233();                                 // 0653 call 0x233
  ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0656 les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x28)), 0x4);                       // 0659 cmp byte ptr es:[bx + 0x28], 4
  if (!R.zf) goto L_067b;                                      // 065e jne 0x67b
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0660 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x1c)));                   // 0663 mov ax, word ptr [bx + 0x1c]
  PUSH(R.ax);                                                  // 0666 push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0667 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 066a or al, 0xb0
  PUSH(0x066f); a_mt15_0233();                                 // 066c call 0x233
  ASM_COST(2); SETL(R.ax, 0x1);                                // 066f mov al, 1
  PUSH(0x0674); a_mt15_0233();                                 // 0671 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 0674 pop ax
  PUSH(0x0678); a_mt15_0233();                                 // 0675 call 0x233
  ASM_COST(1); goto L_069a;                                    // 0678 jmp 0x69a
L_067b:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x28)), 0x2);          // 067b cmp byte ptr es:[bx + 0x28], 2
  if (!R.zf) goto L_069a;                                      // 0680 jne 0x69a
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0682 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x1c)));                   // 0685 mov ax, word ptr [bx + 0x1c]
  PUSH(R.ax);                                                  // 0688 push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0689 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xe0));                             // 068c or al, 0xe0
  PUSH(0x0691); a_mt15_0233();                                 // 068e call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 0691 mov al, 0
  PUSH(0x0696); a_mt15_0233();                                 // 0693 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 0696 pop ax
  PUSH(0x069a); a_mt15_0233();                                 // 0697 call 0x233
L_069a:   ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 069a les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x4);                       // 069d cmp byte ptr es:[bx + 0x19], 4
  if (!R.zf) goto L_06bf;                                      // 06a2 jne 0x6bf
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 06a4 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 06a7 mov ax, word ptr [bx + 0x14]
  PUSH(R.ax);                                                  // 06aa push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 06ab mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 06ae or al, 0xb0
  PUSH(0x06b3); a_mt15_0233();                                 // 06b0 call 0x233
  ASM_COST(2); SETL(R.ax, 0x1);                                // 06b3 mov al, 1
  PUSH(0x06b8); a_mt15_0233();                                 // 06b5 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06b8 pop ax
  PUSH(0x06bc); a_mt15_0233();                                 // 06b9 call 0x233
  ASM_COST(1); goto L_06de;                                    // 06bc jmp 0x6de
L_06bf:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x2);          // 06bf cmp byte ptr es:[bx + 0x19], 2
  if (!R.zf) goto L_06de;                                      // 06c4 jne 0x6de
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 06c6 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 06c9 mov ax, word ptr [bx + 0x14]
  PUSH(R.ax);                                                  // 06cc push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 06cd mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xe0));                             // 06d0 or al, 0xe0
  PUSH(0x06d5); a_mt15_0233();                                 // 06d2 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 06d5 mov al, 0
  PUSH(0x06da); a_mt15_0233();                                 // 06d7 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06da pop ax
  PUSH(0x06de); a_mt15_0233();                                 // 06db call 0x233
L_06de:   ASM_COST(2); R.bp = POP();                                   // 06de pop bp
  R.sp += 4; goto L_ret;                                       // 06df retf
L_ret:
  return;
}

static u16 f_mt15_0632(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0632();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0648 FUN_1000_0648  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0648(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, (u8)R.dx);                           // 0648 mov al, dl
  PUSH(0x064d); a_mt15_0233();                                 // 064a call 0x233
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 064d mov bx, word ptr [bp + 8]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x4)));                       // 0650 mov al, byte ptr [bx + 4]
  PUSH(0x0656); a_mt15_0233();                                 // 0653 call 0x233
  ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0656 les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x28)), 0x4);                       // 0659 cmp byte ptr es:[bx + 0x28], 4
  if (!R.zf) goto L_067b;                                      // 065e jne 0x67b
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0660 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x1c)));                   // 0663 mov ax, word ptr [bx + 0x1c]
  PUSH(R.ax);                                                  // 0666 push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0667 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 066a or al, 0xb0
  PUSH(0x066f); a_mt15_0233();                                 // 066c call 0x233
  ASM_COST(2); SETL(R.ax, 0x1);                                // 066f mov al, 1
  PUSH(0x0674); a_mt15_0233();                                 // 0671 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 0674 pop ax
  PUSH(0x0678); a_mt15_0233();                                 // 0675 call 0x233
  ASM_COST(1); goto L_069a;                                    // 0678 jmp 0x69a
L_067b:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x28)), 0x2);          // 067b cmp byte ptr es:[bx + 0x28], 2
  if (!R.zf) goto L_069a;                                      // 0680 jne 0x69a
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0682 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x1c)));                   // 0685 mov ax, word ptr [bx + 0x1c]
  PUSH(R.ax);                                                  // 0688 push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0689 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xe0));                             // 068c or al, 0xe0
  PUSH(0x0691); a_mt15_0233();                                 // 068e call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 0691 mov al, 0
  PUSH(0x0696); a_mt15_0233();                                 // 0693 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 0696 pop ax
  PUSH(0x069a); a_mt15_0233();                                 // 0697 call 0x233
L_069a:   ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 069a les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x4);                       // 069d cmp byte ptr es:[bx + 0x19], 4
  if (!R.zf) goto L_06bf;                                      // 06a2 jne 0x6bf
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 06a4 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 06a7 mov ax, word ptr [bx + 0x14]
  PUSH(R.ax);                                                  // 06aa push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 06ab mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 06ae or al, 0xb0
  PUSH(0x06b3); a_mt15_0233();                                 // 06b0 call 0x233
  ASM_COST(2); SETL(R.ax, 0x1);                                // 06b3 mov al, 1
  PUSH(0x06b8); a_mt15_0233();                                 // 06b5 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06b8 pop ax
  PUSH(0x06bc); a_mt15_0233();                                 // 06b9 call 0x233
  ASM_COST(1); goto L_06de;                                    // 06bc jmp 0x6de
L_06bf:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x2);          // 06bf cmp byte ptr es:[bx + 0x19], 2
  if (!R.zf) goto L_06de;                                      // 06c4 jne 0x6de
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 06c6 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 06c9 mov ax, word ptr [bx + 0x14]
  PUSH(R.ax);                                                  // 06cc push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 06cd mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xe0));                             // 06d0 or al, 0xe0
  PUSH(0x06d5); a_mt15_0233();                                 // 06d2 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 06d5 mov al, 0
  PUSH(0x06da); a_mt15_0233();                                 // 06d7 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06da pop ax
  PUSH(0x06de); a_mt15_0233();                                 // 06db call 0x233
L_06de:   ASM_COST(2); R.bp = POP();                                   // 06de pop bp
  R.sp += 4; goto L_ret;                                       // 06df retf
L_ret:
  return;
}

static u16 f_mt15_0648(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0648();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:064D FUN_1000_064d  FIX: recompiled from the machine code (asm2c)
static void a_mt15_064d(void)
{
  R.cs = mt15_seg;
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 064d mov bx, word ptr [bp + 8]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x4)));                       // 0650 mov al, byte ptr [bx + 4]
  PUSH(0x0656); a_mt15_0233();                                 // 0653 call 0x233
  ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0656 les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x28)), 0x4);                       // 0659 cmp byte ptr es:[bx + 0x28], 4
  if (!R.zf) goto L_067b;                                      // 065e jne 0x67b
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0660 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x1c)));                   // 0663 mov ax, word ptr [bx + 0x1c]
  PUSH(R.ax);                                                  // 0666 push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0667 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 066a or al, 0xb0
  PUSH(0x066f); a_mt15_0233();                                 // 066c call 0x233
  ASM_COST(2); SETL(R.ax, 0x1);                                // 066f mov al, 1
  PUSH(0x0674); a_mt15_0233();                                 // 0671 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 0674 pop ax
  PUSH(0x0678); a_mt15_0233();                                 // 0675 call 0x233
  ASM_COST(1); goto L_069a;                                    // 0678 jmp 0x69a
L_067b:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x28)), 0x2);          // 067b cmp byte ptr es:[bx + 0x28], 2
  if (!R.zf) goto L_069a;                                      // 0680 jne 0x69a
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0682 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x1c)));                   // 0685 mov ax, word ptr [bx + 0x1c]
  PUSH(R.ax);                                                  // 0688 push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0689 mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xe0));                             // 068c or al, 0xe0
  PUSH(0x0691); a_mt15_0233();                                 // 068e call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 0691 mov al, 0
  PUSH(0x0696); a_mt15_0233();                                 // 0693 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 0696 pop ax
  PUSH(0x069a); a_mt15_0233();                                 // 0697 call 0x233
L_069a:   ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 069a les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x4);                       // 069d cmp byte ptr es:[bx + 0x19], 4
  if (!R.zf) goto L_06bf;                                      // 06a2 jne 0x6bf
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 06a4 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 06a7 mov ax, word ptr [bx + 0x14]
  PUSH(R.ax);                                                  // 06aa push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 06ab mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 06ae or al, 0xb0
  PUSH(0x06b3); a_mt15_0233();                                 // 06b0 call 0x233
  ASM_COST(2); SETL(R.ax, 0x1);                                // 06b3 mov al, 1
  PUSH(0x06b8); a_mt15_0233();                                 // 06b5 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06b8 pop ax
  PUSH(0x06bc); a_mt15_0233();                                 // 06b9 call 0x233
  ASM_COST(1); goto L_06de;                                    // 06bc jmp 0x6de
L_06bf:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x2);          // 06bf cmp byte ptr es:[bx + 0x19], 2
  if (!R.zf) goto L_06de;                                      // 06c4 jne 0x6de
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 06c6 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 06c9 mov ax, word ptr [bx + 0x14]
  PUSH(R.ax);                                                  // 06cc push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 06cd mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xe0));                             // 06d0 or al, 0xe0
  PUSH(0x06d5); a_mt15_0233();                                 // 06d2 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 06d5 mov al, 0
  PUSH(0x06da); a_mt15_0233();                                 // 06d7 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06da pop ax
  PUSH(0x06de); a_mt15_0233();                                 // 06db call 0x233
L_06de:   ASM_COST(2); R.bp = POP();                                   // 06de pop bp
  R.sp += 4; goto L_ret;                                       // 06df retf
L_ret:
  return;
}

static u16 f_mt15_064d(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_064d();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:066F FUN_1000_066f  FIX: recompiled from the machine code (asm2c)
static void a_mt15_066f(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, 0x1);                                // 066f mov al, 1
  PUSH(0x0674); a_mt15_0233();                                 // 0671 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 0674 pop ax
  PUSH(0x0678); a_mt15_0233();                                 // 0675 call 0x233
  ASM_COST(1); goto L_069a;                                    // 0678 jmp 0x69a
L_069a:   ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 069a les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x4);                       // 069d cmp byte ptr es:[bx + 0x19], 4
  if (!R.zf) goto L_06bf;                                      // 06a2 jne 0x6bf
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 06a4 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 06a7 mov ax, word ptr [bx + 0x14]
  PUSH(R.ax);                                                  // 06aa push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 06ab mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 06ae or al, 0xb0
  PUSH(0x06b3); a_mt15_0233();                                 // 06b0 call 0x233
  ASM_COST(2); SETL(R.ax, 0x1);                                // 06b3 mov al, 1
  PUSH(0x06b8); a_mt15_0233();                                 // 06b5 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06b8 pop ax
  PUSH(0x06bc); a_mt15_0233();                                 // 06b9 call 0x233
  ASM_COST(1); goto L_06de;                                    // 06bc jmp 0x6de
L_06bf:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x2);          // 06bf cmp byte ptr es:[bx + 0x19], 2
  if (!R.zf) goto L_06de;                                      // 06c4 jne 0x6de
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 06c6 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 06c9 mov ax, word ptr [bx + 0x14]
  PUSH(R.ax);                                                  // 06cc push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 06cd mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xe0));                             // 06d0 or al, 0xe0
  PUSH(0x06d5); a_mt15_0233();                                 // 06d2 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 06d5 mov al, 0
  PUSH(0x06da); a_mt15_0233();                                 // 06d7 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06da pop ax
  PUSH(0x06de); a_mt15_0233();                                 // 06db call 0x233
L_06de:   ASM_COST(2); R.bp = POP();                                   // 06de pop bp
  R.sp += 4; goto L_ret;                                       // 06df retf
L_ret:
  return;
}

static u16 f_mt15_066f(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_066f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0678 FUN_1000_0678  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0678(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_069a;                                    // 0678 jmp 0x69a
L_069a:   ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 069a les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x4);                       // 069d cmp byte ptr es:[bx + 0x19], 4
  if (!R.zf) goto L_06bf;                                      // 06a2 jne 0x6bf
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 06a4 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 06a7 mov ax, word ptr [bx + 0x14]
  PUSH(R.ax);                                                  // 06aa push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 06ab mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 06ae or al, 0xb0
  PUSH(0x06b3); a_mt15_0233();                                 // 06b0 call 0x233
  ASM_COST(2); SETL(R.ax, 0x1);                                // 06b3 mov al, 1
  PUSH(0x06b8); a_mt15_0233();                                 // 06b5 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06b8 pop ax
  PUSH(0x06bc); a_mt15_0233();                                 // 06b9 call 0x233
  ASM_COST(1); goto L_06de;                                    // 06bc jmp 0x6de
L_06bf:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x2);          // 06bf cmp byte ptr es:[bx + 0x19], 2
  if (!R.zf) goto L_06de;                                      // 06c4 jne 0x6de
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 06c6 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 06c9 mov ax, word ptr [bx + 0x14]
  PUSH(R.ax);                                                  // 06cc push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 06cd mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xe0));                             // 06d0 or al, 0xe0
  PUSH(0x06d5); a_mt15_0233();                                 // 06d2 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 06d5 mov al, 0
  PUSH(0x06da); a_mt15_0233();                                 // 06d7 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06da pop ax
  PUSH(0x06de); a_mt15_0233();                                 // 06db call 0x233
L_06de:   ASM_COST(2); R.bp = POP();                                   // 06de pop bp
  R.sp += 4; goto L_ret;                                       // 06df retf
L_ret:
  return;
}

static u16 f_mt15_0678(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0678();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0691 FUN_1000_0691  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0691(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, 0x0);                                // 0691 mov al, 0
  PUSH(0x0696); a_mt15_0233();                                 // 0693 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 0696 pop ax
  PUSH(0x069a); a_mt15_0233();                                 // 0697 call 0x233
  ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 069a les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x4);                       // 069d cmp byte ptr es:[bx + 0x19], 4
  if (!R.zf) goto L_06bf;                                      // 06a2 jne 0x6bf
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 06a4 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 06a7 mov ax, word ptr [bx + 0x14]
  PUSH(R.ax);                                                  // 06aa push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 06ab mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xb0));                             // 06ae or al, 0xb0
  PUSH(0x06b3); a_mt15_0233();                                 // 06b0 call 0x233
  ASM_COST(2); SETL(R.ax, 0x1);                                // 06b3 mov al, 1
  PUSH(0x06b8); a_mt15_0233();                                 // 06b5 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06b8 pop ax
  PUSH(0x06bc); a_mt15_0233();                                 // 06b9 call 0x233
  ASM_COST(1); goto L_06de;                                    // 06bc jmp 0x6de
L_06bf:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x2);          // 06bf cmp byte ptr es:[bx + 0x19], 2
  if (!R.zf) goto L_06de;                                      // 06c4 jne 0x6de
  ASM_COST(6); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 06c6 mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 06c9 mov ax, word ptr [bx + 0x14]
  PUSH(R.ax);                                                  // 06cc push ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 06cd mov ax, word ptr [bp + 6]
  SETL(R.ax, OR8((u8)R.ax, 0xe0));                             // 06d0 or al, 0xe0
  PUSH(0x06d5); a_mt15_0233();                                 // 06d2 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 06d5 mov al, 0
  PUSH(0x06da); a_mt15_0233();                                 // 06d7 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06da pop ax
  PUSH(0x06de); a_mt15_0233();                                 // 06db call 0x233
L_06de:   ASM_COST(2); R.bp = POP();                                   // 06de pop bp
  R.sp += 4; goto L_ret;                                       // 06df retf
L_ret:
  return;
}

static u16 f_mt15_0691(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_0691();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:06B3 FUN_1000_06b3  FIX: recompiled from the machine code (asm2c)
static void a_mt15_06b3(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, 0x1);                                // 06b3 mov al, 1
  PUSH(0x06b8); a_mt15_0233();                                 // 06b5 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06b8 pop ax
  PUSH(0x06bc); a_mt15_0233();                                 // 06b9 call 0x233
  ASM_COST(1); goto L_06de;                                    // 06bc jmp 0x6de
L_06de:   ASM_COST(2); R.bp = POP();                                   // 06de pop bp
  R.sp += 4; goto L_ret;                                       // 06df retf
L_ret:
  return;
}

static u16 f_mt15_06b3(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_06b3();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:06BC FUN_1000_06bc  FIX: recompiled from the machine code (asm2c)
static void a_mt15_06bc(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); goto L_06de;                                    // 06bc jmp 0x6de
L_06de:   ASM_COST(2); R.bp = POP();                                   // 06de pop bp
  R.sp += 4; goto L_ret;                                       // 06df retf
L_ret:
  return;
}

static u16 f_mt15_06bc(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_06bc();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:06D5 FUN_1000_06d5  FIX: recompiled from the machine code (asm2c)
static void a_mt15_06d5(void)
{
  R.cs = mt15_seg;
  ASM_COST(2); SETL(R.ax, 0x0);                                // 06d5 mov al, 0
  PUSH(0x06da); a_mt15_0233();                                 // 06d7 call 0x233
  ASM_COST(2); R.ax = POP();                                   // 06da pop ax
  PUSH(0x06de); a_mt15_0233();                                 // 06db call 0x233
  ASM_COST(2); R.bp = POP();                                   // 06de pop bp
  R.sp += 4; goto L_ret;                                       // 06df retf
L_ret:
  return;
}

static u16 f_mt15_06d5(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_06d5();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0195 FUN_1000_0195  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0195(void)
{
  R.cs = mt15_seg;
  ASM_COST(13); PUSH(R.ax);                                    // 0195 push ax
  PUSH(R.cx);                                                  // 0196 push cx
  R.ax = (u16)(NEG16(R.ax));                                   // 0197 neg ax
  R.ax = (u16)(ADD16(R.ax, 0xffff));                           // 0199 add ax, 0xffff
  R.cx = (u16)(R.ax);                                          // 019c mov cx, ax
  SETL(R.ax, 0xb6);                                            // 019e mov al, 0xb6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 01a0 out 0x43, al
  SETL(R.ax, 0xff);                                            // 01a2 mov al, 0xff
  ASM_PORT_OUT(0x42, (u8)R.ax);                                // 01a4 out 0x42, al
  ASM_PORT_OUT(0x42, (u8)R.ax);                                // 01a6 out 0x42, al
  SETL(R.ax, ASM_PORT_IN(0x61));                               // 01a8 in al, 0x61
  SETL(R.ax, OR8((u8)R.ax, 0x1));                              // 01aa or al, 1
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 01ac out 0x61, al
L_01ae:   ASM_COST(8); SETL(R.ax, 0x80);                               // 01ae mov al, 0x80
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 01b0 out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x42));                               // 01b2 in al, 0x42
  { u16 t_ = (u8)(R.ax >> 8); SETH(R.ax, (u8)R.ax); SETL(R.ax, t_); } // 01b4 xchg ah, al
  SETL(R.ax, ASM_PORT_IN(0x42));                               // 01b6 in al, 0x42
  { u16 t_ = (u8)(R.ax >> 8); SETH(R.ax, (u8)R.ax); SETL(R.ax, t_); } // 01b8 xchg ah, al
  SUB16(R.ax, R.cx);                                           // 01ba cmp ax, cx
  if (!R.cf) { ASM_BACK(); goto L_01ae; }                      // 01bc jae 0x1ae
  ASM_COST(6); SETL(R.ax, ASM_PORT_IN(0x61));                  // 01be in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfe));                            // 01c0 and al, 0xfe
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 01c2 out 0x61, al
  R.cx = POP();                                                // 01c4 pop cx
  R.ax = POP();                                                // 01c5 pop ax
  R.sp += 2; goto L_ret;                                       // 01c6 ret
L_ret:
  return;
}

static u16 f_mt15_0195(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_mt15_0195();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:02B2 FUN_1000_02b2  FIX: recompiled from the machine code (asm2c)
static void a_mt15_02b2(void)
{
  R.cs = mt15_seg;
  ASM_COST(4); PUSH(R.si);                                     // 02b2 push si
  R.si = (u16)(R.bx);                                          // 02b3 mov si, bx
  SETL(R.ax, 0xf0);                                            // 02b5 mov al, 0xf0
  PUSH(0x02ba); a_mt15_0233();                                 // 02b7 call 0x233
  ASM_COST(2); SETL(R.ax, 0x41);                               // 02ba mov al, 0x41
  PUSH(0x02bf); a_mt15_0233();                                 // 02bc call 0x233
  ASM_COST(2); SETL(R.ax, 0x10);                               // 02bf mov al, 0x10
  PUSH(0x02c4); a_mt15_0233();                                 // 02c1 call 0x233
  ASM_COST(2); SETL(R.ax, 0x16);                               // 02c4 mov al, 0x16
  PUSH(0x02c9); a_mt15_0233();                                 // 02c6 call 0x233
  ASM_COST(2); SETL(R.ax, 0x12);                               // 02c9 mov al, 0x12
  PUSH(0x02ce); a_mt15_0233();                                 // 02cb call 0x233
  ASM_COST(1); R.dx = (u16)(0x0);                              // 02ce mov dx, 0
L_02d1:   ASM_COST(4); SETL(R.ax, M8(ES, (u16)(R.si)));                // 02d1 mov al, byte ptr es:[si]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 02d4 xor ah, ah
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 02d6 add dx, ax
  PUSH(0x02db); a_mt15_0233();                                 // 02d8 call 0x233
  ASM_COST(2); R.ax = (u16)(0x3e8);                            // 02db mov ax, 0x3e8
  PUSH(0x02e1); a_mt15_0195();                                 // 02de call 0x195
  ASM_COST(2); R.si = (u16)(INC16(R.si));                      // 02e1 inc si
  if (--R.cx != 0) { ASM_BACK(); goto L_02d1; }                // 02e2 loop 0x2d1
  ASM_COST(4); SETL(R.ax, (u8)R.dx);                           // 02e4 mov al, dl
  SETL(R.ax, NEG8((u8)R.ax));                                  // 02e6 neg al
  SETL(R.ax, AND8((u8)R.ax, 0x7f));                            // 02e8 and al, 0x7f
  PUSH(0x02ed); a_mt15_0233();                                 // 02ea call 0x233
  ASM_COST(2); SETL(R.ax, 0xf7);                               // 02ed mov al, 0xf7
  PUSH(0x02f2); a_mt15_0233();                                 // 02ef call 0x233
  ASM_COST(2); R.si = POP();                                   // 02f2 pop si
  R.sp += 2; goto L_ret;                                       // 02f3 ret
L_ret:
  return;
}

static u16 f_mt15_02b2(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_mt15_02b2();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0233 FUN_1000_0233  FIX: recompiled from the machine code (asm2c)
static void a_mt15_0233(void)
{
  R.cs = mt15_seg;
  ASM_COST(3); PUSH(R.cx);                                     // 0233 push cx
  PUSH(R.dx);                                                  // 0234 push dx
  PUSH(R.ax);                                                  // 0235 push ax
L_0236:   ASM_COST(5); R.dx = (u16)(0x331);                            // 0236 mov dx, 0x331
  R.cx = (u16)(0xffff);                                        // 0239 mov cx, 0xffff
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 023c in al, dx
  AND8((u8)R.ax, 0x40);                                        // 023d test al, 0x40
  if (R.zf) goto L_0254;                                       // 023f je 0x254
  ASM_COST(2); SETL(R.ax, ROL8((u8)R.ax, 0x1));                // 0241 rol al, 1
  if (!R.cf) goto L_025f;                                      // 0243 jae 0x25f
  ASM_COST(1); ASM_BACK(); goto L_0236;                        // 0245 jmp 0x236
L_0254:   ASM_COST(7); R.dx = (u16)(0x330);                            // 0254 mov dx, 0x330
  R.ax = POP();                                                // 0257 pop ax
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0258 out dx, al
  R.ax = (u16)(0x0);                                           // 0259 mov ax, 0
  R.dx = POP();                                                // 025c pop dx
  R.cx = POP();                                                // 025d pop cx
  R.sp += 2; goto L_ret;                                       // 025e ret
L_025f:   ASM_COST(8); PUSH(R.si);                                     // 025f push si
  R.si = (u16)(M16(CS, (u16)(0x172)));                         // 0260 mov si, word ptr cs:[0x172]
  R.dx = (u16)(0x330);                                         // 0265 mov dx, 0x330
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0268 in al, dx
  W8(CS, (u16)(R.si + 0x14a), (u8)R.ax);                       // 0269 mov byte ptr cs:[si + 0x14a], al
  R.si = (u16)(INC16(R.si));                                   // 026e inc si
  SUB16(R.si, 0x28);                                           // 026f cmp si, 0x28
  if (!R.zf) goto L_0276;                                      // 0272 jne 0x276
  ASM_COST(1); R.si = (u16)(XOR16(R.si, R.si));                // 0274 xor si, si
L_0276:   ASM_COST(3); W16(CS, (u16)(0x172), R.si);                    // 0276 mov word ptr cs:[0x172], si
  R.si = POP();                                                // 027b pop si
  ASM_BACK(); goto L_0236;                                     // 027c jmp 0x236
L_ret:
  return;
}

static u16 f_mt15_0233(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_mt15_0233();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:01C7 FUN_1000_01c7  FIX: recompiled from the machine code (asm2c)
static void a_mt15_01c7(void)
{
  R.cs = mt15_seg;
  ASM_COST(5); PUSH(R.cx);                                     // 01c7 push cx
  PUSH(R.dx);                                                  // 01c8 push dx
  PUSH(R.ax);                                                  // 01c9 push ax
  R.dx = (u16)(0x331);                                         // 01ca mov dx, 0x331
  R.cx = (u16)(0xffff);                                        // 01cd mov cx, 0xffff
L_01d0:   ASM_COST(3); SETL(R.ax, ASM_PORT_IN(R.dx));                  // 01d0 in al, dx
  AND8((u8)R.ax, 0x40);                                        // 01d1 test al, 0x40
  if (R.zf) goto L_01e2;                                       // 01d3 je 0x1e2
  ASM_COST(3); R.cx = (u16)(DEC16(R.cx));                      // 01d5 dec cx
  SUB16(R.cx, 0x1);                                            // 01d6 cmp cx, 1
  if (R.sf == R.of) { ASM_BACK(); goto L_01d0; }               // 01d9 jge 0x1d0
  ASM_COST(3); R.ax = POP();                                   // 01db pop ax
  R.ax = (u16)(0xffff);                                        // 01dc mov ax, 0xffff
  goto L_020a;                                                 // 01df jmp 0x20a
L_01e2:   ASM_COST(4);                                                 // 01e2 cli
  R.ax = POP();                                                // 01e3 pop ax
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 01e4 out dx, al
  R.cx = (u16)(0xffff);                                        // 01e5 mov cx, 0xffff
L_01e8:   ASM_COST(3); SETL(R.ax, ASM_PORT_IN(R.dx));                  // 01e8 in al, dx
  SETL(R.ax, ROL8((u8)R.ax, 0x1));                             // 01e9 rol al, 1
  if (!R.cf) goto L_01f9;                                      // 01eb jae 0x1f9
  ASM_COST(3); R.cx = (u16)(DEC16(R.cx));                      // 01ed dec cx
  SUB16(R.cx, 0x1);                                            // 01ee cmp cx, 1
  if (R.sf == R.of) { ASM_BACK(); goto L_01e8; }               // 01f1 jge 0x1e8
  ASM_COST(2); R.ax = (u16)(0xffff);                           // 01f3 mov ax, 0xffff
  goto L_020a;                                                 // 01f6 jmp 0x20a
L_01f9:   ASM_COST(4); R.dx = (u16)(0x330);                            // 01f9 mov dx, 0x330
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 01fc in al, dx
  SUB8((u8)R.ax, 0xfe);                                        // 01fd cmp al, 0xfe
  if (R.zf) goto L_0207;                                       // 01ff je 0x207
  ASM_COST(2); R.ax = (u16)(0xffff);                           // 0201 mov ax, 0xffff
  goto L_020a;                                                 // 0204 jmp 0x20a
L_0207:   ASM_COST(1); R.ax = (u16)(0x0);                              // 0207 mov ax, 0
L_020a:   ASM_COST(4);                                                 // 020a sti
  R.dx = POP();                                                // 020b pop dx
  R.cx = POP();                                                // 020c pop cx
  R.sp += 2; goto L_ret;                                       // 020d ret
L_ret:
  return;
}

static u16 f_mt15_01c7(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_mt15_01c7();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:044E FUN_1000_044e  FIX: recompiled from the machine code (asm2c)
static void a_mt15_044e(void)
{
  R.cs = mt15_seg;
  ASM_COST(1); SETH(R.dx, 0xf);                                // 044e mov dh, 0xf
L_0450:   ASM_COST(3); SETL(R.ax, 0xb0);                               // 0450 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0452 or al, dh
  PUSH(0x0457); a_mt15_0233();                                 // 0454 call 0x233
  ASM_COST(2); SETL(R.ax, 0x7b);                               // 0457 mov al, 0x7b
  PUSH(0x045c); a_mt15_0233();                                 // 0459 call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 045c mov al, 0
  PUSH(0x0461); a_mt15_0233();                                 // 045e call 0x233
  ASM_COST(3); SETL(R.ax, 0xb0);                               // 0461 mov al, 0xb0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0463 or al, dh
  PUSH(0x0468); a_mt15_0233();                                 // 0465 call 0x233
  ASM_COST(2); SETL(R.ax, 0x79);                               // 0468 mov al, 0x79
  PUSH(0x046d); a_mt15_0233();                                 // 046a call 0x233
  ASM_COST(2); SETL(R.ax, 0x0);                                // 046d mov al, 0
  PUSH(0x0472); a_mt15_0233();                                 // 046f call 0x233
  ASM_COST(2); SETH(R.dx, DEC8((u8)(R.dx >> 8)));              // 0472 dec dh
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0450; }      // 0474 jg 0x450
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0476 retf
L_ret:
  return;
}

static u16 f_mt15_044e(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_mt15_044e();
  ASM_LEAVE(); return (u16)R.ax;
}

// the driver's slots: slot 0 + k runs the k-th entry, with the caller's return address on the stack
void mt15_slot(int slot)
{
  switch (slot)
  {
  case 0: a_mt15_0000(); return;
  case 1: a_mt15_0003(); return;
  case 2: a_mt15_0006(); return;
  case 3: a_mt15_0009(); return;
  case 4: a_mt15_000c(); return;
  case 5: a_mt15_000f(); return;
  case 6: a_mt15_0012(); return;
  case 7: a_mt15_0015(); return;
  case 8: a_mt15_0018(); return;
  case 9: a_mt15_001b(); return;
  case 10: a_mt15_001e(); return;
  case 11: a_mt15_0021(); return;
  case 12: a_mt15_0024(); return;
  case 13: a_mt15_0027(); return;
  case 14: a_mt15_002a(); return;
  case 15: a_mt15_002d(); return;
  case 16: a_mt15_0030(); return;
  case 17: a_mt15_0033(); return;
  case 18: a_mt15_0036(); return;
  case 19: a_mt15_0039(); return;
  case 20: a_mt15_003c(); return;
  case 21: a_mt15_003f(); return;
  case 22: a_mt15_0042(); return;
  default: R.sp += 4; return;  // a slot that is only retf
  }
}

// any routine of the module by its offset (the callbacks it registers with the program)
bool mt15_run(u16 off)
{
  switch (off)
  {
  case 0x0000: a_mt15_0000(); return true;
  case 0x0003: a_mt15_0003(); return true;
  case 0x0006: a_mt15_0006(); return true;
  case 0x0009: a_mt15_0009(); return true;
  case 0x000c: a_mt15_000c(); return true;
  case 0x000f: a_mt15_000f(); return true;
  case 0x0012: a_mt15_0012(); return true;
  case 0x0015: a_mt15_0015(); return true;
  case 0x0018: a_mt15_0018(); return true;
  case 0x001b: a_mt15_001b(); return true;
  case 0x001e: a_mt15_001e(); return true;
  case 0x0021: a_mt15_0021(); return true;
  case 0x0024: a_mt15_0024(); return true;
  case 0x0027: a_mt15_0027(); return true;
  case 0x002a: a_mt15_002a(); return true;
  case 0x002d: a_mt15_002d(); return true;
  case 0x0030: a_mt15_0030(); return true;
  case 0x0033: a_mt15_0033(); return true;
  case 0x0036: a_mt15_0036(); return true;
  case 0x0039: a_mt15_0039(); return true;
  case 0x003c: a_mt15_003c(); return true;
  case 0x003f: a_mt15_003f(); return true;
  case 0x0042: a_mt15_0042(); return true;
  case 0x0195: a_mt15_0195(); return true;
  case 0x01c7: a_mt15_01c7(); return true;
  case 0x0233: a_mt15_0233(); return true;
  case 0x02b2: a_mt15_02b2(); return true;
  case 0x02ba: a_mt15_02ba(); return true;
  case 0x02bf: a_mt15_02bf(); return true;
  case 0x02c4: a_mt15_02c4(); return true;
  case 0x02c9: a_mt15_02c9(); return true;
  case 0x02db: a_mt15_02db(); return true;
  case 0x02ed: a_mt15_02ed(); return true;
  case 0x0330: a_mt15_0330(); return true;
  case 0x0380: a_mt15_0380(); return true;
  case 0x0386: a_mt15_0386(); return true;
  case 0x03cb: a_mt15_03cb(); return true;
  case 0x03d1: a_mt15_03d1(); return true;
  case 0x042f: a_mt15_042f(); return true;
  case 0x044e: a_mt15_044e(); return true;
  case 0x0457: a_mt15_0457(); return true;
  case 0x045c: a_mt15_045c(); return true;
  case 0x0461: a_mt15_0461(); return true;
  case 0x0468: a_mt15_0468(); return true;
  case 0x046d: a_mt15_046d(); return true;
  case 0x04a6: a_mt15_04a6(); return true;
  case 0x04bd: a_mt15_04bd(); return true;
  case 0x04c6: a_mt15_04c6(); return true;
  case 0x04e0: a_mt15_04e0(); return true;
  case 0x04e5: a_mt15_04e5(); return true;
  case 0x04f8: a_mt15_04f8(); return true;
  case 0x04fe: a_mt15_04fe(); return true;
  case 0x050f: a_mt15_050f(); return true;
  case 0x0514: a_mt15_0514(); return true;
  case 0x052c: a_mt15_052c(); return true;
  case 0x054f: a_mt15_054f(); return true;
  case 0x0574: a_mt15_0574(); return true;
  case 0x0579: a_mt15_0579(); return true;
  case 0x05d5: a_mt15_05d5(); return true;
  case 0x05e4: a_mt15_05e4(); return true;
  case 0x05ec: a_mt15_05ec(); return true;
  case 0x0628: a_mt15_0628(); return true;
  case 0x0632: a_mt15_0632(); return true;
  case 0x0648: a_mt15_0648(); return true;
  case 0x064d: a_mt15_064d(); return true;
  case 0x066f: a_mt15_066f(); return true;
  case 0x0678: a_mt15_0678(); return true;
  case 0x0691: a_mt15_0691(); return true;
  case 0x06b3: a_mt15_06b3(); return true;
  case 0x06bc: a_mt15_06bc(); return true;
  case 0x06d5: a_mt15_06d5(); return true;
  default: return false;
  }
}
