// PC15.DRV (the game's pc15 sound driver) recompiled from its machine code (the workspace's work/asm2c.py,
// work/drv_gen.sh): generated, do not edit. pc15_seg is the segment the game loaded it at.
#include "drivers.h"
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-variable"
u16 pc15_seg;


// ---- recompiled bodies
static void a_pc15_0000(void);
static void a_pc15_0003(void);
static void a_pc15_0006(void);
static void a_pc15_0009(void);
static void a_pc15_000c(void);
static void a_pc15_000f(void);
static void a_pc15_0012(void);
static void a_pc15_0015(void);
static void a_pc15_0018(void);
static void a_pc15_001b(void);
static void a_pc15_001e(void);
static void a_pc15_0021(void);
static void a_pc15_0024(void);
static void a_pc15_0027(void);
static void a_pc15_002a(void);
static void a_pc15_002d(void);
static void a_pc15_0030(void);
static void a_pc15_0033(void);
static void a_pc15_0036(void);
static void a_pc15_0039(void);
static void a_pc15_003c(void);
static void a_pc15_003f(void);
static void a_pc15_0042(void);
static void a_pc15_0045(void);
static void a_pc15_031c(void);
static void a_pc15_03e9(void);
static void a_pc15_0422(void);
static void a_pc15_070c(void);
static void a_pc15_07b2(void);
static void a_pc15_08ac(void);
static void a_pc15_06ee(void);
static void a_pc15_089b(void);
static void a_pc15_0345(void);

// Recompiled from the machine code by the workspace's work/asm2c.py (the decompilation of these functions
// failed); see asm2c.h.

// 1000:0000 FUN_1000_0000  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0000(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_0314;                                    // 0000 jmp 0x314
L_0314:   ASM_COST(4); SETL(R.ax, 0xb6);                               // 0314 mov al, 0xb6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0316 out 0x43, al
  // 0318 push cs
  PUSH(pc15_seg); PUSH(0x031c); a_pc15_0345();                 // 0319 call 0x345
  ASM_COST(11); R.ax = (u16)(XOR16(R.ax, R.ax));               // 031c xor ax, ax
  W16(CS, (u16)(0x2eb), R.ax);                                 // 031e mov word ptr cs:[0x2eb], ax
  W16(CS, (u16)(0x2ed), R.ax);                                 // 0322 mov word ptr cs:[0x2ed], ax
  SETL(R.ax, 0x7f);                                            // 0326 mov al, 0x7f
  W8(CS, (u16)(0x1c6), (u8)R.ax);                              // 0328 mov byte ptr cs:[0x1c6], al
  W8(CS, (u16)(0x1c7), (u8)R.ax);                              // 032c mov byte ptr cs:[0x1c7], al
  W8(CS, (u16)(0x1c8), (u8)R.ax);                              // 0330 mov byte ptr cs:[0x1c8], al
  W8(CS, (u16)(0x1c9), (u8)R.ax);                              // 0334 mov byte ptr cs:[0x1c9], al
  W8(CS, (u16)(0x1ca), (u8)R.ax);                              // 0338 mov byte ptr cs:[0x1ca], al
  R.ax = (u16)(0x7);                                           // 033c mov ax, 7
  R.sp += 4; goto L_ret;                                       // 033f retf
L_ret:
  return;
}

static u16 f_pc15_0000(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0000();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0003 FUN_1000_0003  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0003(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_0340;                                    // 0003 jmp 0x340
L_0340:   ASM_COST(2);                                                 // 0340 push cs
  PUSH(pc15_seg); PUSH(0x0344); a_pc15_0345();                 // 0341 call 0x345
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0344 retf
L_ret:
  return;
}

static u16 f_pc15_0003(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0003();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0006 FUN_1000_0006  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0006(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_0345;                                    // 0006 jmp 0x345
L_0345:   ASM_COST(1); PUSH(0x0348); a_pc15_06ee();                    // 0345 call 0x6ee
  ASM_COST(10); SETL(R.ax, ASM_PORT_IN(0x61));                 // 0348 in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfc));                            // 034a and al, 0xfc
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 034c out 0x61, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 034e xor al, al
  W8(CS, (u16)(0x1b1), (u8)R.ax);                              // 0350 mov byte ptr cs:[0x1b1], al
  W8(CS, (u16)(0x1b2), (u8)R.ax);                              // 0354 mov byte ptr cs:[0x1b2], al
  W8(CS, (u16)(0x1b3), (u8)R.ax);                              // 0358 mov byte ptr cs:[0x1b3], al
  W8(CS, (u16)(0x1b4), (u8)R.ax);                              // 035c mov byte ptr cs:[0x1b4], al
  W8(CS, (u16)(0x1b5), (u8)R.ax);                              // 0360 mov byte ptr cs:[0x1b5], al
  R.sp += 4; goto L_ret;                                       // 0364 retf
L_ret:
  return;
}

static u16 f_pc15_0006(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0006();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0009 FUN_1000_0009  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0009(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_0365;                                    // 0009 jmp 0x365
L_0365:   ASM_COST(5); PUSH(R.bp);                                     // 0365 push bp
  R.bp = (u16)(R.sp);                                          // 0366 mov bp, sp
  PUSH(R.si);                                                  // 0368 push si
  SUB16(M16(SS, (u16)(R.bp + 0x6)), 0x0);                      // 0369 cmp word ptr [bp + 6], 0
  if (R.zf) goto L_039d;                                       // 036d je 0x39d
  ASM_COST(5); SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));          // 036f mov al, byte ptr [bp + 0xc]
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 0372 mov bx, word ptr [bp + 8]
  W8(DS, (u16)(R.bx + 0x3), (u8)R.ax);                         // 0375 mov byte ptr [bx + 3], al
  SUB8((u8)R.ax, 0xff);                                        // 0378 cmp al, 0xff
  if (R.zf) goto L_0390;                                       // 037a je 0x390
  ASM_COST(7); SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8))); // 037c xor ah, ah
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 037e shl ax, 1
  R.si = (u16)(R.ax);                                          // 0380 mov si, ax
  R.ax = (u16)(M16(CS, (u16)(R.si + 0x48)));                   // 0382 mov ax, word ptr cs:[si + 0x48]
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 0387 mov bx, word ptr [bp + 8]
  W16(DS, (u16)(R.bx + 0x4), R.ax);                            // 038a mov word ptr [bx + 4], ax
  W16(DS, (u16)(R.bx + 0x6), R.ax);                            // 038d mov word ptr [bx + 6], ax
L_0390:   ASM_COST(6); R.si = (u16)(M16(SS, (u16)(R.bp + 0x6)));       // 0390 mov si, word ptr [bp + 6]
  SETL(R.ax, 0xff);                                            // 0393 mov al, 0xff
  W8(CS, (u16)(R.si + 0x1b1), (u8)R.ax);                       // 0395 mov byte ptr cs:[si + 0x1b1], al
  R.si = POP();                                                // 039a pop si
  R.bp = POP();                                                // 039b pop bp
  R.sp += 4; goto L_ret;                                       // 039c retf
L_039d:   ASM_COST(3); { u16 a_ = (u16)(R.bp + 0x10); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 039d les bx, ptr [bp + 0x10]
  SUB8(M8(ES, (u16)(R.bx + 0xa)), 0x0);                        // 03a0 cmp byte ptr es:[bx + 0xa], 0
  if (R.zf) goto L_03ec;                                       // 03a5 je 0x3ec
  ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x5)), 0x6);           // 03a7 cmp byte ptr es:[bx + 5], 6
  if (!R.zf) goto L_03b3;                                      // 03ac jne 0x3b3
  ASM_COST(2); R.ax = (u16)(0x0);                              // 03ae mov ax, 0
  goto L_03b6;                                                 // 03b1 jmp 0x3b6
L_03b3:   ASM_COST(1); R.ax = (u16)(0x1);                              // 03b3 mov ax, 1
L_03b6:   ASM_COST(21); PUSH(R.ax);                                    // 03b6 push ax
  SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 03b7 mov al, byte ptr [bp + 0xc]
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 03ba mov bx, word ptr [bp + 8]
  W8(DS, (u16)(R.bx + 0x3), (u8)R.ax);                         // 03bd mov byte ptr [bx + 3], al
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 03c0 xor ah, ah
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 03c2 shl ax, 1
  R.si = (u16)(R.ax);                                          // 03c4 mov si, ax
  R.ax = (u16)(M16(CS, (u16)(R.si + 0x138)));                  // 03c6 mov ax, word ptr cs:[si + 0x138]
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 03cb mov bx, word ptr [bp + 8]
  W16(DS, (u16)(R.bx + 0x4), R.ax);                            // 03ce mov word ptr [bx + 4], ax
  W16(DS, (u16)(R.bx + 0x6), R.ax);                            // 03d1 mov word ptr [bx + 6], ax
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x4)));                    // 03d4 mov ax, word ptr [bx + 4]
  PUSH(R.ax);                                                  // 03d7 push ax
  { u16 a_ = (u16)(R.bp + 0x10); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 03d8 les bx, ptr [bp + 0x10]
  { u16 a_ = (u16)(R.bx + 0x6); R.bx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 03db les bx, ptr es:[bx + 6]
  PUSH(R.es);                                                  // 03df push es
  PUSH(R.bx);                                                  // 03e0 push bx
  R.ax = (u16)(0x0);                                           // 03e1 mov ax, 0
  PUSH(R.ax);                                                  // 03e4 push ax
  // 03e5 push cs
  PUSH(pc15_seg); PUSH(0x03e9); a_pc15_089b();                 // 03e6 call 0x89b
  ASM_COST(1); R.sp = (u16)(ADD16(R.sp, 0xa));                 // 03e9 add sp, 0xa
L_03ec:   ASM_COST(3); R.si = POP();                                   // 03ec pop si
  R.bp = POP();                                                // 03ed pop bp
  R.sp += 4; goto L_ret;                                       // 03ee retf
L_ret:
  return;
}

static u16 f_pc15_0009(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4, u16 p5)
{
  ASM_ENTER();
  PUSH((u16)p5);
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0009();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:000C FUN_1000_000c  FIX: recompiled from the machine code (asm2c)
static void a_pc15_000c(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_03ef;                                    // 000c jmp 0x3ef
L_03ef:   ASM_COST(4); PUSH(R.bp);                                     // 03ef push bp
  R.bp = (u16)(R.sp);                                          // 03f0 mov bp, sp
  R.bp = POP();                                                // 03f2 pop bp
  R.sp += 4; goto L_ret;                                       // 03f3 retf
L_ret:
  return;
}

static u16 f_pc15_000c(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_000c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:000F FUN_1000_000f  FIX: recompiled from the machine code (asm2c)
static void a_pc15_000f(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_0416;                                    // 000f jmp 0x416
L_0416:   ASM_COST(4); PUSH(R.bp);                                     // 0416 push bp
  R.bp = (u16)(R.sp);                                          // 0417 mov bp, sp
  SUB16(M16(SS, (u16)(R.bp + 0x6)), 0x0);                      // 0419 cmp word ptr [bp + 6], 0
  if (!R.zf) goto L_0422;                                      // 041d jne 0x422
  ASM_COST(1); PUSH(0x0422); a_pc15_06ee();                    // 041f call 0x6ee
L_0422:   ASM_COST(7); PUSH(R.si);                                     // 0422 push si
  R.si = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0423 mov si, word ptr [bp + 6]
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0426 xor al, al
  W8(CS, (u16)(R.si + 0x1b1), (u8)R.ax);                       // 0428 mov byte ptr cs:[si + 0x1b1], al
  R.si = POP();                                                // 042d pop si
  R.bp = POP();                                                // 042e pop bp
  R.sp += 4; goto L_ret;                                       // 042f retf
L_ret:
  return;
}

static u16 f_pc15_000f(u16 p0)
{
  ASM_ENTER();
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_000f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0012 FUN_1000_0012  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0012(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_03f4;                                    // 0012 jmp 0x3f4
L_03f4:   ASM_COST(9); PUSH(R.bp);                                     // 03f4 push bp
  R.bp = (u16)(R.sp);                                          // 03f5 mov bp, sp
  PUSH(R.si);                                                  // 03f7 push si
  R.si = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 03f8 mov si, word ptr [bp + 6]
  SETL(R.ax, M8(SS, (u16)(R.bp + 0xa)));                       // 03fb mov al, byte ptr [bp + 0xa]
  W8(CS, (u16)(R.si + 0x1c6), (u8)R.ax);                       // 03fe mov byte ptr cs:[si + 0x1c6], al
  R.si = POP();                                                // 0403 pop si
  R.bp = POP();                                                // 0404 pop bp
  R.sp += 4; goto L_ret;                                       // 0405 retf
L_ret:
  return;
}

static u16 f_pc15_0012(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0012();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0015 FUN_1000_0015  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0015(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_0406;                                    // 0015 jmp 0x406
L_0406:   ASM_COST(4); PUSH(R.bp);                                     // 0406 push bp
  R.bp = (u16)(R.sp);                                          // 0407 mov bp, sp
  R.bp = POP();                                                // 0409 pop bp
  R.sp += 4; goto L_ret;                                       // 040a retf
L_ret:
  return;
}

static u16 f_pc15_0015(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0015();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0018 FUN_1000_0018  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0018(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_040b;                                    // 0018 jmp 0x40b
L_040b:   ASM_COST(1); R.sp += 4; goto L_ret;                          // 040b retf
L_ret:
  return;
}

static u16 f_pc15_0018(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0018();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:001B FUN_1000_001b  FIX: recompiled from the machine code (asm2c)
static void a_pc15_001b(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_0411;                                    // 001b jmp 0x411
L_0411:   ASM_COST(4); PUSH(R.bp);                                     // 0411 push bp
  R.bp = (u16)(R.sp);                                          // 0412 mov bp, sp
  R.bp = POP();                                                // 0414 pop bp
  R.sp += 4; goto L_ret;                                       // 0415 retf
L_ret:
  return;
}

static u16 f_pc15_001b(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_001b();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:001E FUN_1000_001e  FIX: recompiled from the machine code (asm2c)
static void a_pc15_001e(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_0416;                                    // 001e jmp 0x416
L_0416:   ASM_COST(4); PUSH(R.bp);                                     // 0416 push bp
  R.bp = (u16)(R.sp);                                          // 0417 mov bp, sp
  SUB16(M16(SS, (u16)(R.bp + 0x6)), 0x0);                      // 0419 cmp word ptr [bp + 6], 0
  if (!R.zf) goto L_0422;                                      // 041d jne 0x422
  ASM_COST(1); PUSH(0x0422); a_pc15_06ee();                    // 041f call 0x6ee
L_0422:   ASM_COST(7); PUSH(R.si);                                     // 0422 push si
  R.si = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0423 mov si, word ptr [bp + 6]
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0426 xor al, al
  W8(CS, (u16)(R.si + 0x1b1), (u8)R.ax);                       // 0428 mov byte ptr cs:[si + 0x1b1], al
  R.si = POP();                                                // 042d pop si
  R.bp = POP();                                                // 042e pop bp
  R.sp += 4; goto L_ret;                                       // 042f retf
L_ret:
  return;
}

static u16 f_pc15_001e(u16 p0)
{
  ASM_ENTER();
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_001e();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0021 FUN_1000_0021  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0021(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_0430;                                    // 0021 jmp 0x430
L_0430:   ASM_COST(4); PUSH(R.bp);                                     // 0430 push bp
  R.bp = (u16)(R.sp);                                          // 0431 mov bp, sp
  R.bp = POP();                                                // 0433 pop bp
  R.sp += 4; goto L_ret;                                       // 0434 retf
L_ret:
  return;
}

static u16 f_pc15_0021(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0021();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0024 FUN_1000_0024  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0024(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_0435;                                    // 0024 jmp 0x435
L_0435:   ASM_COST(4); PUSH(R.bp);                                     // 0435 push bp
  R.bp = (u16)(R.sp);                                          // 0436 mov bp, sp
  SUB16(M16(SS, (u16)(R.bp + 0x6)), 0x0);                      // 0438 cmp word ptr [bp + 6], 0
  if (R.zf) goto L_045d;                                       // 043c je 0x45d
  ASM_COST(3); R.cx = (u16)(M16(SS, (u16)(R.bp + 0xa)));       // 043e mov cx, word ptr [bp + 0xa]
  SUB16(R.cx, 0x130);                                          // 0441 cmp cx, 0x130
  if (!R.cf && !R.zf) goto L_044c;                             // 0445 ja 0x44c
  ASM_COST(2); R.ax = (u16)(0x0);                              // 0447 mov ax, 0
  goto L_0454;                                                 // 044a jmp 0x454
L_044c:   ASM_COST(3); R.dx = (u16)(0x123);                            // 044c mov dx, 0x123
  R.ax = (u16)(0x4dc0);                                        // 044f mov ax, 0x4dc0
  DIV16(R.cx, 0x0452);                                         // 0452 div cx
L_0454:   ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0454 mov bx, word ptr [bp + 8]
  W16(DS, (u16)(R.bx + 0x4), R.ax);                            // 0457 mov word ptr [bx + 4], ax
  W16(DS, (u16)(R.bx + 0x6), R.ax);                            // 045a mov word ptr [bx + 6], ax
L_045d:   ASM_COST(2); R.bp = POP();                                   // 045d pop bp
  R.sp += 4; goto L_ret;                                       // 045e retf
L_ret:
  return;
}

static u16 f_pc15_0024(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0024();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0027 FUN_1000_0027  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0027(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_045f;                                    // 0027 jmp 0x45f
L_045f:   ASM_COST(5); PUSH(R.bp);                                     // 045f push bp
  R.bp = (u16)(R.sp);                                          // 0460 mov bp, sp
  SETL(R.ax, M8(CS, (u16)(0x1b1)));                            // 0462 mov al, byte ptr cs:[0x1b1]
  SETL(R.ax, OR8((u8)R.ax, (u8)R.ax));                         // 0466 or al, al
  if (R.zf) goto L_046c;                                       // 0468 je 0x46c
  ASM_COST(2); R.bp = POP();                                   // 046a pop bp
  R.sp += 4; goto L_ret;                                       // 046b retf
L_046c:   ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 046c mov bx, word ptr [bp + 8]
  SUB8(M8(DS, (u16)(R.bx + 0x1)), 0x0);                        // 046f cmp byte ptr [bx + 1], 0
  if (!R.zf) goto L_0477;                                      // 0473 jne 0x477
  ASM_COST(2); R.bp = POP();                                   // 0475 pop bp
  R.sp += 4; goto L_ret;                                       // 0476 retf
L_0477:   ASM_COST(4); PUSH(R.si);                                     // 0477 push si
  { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0478 les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x35)), 0x1);                       // 047b cmp byte ptr es:[bx + 0x35], 1
  if (!R.zf) goto L_049d;                                      // 0480 jne 0x49d
  ASM_COST(9); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0482 mov bx, word ptr [bp + 8]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x22)));                      // 0485 mov al, byte ptr [bx + 0x22]
  SETL(R.ax, ADD8((u8)R.ax, M8(DS, (u16)(R.bx + 0x3))));       // 0488 add al, byte ptr [bx + 3]
  W8(CS, (u16)(0x1b0), (u8)R.ax);                              // 048b mov byte ptr cs:[0x1b0], al
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 048f xor ah, ah
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0491 shl ax, 1
  R.si = (u16)(R.ax);                                          // 0493 mov si, ax
  R.cx = (u16)(M16(CS, (u16)(R.si + 0x48)));                   // 0495 mov cx, word ptr cs:[si + 0x48]
  goto L_04aa;                                                 // 049a jmp 0x4aa
L_049d:   ASM_COST(4); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 049d mov bx, word ptr [bp + 8]
  R.cx = (u16)(M16(DS, (u16)(R.bx + 0x4)));                    // 04a0 mov cx, word ptr [bx + 4]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x3)));                       // 04a3 mov al, byte ptr [bx + 3]
  W8(CS, (u16)(0x1b0), (u8)R.ax);                              // 04a6 mov byte ptr cs:[0x1b0], al
L_04aa:   ASM_COST(8); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 04aa les bx, ptr [bp + 0xc]
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x11)));                      // 04ad mov al, byte ptr es:[bx + 0x11]
  R.ax = (u16)(i16)(i8)R.ax;                                   // 04b1 cwde
  R.ax = (u16)(NEG16(R.ax));                                   // 04b2 neg ax
  R.cx = (u16)(ADD16(R.cx, R.ax));                             // 04b4 add cx, ax
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 04b6 mov bx, word ptr [bp + 0xa]
  SUB16(M16(DS, (u16)(R.bx + 0x26)), 0x0);                     // 04b9 cmp word ptr [bx + 0x26], 0
  if (!R.zf) goto L_04c2;                                      // 04bd jne 0x4c2
  ASM_COST(1); goto L_0548;                                    // 04bf jmp 0x548
L_04c2:   ASM_COST(1); if (R.sf != R.of) goto L_050c;                  // 04c2 jl 0x50c
  ASM_COST(13); SETL(R.ax, M8(CS, (u16)(0x1b0)));              // 04c4 mov al, byte ptr cs:[0x1b0]
  { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 04c8 les bx, ptr [bp + 0xc]
  SETL(R.ax, ADD8((u8)R.ax, M8(ES, (u16)(R.bx + 0x12))));      // 04cb add al, byte ptr es:[bx + 0x12]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 04cf xor ah, ah
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 04d1 shl ax, 1
  R.si = (u16)(R.ax);                                          // 04d3 mov si, ax
  R.ax = (u16)(M16(CS, (u16)(R.si + 0x48)));                   // 04d5 mov ax, word ptr cs:[si + 0x48]
  R.ax = (u16)(NEG16(R.ax));                                   // 04da neg ax
  R.ax = (u16)(ADD16(R.ax, R.cx));                             // 04dc add ax, cx
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 04de mov bx, word ptr [bp + 0xa]
  R.dx = (u16)(M16(DS, (u16)(R.bx + 0x26)));                   // 04e1 mov dx, word ptr [bx + 0x26]
  SUB16(R.dx, 0x1000);                                         // 04e4 cmp dx, 0x1000
  if (R.sf != R.of) goto L_04ee;                               // 04e8 jl 0x4ee
  ASM_COST(1); R.dx = (u16)(ADD16(R.dx, 0x80));                // 04ea add dx, 0x80
L_04ee:   ASM_COST(15); MUL16(R.dx);                                   // 04ee mul dx
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 04f0 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 04f2 rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 04f4 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 04f6 rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 04f8 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 04fa rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 04fc sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 04fe rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 0500 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0502 rcr ax, 1
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 0504 mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 0506 mov ah, dl
  R.cx = (u16)(SUB16(R.cx, R.ax));                             // 0508 sub cx, ax
  goto L_0548;                                                 // 050a jmp 0x548
L_050c:   ASM_COST(25); SETL(R.ax, M8(CS, (u16)(0x1b0)));              // 050c mov al, byte ptr cs:[0x1b0]
  { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0510 les bx, ptr [bp + 0xc]
  SETL(R.ax, SUB8((u8)R.ax, M8(ES, (u16)(R.bx + 0x12))));      // 0513 sub al, byte ptr es:[bx + 0x12]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 0517 xor ah, ah
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0519 shl ax, 1
  R.si = (u16)(R.ax);                                          // 051b mov si, ax
  R.ax = (u16)(M16(CS, (u16)(R.si + 0x48)));                   // 051d mov ax, word ptr cs:[si + 0x48]
  R.ax = (u16)(SUB16(R.ax, R.cx));                             // 0522 sub ax, cx
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 0524 mov bx, word ptr [bp + 0xa]
  R.dx = (u16)(M16(DS, (u16)(R.bx + 0x26)));                   // 0527 mov dx, word ptr [bx + 0x26]
  R.dx = (u16)(NEG16(R.dx));                                   // 052a neg dx
  MUL16(R.dx);                                                 // 052c mul dx
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 052e sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0530 rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 0532 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0534 rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 0536 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0538 rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 053a sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 053c rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 053e sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0540 rcr ax, 1
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 0542 mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 0544 mov ah, dl
  R.cx = (u16)(ADD16(R.cx, R.ax));                             // 0546 add cx, ax
L_0548:   ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0548 les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x28)), 0x2);                       // 054b cmp byte ptr es:[bx + 0x28], 2
  if (!R.zf) goto L_0558;                                      // 0550 jne 0x558
  ASM_COST(2); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0552 mov bx, word ptr [bp + 8]
  R.cx = (u16)(ADD16(R.cx, M16(DS, (u16)(R.bx + 0x1c))));      // 0555 add cx, word ptr [bx + 0x1c]
L_0558:   ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0558 les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x2);                       // 055b cmp byte ptr es:[bx + 0x19], 2
  if (!R.zf) goto L_0568;                                      // 0560 jne 0x568
  ASM_COST(2); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0562 mov bx, word ptr [bp + 8]
  R.cx = (u16)(ADD16(R.cx, M16(DS, (u16)(R.bx + 0x14))));      // 0565 add cx, word ptr [bx + 0x14]
L_0568:   ASM_COST(9); R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));       // 0568 mov ax, word ptr [bp + 6]
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 056b shl ax, 1
  R.si = (u16)(R.ax);                                          // 056d mov si, ax
  W16(CS, (u16)(R.si + 0x1b8), R.cx);                          // 056f mov word ptr cs:[si + 0x1b8], cx
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 0574 mov bx, word ptr [bp + 8]
  W16(DS, (u16)(R.bx + 0x6), R.cx);                            // 0577 mov word ptr [bx + 6], cx
  R.si = POP();                                                // 057a pop si
  R.bp = POP();                                                // 057b pop bp
  R.sp += 4; goto L_ret;                                       // 057c retf
L_ret:
  return;
}

static u16 f_pc15_0027(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0027();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:002A FUN_1000_002a  FIX: recompiled from the machine code (asm2c)
static void a_pc15_002a(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_057d;                                    // 002a jmp 0x57d
L_057d:   ASM_COST(8); PUSH(R.bp);                                     // 057d push bp
  R.bp = (u16)(R.sp);                                          // 057e mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 0580 mov ax, word ptr [bp + 0xa]
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 0583 mov bx, word ptr [bp + 8]
  W16(DS, (u16)(R.bx + 0x4), R.ax);                            // 0586 mov word ptr [bx + 4], ax
  W16(DS, (u16)(R.bx + 0x6), R.ax);                            // 0589 mov word ptr [bx + 6], ax
  R.bp = POP();                                                // 058c pop bp
  R.sp += 4; goto L_ret;                                       // 058d retf
L_ret:
  return;
}

static u16 f_pc15_002a(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_002a();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:002D FUN_1000_002d  FIX: recompiled from the machine code (asm2c)
static void a_pc15_002d(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_058e;                                    // 002d jmp 0x58e
L_058e:   ASM_COST(12); PUSH(R.bp);                                    // 058e push bp
  R.bp = (u16)(R.sp);                                          // 058f mov bp, sp
  PUSH(R.si);                                                  // 0591 push si
  PUSH(R.di);                                                  // 0592 push di
  SETL(R.ax, M8(SS, (u16)(R.bp + 0x8)));                       // 0593 mov al, byte ptr [bp + 8]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 0596 xor ah, ah
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0598 shl ax, 1
  R.si = (u16)(R.ax);                                          // 059a mov si, ax
  R.cx = (u16)(M16(CS, (u16)(R.si + 0x48)));                   // 059c mov cx, word ptr cs:[si + 0x48]
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 05a1 mov ax, word ptr [bp + 0xa]
  SUB16(R.ax, 0x0);                                            // 05a4 cmp ax, 0
  if (R.zf) goto L_061f;                                       // 05a7 je 0x61f
  ASM_COST(1); if (R.sf != R.of) goto L_05eb;                  // 05a9 jl 0x5eb
  ASM_COST(11); SETL(R.ax, M8(SS, (u16)(R.bp + 0x8)));         // 05ab mov al, byte ptr [bp + 8]
  SETL(R.ax, ADD8((u8)R.ax, M8(SS, (u16)(R.bp + 0xc))));       // 05ae add al, byte ptr [bp + 0xc]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 05b1 xor ah, ah
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 05b3 shl ax, 1
  R.si = (u16)(R.ax);                                          // 05b5 mov si, ax
  R.ax = (u16)(M16(CS, (u16)(R.si + 0x48)));                   // 05b7 mov ax, word ptr cs:[si + 0x48]
  R.ax = (u16)(NEG16(R.ax));                                   // 05bc neg ax
  R.ax = (u16)(ADD16(R.ax, R.cx));                             // 05be add ax, cx
  R.dx = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 05c0 mov dx, word ptr [bp + 0xa]
  SUB16(R.dx, 0x1000);                                         // 05c3 cmp dx, 0x1000
  if (R.sf != R.of) goto L_05cd;                               // 05c7 jl 0x5cd
  ASM_COST(1); R.dx = (u16)(ADD16(R.dx, 0x80));                // 05c9 add dx, 0x80
L_05cd:   ASM_COST(15); MUL16(R.dx);                                   // 05cd mul dx
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 05cf sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 05d1 rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 05d3 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 05d5 rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 05d7 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 05d9 rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 05db sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 05dd rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 05df sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 05e1 rcr ax, 1
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 05e3 mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 05e5 mov ah, dl
  R.cx = (u16)(SUB16(R.cx, R.ax));                             // 05e7 sub cx, ax
  goto L_061f;                                                 // 05e9 jmp 0x61f
L_05eb:   ASM_COST(23); SETL(R.ax, M8(SS, (u16)(R.bp + 0x8)));         // 05eb mov al, byte ptr [bp + 8]
  SETL(R.ax, SUB8((u8)R.ax, M8(SS, (u16)(R.bp + 0xc))));       // 05ee sub al, byte ptr [bp + 0xc]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 05f1 xor ah, ah
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 05f3 shl ax, 1
  R.si = (u16)(R.ax);                                          // 05f5 mov si, ax
  R.ax = (u16)(M16(CS, (u16)(R.si + 0x48)));                   // 05f7 mov ax, word ptr cs:[si + 0x48]
  R.ax = (u16)(SUB16(R.ax, R.cx));                             // 05fc sub ax, cx
  R.dx = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 05fe mov dx, word ptr [bp + 0xa]
  R.dx = (u16)(NEG16(R.dx));                                   // 0601 neg dx
  MUL16(R.dx);                                                 // 0603 mul dx
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 0605 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0607 rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 0609 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 060b rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 060d sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 060f rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 0611 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0613 rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 0615 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0617 rcr ax, 1
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 0619 mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 061b mov ah, dl
  R.cx = (u16)(ADD16(R.cx, R.ax));                             // 061d add cx, ax
L_061f:   ASM_COST(5); R.ax = (u16)(R.cx);                             // 061f mov ax, cx
  R.di = POP();                                                // 0621 pop di
  R.si = POP();                                                // 0622 pop si
  R.bp = POP();                                                // 0623 pop bp
  R.sp += 4; goto L_ret;                                       // 0624 retf
L_ret:
  return;
}

static u16 f_pc15_002d(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_002d();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0030 FUN_1000_0030  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0030(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_0625;                                    // 0030 jmp 0x625
L_0625:   ASM_COST(10); PUSH(R.bp);                                    // 0625 push bp
  R.bp = (u16)(R.sp);                                          // 0626 mov bp, sp
  PUSH(R.ds);                                                  // 0628 push ds
  R.ax = (u16)(R.cs);                                          // 0629 mov ax, cs
  R.ds = (u16)(R.ax);                                          // 062b mov ds, ax
  SETL(R.ax, M8(DS, (u16)(0x1b1)));                            // 062d mov al, byte ptr [0x1b1]
  W8(DS, (u16)(0x1cd), (u8)R.ax);                              // 0630 mov byte ptr [0x1cd], al
  PUSH(R.si);                                                  // 0633 push si
  R.cx = (u16)(0x6);                                           // 0634 mov cx, 6
  R.si = (u16)(R.cx);                                          // 0637 mov si, cx
L_0639:   ASM_COST(2); SUB8(M8(DS, (u16)(R.si + 0x1c6)), 0x0);         // 0639 cmp byte ptr [si + 0x1c6], 0
  if (R.zf) goto L_064b;                                       // 063e je 0x64b
  ASM_COST(3); SETL(R.ax, M8(DS, (u16)(R.si + 0x1b1)));        // 0640 mov al, byte ptr [si + 0x1b1]
  W8(DS, (u16)(R.si + 0x1cd), (u8)R.ax);                       // 0644 mov byte ptr [si + 0x1cd], al
  goto L_0651;                                                 // 0648 jmp 0x651
L_064b:   ASM_COST(2); SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));           // 064b xor al, al
  W8(DS, (u16)(R.si + 0x1cd), (u8)R.ax);                       // 064d mov byte ptr [si + 0x1cd], al
L_0651:   ASM_COST(2); R.si = (u16)(DEC16(R.si));                      // 0651 dec si
  if (--R.cx != 0) { ASM_BACK(); goto L_0639; }                // 0652 loop 0x639
  ASM_COST(4); R.si = POP();                                   // 0654 pop si
  SETL(R.ax, M8(DS, (u16)(0x1cd)));                            // 0655 mov al, byte ptr [0x1cd]
  SUB8((u8)R.ax, 0x0);                                         // 0658 cmp al, 0
  if (R.zf) goto L_065f;                                       // 065a je 0x65f
  ASM_COST(1); goto L_06e3;                                    // 065c jmp 0x6e3
L_065f:   ASM_COST(3); SETL(R.ax, M8(DS, (u16)(0x1d3)));               // 065f mov al, byte ptr [0x1d3]
  SUB8((u8)R.ax, 0x0);                                         // 0662 cmp al, 0
  if (R.zf) goto L_066b;                                       // 0664 je 0x66b
  ASM_COST(2); R.ax = (u16)(M16(DS, (u16)(0x1c4)));            // 0666 mov ax, word ptr [0x1c4]
  goto L_06cf;                                                 // 0669 jmp 0x6cf
L_066b:   ASM_COST(3); SETL(R.ax, M8(DS, (u16)(0x1d2)));               // 066b mov al, byte ptr [0x1d2]
  SUB8((u8)R.ax, 0x0);                                         // 066e cmp al, 0
  if (R.zf) goto L_0677;                                       // 0670 je 0x677
  ASM_COST(2); R.ax = (u16)(M16(DS, (u16)(0x1c2)));            // 0672 mov ax, word ptr [0x1c2]
  goto L_06cf;                                                 // 0675 jmp 0x6cf
L_0677:   ASM_COST(6); SETL(R.bx, M8(DS, (u16)(0x1d0)));               // 0677 mov bl, byte ptr [0x1d0]
  SETL(R.cx, M8(DS, (u16)(0x1d1)));                            // 067b mov cl, byte ptr [0x1d1]
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 067f xor al, al
  SETL(R.ax, OR8((u8)R.ax, (u8)R.bx));                         // 0681 or al, bl
  SETL(R.ax, OR8((u8)R.ax, (u8)R.cx));                         // 0683 or al, cl
  if (R.zf) goto L_06b5;                                       // 0685 je 0x6b5
  ASM_COST(3); SETL(R.ax, M8(DS, (u16)(0x1d4)));               // 0687 mov al, byte ptr [0x1d4]
  SETL(R.ax, AND8((u8)R.ax, 0x2));                             // 068a and al, 2
  if (R.zf) goto L_06a6;                                       // 068c je 0x6a6
  ASM_COST(6); SETL(R.bx, M8(DS, (u16)(0x1ce)));               // 068e mov bl, byte ptr [0x1ce]
  SETL(R.cx, M8(DS, (u16)(0x1cf)));                            // 0692 mov cl, byte ptr [0x1cf]
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0696 xor al, al
  SETL(R.ax, OR8((u8)R.ax, (u8)R.bx));                         // 0698 or al, bl
  SETL(R.ax, OR8((u8)R.ax, (u8)R.cx));                         // 069a or al, cl
  if (!R.zf) goto L_06b5;                                      // 069c jne 0x6b5
  ASM_COST(2); SETL(R.bx, M8(DS, (u16)(0x1d0)));               // 069e mov bl, byte ptr [0x1d0]
  SETL(R.cx, M8(DS, (u16)(0x1d1)));                            // 06a2 mov cl, byte ptr [0x1d1]
L_06a6:   ASM_COST(2); SUB8((u8)R.bx, 0x0);                            // 06a6 cmp bl, 0
  if (R.zf) goto L_06b0;                                       // 06a9 je 0x6b0
  ASM_COST(2); R.ax = (u16)(M16(DS, (u16)(0x1be)));            // 06ab mov ax, word ptr [0x1be]
  goto L_06cf;                                                 // 06ae jmp 0x6cf
L_06b0:   ASM_COST(2); R.ax = (u16)(M16(DS, (u16)(0x1c0)));            // 06b0 mov ax, word ptr [0x1c0]
  goto L_06cf;                                                 // 06b3 jmp 0x6cf
L_06b5:   ASM_COST(3); SETL(R.bx, M8(DS, (u16)(0x1ce)));               // 06b5 mov bl, byte ptr [0x1ce]
  SUB8((u8)R.bx, 0x0);                                         // 06b9 cmp bl, 0
  if (!R.zf) goto L_06cc;                                      // 06bc jne 0x6cc
  ASM_COST(3); SETL(R.cx, M8(DS, (u16)(0x1cf)));               // 06be mov cl, byte ptr [0x1cf]
  SUB8((u8)R.cx, 0x0);                                         // 06c2 cmp cl, 0
  if (R.zf) goto L_06dd;                                       // 06c5 je 0x6dd
  ASM_COST(2); R.ax = (u16)(M16(DS, (u16)(0x1bc)));            // 06c7 mov ax, word ptr [0x1bc]
  goto L_06cf;                                                 // 06ca jmp 0x6cf
L_06cc:   ASM_COST(1); R.ax = (u16)(M16(DS, (u16)(0x1ba)));            // 06cc mov ax, word ptr [0x1ba]
L_06cf:   ASM_COST(7); ASM_PORT_OUT(0x42, (u8)R.ax);                   // 06cf out 0x42, al
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 06d1 mov al, ah
  ASM_PORT_OUT(0x42, (u8)R.ax);                                // 06d3 out 0x42, al
  SETL(R.ax, ASM_PORT_IN(0x61));                               // 06d5 in al, 0x61
  SETL(R.ax, OR8((u8)R.ax, 0x3));                              // 06d7 or al, 3
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 06d9 out 0x61, al
  goto L_06e3;                                                 // 06db jmp 0x6e3
L_06dd:   ASM_COST(3); SETL(R.ax, ASM_PORT_IN(0x61));                  // 06dd in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfe));                            // 06df and al, 0xfe
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 06e1 out 0x61, al
L_06e3:   ASM_COST(6); SETL(R.ax, M8(DS, (u16)(0x1d4)));               // 06e3 mov al, byte ptr [0x1d4]
  SETL(R.ax, INC8((u8)R.ax));                                  // 06e6 inc al
  W8(DS, (u16)(0x1d4), (u8)R.ax);                              // 06e8 mov byte ptr [0x1d4], al
  R.ds = POP();                                                // 06eb pop ds
  R.bp = POP();                                                // 06ec pop bp
  R.sp += 4; goto L_ret;                                       // 06ed retf
L_ret:
  return;
}

static u16 f_pc15_0030(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0030();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0033 FUN_1000_0033  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0033(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_089b;                                    // 0033 jmp 0x89b
L_089b:   ASM_COST(4); PUSH(R.bp);                                     // 089b push bp
  R.bp = (u16)(R.sp);                                          // 089c mov bp, sp
  SUB16(M16(SS, (u16)(R.bp + 0x6)), 0x0);                      // 089e cmp word ptr [bp + 6], 0
  if (R.zf) goto L_08a6;                                       // 08a2 je 0x8a6
  ASM_COST(2); R.bp = POP();                                   // 08a4 pop bp
  R.sp += 4; goto L_ret;                                       // 08a5 retf
L_08a6:   ASM_COST(4); PUSH(R.ds);                                     // 08a6 push ds
  PUSH(R.cs);                                                  // 08a7 push cs
  R.ds = POP();                                                // 08a8 pop ds
  PUSH(0x08ac); a_pc15_06ee();                                 // 08a9 call 0x6ee
  ASM_COST(10);                                                // 08ac cli
  SETL(R.ax, 0xff);                                            // 08ad mov al, 0xff
  W8(DS, (u16)(0x1b1), (u8)R.ax);                              // 08af mov byte ptr [0x1b1], al
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xe)));                    // 08b2 mov ax, word ptr [bp + 0xe]
  W8(DS, (u16)(0x1e5), (u8)R.ax);                              // 08b5 mov byte ptr [0x1e5], al
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 08b8 les bx, ptr [bp + 8]
  R.ax = (u16)((u16)(R.bx + 0x32));                            // 08bb lea ax, [bx + 0x32]
  R.cx = (u16)(R.ax);                                          // 08be mov cx, ax
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 08c0 cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_08dc;                                      // 08c5 jne 0x8dc
  ASM_COST(11); PUSH(R.ax);                                    // 08c7 push ax
  PUSH(R.bx);                                                  // 08c8 push bx
  R.bx = (u16)(R.ax);                                          // 08c9 mov bx, ax
  SETL(R.ax, M8(ES, (u16)(R.bx)));                             // 08cb mov al, byte ptr es:[bx]
  W8(DS, (u16)(0x307), (u8)R.ax);                              // 08ce mov byte ptr [0x307], al
  W8(DS, (u16)(0x308), (u8)R.ax);                              // 08d1 mov byte ptr [0x308], al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 08d4 xor al, al
  W8(DS, (u16)(0x306), (u8)R.ax);                              // 08d6 mov byte ptr [0x306], al
  R.bx = POP();                                                // 08d9 pop bx
  R.ax = POP();                                                // 08da pop ax
  R.cx = (u16)(INC16(R.cx));                                   // 08db inc cx
L_08dc:   ASM_COST(7); W16(DS, (u16)(0x1d5), R.ax);                    // 08dc mov word ptr [0x1d5], ax
  W16(DS, (u16)(0x1d7), R.es);                                 // 08df mov word ptr [0x1d7], es
  W16(DS, (u16)(0x1e1), R.cx);                                 // 08e3 mov word ptr [0x1e1], cx
  W16(DS, (u16)(0x1e3), R.es);                                 // 08e7 mov word ptr [0x1e3], es
  { u16 a_ = (u16)(R.bx + 0x8); R.cx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 08eb les cx, ptr es:[bx + 8]
  SUB16(R.cx, 0x0);                                            // 08ef cmp cx, 0
  if (!R.zf) goto L_08fd;                                      // 08f2 jne 0x8fd
  ASM_COST(6); SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));           // 08f4 xor al, al
  W8(DS, (u16)(0x1b1), (u8)R.ax);                              // 08f6 mov byte ptr [0x1b1], al
  // 08f9 sti 
  R.ds = POP();                                                // 08fa pop ds
  R.bp = POP();                                                // 08fb pop bp
  R.sp += 4; goto L_ret;                                       // 08fc retf
L_08fd:   ASM_COST(15); R.cx = (u16)(ADD16(R.cx, R.ax));               // 08fd add cx, ax
  R.cx = (u16)(DEC16(R.cx));                                   // 08ff dec cx
  W16(CS, (u16)(0x1d9), R.cx);                                 // 0900 mov word ptr cs:[0x1d9], cx
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0905 xor ax, ax
  R.es = (u16)(R.ax);                                          // 0907 mov es, ax
  R.ax = (u16)(M16(ES, (u16)(0x20)));                          // 0909 mov ax, word ptr es:[0x20]
  R.dx = (u16)(M16(ES, (u16)(0x22)));                          // 090d mov dx, word ptr es:[0x22]
  W16(DS, (u16)(0x2eb), R.ax);                                 // 0912 mov word ptr [0x2eb], ax
  W16(DS, (u16)(0x2ed), R.dx);                                 // 0915 mov word ptr [0x2ed], dx
  PUSH(R.es);                                                  // 0919 push es
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 091a les bx, ptr [bp + 8]
  R.ax = (u16)(0x70c);                                         // 091d mov ax, 0x70c
  R.dx = (u16)(R.cs);                                          // 0920 mov dx, cs
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 0922 cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_092e;                                      // 0927 jne 0x92e
  ASM_COST(2); R.ax = (u16)(0x7b2);                            // 0929 mov ax, 0x7b2
  R.dx = (u16)(R.cs);                                          // 092c mov dx, cs
L_092e:   ASM_COST(35); R.es = POP();                                  // 092e pop es
  W16(ES, (u16)(0x20), R.ax);                                  // 092f mov word ptr es:[0x20], ax
  W16(ES, (u16)(0x22), R.dx);                                  // 0933 mov word ptr es:[0x22], dx
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));                    // 0938 mov bx, word ptr [bp + 0xc]
  R.dx = (u16)(0x12);                                          // 093b mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 093e mov ax, 0x34dc
  DIV16(R.bx, 0x0941);                                         // 0941 div bx
  R.bx = (u16)(R.ax);                                          // 0943 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x2ef)));                         // 0945 mov ax, word ptr [0x2ef]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0948 xor dx, dx
  DIV16(R.bx, 0x094a);                                         // 094a div bx
  W16(DS, (u16)(0x2f1), R.ax);                                 // 094c mov word ptr [0x2f1], ax
  W16(DS, (u16)(0x2f3), R.ax);                                 // 094f mov word ptr [0x2f3], ax
  W16(DS, (u16)(0x1b8), R.bx);                                 // 0952 mov word ptr [0x1b8], bx
  SETL(R.ax, 0x36);                                            // 0956 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0958 out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 095a mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 095c out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 095e mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0960 out 0x40, al
  SETL(R.ax, 0xb4);                                            // 0962 mov al, 0xb4
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0964 out 0x43, al
  R.ax = (u16)(0x2);                                           // 0966 mov ax, 2
  ASM_PORT_OUT(0x42, (u8)R.ax);                                // 0969 out 0x42, al
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 096b mov al, ah
  ASM_PORT_OUT(0x42, (u8)R.ax);                                // 096d out 0x42, al
  R.dx = (u16)(0x21);                                          // 096f mov dx, 0x21
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0972 in al, dx
  W8(DS, (u16)(0x2f5), (u8)R.ax);                              // 0973 mov byte ptr [0x2f5], al
  SETL(R.ax, 0xfc);                                            // 0976 mov al, 0xfc
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0978 out dx, al
  // 0979 sti 
  R.ds = POP();                                                // 097a pop ds
  R.bp = POP();                                                // 097b pop bp
  R.sp += 4; goto L_ret;                                       // 097c retf
L_ret:
  return;
}

static u16 f_pc15_0033(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4)
{
  ASM_ENTER();
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0033();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0036 FUN_1000_0036  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0036(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_097d;                                    // 0036 jmp 0x97d
L_097d:   ASM_COST(5); PUSH(R.bp);                                     // 097d push bp
  R.bp = (u16)(R.sp);                                          // 097e mov bp, sp
  R.ax = (u16)(0x1);                                           // 0980 mov ax, 1
  SUB16(M16(SS, (u16)(R.bp + 0x6)), 0x0);                      // 0983 cmp word ptr [bp + 6], 0
  if (!R.zf) goto L_0993;                                      // 0987 jne 0x993
  ASM_COST(2); SUB8(M8(CS, (u16)(0x1b1)), 0x0);                // 0989 cmp byte ptr cs:[0x1b1], 0
  if (R.zf) goto L_0993;                                       // 098f je 0x993
  ASM_COST(1); R.ax = (u16)(XOR16(R.ax, R.ax));                // 0991 xor ax, ax
L_0993:   ASM_COST(2); R.bp = POP();                                   // 0993 pop bp
  R.sp += 4; goto L_ret;                                       // 0994 retf
L_ret:
  return;
}

static u16 f_pc15_0036(u16 p0)
{
  ASM_ENTER();
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0036();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0039 FUN_1000_0039  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0039(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_030e;                                    // 0039 jmp 0x30e
L_030e:   ASM_COST(4); PUSH(R.bp);                                     // 030e push bp
  R.bp = (u16)(R.sp);                                          // 030f mov bp, sp
  R.bp = POP();                                                // 0311 pop bp
  R.sp += 4; goto L_ret;                                       // 0312 retf
L_ret:
  return;
}

static u16 f_pc15_0039(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0039();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:003C FUN_1000_003c  FIX: recompiled from the machine code (asm2c)
static void a_pc15_003c(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_030a;                                    // 003c jmp 0x30a
L_030a:   ASM_COST(2); R.ax = (u16)(0xffff);                           // 030a mov ax, 0xffff
  R.sp += 4; goto L_ret;                                       // 030d retf
L_ret:
  return;
}

static u16 f_pc15_003c(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_003c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:003F FUN_1000_003f  FIX: recompiled from the machine code (asm2c)
static void a_pc15_003f(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_0313;                                    // 003f jmp 0x313
L_0313:   ASM_COST(1); R.sp += 4; goto L_ret;                          // 0313 retf
L_ret:
  return;
}

static u16 f_pc15_003f(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_003f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0042 FUN_1000_0042  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0042(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_0313;                                    // 0042 jmp 0x313
L_0313:   ASM_COST(1); R.sp += 4; goto L_ret;                          // 0313 retf
L_ret:
  return;
}

static u16 f_pc15_0042(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0042();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0045 FUN_1000_0045  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0045(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); goto L_0313;                                    // 0045 jmp 0x313
L_0313:   ASM_COST(1); R.sp += 4; goto L_ret;                          // 0313 retf
L_ret:
  return;
}

static u16 f_pc15_0045(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0045();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:031C FUN_1000_031c  FIX: recompiled from the machine code (asm2c)
static void a_pc15_031c(void)
{
  R.cs = pc15_seg;
  ASM_COST(11); R.ax = (u16)(XOR16(R.ax, R.ax));               // 031c xor ax, ax
  W16(CS, (u16)(0x2eb), R.ax);                                 // 031e mov word ptr cs:[0x2eb], ax
  W16(CS, (u16)(0x2ed), R.ax);                                 // 0322 mov word ptr cs:[0x2ed], ax
  SETL(R.ax, 0x7f);                                            // 0326 mov al, 0x7f
  W8(CS, (u16)(0x1c6), (u8)R.ax);                              // 0328 mov byte ptr cs:[0x1c6], al
  W8(CS, (u16)(0x1c7), (u8)R.ax);                              // 032c mov byte ptr cs:[0x1c7], al
  W8(CS, (u16)(0x1c8), (u8)R.ax);                              // 0330 mov byte ptr cs:[0x1c8], al
  W8(CS, (u16)(0x1c9), (u8)R.ax);                              // 0334 mov byte ptr cs:[0x1c9], al
  W8(CS, (u16)(0x1ca), (u8)R.ax);                              // 0338 mov byte ptr cs:[0x1ca], al
  R.ax = (u16)(0x7);                                           // 033c mov ax, 7
  R.sp += 4; goto L_ret;                                       // 033f retf
L_ret:
  return;
}

static u16 f_pc15_031c(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_031c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:03E9 FUN_1000_03e9  FIX: recompiled from the machine code (asm2c)
static void a_pc15_03e9(void)
{
  R.cs = pc15_seg;
  ASM_COST(4); R.sp = (u16)(ADD16(R.sp, 0xa));                 // 03e9 add sp, 0xa
  R.si = POP();                                                // 03ec pop si
  R.bp = POP();                                                // 03ed pop bp
  R.sp += 4; goto L_ret;                                       // 03ee retf
L_ret:
  return;
}

static u16 f_pc15_03e9(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_03e9();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0422 FUN_1000_0422  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0422(void)
{
  R.cs = pc15_seg;
  ASM_COST(7); PUSH(R.si);                                     // 0422 push si
  R.si = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0423 mov si, word ptr [bp + 6]
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0426 xor al, al
  W8(CS, (u16)(R.si + 0x1b1), (u8)R.ax);                       // 0428 mov byte ptr cs:[si + 0x1b1], al
  R.si = POP();                                                // 042d pop si
  R.bp = POP();                                                // 042e pop bp
  R.sp += 4; goto L_ret;                                       // 042f retf
L_ret:
  return;
}

static u16 f_pc15_0422(u16 p0)
{
  ASM_ENTER();
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0422();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:070C FUN_1000_070c  FIX: recompiled from the machine code (asm2c)
static void a_pc15_070c(void)
{
  R.cs = pc15_seg;
  ASM_COST(13); PUSH(R.ax);                                    // 070c push ax
  PUSH(R.bx);                                                  // 070d push bx
  PUSH(R.ds);                                                  // 070e push ds
  PUSH(R.cs);                                                  // 070f push cs
  SETL(R.ax, 0xfc);                                            // 0710 mov al, 0xfc
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 0712 out 0x21, al
  SETL(R.ax, 0xb6);                                            // 0714 mov al, 0xb6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0716 out 0x43, al
  { u16 a_ = (u16)(0x1e1); R.bx = (u16)(M16(CS, a_)); R.ds = M16(CS, (u16)(a_ + 2)); } // 0718 lds bx, ptr cs:[0x1e1]
  SETL(R.ax, M8(DS, (u16)(R.bx)));                             // 071d mov al, byte ptr [bx]
  R.ds = POP();                                                // 071f pop ds
  SUB16(R.bx, M16(DS, (u16)(0x1d9)));                          // 0720 cmp bx, word ptr [0x1d9]
  if (!R.cf) goto L_0767;                                      // 0724 jae 0x767
  ASM_COST(4); R.bx = (u16)(INC16(R.bx));                      // 0726 inc bx
  W16(DS, (u16)(0x1e1), R.bx);                                 // 0727 mov word ptr [0x1e1], bx
  SUB8((u8)R.ax, 0x56);                                        // 072b cmp al, 0x56
  if (!R.cf) goto L_0737;                                      // 072d jae 0x737
  ASM_COST(4); SETL(R.ax, ASM_PORT_IN(0x61));                  // 072f in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfd));                            // 0731 and al, 0xfd
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 0733 out 0x61, al
  goto L_074b;                                                 // 0735 jmp 0x74b
L_0737:   ASM_COST(2); SUB8((u8)R.ax, 0xaa);                           // 0737 cmp al, 0xaa
  if (!R.cf) goto L_0743;                                      // 0739 jae 0x743
  ASM_COST(4); SETL(R.ax, ASM_PORT_IN(0x61));                  // 073b in al, 0x61
  SETL(R.ax, OR8((u8)R.ax, 0x3));                              // 073d or al, 3
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 073f out 0x61, al
  goto L_074b;                                                 // 0741 jmp 0x74b
L_0743:   ASM_COST(4); SETL(R.ax, ASM_PORT_IN(0x61));                  // 0743 in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfe));                            // 0745 and al, 0xfe
  SETL(R.ax, OR8((u8)R.ax, 0x2));                              // 0747 or al, 2
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 0749 out 0x61, al
L_074b:   ASM_COST(2); W16(DS, (u16)(0x2f3), DEC16(M16(DS, (u16)(0x2f3)))); // 074b dec word ptr [0x2f3]
  if (R.zf) goto L_0759;                                       // 074f je 0x759
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0751 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0753 out 0x20, al
  R.ds = POP();                                                // 0755 pop ds
  R.bx = POP();                                                // 0756 pop bx
  R.ax = POP();                                                // 0757 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0758 iret
L_0759:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0x2f1)));            // 0759 mov ax, word ptr [0x2f1]
  W16(DS, (u16)(0x2f3), R.ax);                                 // 075c mov word ptr [0x2f3], ax
  R.ds = POP();                                                // 075f pop ds
  R.bx = POP();                                                // 0760 pop bx
  R.ax = POP();                                                // 0761 pop ax
  { u16 o_ = M16(CS, (u16)(0x2eb)), s_ = M16(CS, (u16)((u16)(0x2eb) + 2)); asm_far_jump(s_, o_); } return; // 0762 ljmp cs:[0x2eb]
L_0767:   ASM_COST(4); R.ax = (u16)(M16(DS, (u16)(0x1d5)));            // 0767 mov ax, word ptr [0x1d5]
  W16(DS, (u16)(0x1e1), R.ax);                                 // 076a mov word ptr [0x1e1], ax
  SUB8(M8(DS, (u16)(0x1e5)), 0x0);                             // 076d cmp byte ptr [0x1e5], 0
  if (R.zf) { ASM_BACK(); goto L_074b; }                       // 0772 je 0x74b
  ASM_COST(2); W8(DS, (u16)(0x1e5), DEC8(M8(DS, (u16)(0x1e5)))); // 0774 dec byte ptr [0x1e5]
  if (!R.zf) { ASM_BACK(); goto L_074b; }                      // 0778 jne 0x74b
  ASM_COST(23); R.ax = (u16)(XOR16(R.ax, R.ax));               // 077a xor ax, ax
  W8(DS, (u16)(0x1b1), (u8)R.ax);                              // 077c mov byte ptr [0x1b1], al
  PUSH(R.ds);                                                  // 077f push ds
  R.ds = (u16)(R.ax);                                          // 0780 mov ds, ax
  R.ax = (u16)(M16(CS, (u16)(0x2eb)));                         // 0782 mov ax, word ptr cs:[0x2eb]
  R.bx = (u16)(M16(CS, (u16)(0x2ed)));                         // 0786 mov bx, word ptr cs:[0x2ed]
  W16(DS, (u16)(0x20), R.ax);                                  // 078b mov word ptr [0x20], ax
  W16(DS, (u16)(0x22), R.bx);                                  // 078e mov word ptr [0x22], bx
  R.ds = POP();                                                // 0792 pop ds
  SETL(R.ax, 0x36);                                            // 0793 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0795 out 0x43, al
  SETL(R.ax, M8(DS, (u16)(0x2ef)));                            // 0797 mov al, byte ptr [0x2ef]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 079a out 0x40, al
  SETL(R.ax, M8(DS, (u16)(0x2f0)));                            // 079c mov al, byte ptr [0x2f0]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 079f out 0x40, al
  SETL(R.ax, 0xb6);                                            // 07a1 mov al, 0xb6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 07a3 out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x61));                               // 07a5 in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfc));                            // 07a7 and al, 0xfc
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 07a9 out 0x61, al
  SETL(R.ax, M8(DS, (u16)(0x2f5)));                            // 07ab mov al, byte ptr [0x2f5]
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 07ae out 0x21, al
  ASM_BACK(); goto L_074b;                                     // 07b0 jmp 0x74b
L_ret:
  return;
}

static u16 f_pc15_070c(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_pc15_070c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:07B2 FUN_1000_07b2  FIX: recompiled from the machine code (asm2c)
static void a_pc15_07b2(void)
{
  R.cs = pc15_seg;
  ASM_COST(10); PUSH(R.ax);                                    // 07b2 push ax
  PUSH(R.bx);                                                  // 07b3 push bx
  PUSH(R.ds);                                                  // 07b4 push ds
  PUSH(R.cs);                                                  // 07b5 push cs
  SETL(R.ax, 0xfc);                                            // 07b6 mov al, 0xfc
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 07b8 out 0x21, al
  SETL(R.ax, 0xb6);                                            // 07ba mov al, 0xb6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 07bc out 0x43, al
  W8(CS, (u16)(0x306), XOR8(M8(CS, (u16)(0x306)), 0xff));      // 07be xor byte ptr cs:[0x306], 0xff
  if (!R.zf) goto L_07cc;                                      // 07c4 jne 0x7cc
  ASM_COST(3); R.ds = POP();                                   // 07c6 pop ds
  SETL(R.ax, M8(DS, (u16)(0x307)));                            // 07c7 mov al, byte ptr [0x307]
  goto L_07ea;                                                 // 07ca jmp 0x7ea
L_07cc:   ASM_COST(5); { u16 a_ = (u16)(0x1e1); R.bx = (u16)(M16(CS, a_)); R.ds = M16(CS, (u16)(a_ + 2)); } // 07cc lds bx, ptr cs:[0x1e1]
  SETL(R.ax, M8(DS, (u16)(R.bx)));                             // 07d1 mov al, byte ptr [bx]
  R.ds = POP();                                                // 07d3 pop ds
  SUB16(R.bx, M16(DS, (u16)(0x1d9)));                          // 07d4 cmp bx, word ptr [0x1d9]
  if (!R.cf) goto L_083e;                                      // 07d8 jae 0x83e
  ASM_COST(7); R.bx = (u16)(INC16(R.bx));                      // 07da inc bx
  W16(DS, (u16)(0x1e1), R.bx);                                 // 07db mov word ptr [0x1e1], bx
  W8(DS, (u16)(0x307), (u8)R.ax);                              // 07df mov byte ptr [0x307], al
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 07e2 shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 07e4 shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 07e6 shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 07e8 shr al, 1
L_07ea:   ASM_COST(7); R.ax = (u16)(AND16(R.ax, 0xf));                 // 07ea and ax, 0xf
  R.bx = (u16)((u16)(0x2f6));                                  // 07ed lea bx, [0x2f6]
  SETL(R.ax, M8(DS, (u16)(R.bx + (u8)R.ax)));                  // 07f1 xlatb
  SETL(R.ax, ADD8((u8)R.ax, M8(DS, (u16)(0x308))));            // 07f2 add al, byte ptr [0x308]
  W8(DS, (u16)(0x308), (u8)R.ax);                              // 07f6 mov byte ptr [0x308], al
  SUB8((u8)R.ax, M8(DS, (u16)(0x1ea)));                        // 07f9 cmp al, byte ptr [0x1ea]
  if (R.zf) goto L_0822;                                       // 07fd je 0x822
  ASM_COST(3); W8(DS, (u16)(0x1ea), (u8)R.ax);                 // 07ff mov byte ptr [0x1ea], al
  SUB8((u8)R.ax, 0x56);                                        // 0802 cmp al, 0x56
  if (!R.cf) goto L_080e;                                      // 0804 jae 0x80e
  ASM_COST(4); SETL(R.ax, ASM_PORT_IN(0x61));                  // 0806 in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfd));                            // 0808 and al, 0xfd
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 080a out 0x61, al
  goto L_0822;                                                 // 080c jmp 0x822
L_080e:   ASM_COST(2); SUB8((u8)R.ax, 0xaa);                           // 080e cmp al, 0xaa
  if (!R.cf) goto L_081a;                                      // 0810 jae 0x81a
  ASM_COST(4); SETL(R.ax, ASM_PORT_IN(0x61));                  // 0812 in al, 0x61
  SETL(R.ax, OR8((u8)R.ax, 0x3));                              // 0814 or al, 3
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 0816 out 0x61, al
  goto L_0822;                                                 // 0818 jmp 0x822
L_081a:   ASM_COST(4); SETL(R.ax, ASM_PORT_IN(0x61));                  // 081a in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfe));                            // 081c and al, 0xfe
  SETL(R.ax, OR8((u8)R.ax, 0x2));                              // 081e or al, 2
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 0820 out 0x61, al
L_0822:   ASM_COST(2); W16(DS, (u16)(0x2f3), DEC16(M16(DS, (u16)(0x2f3)))); // 0822 dec word ptr [0x2f3]
  if (R.zf) goto L_0830;                                       // 0826 je 0x830
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0828 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 082a out 0x20, al
  R.ds = POP();                                                // 082c pop ds
  R.bx = POP();                                                // 082d pop bx
  R.ax = POP();                                                // 082e pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 082f iret
L_0830:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0x2f1)));            // 0830 mov ax, word ptr [0x2f1]
  W16(DS, (u16)(0x2f3), R.ax);                                 // 0833 mov word ptr [0x2f3], ax
  R.ds = POP();                                                // 0836 pop ds
  R.bx = POP();                                                // 0837 pop bx
  R.ax = POP();                                                // 0838 pop ax
  { u16 o_ = M16(CS, (u16)(0x2eb)), s_ = M16(CS, (u16)((u16)(0x2eb) + 2)); asm_far_jump(s_, o_); } return; // 0839 ljmp cs:[0x2eb]
L_083e:   ASM_COST(12); { u16 a_ = (u16)(0x1d5); R.bx = (u16)(M16(DS, a_)); R.ds = M16(DS, (u16)(a_ + 2)); } // 083e lds bx, ptr [0x1d5]
  SETL(R.ax, M8(DS, (u16)(R.bx)));                             // 0842 mov al, byte ptr [bx]
  PUSH(R.cs);                                                  // 0844 push cs
  R.ds = POP();                                                // 0845 pop ds
  W8(DS, (u16)(0x307), (u8)R.ax);                              // 0846 mov byte ptr [0x307], al
  W8(DS, (u16)(0x308), (u8)R.ax);                              // 0849 mov byte ptr [0x308], al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 084c xor al, al
  W8(DS, (u16)(0x306), (u8)R.ax);                              // 084e mov byte ptr [0x306], al
  R.bx = (u16)(INC16(R.bx));                                   // 0851 inc bx
  W16(DS, (u16)(0x1e1), R.bx);                                 // 0852 mov word ptr [0x1e1], bx
  SUB8(M8(DS, (u16)(0x1e5)), 0x0);                             // 0856 cmp byte ptr [0x1e5], 0
  if (R.zf) { ASM_BACK(); goto L_0822; }                       // 085b je 0x822
  ASM_COST(2); W8(DS, (u16)(0x1e5), DEC8(M8(DS, (u16)(0x1e5)))); // 085d dec byte ptr [0x1e5]
  if (!R.zf) { ASM_BACK(); goto L_0822; }                      // 0861 jne 0x822
  ASM_COST(23); R.ax = (u16)(XOR16(R.ax, R.ax));               // 0863 xor ax, ax
  W8(DS, (u16)(0x1b1), (u8)R.ax);                              // 0865 mov byte ptr [0x1b1], al
  PUSH(R.ds);                                                  // 0868 push ds
  R.ds = (u16)(R.ax);                                          // 0869 mov ds, ax
  R.ax = (u16)(M16(CS, (u16)(0x2eb)));                         // 086b mov ax, word ptr cs:[0x2eb]
  R.bx = (u16)(M16(CS, (u16)(0x2ed)));                         // 086f mov bx, word ptr cs:[0x2ed]
  W16(DS, (u16)(0x20), R.ax);                                  // 0874 mov word ptr [0x20], ax
  W16(DS, (u16)(0x22), R.bx);                                  // 0877 mov word ptr [0x22], bx
  R.ds = POP();                                                // 087b pop ds
  SETL(R.ax, 0x36);                                            // 087c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 087e out 0x43, al
  SETL(R.ax, M8(DS, (u16)(0x2ef)));                            // 0880 mov al, byte ptr [0x2ef]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0883 out 0x40, al
  SETL(R.ax, M8(DS, (u16)(0x2f0)));                            // 0885 mov al, byte ptr [0x2f0]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0888 out 0x40, al
  SETL(R.ax, 0xb6);                                            // 088a mov al, 0xb6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 088c out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x61));                               // 088e in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfc));                            // 0890 and al, 0xfc
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 0892 out 0x61, al
  SETL(R.ax, M8(DS, (u16)(0x2f5)));                            // 0894 mov al, byte ptr [0x2f5]
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 0897 out 0x21, al
  ASM_BACK(); goto L_0822;                                     // 0899 jmp 0x822
L_ret:
  return;
}

static u16 f_pc15_07b2(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_pc15_07b2();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:08AC FUN_1000_08ac  FIX: recompiled from the machine code (asm2c)
static void a_pc15_08ac(void)
{
  R.cs = pc15_seg;
  ASM_COST(10);                                                // 08ac cli
  SETL(R.ax, 0xff);                                            // 08ad mov al, 0xff
  W8(DS, (u16)(0x1b1), (u8)R.ax);                              // 08af mov byte ptr [0x1b1], al
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xe)));                    // 08b2 mov ax, word ptr [bp + 0xe]
  W8(DS, (u16)(0x1e5), (u8)R.ax);                              // 08b5 mov byte ptr [0x1e5], al
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 08b8 les bx, ptr [bp + 8]
  R.ax = (u16)((u16)(R.bx + 0x32));                            // 08bb lea ax, [bx + 0x32]
  R.cx = (u16)(R.ax);                                          // 08be mov cx, ax
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 08c0 cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_08dc;                                      // 08c5 jne 0x8dc
  ASM_COST(11); PUSH(R.ax);                                    // 08c7 push ax
  PUSH(R.bx);                                                  // 08c8 push bx
  R.bx = (u16)(R.ax);                                          // 08c9 mov bx, ax
  SETL(R.ax, M8(ES, (u16)(R.bx)));                             // 08cb mov al, byte ptr es:[bx]
  W8(DS, (u16)(0x307), (u8)R.ax);                              // 08ce mov byte ptr [0x307], al
  W8(DS, (u16)(0x308), (u8)R.ax);                              // 08d1 mov byte ptr [0x308], al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 08d4 xor al, al
  W8(DS, (u16)(0x306), (u8)R.ax);                              // 08d6 mov byte ptr [0x306], al
  R.bx = POP();                                                // 08d9 pop bx
  R.ax = POP();                                                // 08da pop ax
  R.cx = (u16)(INC16(R.cx));                                   // 08db inc cx
L_08dc:   ASM_COST(7); W16(DS, (u16)(0x1d5), R.ax);                    // 08dc mov word ptr [0x1d5], ax
  W16(DS, (u16)(0x1d7), R.es);                                 // 08df mov word ptr [0x1d7], es
  W16(DS, (u16)(0x1e1), R.cx);                                 // 08e3 mov word ptr [0x1e1], cx
  W16(DS, (u16)(0x1e3), R.es);                                 // 08e7 mov word ptr [0x1e3], es
  { u16 a_ = (u16)(R.bx + 0x8); R.cx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 08eb les cx, ptr es:[bx + 8]
  SUB16(R.cx, 0x0);                                            // 08ef cmp cx, 0
  if (!R.zf) goto L_08fd;                                      // 08f2 jne 0x8fd
  ASM_COST(6); SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));           // 08f4 xor al, al
  W8(DS, (u16)(0x1b1), (u8)R.ax);                              // 08f6 mov byte ptr [0x1b1], al
  // 08f9 sti 
  R.ds = POP();                                                // 08fa pop ds
  R.bp = POP();                                                // 08fb pop bp
  R.sp += 4; goto L_ret;                                       // 08fc retf
L_08fd:   ASM_COST(15); R.cx = (u16)(ADD16(R.cx, R.ax));               // 08fd add cx, ax
  R.cx = (u16)(DEC16(R.cx));                                   // 08ff dec cx
  W16(CS, (u16)(0x1d9), R.cx);                                 // 0900 mov word ptr cs:[0x1d9], cx
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0905 xor ax, ax
  R.es = (u16)(R.ax);                                          // 0907 mov es, ax
  R.ax = (u16)(M16(ES, (u16)(0x20)));                          // 0909 mov ax, word ptr es:[0x20]
  R.dx = (u16)(M16(ES, (u16)(0x22)));                          // 090d mov dx, word ptr es:[0x22]
  W16(DS, (u16)(0x2eb), R.ax);                                 // 0912 mov word ptr [0x2eb], ax
  W16(DS, (u16)(0x2ed), R.dx);                                 // 0915 mov word ptr [0x2ed], dx
  PUSH(R.es);                                                  // 0919 push es
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 091a les bx, ptr [bp + 8]
  R.ax = (u16)(0x70c);                                         // 091d mov ax, 0x70c
  R.dx = (u16)(R.cs);                                          // 0920 mov dx, cs
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 0922 cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_092e;                                      // 0927 jne 0x92e
  ASM_COST(2); R.ax = (u16)(0x7b2);                            // 0929 mov ax, 0x7b2
  R.dx = (u16)(R.cs);                                          // 092c mov dx, cs
L_092e:   ASM_COST(35); R.es = POP();                                  // 092e pop es
  W16(ES, (u16)(0x20), R.ax);                                  // 092f mov word ptr es:[0x20], ax
  W16(ES, (u16)(0x22), R.dx);                                  // 0933 mov word ptr es:[0x22], dx
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));                    // 0938 mov bx, word ptr [bp + 0xc]
  R.dx = (u16)(0x12);                                          // 093b mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 093e mov ax, 0x34dc
  DIV16(R.bx, 0x0941);                                         // 0941 div bx
  R.bx = (u16)(R.ax);                                          // 0943 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x2ef)));                         // 0945 mov ax, word ptr [0x2ef]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0948 xor dx, dx
  DIV16(R.bx, 0x094a);                                         // 094a div bx
  W16(DS, (u16)(0x2f1), R.ax);                                 // 094c mov word ptr [0x2f1], ax
  W16(DS, (u16)(0x2f3), R.ax);                                 // 094f mov word ptr [0x2f3], ax
  W16(DS, (u16)(0x1b8), R.bx);                                 // 0952 mov word ptr [0x1b8], bx
  SETL(R.ax, 0x36);                                            // 0956 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0958 out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 095a mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 095c out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 095e mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0960 out 0x40, al
  SETL(R.ax, 0xb4);                                            // 0962 mov al, 0xb4
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0964 out 0x43, al
  R.ax = (u16)(0x2);                                           // 0966 mov ax, 2
  ASM_PORT_OUT(0x42, (u8)R.ax);                                // 0969 out 0x42, al
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 096b mov al, ah
  ASM_PORT_OUT(0x42, (u8)R.ax);                                // 096d out 0x42, al
  R.dx = (u16)(0x21);                                          // 096f mov dx, 0x21
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0972 in al, dx
  W8(DS, (u16)(0x2f5), (u8)R.ax);                              // 0973 mov byte ptr [0x2f5], al
  SETL(R.ax, 0xfc);                                            // 0976 mov al, 0xfc
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0978 out dx, al
  // 0979 sti 
  R.ds = POP();                                                // 097a pop ds
  R.bp = POP();                                                // 097b pop bp
  R.sp += 4; goto L_ret;                                       // 097c retf
L_ret:
  return;
}

static u16 f_pc15_08ac(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4)
{
  ASM_ENTER();
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_08ac();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:06EE FUN_1000_06ee  FIX: recompiled from the machine code (asm2c)
static void a_pc15_06ee(void)
{
  R.cs = pc15_seg;
  ASM_COST(8);                                                 // 06ee cli
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 06ef xor al, al
  W8(CS, (u16)(0x306), (u8)R.ax);                              // 06f1 mov byte ptr cs:[0x306], al
  R.ax = (u16)(0xffff);                                        // 06f5 mov ax, 0xffff
  W16(CS, (u16)(0x1e1), R.ax);                                 // 06f8 mov word ptr cs:[0x1e1], ax
  SETL(R.ax, 0x1);                                             // 06fc mov al, 1
  W8(CS, (u16)(0x1e5), (u8)R.ax);                              // 06fe mov byte ptr cs:[0x1e5], al
  // 0702 sti 
L_0703:   ASM_COST(3); SETL(R.ax, M8(CS, (u16)(0x1b1)));               // 0703 mov al, byte ptr cs:[0x1b1]
  SUB8((u8)R.ax, 0x0);                                         // 0707 cmp al, 0
  if (!R.zf) { ASM_BACK(); goto L_0703; }                      // 0709 jne 0x703
  ASM_COST(1); R.sp += 2; goto L_ret;                          // 070b ret
L_ret:
  return;
}

static u16 f_pc15_06ee(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_pc15_06ee();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:089B FUN_1000_089b  FIX: recompiled from the machine code (asm2c)
static void a_pc15_089b(void)
{
  R.cs = pc15_seg;
  ASM_COST(4); PUSH(R.bp);                                     // 089b push bp
  R.bp = (u16)(R.sp);                                          // 089c mov bp, sp
  SUB16(M16(SS, (u16)(R.bp + 0x6)), 0x0);                      // 089e cmp word ptr [bp + 6], 0
  if (R.zf) goto L_08a6;                                       // 08a2 je 0x8a6
  ASM_COST(2); R.bp = POP();                                   // 08a4 pop bp
  R.sp += 4; goto L_ret;                                       // 08a5 retf
L_08a6:   ASM_COST(4); PUSH(R.ds);                                     // 08a6 push ds
  PUSH(R.cs);                                                  // 08a7 push cs
  R.ds = POP();                                                // 08a8 pop ds
  PUSH(0x08ac); a_pc15_06ee();                                 // 08a9 call 0x6ee
  ASM_COST(10);                                                // 08ac cli
  SETL(R.ax, 0xff);                                            // 08ad mov al, 0xff
  W8(DS, (u16)(0x1b1), (u8)R.ax);                              // 08af mov byte ptr [0x1b1], al
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xe)));                    // 08b2 mov ax, word ptr [bp + 0xe]
  W8(DS, (u16)(0x1e5), (u8)R.ax);                              // 08b5 mov byte ptr [0x1e5], al
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 08b8 les bx, ptr [bp + 8]
  R.ax = (u16)((u16)(R.bx + 0x32));                            // 08bb lea ax, [bx + 0x32]
  R.cx = (u16)(R.ax);                                          // 08be mov cx, ax
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 08c0 cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_08dc;                                      // 08c5 jne 0x8dc
  ASM_COST(11); PUSH(R.ax);                                    // 08c7 push ax
  PUSH(R.bx);                                                  // 08c8 push bx
  R.bx = (u16)(R.ax);                                          // 08c9 mov bx, ax
  SETL(R.ax, M8(ES, (u16)(R.bx)));                             // 08cb mov al, byte ptr es:[bx]
  W8(DS, (u16)(0x307), (u8)R.ax);                              // 08ce mov byte ptr [0x307], al
  W8(DS, (u16)(0x308), (u8)R.ax);                              // 08d1 mov byte ptr [0x308], al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 08d4 xor al, al
  W8(DS, (u16)(0x306), (u8)R.ax);                              // 08d6 mov byte ptr [0x306], al
  R.bx = POP();                                                // 08d9 pop bx
  R.ax = POP();                                                // 08da pop ax
  R.cx = (u16)(INC16(R.cx));                                   // 08db inc cx
L_08dc:   ASM_COST(7); W16(DS, (u16)(0x1d5), R.ax);                    // 08dc mov word ptr [0x1d5], ax
  W16(DS, (u16)(0x1d7), R.es);                                 // 08df mov word ptr [0x1d7], es
  W16(DS, (u16)(0x1e1), R.cx);                                 // 08e3 mov word ptr [0x1e1], cx
  W16(DS, (u16)(0x1e3), R.es);                                 // 08e7 mov word ptr [0x1e3], es
  { u16 a_ = (u16)(R.bx + 0x8); R.cx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 08eb les cx, ptr es:[bx + 8]
  SUB16(R.cx, 0x0);                                            // 08ef cmp cx, 0
  if (!R.zf) goto L_08fd;                                      // 08f2 jne 0x8fd
  ASM_COST(6); SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));           // 08f4 xor al, al
  W8(DS, (u16)(0x1b1), (u8)R.ax);                              // 08f6 mov byte ptr [0x1b1], al
  // 08f9 sti 
  R.ds = POP();                                                // 08fa pop ds
  R.bp = POP();                                                // 08fb pop bp
  R.sp += 4; goto L_ret;                                       // 08fc retf
L_08fd:   ASM_COST(15); R.cx = (u16)(ADD16(R.cx, R.ax));               // 08fd add cx, ax
  R.cx = (u16)(DEC16(R.cx));                                   // 08ff dec cx
  W16(CS, (u16)(0x1d9), R.cx);                                 // 0900 mov word ptr cs:[0x1d9], cx
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0905 xor ax, ax
  R.es = (u16)(R.ax);                                          // 0907 mov es, ax
  R.ax = (u16)(M16(ES, (u16)(0x20)));                          // 0909 mov ax, word ptr es:[0x20]
  R.dx = (u16)(M16(ES, (u16)(0x22)));                          // 090d mov dx, word ptr es:[0x22]
  W16(DS, (u16)(0x2eb), R.ax);                                 // 0912 mov word ptr [0x2eb], ax
  W16(DS, (u16)(0x2ed), R.dx);                                 // 0915 mov word ptr [0x2ed], dx
  PUSH(R.es);                                                  // 0919 push es
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 091a les bx, ptr [bp + 8]
  R.ax = (u16)(0x70c);                                         // 091d mov ax, 0x70c
  R.dx = (u16)(R.cs);                                          // 0920 mov dx, cs
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 0922 cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_092e;                                      // 0927 jne 0x92e
  ASM_COST(2); R.ax = (u16)(0x7b2);                            // 0929 mov ax, 0x7b2
  R.dx = (u16)(R.cs);                                          // 092c mov dx, cs
L_092e:   ASM_COST(35); R.es = POP();                                  // 092e pop es
  W16(ES, (u16)(0x20), R.ax);                                  // 092f mov word ptr es:[0x20], ax
  W16(ES, (u16)(0x22), R.dx);                                  // 0933 mov word ptr es:[0x22], dx
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));                    // 0938 mov bx, word ptr [bp + 0xc]
  R.dx = (u16)(0x12);                                          // 093b mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 093e mov ax, 0x34dc
  DIV16(R.bx, 0x0941);                                         // 0941 div bx
  R.bx = (u16)(R.ax);                                          // 0943 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x2ef)));                         // 0945 mov ax, word ptr [0x2ef]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0948 xor dx, dx
  DIV16(R.bx, 0x094a);                                         // 094a div bx
  W16(DS, (u16)(0x2f1), R.ax);                                 // 094c mov word ptr [0x2f1], ax
  W16(DS, (u16)(0x2f3), R.ax);                                 // 094f mov word ptr [0x2f3], ax
  W16(DS, (u16)(0x1b8), R.bx);                                 // 0952 mov word ptr [0x1b8], bx
  SETL(R.ax, 0x36);                                            // 0956 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0958 out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 095a mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 095c out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 095e mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0960 out 0x40, al
  SETL(R.ax, 0xb4);                                            // 0962 mov al, 0xb4
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0964 out 0x43, al
  R.ax = (u16)(0x2);                                           // 0966 mov ax, 2
  ASM_PORT_OUT(0x42, (u8)R.ax);                                // 0969 out 0x42, al
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 096b mov al, ah
  ASM_PORT_OUT(0x42, (u8)R.ax);                                // 096d out 0x42, al
  R.dx = (u16)(0x21);                                          // 096f mov dx, 0x21
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0972 in al, dx
  W8(DS, (u16)(0x2f5), (u8)R.ax);                              // 0973 mov byte ptr [0x2f5], al
  SETL(R.ax, 0xfc);                                            // 0976 mov al, 0xfc
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0978 out dx, al
  // 0979 sti 
  R.ds = POP();                                                // 097a pop ds
  R.bp = POP();                                                // 097b pop bp
  R.sp += 4; goto L_ret;                                       // 097c retf
L_ret:
  return;
}

static u16 f_pc15_089b(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4)
{
  ASM_ENTER();
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_089b();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0345 FUN_1000_0345  FIX: recompiled from the machine code (asm2c)
static void a_pc15_0345(void)
{
  R.cs = pc15_seg;
  ASM_COST(1); PUSH(0x0348); a_pc15_06ee();                    // 0345 call 0x6ee
  ASM_COST(10); SETL(R.ax, ASM_PORT_IN(0x61));                 // 0348 in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfc));                            // 034a and al, 0xfc
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 034c out 0x61, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 034e xor al, al
  W8(CS, (u16)(0x1b1), (u8)R.ax);                              // 0350 mov byte ptr cs:[0x1b1], al
  W8(CS, (u16)(0x1b2), (u8)R.ax);                              // 0354 mov byte ptr cs:[0x1b2], al
  W8(CS, (u16)(0x1b3), (u8)R.ax);                              // 0358 mov byte ptr cs:[0x1b3], al
  W8(CS, (u16)(0x1b4), (u8)R.ax);                              // 035c mov byte ptr cs:[0x1b4], al
  W8(CS, (u16)(0x1b5), (u8)R.ax);                              // 0360 mov byte ptr cs:[0x1b5], al
  R.sp += 4; goto L_ret;                                       // 0364 retf
L_ret:
  return;
}

static u16 f_pc15_0345(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_pc15_0345();
  ASM_LEAVE(); return (u16)R.ax;
}

// the driver's slots: slot 0 + k runs the k-th entry, with the caller's return address on the stack
void pc15_slot(int slot)
{
  switch (slot)
  {
  case 0: a_pc15_0000(); return;
  case 1: a_pc15_0003(); return;
  case 2: a_pc15_0006(); return;
  case 3: a_pc15_0009(); return;
  case 4: a_pc15_000c(); return;
  case 5: a_pc15_000f(); return;
  case 6: a_pc15_0012(); return;
  case 7: a_pc15_0015(); return;
  case 8: a_pc15_0018(); return;
  case 9: a_pc15_001b(); return;
  case 10: a_pc15_001e(); return;
  case 11: a_pc15_0021(); return;
  case 12: a_pc15_0024(); return;
  case 13: a_pc15_0027(); return;
  case 14: a_pc15_002a(); return;
  case 15: a_pc15_002d(); return;
  case 16: a_pc15_0030(); return;
  case 17: a_pc15_0033(); return;
  case 18: a_pc15_0036(); return;
  case 19: a_pc15_0039(); return;
  case 20: a_pc15_003c(); return;
  case 21: a_pc15_003f(); return;
  case 22: a_pc15_0042(); return;
  case 23: a_pc15_0045(); return;
  default: R.sp += 4; return;  // a slot that is only retf
  }
}

// any routine of the module by its offset (the callbacks it registers with the program)
bool pc15_run(u16 off)
{
  switch (off)
  {
  case 0x0000: a_pc15_0000(); return true;
  case 0x0003: a_pc15_0003(); return true;
  case 0x0006: a_pc15_0006(); return true;
  case 0x0009: a_pc15_0009(); return true;
  case 0x000c: a_pc15_000c(); return true;
  case 0x000f: a_pc15_000f(); return true;
  case 0x0012: a_pc15_0012(); return true;
  case 0x0015: a_pc15_0015(); return true;
  case 0x0018: a_pc15_0018(); return true;
  case 0x001b: a_pc15_001b(); return true;
  case 0x001e: a_pc15_001e(); return true;
  case 0x0021: a_pc15_0021(); return true;
  case 0x0024: a_pc15_0024(); return true;
  case 0x0027: a_pc15_0027(); return true;
  case 0x002a: a_pc15_002a(); return true;
  case 0x002d: a_pc15_002d(); return true;
  case 0x0030: a_pc15_0030(); return true;
  case 0x0033: a_pc15_0033(); return true;
  case 0x0036: a_pc15_0036(); return true;
  case 0x0039: a_pc15_0039(); return true;
  case 0x003c: a_pc15_003c(); return true;
  case 0x003f: a_pc15_003f(); return true;
  case 0x0042: a_pc15_0042(); return true;
  case 0x0045: a_pc15_0045(); return true;
  case 0x031c: a_pc15_031c(); return true;
  case 0x0345: a_pc15_0345(); return true;
  case 0x03e9: a_pc15_03e9(); return true;
  case 0x0422: a_pc15_0422(); return true;
  case 0x06ee: a_pc15_06ee(); return true;
  case 0x070c: a_pc15_070c(); return true;
  case 0x07b2: a_pc15_07b2(); return true;
  case 0x089b: a_pc15_089b(); return true;
  case 0x08ac: a_pc15_08ac(); return true;
  default: return false;
  }
}
