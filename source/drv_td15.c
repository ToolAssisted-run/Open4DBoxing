// TD15.DRV (the game's td15 sound driver) recompiled from its machine code (the workspace's work/asm2c.py,
// work/drv_gen.sh): generated, do not edit. td15_seg is the segment the game loaded it at.
#include "drivers.h"
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-variable"
u16 td15_seg;


// ---- recompiled bodies
static void a_td15_0000(void);
static void a_td15_0003(void);
static void a_td15_0006(void);
static void a_td15_0009(void);
static void a_td15_000c(void);
static void a_td15_000f(void);
static void a_td15_0012(void);
static void a_td15_0015(void);
static void a_td15_0018(void);
static void a_td15_001b(void);
static void a_td15_001e(void);
static void a_td15_0021(void);
static void a_td15_0024(void);
static void a_td15_0027(void);
static void a_td15_002a(void);
static void a_td15_002d(void);
static void a_td15_0030(void);
static void a_td15_0033(void);
static void a_td15_0036(void);
static void a_td15_0039(void);
static void a_td15_003c(void);
static void a_td15_061a(void);
static void a_td15_0656(void);
static void a_td15_065c(void);
static void a_td15_0662(void);
static void a_td15_0739(void);
static void a_td15_0783(void);
static void a_td15_07b3(void);
static void a_td15_07db(void);
static void a_td15_0a66(void);
static void a_td15_0ae4(void);
static void a_td15_0bb6(void);
static void a_td15_0a48(void);
static void a_td15_05f6(void);
static void a_td15_05bf(void);
static void a_td15_076b(void);
static void a_td15_0744(void);
static void a_td15_0ba5(void);
static void a_td15_0647(void);

// Recompiled from the machine code by the workspace's work/asm2c.py (the decompilation of these functions
// failed); see asm2c.h.

// 1000:0000 FUN_1000_0000  FIX: recompiled from the machine code (asm2c)
static void a_td15_0000(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_0612;                                    // 0000 jmp 0x612
L_0612:   ASM_COST(4); SETL(R.ax, 0xb6);                               // 0612 mov al, 0xb6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0614 out 0x43, al
  // 0616 push cs
  PUSH(td15_seg); PUSH(0x061a); a_td15_0647();                 // 0617 call 0x647
  ASM_COST(11); SETH(R.ax, 0xf);                               // 061a mov ah, 0xf
  W8(CS, (u16)(0x5af), (u8)(R.ax >> 8));                       // 061c mov byte ptr cs:[0x5af], ah
  W8(CS, (u16)(0x5b0), (u8)(R.ax >> 8));                       // 0621 mov byte ptr cs:[0x5b0], ah
  W8(CS, (u16)(0x5b1), (u8)(R.ax >> 8));                       // 0626 mov byte ptr cs:[0x5b1], ah
  W8(CS, (u16)(0x5b2), (u8)(R.ax >> 8));                       // 062b mov byte ptr cs:[0x5b2], ah
  W8(CS, (u16)(0x5b3), (u8)(R.ax >> 8));                       // 0630 mov byte ptr cs:[0x5b3], ah
  W8(CS, (u16)(0x5b4), (u8)(R.ax >> 8));                       // 0635 mov byte ptr cs:[0x5b4], ah
  SETH(R.ax, 0x85);                                            // 063a mov ah, 0x85
  ASM_INT(0x1a);                                               // 063c int 0x1a
  R.ax = (u16)(0x6);                                           // 063e mov ax, 6
  R.sp += 4; goto L_ret;                                       // 0641 retf
L_ret:
  return;
}

static u16 f_td15_0000(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0000();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0003 FUN_1000_0003  FIX: recompiled from the machine code (asm2c)
static void a_td15_0003(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_0642;                                    // 0003 jmp 0x642
L_0642:   ASM_COST(2);                                                 // 0642 push cs
  PUSH(td15_seg); PUSH(0x0646); a_td15_0647();                 // 0643 call 0x647
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0646 retf
L_ret:
  return;
}

static u16 f_td15_0003(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0003();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0006 FUN_1000_0006  FIX: recompiled from the machine code (asm2c)
static void a_td15_0006(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_0647;                                    // 0006 jmp 0x647
L_0647:   ASM_COST(1); PUSH(0x064a); a_td15_0a48();                    // 0647 call 0xa48
  ASM_COST(5); SETL(R.ax, ASM_PORT_IN(0x61));                  // 064a in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfe));                            // 064c and al, 0xfe
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 064e out 0x61, al
  R.ax = (u16)(0x1);                                           // 0650 mov ax, 1
  PUSH(0x0656); a_td15_05f6();                                 // 0653 call 0x5f6
  ASM_COST(2); R.ax = (u16)(0x2);                              // 0656 mov ax, 2
  PUSH(0x065c); a_td15_05f6();                                 // 0659 call 0x5f6
  ASM_COST(2); R.ax = (u16)(0x3);                              // 065c mov ax, 3
  PUSH(0x0662); a_td15_05f6();                                 // 065f call 0x5f6
  ASM_COST(2); R.ax = (u16)(0x4);                              // 0662 mov ax, 4
  PUSH(0x0668); a_td15_05f6();                                 // 0665 call 0x5f6
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0668 retf
L_ret:
  return;
}

static u16 f_td15_0006(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0006();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0009 FUN_1000_0009  FIX: recompiled from the machine code (asm2c)
static void a_td15_0009(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_0669;                                    // 0009 jmp 0x669
L_0669:   ASM_COST(8); PUSH(R.bp);                                     // 0669 push bp
  R.bp = (u16)(R.sp);                                          // 066a mov bp, sp
  PUSH(R.si);                                                  // 066c push si
  SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 066d mov al, byte ptr [bp + 0xc]
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 0670 mov bx, word ptr [bp + 8]
  W8(DS, (u16)(R.bx + 0x3), (u8)R.ax);                         // 0673 mov byte ptr [bx + 3], al
  SUB8((u8)R.ax, 0xff);                                        // 0676 cmp al, 0xff
  if (R.zf) goto L_06be;                                       // 0678 je 0x6be
  ASM_COST(6); SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8))); // 067a xor ah, ah
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 067c shl ax, 1
  R.si = (u16)(R.ax);                                          // 067e mov si, ax
  R.cx = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0680 mov cx, word ptr [bp + 6]
  SUB16(R.cx, 0x1);                                            // 0683 cmp cx, 1
  if (R.cf) goto L_0694;                                       // 0686 jb 0x694
  ASM_COST(2); SUB16(R.cx, 0x3);                               // 0688 cmp cx, 3
  if (!R.cf && !R.zf) goto L_069b;                             // 068b ja 0x69b
  ASM_COST(2); R.ax = (u16)(M16(CS, (u16)(R.si + 0x3a7)));     // 068d mov ax, word ptr cs:[si + 0x3a7]
  goto L_06b3;                                                 // 0692 jmp 0x6b3
L_0694:   ASM_COST(2); R.ax = (u16)(M16(CS, (u16)(R.si + 0x497)));     // 0694 mov ax, word ptr cs:[si + 0x497]
  goto L_06b3;                                                 // 0699 jmp 0x6b3
L_069b:   ASM_COST(2); SUB16(R.cx, 0x4);                               // 069b cmp cx, 4
  if (!R.zf) goto L_06ae;                                      // 069e jne 0x6ae
  ASM_COST(5); R.ax = (u16)(R.si);                             // 06a0 mov ax, si
  R.ax = (u16)(AND16(R.ax, 0xf));                              // 06a2 and ax, 0xf
  R.si = (u16)(R.ax);                                          // 06a5 mov si, ax
  R.ax = (u16)(M16(CS, (u16)(R.si + 0x557)));                  // 06a7 mov ax, word ptr cs:[si + 0x557]
  goto L_06b3;                                                 // 06ac jmp 0x6b3
L_06ae:   ASM_COST(1); R.ax = (u16)(M16(CS, (u16)(R.si + 0x23f)));     // 06ae mov ax, word ptr cs:[si + 0x23f]
L_06b3:   ASM_COST(4); R.dx = (u16)(R.ax);                             // 06b3 mov dx, ax
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 06b5 mov bx, word ptr [bp + 8]
  W16(DS, (u16)(R.bx + 0x4), R.ax);                            // 06b8 mov word ptr [bx + 4], ax
  W16(DS, (u16)(R.bx + 0x6), R.ax);                            // 06bb mov word ptr [bx + 6], ax
L_06be:   ASM_COST(3); { u16 a_ = (u16)(R.bp + 0x10); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 06be les bx, ptr [bp + 0x10]
  SUB8(M8(ES, (u16)(R.bx + 0x15)), 0x0);                       // 06c1 cmp byte ptr es:[bx + 0x15], 0
  if (!R.zf) goto L_06cc;                                      // 06c6 jne 0x6cc
  ASM_COST(2); SETL(R.ax, 0x7f);                               // 06c8 mov al, 0x7f
  goto L_06cf;                                                 // 06ca jmp 0x6cf
L_06cc:   ASM_COST(1); SETL(R.ax, M8(SS, (u16)(R.bp + 0xe)));          // 06cc mov al, byte ptr [bp + 0xe]
L_06cf:   ASM_COST(10); SETL(R.ax, SHR8((u8)R.ax, 0x1));               // 06cf shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 06d1 shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 06d3 shr al, 1
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 06d5 xor ah, ah
  R.si = (u16)(R.ax);                                          // 06d7 mov si, ax
  SETL(R.ax, M8(CS, (u16)(R.si + 0x567)));                     // 06d9 mov al, byte ptr cs:[si + 0x567]
  R.si = (u16)(R.cx);                                          // 06de mov si, cx
  W8(CS, (u16)(R.si + 0x5a9), (u8)R.ax);                       // 06e0 mov byte ptr cs:[si + 0x5a9], al
  SUB16(R.cx, 0x0);                                            // 06e5 cmp cx, 0
  if (R.zf) goto L_06ed;                                       // 06e8 je 0x6ed
  ASM_COST(3); R.si = POP();                                   // 06ea pop si
  R.bp = POP();                                                // 06eb pop bp
  R.sp += 4; goto L_ret;                                       // 06ec retf
L_06ed:   ASM_COST(3); { u16 a_ = (u16)(R.bp + 0x10); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 06ed les bx, ptr [bp + 0x10]
  SUB8(M8(ES, (u16)(R.bx + 0xa)), 0x0);                        // 06f0 cmp byte ptr es:[bx + 0xa], 0
  if (R.zf) goto L_073c;                                       // 06f5 je 0x73c
  ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x5)), 0x6);           // 06f7 cmp byte ptr es:[bx + 5], 6
  if (!R.zf) goto L_0703;                                      // 06fc jne 0x703
  ASM_COST(2); R.ax = (u16)(0x0);                              // 06fe mov ax, 0
  goto L_0706;                                                 // 0701 jmp 0x706
L_0703:   ASM_COST(1); R.ax = (u16)(0x1);                              // 0703 mov ax, 1
L_0706:   ASM_COST(21); PUSH(R.ax);                                    // 0706 push ax
  SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 0707 mov al, byte ptr [bp + 0xc]
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 070a mov bx, word ptr [bp + 8]
  W8(DS, (u16)(R.bx + 0x3), (u8)R.ax);                         // 070d mov byte ptr [bx + 3], al
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 0710 xor ah, ah
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0712 shl ax, 1
  R.si = (u16)(R.ax);                                          // 0714 mov si, ax
  R.ax = (u16)(M16(CS, (u16)(R.si + 0x32f)));                  // 0716 mov ax, word ptr cs:[si + 0x32f]
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 071b mov bx, word ptr [bp + 8]
  W16(DS, (u16)(R.bx + 0x4), R.ax);                            // 071e mov word ptr [bx + 4], ax
  W16(DS, (u16)(R.bx + 0x6), R.ax);                            // 0721 mov word ptr [bx + 6], ax
  R.ax = (u16)(M16(DS, (u16)(R.bx + 0x4)));                    // 0724 mov ax, word ptr [bx + 4]
  PUSH(R.ax);                                                  // 0727 push ax
  { u16 a_ = (u16)(R.bp + 0x10); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0728 les bx, ptr [bp + 0x10]
  { u16 a_ = (u16)(R.bx + 0x6); R.bx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 072b les bx, ptr es:[bx + 6]
  PUSH(R.es);                                                  // 072f push es
  PUSH(R.bx);                                                  // 0730 push bx
  R.ax = (u16)(0x0);                                           // 0731 mov ax, 0
  PUSH(R.ax);                                                  // 0734 push ax
  // 0735 push cs
  PUSH(td15_seg); PUSH(0x0739); a_td15_0ba5();                 // 0736 call 0xba5
  ASM_COST(1); R.sp = (u16)(ADD16(R.sp, 0xa));                 // 0739 add sp, 0xa
L_073c:   ASM_COST(3); R.si = POP();                                   // 073c pop si
  R.bp = POP();                                                // 073d pop bp
  R.sp += 4; goto L_ret;                                       // 073e retf
L_ret:
  return;
}

static u16 f_td15_0009(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4, u16 p5)
{
  ASM_ENTER();
  PUSH((u16)p5);
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0009();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:000C FUN_1000_000c  FIX: recompiled from the machine code (asm2c)
static void a_td15_000c(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_073f;                                    // 000c jmp 0x73f
L_073f:   ASM_COST(4); PUSH(R.bp);                                     // 073f push bp
  R.bp = (u16)(R.sp);                                          // 0740 mov bp, sp
  R.bp = POP();                                                // 0742 pop bp
  R.sp += 4; goto L_ret;                                       // 0743 retf
L_ret:
  return;
}

static u16 f_td15_000c(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_000c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:000F FUN_1000_000f  FIX: recompiled from the machine code (asm2c)
static void a_td15_000f(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_0793;                                    // 000f jmp 0x793
L_0793:   ASM_COST(5); PUSH(R.bp);                                     // 0793 push bp
  R.bp = (u16)(R.sp);                                          // 0794 mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0796 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 0799 cmp ax, 0
  if (R.cf) goto L_07b0;                                       // 079c jb 0x7b0
  ASM_COST(2); SUB16(R.ax, 0x4);                               // 079e cmp ax, 4
  if (!R.cf && !R.zf) goto L_07b9;                             // 07a1 ja 0x7b9
  ASM_COST(3); PUSH(R.ax);                                     // 07a3 push ax
  R.dx = (u16)(0x0);                                           // 07a4 mov dx, 0
  PUSH(0x07aa); a_td15_05bf();                                 // 07a7 call 0x5bf
  ASM_COST(2); R.ax = POP();                                   // 07aa pop ax
  PUSH(0x07ae); a_td15_05f6();                                 // 07ab call 0x5f6
  ASM_COST(2); R.bp = POP();                                   // 07ae pop bp
  R.sp += 4; goto L_ret;                                       // 07af retf
L_07b0:   ASM_COST(1); PUSH(0x07b3); a_td15_0a48();                    // 07b0 call 0xa48
  ASM_COST(4); SETH(R.ax, 0x85);                               // 07b3 mov ah, 0x85
  ASM_INT(0x1a);                                               // 07b5 int 0x1a
  R.bp = POP();                                                // 07b7 pop bp
  R.sp += 4; goto L_ret;                                       // 07b8 retf
L_07b9:   ASM_COST(5); SETL(R.ax, ASM_PORT_IN(0x61));                  // 07b9 in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfc));                            // 07bb and al, 0xfc
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 07bd out 0x61, al
  R.bp = POP();                                                // 07bf pop bp
  R.sp += 4; goto L_ret;                                       // 07c0 retf
L_ret:
  return;
}

static u16 f_td15_000f(u16 p0)
{
  ASM_ENTER();
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_000f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0012 FUN_1000_0012  FIX: recompiled from the machine code (asm2c)
static void a_td15_0012(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_0744;                                    // 0012 jmp 0x744
L_0744:   ASM_COST(11); PUSH(R.bp);                                    // 0744 push bp
  R.bp = (u16)(R.sp);                                          // 0745 mov bp, sp
  PUSH(R.si);                                                  // 0747 push si
  SETL(R.ax, M8(SS, (u16)(R.bp + 0xa)));                       // 0748 mov al, byte ptr [bp + 0xa]
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 074b shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 074d shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 074f shr al, 1
  R.si = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0751 mov si, word ptr [bp + 6]
  W8(CS, (u16)(R.si + 0x5af), (u8)R.ax);                       // 0754 mov byte ptr cs:[si + 0x5af], al
  SUB8((u8)R.ax, 0x0);                                         // 0759 cmp al, 0
  if (!R.zf) goto L_0768;                                      // 075b jne 0x768
  ASM_COST(2); SUB16(R.si, 0x5);                               // 075d cmp si, 5
  if (!R.zf) goto L_0768;                                      // 0760 jne 0x768
  ASM_COST(3); SETL(R.ax, ASM_PORT_IN(0x61));                  // 0762 in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfc));                            // 0764 and al, 0xfc
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 0766 out 0x61, al
L_0768:   ASM_COST(3); R.si = POP();                                   // 0768 pop si
  R.bp = POP();                                                // 0769 pop bp
  R.sp += 4; goto L_ret;                                       // 076a retf
L_ret:
  return;
}

static u16 f_td15_0012(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0012();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0015 FUN_1000_0015  FIX: recompiled from the machine code (asm2c)
static void a_td15_0015(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_076b;                                    // 0015 jmp 0x76b
L_076b:   ASM_COST(5); PUSH(R.bp);                                     // 076b push bp
  R.bp = (u16)(R.sp);                                          // 076c mov bp, sp
  SETL(R.ax, M8(SS, (u16)(R.bp + 0xa)));                       // 076e mov al, byte ptr [bp + 0xa]
  SUB8((u8)R.ax, 0x7);                                         // 0771 cmp al, 7
  if (!R.zf) goto L_0786;                                      // 0773 jne 0x786
  ASM_COST(6); SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));          // 0775 mov al, byte ptr [bp + 0xc]
  PUSH(R.ax);                                                  // 0778 push ax
  PUSH(M16(SS, (u16)(R.bp + 0x8)));                            // 0779 push word ptr [bp + 8]
  PUSH(M16(SS, (u16)(R.bp + 0x6)));                            // 077c push word ptr [bp + 6]
  // 077f push cs
  PUSH(td15_seg); PUSH(0x0783); a_td15_0744();                 // 0780 call 0x744
  ASM_COST(1); R.sp = (u16)(ADD16(R.sp, 0x6));                 // 0783 add sp, 6
L_0786:   ASM_COST(2); R.bp = POP();                                   // 0786 pop bp
  R.sp += 4; goto L_ret;                                       // 0787 retf
L_ret:
  return;
}

static u16 f_td15_0015(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0015();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0018 FUN_1000_0018  FIX: recompiled from the machine code (asm2c)
static void a_td15_0018(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_0788;                                    // 0018 jmp 0x788
L_0788:   ASM_COST(1); R.sp += 4; goto L_ret;                          // 0788 retf
L_ret:
  return;
}

static u16 f_td15_0018(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0018();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:001B FUN_1000_001b  FIX: recompiled from the machine code (asm2c)
static void a_td15_001b(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_078e;                                    // 001b jmp 0x78e
L_078e:   ASM_COST(4); PUSH(R.bp);                                     // 078e push bp
  R.bp = (u16)(R.sp);                                          // 078f mov bp, sp
  R.bp = POP();                                                // 0791 pop bp
  R.sp += 4; goto L_ret;                                       // 0792 retf
L_ret:
  return;
}

static u16 f_td15_001b(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_001b();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:001E FUN_1000_001e  FIX: recompiled from the machine code (asm2c)
static void a_td15_001e(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_0793;                                    // 001e jmp 0x793
L_0793:   ASM_COST(5); PUSH(R.bp);                                     // 0793 push bp
  R.bp = (u16)(R.sp);                                          // 0794 mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0796 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 0799 cmp ax, 0
  if (R.cf) goto L_07b0;                                       // 079c jb 0x7b0
  ASM_COST(2); SUB16(R.ax, 0x4);                               // 079e cmp ax, 4
  if (!R.cf && !R.zf) goto L_07b9;                             // 07a1 ja 0x7b9
  ASM_COST(3); PUSH(R.ax);                                     // 07a3 push ax
  R.dx = (u16)(0x0);                                           // 07a4 mov dx, 0
  PUSH(0x07aa); a_td15_05bf();                                 // 07a7 call 0x5bf
  ASM_COST(2); R.ax = POP();                                   // 07aa pop ax
  PUSH(0x07ae); a_td15_05f6();                                 // 07ab call 0x5f6
  ASM_COST(2); R.bp = POP();                                   // 07ae pop bp
  R.sp += 4; goto L_ret;                                       // 07af retf
L_07b0:   ASM_COST(1); PUSH(0x07b3); a_td15_0a48();                    // 07b0 call 0xa48
  ASM_COST(4); SETH(R.ax, 0x85);                               // 07b3 mov ah, 0x85
  ASM_INT(0x1a);                                               // 07b5 int 0x1a
  R.bp = POP();                                                // 07b7 pop bp
  R.sp += 4; goto L_ret;                                       // 07b8 retf
L_07b9:   ASM_COST(5); SETL(R.ax, ASM_PORT_IN(0x61));                  // 07b9 in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfc));                            // 07bb and al, 0xfc
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 07bd out 0x61, al
  R.bp = POP();                                                // 07bf pop bp
  R.sp += 4; goto L_ret;                                       // 07c0 retf
L_ret:
  return;
}

static u16 f_td15_001e(u16 p0)
{
  ASM_ENTER();
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_001e();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0021 FUN_1000_0021  FIX: recompiled from the machine code (asm2c)
static void a_td15_0021(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_07c1;                                    // 0021 jmp 0x7c1
L_07c1:   ASM_COST(12); PUSH(R.bp);                                    // 07c1 push bp
  R.bp = (u16)(R.sp);                                          // 07c2 mov bp, sp
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 07c4 mov bx, word ptr [bp + 0xa]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x28)));                      // 07c7 mov al, byte ptr [bx + 0x28]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 07ca xor ah, ah
  PUSH(R.ax);                                                  // 07cc push ax
  R.ax = (u16)(0x7);                                           // 07cd mov ax, 7
  PUSH(R.ax);                                                  // 07d0 push ax
  PUSH(M16(SS, (u16)(R.bp + 0x8)));                            // 07d1 push word ptr [bp + 8]
  PUSH(M16(SS, (u16)(R.bp + 0x6)));                            // 07d4 push word ptr [bp + 6]
  // 07d7 push cs
  PUSH(td15_seg); PUSH(0x07db); a_td15_076b();                 // 07d8 call 0x76b
  ASM_COST(3); R.sp = (u16)(ADD16(R.sp, 0x8));                 // 07db add sp, 8
  R.bp = POP();                                                // 07de pop bp
  R.sp += 4; goto L_ret;                                       // 07df retf
L_ret:
  return;
}

static u16 f_td15_0021(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0021();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0024 FUN_1000_0024  FIX: recompiled from the machine code (asm2c)
static void a_td15_0024(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_07e0;                                    // 0024 jmp 0x7e0
L_07e0:   ASM_COST(5); PUSH(R.bp);                                     // 07e0 push bp
  R.bp = (u16)(R.sp);                                          // 07e1 mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 07e3 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x1);                                            // 07e6 cmp ax, 1
  if (R.cf) goto L_0820;                                       // 07e9 jb 0x820
  ASM_COST(2); SUB16(R.ax, 0x4);                               // 07eb cmp ax, 4
  if (!R.cf && !R.zf) goto L_0820;                             // 07ee ja 0x820
  ASM_COST(3); R.cx = (u16)(M16(SS, (u16)(R.bp + 0xa)));       // 07f0 mov cx, word ptr [bp + 0xa]
  SUB16(R.cx, 0x6d6);                                          // 07f3 cmp cx, 0x6d6
  if (!R.cf && !R.zf) goto L_07fe;                             // 07f7 ja 0x7fe
  ASM_COST(2); R.ax = (u16)(0x3ff);                            // 07f9 mov ax, 0x3ff
  goto L_0836;                                                 // 07fc jmp 0x836
L_07fe:   ASM_COST(4); R.dx = (u16)(0x1b);                             // 07fe mov dx, 0x1b
  R.ax = (u16)(0x5030);                                        // 0801 mov ax, 0x5030
  DIV16(R.cx, 0x0804);                                         // 0804 div cx
  goto L_0836;                                                 // 0806 jmp 0x836
L_0820:   ASM_COST(3); R.cx = (u16)(M16(SS, (u16)(R.bp + 0xa)));       // 0820 mov cx, word ptr [bp + 0xa]
  SUB16(R.cx, 0x124);                                          // 0823 cmp cx, 0x124
  if (!R.cf && !R.zf) goto L_082e;                             // 0827 ja 0x82e
  ASM_COST(2); R.ax = (u16)(0x0);                              // 0829 mov ax, 0
  goto L_0836;                                                 // 082c jmp 0x836
L_082e:   ASM_COST(3); R.dx = (u16)(0x123);                            // 082e mov dx, 0x123
  R.ax = (u16)(0x4dc0);                                        // 0831 mov ax, 0x4dc0
  DIV16(R.cx, 0x0834);                                         // 0834 div cx
L_0836:   ASM_COST(5); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0836 mov bx, word ptr [bp + 8]
  W16(DS, (u16)(R.bx + 0x4), R.ax);                            // 0839 mov word ptr [bx + 4], ax
  W16(DS, (u16)(R.bx + 0x6), R.ax);                            // 083c mov word ptr [bx + 6], ax
  R.bp = POP();                                                // 083f pop bp
  R.sp += 4; goto L_ret;                                       // 0840 retf
L_ret:
  return;
}

static u16 f_td15_0024(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0024();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0027 FUN_1000_0027  FIX: recompiled from the machine code (asm2c)
static void a_td15_0027(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_0841;                                    // 0027 jmp 0x841
L_0841:   ASM_COST(5); PUSH(R.bp);                                     // 0841 push bp
  R.bp = (u16)(R.sp);                                          // 0842 mov bp, sp
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 0844 mov bx, word ptr [bp + 8]
  SUB8(M8(DS, (u16)(R.bx + 0x1)), 0x0);                        // 0847 cmp byte ptr [bx + 1], 0
  if (!R.zf) goto L_084f;                                      // 084b jne 0x84f
  ASM_COST(2); R.bp = POP();                                   // 084d pop bp
  R.sp += 4; goto L_ret;                                       // 084e retf
L_084f:   ASM_COST(5); PUSH(R.si);                                     // 084f push si
  PUSH(R.di);                                                  // 0850 push di
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0851 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x3);                                            // 0854 cmp ax, 3
  if (!R.cf && !R.zf) goto L_085f;                             // 0857 ja 0x85f
  ASM_COST(2); R.di = (u16)((u16)(0x3a7));                     // 0859 lea di, [0x3a7]
  goto L_086e;                                                 // 085d jmp 0x86e
L_085f:   ASM_COST(2); SUB16(R.cx, 0x4);                               // 085f cmp cx, 4
  if (!R.zf) goto L_086a;                                      // 0862 jne 0x86a
  ASM_COST(2); R.di = (u16)((u16)(0x557));                     // 0864 lea di, [0x557]
  goto L_086e;                                                 // 0868 jmp 0x86e
L_086a:   ASM_COST(1); R.di = (u16)((u16)(0x23f));                     // 086a lea di, [0x23f]
L_086e:   ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 086e les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x35)), 0x1);                       // 0871 cmp byte ptr es:[bx + 0x35], 1
  if (!R.zf) goto L_0892;                                      // 0876 jne 0x892
  ASM_COST(10); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));      // 0878 mov bx, word ptr [bp + 8]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x22)));                      // 087b mov al, byte ptr [bx + 0x22]
  SETL(R.ax, ADD8((u8)R.ax, M8(DS, (u16)(R.bx + 0x3))));       // 087e add al, byte ptr [bx + 3]
  W8(CS, (u16)(0x577), (u8)R.ax);                              // 0881 mov byte ptr cs:[0x577], al
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 0885 xor ah, ah
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0887 shl ax, 1
  R.si = (u16)(R.ax);                                          // 0889 mov si, ax
  R.bx = (u16)(R.di);                                          // 088b mov bx, di
  R.cx = (u16)(M16(CS, (u16)(R.bx + R.si)));                   // 088d mov cx, word ptr cs:[bx + si]
  goto L_089f;                                                 // 0890 jmp 0x89f
L_0892:   ASM_COST(4); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0892 mov bx, word ptr [bp + 8]
  R.cx = (u16)(M16(DS, (u16)(R.bx + 0x4)));                    // 0895 mov cx, word ptr [bx + 4]
  SETL(R.ax, M8(DS, (u16)(R.bx + 0x3)));                       // 0898 mov al, byte ptr [bx + 3]
  W8(CS, (u16)(0x577), (u8)R.ax);                              // 089b mov byte ptr cs:[0x577], al
L_089f:   ASM_COST(8); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 089f les bx, ptr [bp + 0xc]
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x11)));                      // 08a2 mov al, byte ptr es:[bx + 0x11]
  R.ax = (u16)(i16)(i8)R.ax;                                   // 08a6 cwde
  R.ax = (u16)(NEG16(R.ax));                                   // 08a7 neg ax
  R.cx = (u16)(ADD16(R.cx, R.ax));                             // 08a9 add cx, ax
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 08ab mov bx, word ptr [bp + 0xa]
  SUB16(M16(DS, (u16)(R.bx + 0x26)), 0x0);                     // 08ae cmp word ptr [bx + 0x26], 0
  if (!R.zf) goto L_08b7;                                      // 08b2 jne 0x8b7
  ASM_COST(1); goto L_093d;                                    // 08b4 jmp 0x93d
L_08b7:   ASM_COST(1); if (R.sf != R.of) goto L_0901;                  // 08b7 jl 0x901
  ASM_COST(14); SETL(R.ax, M8(CS, (u16)(0x577)));              // 08b9 mov al, byte ptr cs:[0x577]
  { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 08bd les bx, ptr [bp + 0xc]
  SETL(R.ax, ADD8((u8)R.ax, M8(ES, (u16)(R.bx + 0x12))));      // 08c0 add al, byte ptr es:[bx + 0x12]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 08c4 xor ah, ah
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 08c6 shl ax, 1
  R.si = (u16)(R.ax);                                          // 08c8 mov si, ax
  R.bx = (u16)(R.di);                                          // 08ca mov bx, di
  R.ax = (u16)(M16(CS, (u16)(R.bx + R.si)));                   // 08cc mov ax, word ptr cs:[bx + si]
  R.ax = (u16)(NEG16(R.ax));                                   // 08cf neg ax
  R.ax = (u16)(ADD16(R.ax, R.cx));                             // 08d1 add ax, cx
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 08d3 mov bx, word ptr [bp + 0xa]
  R.dx = (u16)(M16(DS, (u16)(R.bx + 0x26)));                   // 08d6 mov dx, word ptr [bx + 0x26]
  SUB16(R.dx, 0x1000);                                         // 08d9 cmp dx, 0x1000
  if (R.sf != R.of) goto L_08e3;                               // 08dd jl 0x8e3
  ASM_COST(1); R.dx = (u16)(ADD16(R.dx, 0x80));                // 08df add dx, 0x80
L_08e3:   ASM_COST(15); MUL16(R.dx);                                   // 08e3 mul dx
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 08e5 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 08e7 rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 08e9 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 08eb rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 08ed sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 08ef rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 08f1 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 08f3 rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 08f5 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 08f7 rcr ax, 1
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 08f9 mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 08fb mov ah, dl
  R.cx = (u16)(SUB16(R.cx, R.ax));                             // 08fd sub cx, ax
  goto L_093d;                                                 // 08ff jmp 0x93d
L_0901:   ASM_COST(26); SETL(R.ax, M8(CS, (u16)(0x577)));              // 0901 mov al, byte ptr cs:[0x577]
  { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0905 les bx, ptr [bp + 0xc]
  SETL(R.ax, SUB8((u8)R.ax, M8(ES, (u16)(R.bx + 0x12))));      // 0908 sub al, byte ptr es:[bx + 0x12]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 090c xor ah, ah
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 090e shl ax, 1
  R.si = (u16)(R.ax);                                          // 0910 mov si, ax
  R.bx = (u16)(R.di);                                          // 0912 mov bx, di
  R.ax = (u16)(M16(CS, (u16)(R.bx + R.si)));                   // 0914 mov ax, word ptr cs:[bx + si]
  R.ax = (u16)(SUB16(R.ax, R.cx));                             // 0917 sub ax, cx
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 0919 mov bx, word ptr [bp + 0xa]
  R.dx = (u16)(M16(DS, (u16)(R.bx + 0x26)));                   // 091c mov dx, word ptr [bx + 0x26]
  R.dx = (u16)(NEG16(R.dx));                                   // 091f neg dx
  MUL16(R.dx);                                                 // 0921 mul dx
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 0923 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0925 rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 0927 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0929 rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 092b sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 092d rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 092f sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0931 rcr ax, 1
  R.dx = (u16)(SAR16(R.dx, 0x1));                              // 0933 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0935 rcr ax, 1
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 0937 mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 0939 mov ah, dl
  R.cx = (u16)(ADD16(R.cx, R.ax));                             // 093b add cx, ax
L_093d:   ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 093d les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x28)), 0x2);                       // 0940 cmp byte ptr es:[bx + 0x28], 2
  if (!R.zf) goto L_094d;                                      // 0945 jne 0x94d
  ASM_COST(2); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0947 mov bx, word ptr [bp + 8]
  R.cx = (u16)(ADD16(R.cx, M16(DS, (u16)(R.bx + 0x1c))));      // 094a add cx, word ptr [bx + 0x1c]
L_094d:   ASM_COST(3); { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 094d les bx, ptr [bp + 0xc]
  SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x2);                       // 0950 cmp byte ptr es:[bx + 0x19], 2
  if (!R.zf) goto L_095d;                                      // 0955 jne 0x95d
  ASM_COST(2); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));       // 0957 mov bx, word ptr [bp + 8]
  R.cx = (u16)(ADD16(R.cx, M16(DS, (u16)(R.bx + 0x14))));      // 095a add cx, word ptr [bx + 0x14]
L_095d:   ASM_COST(19); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));      // 095d mov bx, word ptr [bp + 8]
  W16(DS, (u16)(R.bx + 0x6), R.cx);                            // 0960 mov word ptr [bx + 6], cx
  R.si = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0963 mov si, word ptr [bp + 6]
  SETL(R.ax, M8(CS, (u16)(R.si + 0x5af)));                     // 0966 mov al, byte ptr cs:[si + 0x5af]
  SETH(R.ax, M8(CS, (u16)(R.si + 0x5a9)));                     // 096b mov ah, byte ptr cs:[si + 0x5a9]
  SETL(R.ax, SHL8((u8)R.ax, 0x1));                             // 0970 shl al, 1
  SETL(R.ax, SHL8((u8)R.ax, 0x1));                             // 0972 shl al, 1
  SETL(R.ax, SHL8((u8)R.ax, 0x1));                             // 0974 shl al, 1
  SETL(R.ax, SHL8((u8)R.ax, 0x1));                             // 0976 shl al, 1
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.ax >> 8)));                  // 0978 or al, ah
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 097a xor ah, ah
  R.si = (u16)(R.ax);                                          // 097c mov si, ax
  SETL(R.ax, M8(CS, (u16)(R.si + 0x3f)));                      // 097e mov al, byte ptr cs:[si + 0x3f]
  R.si = (u16)(R.ax);                                          // 0983 mov si, ax
  SETL(R.dx, M8(CS, (u16)(R.si + 0x13f)));                     // 0985 mov dl, byte ptr cs:[si + 0x13f]
  { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 098a les bx, ptr [bp + 0xc]
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x19)));                      // 098d mov al, byte ptr es:[bx + 0x19]
  SUB8((u8)R.ax, 0x3);                                         // 0991 cmp al, 3
  if (!R.zf) goto L_09b5;                                      // 0993 jne 0x9b5
  ASM_COST(12); R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));      // 0995 mov bx, word ptr [bp + 8]
  R.bx = (u16)(M16(DS, (u16)(R.bx + 0x14)));                   // 0998 mov bx, word ptr [bx + 0x14]
  SETL(R.ax, (u8)R.dx);                                        // 099b mov al, dl
  SETL(R.ax, SHL8((u8)R.ax, 0x1));                             // 099d shl al, 1
  SETL(R.ax, SHL8((u8)R.ax, 0x1));                             // 099f shl al, 1
  SETL(R.ax, SHL8((u8)R.ax, 0x1));                             // 09a1 shl al, 1
  SETL(R.ax, SHL8((u8)R.ax, 0x1));                             // 09a3 shl al, 1
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.bx >> 8)));                  // 09a5 or al, bh
  R.si = (u16)(R.ax);                                          // 09a7 mov si, ax
  SETL(R.ax, M8(CS, (u16)(R.si + 0x3f)));                      // 09a9 mov al, byte ptr cs:[si + 0x3f]
  R.si = (u16)(R.ax);                                          // 09ae mov si, ax
  SETL(R.dx, M8(CS, (u16)(R.si + 0x13f)));                     // 09b0 mov dl, byte ptr cs:[si + 0x13f]
L_09b5:   ASM_COST(3); R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));       // 09b5 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x1);                                            // 09b8 cmp ax, 1
  if (R.cf) goto L_09d4;                                       // 09bb jb 0x9d4
  ASM_COST(2); SUB16(R.ax, 0x4);                               // 09bd cmp ax, 4
  if (!R.cf && !R.zf) goto L_09ff;                             // 09c0 ja 0x9ff
  ASM_COST(4); PUSH(R.ax);                                     // 09c2 push ax
  PUSH(R.cx);                                                  // 09c3 push cx
  SETH(R.ax, (u8)R.dx);                                        // 09c4 mov ah, dl
  PUSH(0x09c9); a_td15_05f6();                                 // 09c6 call 0x5f6
  ASM_COST(5); R.cx = POP();                                   // 09c9 pop cx
  R.ax = POP();                                                // 09ca pop ax
  R.dx = (u16)(R.cx);                                          // 09cb mov dx, cx
  PUSH(R.cx);                                                  // 09cd push cx
  PUSH(0x09d1); a_td15_05bf();                                 // 09ce call 0x5bf
  ASM_COST(2); R.cx = POP();                                   // 09d1 pop cx
  goto L_0a1d;                                                 // 09d2 jmp 0xa1d
L_09d4:   ASM_COST(18); W16(CS, (u16)(0x593), R.cx);                   // 09d4 mov word ptr cs:[0x593], cx
  R.cx = (u16)(AND16(R.cx, 0xfff));                            // 09d9 and cx, 0xfff
  SETL(R.ax, (u8)R.dx);                                        // 09dd mov al, dl
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 09df shr al, 1
  W8(CS, (u16)(0x583), (u8)R.ax);                              // 09e1 mov byte ptr cs:[0x583], al
  SETL(R.ax, (u8)R.dx);                                        // 09e5 mov al, dl
  SETL(R.ax, SHL8((u8)R.ax, 0x1));                             // 09e7 shl al, 1
  SETL(R.ax, SHL8((u8)R.ax, 0x1));                             // 09e9 shl al, 1
  SETL(R.ax, SHL8((u8)R.ax, 0x1));                             // 09eb shl al, 1
  SETL(R.ax, SHL8((u8)R.ax, 0x1));                             // 09ed shl al, 1
  SETL(R.ax, AND8((u8)R.ax, 0xe0));                            // 09ef and al, 0xe0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.cx >> 8)));                  // 09f1 or al, ch
  SETL(R.dx, (u8)R.ax);                                        // 09f3 mov dl, al
  SETL(R.ax, (u8)R.cx);                                        // 09f5 mov al, cl
  ASM_PORT_OUT(0xc6, (u8)R.ax);                                // 09f7 out 0xc6, al
  SETL(R.ax, (u8)R.dx);                                        // 09f9 mov al, dl
  ASM_PORT_OUT(0xc7, (u8)R.ax);                                // 09fb out 0xc7, al
  goto L_0a1d;                                                 // 09fd jmp 0xa1d
L_09ff:   ASM_COST(3); SETL(R.ax, M8(CS, (u16)(0x5b4)));               // 09ff mov al, byte ptr cs:[0x5b4]
  SUB8((u8)R.ax, 0x0);                                         // 0a03 cmp al, 0
  if (!R.zf) goto L_0a0f;                                      // 0a05 jne 0xa0f
  ASM_COST(4); SETL(R.ax, ASM_PORT_IN(0x61));                  // 0a07 in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfc));                            // 0a09 and al, 0xfc
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 0a0b out 0x61, al
  goto L_0a1d;                                                 // 0a0d jmp 0xa1d
L_0a0f:   ASM_COST(7); R.ax = (u16)(R.cx);                             // 0a0f mov ax, cx
  ASM_PORT_OUT(0x42, (u8)R.ax);                                // 0a11 out 0x42, al
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 0a13 mov al, ah
  ASM_PORT_OUT(0x42, (u8)R.ax);                                // 0a15 out 0x42, al
  SETL(R.ax, ASM_PORT_IN(0x61));                               // 0a17 in al, 0x61
  SETL(R.ax, OR8((u8)R.ax, 0x3));                              // 0a19 or al, 3
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 0a1b out 0x61, al
L_0a1d:   ASM_COST(4); R.di = POP();                                   // 0a1d pop di
  R.si = POP();                                                // 0a1e pop si
  R.bp = POP();                                                // 0a1f pop bp
  R.sp += 4; goto L_ret;                                       // 0a20 retf
L_ret:
  return;
}

static u16 f_td15_0027(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0027();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:002A FUN_1000_002a  FIX: recompiled from the machine code (asm2c)
static void a_td15_002a(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_0a21;                                    // 002a jmp 0xa21
L_0a21:   ASM_COST(9); PUSH(R.bp);                                     // 0a21 push bp
  R.bp = (u16)(R.sp);                                          // 0a22 mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 0a24 mov ax, word ptr [bp + 0xa]
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 0a27 mov bx, word ptr [bp + 8]
  W16(DS, (u16)(R.bx + 0x4), R.ax);                            // 0a2a mov word ptr [bx + 4], ax
  W16(DS, (u16)(R.bx + 0x6), R.ax);                            // 0a2d mov word ptr [bx + 6], ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0a30 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 0a33 cmp ax, 0
  if (!R.zf) goto L_0a3c;                                      // 0a36 jne 0xa3c
  ASM_COST(1); W16(CS, (u16)(0x593), R.ax);                    // 0a38 mov word ptr cs:[0x593], ax
L_0a3c:   ASM_COST(2); R.bp = POP();                                   // 0a3c pop bp
  R.sp += 4; goto L_ret;                                       // 0a3d retf
L_ret:
  return;
}

static u16 f_td15_002a(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_002a();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:002D FUN_1000_002d  FIX: recompiled from the machine code (asm2c)
static void a_td15_002d(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_0a3e;                                    // 002d jmp 0xa3e
L_0a3e:   ASM_COST(4); PUSH(R.bp);                                     // 0a3e push bp
  R.bp = (u16)(R.sp);                                          // 0a3f mov bp, sp
  R.bp = POP();                                                // 0a41 pop bp
  R.sp += 4; goto L_ret;                                       // 0a42 retf
L_ret:
  return;
}

static u16 f_td15_002d(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_002d();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0030 FUN_1000_0030  FIX: recompiled from the machine code (asm2c)
static void a_td15_0030(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_0a43;                                    // 0030 jmp 0xa43
L_0a43:   ASM_COST(4); PUSH(R.bp);                                     // 0a43 push bp
  R.bp = (u16)(R.sp);                                          // 0a44 mov bp, sp
  R.bp = POP();                                                // 0a46 pop bp
  R.sp += 4; goto L_ret;                                       // 0a47 retf
L_ret:
  return;
}

static u16 f_td15_0030(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0030();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0033 FUN_1000_0033  FIX: recompiled from the machine code (asm2c)
static void a_td15_0033(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_0ba5;                                    // 0033 jmp 0xba5
L_0ba5:   ASM_COST(4); PUSH(R.bp);                                     // 0ba5 push bp
  R.bp = (u16)(R.sp);                                          // 0ba6 mov bp, sp
  SUB16(M16(SS, (u16)(R.bp + 0x6)), 0x0);                      // 0ba8 cmp word ptr [bp + 6], 0
  if (R.zf) goto L_0bb0;                                       // 0bac je 0xbb0
  ASM_COST(2); R.bp = POP();                                   // 0bae pop bp
  R.sp += 4; goto L_ret;                                       // 0baf retf
L_0bb0:   ASM_COST(4); PUSH(R.ds);                                     // 0bb0 push ds
  PUSH(R.cs);                                                  // 0bb1 push cs
  R.ds = POP();                                                // 0bb2 pop ds
  PUSH(0x0bb6); a_td15_0a48();                                 // 0bb3 call 0xa48
  ASM_COST(10);                                                // 0bb6 cli
  SETL(R.ax, 0xff);                                            // 0bb7 mov al, 0xff
  W8(DS, (u16)(0x595), (u8)R.ax);                              // 0bb9 mov byte ptr [0x595], al
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xe)));                    // 0bbc mov ax, word ptr [bp + 0xe]
  W8(DS, (u16)(0x582), (u8)R.ax);                              // 0bbf mov byte ptr [0x582], al
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0bc2 les bx, ptr [bp + 8]
  R.ax = (u16)((u16)(R.bx + 0x32));                            // 0bc5 lea ax, [bx + 0x32]
  R.cx = (u16)(R.ax);                                          // 0bc8 mov cx, ax
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 0bca cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_0be6;                                      // 0bcf jne 0xbe6
  ASM_COST(11); PUSH(R.ax);                                    // 0bd1 push ax
  PUSH(R.bx);                                                  // 0bd2 push bx
  R.bx = (u16)(R.ax);                                          // 0bd3 mov bx, ax
  SETL(R.ax, M8(ES, (u16)(R.bx)));                             // 0bd5 mov al, byte ptr es:[bx]
  W8(DS, (u16)(0x5a7), (u8)R.ax);                              // 0bd8 mov byte ptr [0x5a7], al
  W8(DS, (u16)(0x5a8), (u8)R.ax);                              // 0bdb mov byte ptr [0x5a8], al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0bde xor al, al
  W8(DS, (u16)(0x5a6), (u8)R.ax);                              // 0be0 mov byte ptr [0x5a6], al
  R.bx = POP();                                                // 0be3 pop bx
  R.ax = POP();                                                // 0be4 pop ax
  R.cx = (u16)(INC16(R.cx));                                   // 0be5 inc cx
L_0be6:   ASM_COST(7); W16(DS, (u16)(0x578), R.ax);                    // 0be6 mov word ptr [0x578], ax
  W16(DS, (u16)(0x57a), R.es);                                 // 0be9 mov word ptr [0x57a], es
  W16(DS, (u16)(0x57e), R.cx);                                 // 0bed mov word ptr [0x57e], cx
  W16(DS, (u16)(0x580), R.es);                                 // 0bf1 mov word ptr [0x580], es
  { u16 a_ = (u16)(R.bx + 0x8); R.cx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 0bf5 les cx, ptr es:[bx + 8]
  SUB16(R.cx, 0x0);                                            // 0bf9 cmp cx, 0
  if (!R.zf) goto L_0c07;                                      // 0bfc jne 0xc07
  ASM_COST(6); SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));           // 0bfe xor al, al
  W8(DS, (u16)(0x595), (u8)R.ax);                              // 0c00 mov byte ptr [0x595], al
  // 0c03 sti 
  R.ds = POP();                                                // 0c04 pop ds
  R.bp = POP();                                                // 0c05 pop bp
  R.sp += 4; goto L_ret;                                       // 0c06 retf
L_0c07:   ASM_COST(15); R.cx = (u16)(ADD16(R.cx, R.ax));               // 0c07 add cx, ax
  R.cx = (u16)(DEC16(R.cx));                                   // 0c09 dec cx
  W16(CS, (u16)(0x57c), R.cx);                                 // 0c0a mov word ptr cs:[0x57c], cx
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0c0f xor ax, ax
  R.es = (u16)(R.ax);                                          // 0c11 mov es, ax
  R.ax = (u16)(M16(ES, (u16)(0x20)));                          // 0c13 mov ax, word ptr es:[0x20]
  R.dx = (u16)(M16(ES, (u16)(0x22)));                          // 0c17 mov dx, word ptr es:[0x22]
  W16(DS, (u16)(0x588), R.ax);                                 // 0c1c mov word ptr [0x588], ax
  W16(DS, (u16)(0x58a), R.dx);                                 // 0c1f mov word ptr [0x58a], dx
  PUSH(R.es);                                                  // 0c23 push es
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0c24 les bx, ptr [bp + 8]
  R.ax = (u16)(0xa66);                                         // 0c27 mov ax, 0xa66
  R.dx = (u16)(R.cs);                                          // 0c2a mov dx, cs
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 0c2c cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_0c38;                                      // 0c31 jne 0xc38
  ASM_COST(2); R.ax = (u16)(0xae4);                            // 0c33 mov ax, 0xae4
  R.dx = (u16)(R.cs);                                          // 0c36 mov dx, cs
L_0c38:   ASM_COST(6); R.es = POP();                                   // 0c38 pop es
  W16(ES, (u16)(0x20), R.ax);                                  // 0c39 mov word ptr es:[0x20], ax
  W16(ES, (u16)(0x22), R.dx);                                  // 0c3d mov word ptr es:[0x22], dx
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));                    // 0c42 mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c45 cmp bx, 0x64
  if (!R.cf) goto L_0c4f;                                      // 0c48 jae 0xc4f
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c4a mov bx, 0x64
  goto L_0c58;                                                 // 0c4d jmp 0xc58
L_0c4f:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c4f cmp bx, 0x4e20
  if (R.cf) goto L_0c58;                                       // 0c53 jb 0xc58
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c55 mov bx, 0x4e20
L_0c58:   ASM_COST(27); R.dx = (u16)(0x12);                            // 0c58 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c5b mov ax, 0x34dc
  DIV16(R.bx, 0x0c5e);                                         // 0c5e div bx
  R.bx = (u16)(R.ax);                                          // 0c60 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x58c)));                         // 0c62 mov ax, word ptr [0x58c]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c65 xor dx, dx
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  W16(DS, (u16)(0x58e), R.ax);                                 // 0c69 mov word ptr [0x58e], ax
  W16(DS, (u16)(0x590), R.ax);                                 // 0c6c mov word ptr [0x590], ax
  W16(DS, (u16)(0x593), R.bx);                                 // 0c6f mov word ptr [0x593], bx
  SETL(R.ax, 0x36);                                            // 0c73 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c75 out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c77 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c79 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c7b mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c7d out 0x40, al
  SETL(R.ax, 0x3);                                             // 0c7f mov al, 3
  ASM_PORT_OUT(0xc4, (u8)R.ax);                                // 0c81 out 0xc4, al
  R.dx = (u16)(0x21);                                          // 0c83 mov dx, 0x21
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0c86 in al, dx
  W8(DS, (u16)(0x592), (u8)R.ax);                              // 0c87 mov byte ptr [0x592], al
  SETL(R.ax, 0xfc);                                            // 0c8a mov al, 0xfc
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0c8c out dx, al
  // 0c8d sti 
  R.ds = POP();                                                // 0c8e pop ds
  R.bp = POP();                                                // 0c8f pop bp
  R.sp += 4; goto L_ret;                                       // 0c90 retf
L_ret:
  return;
}

static u16 f_td15_0033(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4)
{
  ASM_ENTER();
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0033();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0036 FUN_1000_0036  FIX: recompiled from the machine code (asm2c)
static void a_td15_0036(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_0c91;                                    // 0036 jmp 0xc91
L_0c91:   ASM_COST(5); PUSH(R.bp);                                     // 0c91 push bp
  R.bp = (u16)(R.sp);                                          // 0c92 mov bp, sp
  R.ax = (u16)(0x1);                                           // 0c94 mov ax, 1
  SUB16(M16(SS, (u16)(R.bp + 0x6)), 0x0);                      // 0c97 cmp word ptr [bp + 6], 0
  if (!R.zf) goto L_0ca7;                                      // 0c9b jne 0xca7
  ASM_COST(2); SUB8(M8(CS, (u16)(0x595)), 0x0);                // 0c9d cmp byte ptr cs:[0x595], 0
  if (R.zf) goto L_0ca7;                                       // 0ca3 je 0xca7
  ASM_COST(1); R.ax = (u16)(XOR16(R.ax, R.ax));                // 0ca5 xor ax, ax
L_0ca7:   ASM_COST(2); R.bp = POP();                                   // 0ca7 pop bp
  R.sp += 4; goto L_ret;                                       // 0ca8 retf
L_ret:
  return;
}

static u16 f_td15_0036(u16 p0)
{
  ASM_ENTER();
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0036();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0039 FUN_1000_0039  FIX: recompiled from the machine code (asm2c)
static void a_td15_0039(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_060d;                                    // 0039 jmp 0x60d
L_060d:   ASM_COST(4); PUSH(R.bp);                                     // 060d push bp
  R.bp = (u16)(R.sp);                                          // 060e mov bp, sp
  R.bp = POP();                                                // 0610 pop bp
  R.sp += 4; goto L_ret;                                       // 0611 retf
L_ret:
  return;
}

static u16 f_td15_0039(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0039();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:003C FUN_1000_003c  FIX: recompiled from the machine code (asm2c)
static void a_td15_003c(void)
{
  R.cs = td15_seg;
  ASM_COST(1); goto L_0609;                                    // 003c jmp 0x609
L_0609:   ASM_COST(2); R.ax = (u16)(0xffff);                           // 0609 mov ax, 0xffff
  R.sp += 4; goto L_ret;                                       // 060c retf
L_ret:
  return;
}

static u16 f_td15_003c(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_003c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:061A FUN_1000_061a  FIX: recompiled from the machine code (asm2c)
static void a_td15_061a(void)
{
  R.cs = td15_seg;
  ASM_COST(11); SETH(R.ax, 0xf);                               // 061a mov ah, 0xf
  W8(CS, (u16)(0x5af), (u8)(R.ax >> 8));                       // 061c mov byte ptr cs:[0x5af], ah
  W8(CS, (u16)(0x5b0), (u8)(R.ax >> 8));                       // 0621 mov byte ptr cs:[0x5b0], ah
  W8(CS, (u16)(0x5b1), (u8)(R.ax >> 8));                       // 0626 mov byte ptr cs:[0x5b1], ah
  W8(CS, (u16)(0x5b2), (u8)(R.ax >> 8));                       // 062b mov byte ptr cs:[0x5b2], ah
  W8(CS, (u16)(0x5b3), (u8)(R.ax >> 8));                       // 0630 mov byte ptr cs:[0x5b3], ah
  W8(CS, (u16)(0x5b4), (u8)(R.ax >> 8));                       // 0635 mov byte ptr cs:[0x5b4], ah
  SETH(R.ax, 0x85);                                            // 063a mov ah, 0x85
  ASM_INT(0x1a);                                               // 063c int 0x1a
  R.ax = (u16)(0x6);                                           // 063e mov ax, 6
  R.sp += 4; goto L_ret;                                       // 0641 retf
L_ret:
  return;
}

static u16 f_td15_061a(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_061a();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0656 FUN_1000_0656  FIX: recompiled from the machine code (asm2c)
static void a_td15_0656(void)
{
  R.cs = td15_seg;
  ASM_COST(2); R.ax = (u16)(0x2);                              // 0656 mov ax, 2
  PUSH(0x065c); a_td15_05f6();                                 // 0659 call 0x5f6
  ASM_COST(2); R.ax = (u16)(0x3);                              // 065c mov ax, 3
  PUSH(0x0662); a_td15_05f6();                                 // 065f call 0x5f6
  ASM_COST(2); R.ax = (u16)(0x4);                              // 0662 mov ax, 4
  PUSH(0x0668); a_td15_05f6();                                 // 0665 call 0x5f6
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0668 retf
L_ret:
  return;
}

static u16 f_td15_0656(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0656();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:065C FUN_1000_065c  FIX: recompiled from the machine code (asm2c)
static void a_td15_065c(void)
{
  R.cs = td15_seg;
  ASM_COST(2); R.ax = (u16)(0x3);                              // 065c mov ax, 3
  PUSH(0x0662); a_td15_05f6();                                 // 065f call 0x5f6
  ASM_COST(2); R.ax = (u16)(0x4);                              // 0662 mov ax, 4
  PUSH(0x0668); a_td15_05f6();                                 // 0665 call 0x5f6
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0668 retf
L_ret:
  return;
}

static u16 f_td15_065c(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_065c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0662 FUN_1000_0662  FIX: recompiled from the machine code (asm2c)
static void a_td15_0662(void)
{
  R.cs = td15_seg;
  ASM_COST(2); R.ax = (u16)(0x4);                              // 0662 mov ax, 4
  PUSH(0x0668); a_td15_05f6();                                 // 0665 call 0x5f6
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0668 retf
L_ret:
  return;
}

static u16 f_td15_0662(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0662();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0739 FUN_1000_0739  FIX: recompiled from the machine code (asm2c)
static void a_td15_0739(void)
{
  R.cs = td15_seg;
  ASM_COST(4); R.sp = (u16)(ADD16(R.sp, 0xa));                 // 0739 add sp, 0xa
  R.si = POP();                                                // 073c pop si
  R.bp = POP();                                                // 073d pop bp
  R.sp += 4; goto L_ret;                                       // 073e retf
L_ret:
  return;
}

static u16 f_td15_0739(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0739();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0783 FUN_1000_0783  FIX: recompiled from the machine code (asm2c)
static void a_td15_0783(void)
{
  R.cs = td15_seg;
  ASM_COST(3); R.sp = (u16)(ADD16(R.sp, 0x6));                 // 0783 add sp, 6
  R.bp = POP();                                                // 0786 pop bp
  R.sp += 4; goto L_ret;                                       // 0787 retf
L_ret:
  return;
}

static u16 f_td15_0783(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0783();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:07B3 FUN_1000_07b3  FIX: recompiled from the machine code (asm2c)
static void a_td15_07b3(void)
{
  R.cs = td15_seg;
  ASM_COST(4); SETH(R.ax, 0x85);                               // 07b3 mov ah, 0x85
  ASM_INT(0x1a);                                               // 07b5 int 0x1a
  R.bp = POP();                                                // 07b7 pop bp
  R.sp += 4; goto L_ret;                                       // 07b8 retf
L_ret:
  return;
}

static u16 f_td15_07b3(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_07b3();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:07DB FUN_1000_07db  FIX: recompiled from the machine code (asm2c)
static void a_td15_07db(void)
{
  R.cs = td15_seg;
  ASM_COST(3); R.sp = (u16)(ADD16(R.sp, 0x8));                 // 07db add sp, 8
  R.bp = POP();                                                // 07de pop bp
  R.sp += 4; goto L_ret;                                       // 07df retf
L_ret:
  return;
}

static u16 f_td15_07db(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_07db();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0A66 FUN_1000_0a66  FIX: recompiled from the machine code (asm2c)
static void a_td15_0a66(void)
{
  R.cs = td15_seg;
  ASM_COST(11); PUSH(R.ax);                                    // 0a66 push ax
  PUSH(R.bx);                                                  // 0a67 push bx
  PUSH(R.ds);                                                  // 0a68 push ds
  PUSH(R.cs);                                                  // 0a69 push cs
  SETL(R.ax, 0xfc);                                            // 0a6a mov al, 0xfc
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 0a6c out 0x21, al
  { u16 a_ = (u16)(0x57e); R.bx = (u16)(M16(CS, a_)); R.ds = M16(CS, (u16)(a_ + 2)); } // 0a6e lds bx, ptr cs:[0x57e]
  SETL(R.ax, M8(DS, (u16)(R.bx)));                             // 0a73 mov al, byte ptr [bx]
  R.ds = POP();                                                // 0a75 pop ds
  SUB16(R.bx, M16(DS, (u16)(0x57c)));                          // 0a76 cmp bx, word ptr [0x57c]
  if (!R.cf) goto L_0a9f;                                      // 0a7a jae 0xa9f
  ASM_COST(3); R.bx = (u16)(INC16(R.bx));                      // 0a7c inc bx
  W16(DS, (u16)(0x57e), R.bx);                                 // 0a7d mov word ptr [0x57e], bx
  ASM_PORT_OUT(0xc5, (u8)R.ax);                                // 0a81 out 0xc5, al
L_0a83:   ASM_COST(2); W16(DS, (u16)(0x590), DEC16(M16(DS, (u16)(0x590)))); // 0a83 dec word ptr [0x590]
  if (R.zf) goto L_0a91;                                       // 0a87 je 0xa91
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0a89 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0a8b out 0x20, al
  R.ds = POP();                                                // 0a8d pop ds
  R.bx = POP();                                                // 0a8e pop bx
  R.ax = POP();                                                // 0a8f pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0a90 iret
L_0a91:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0x58e)));            // 0a91 mov ax, word ptr [0x58e]
  W16(DS, (u16)(0x590), R.ax);                                 // 0a94 mov word ptr [0x590], ax
  R.ds = POP();                                                // 0a97 pop ds
  R.bx = POP();                                                // 0a98 pop bx
  R.ax = POP();                                                // 0a99 pop ax
  { u16 o_ = M16(CS, (u16)(0x588)), s_ = M16(CS, (u16)((u16)(0x588) + 2)); asm_far_jump(s_, o_); } return; // 0a9a ljmp cs:[0x588]
L_0a9f:   ASM_COST(4); R.ax = (u16)(M16(DS, (u16)(0x578)));            // 0a9f mov ax, word ptr [0x578]
  W16(DS, (u16)(0x57e), R.ax);                                 // 0aa2 mov word ptr [0x57e], ax
  SUB8(M8(DS, (u16)(0x582)), 0x0);                             // 0aa5 cmp byte ptr [0x582], 0
  if (R.zf) { ASM_BACK(); goto L_0a83; }                       // 0aaa je 0xa83
  ASM_COST(2); W8(DS, (u16)(0x582), DEC8(M8(DS, (u16)(0x582)))); // 0aac dec byte ptr [0x582]
  if (!R.zf) { ASM_BACK(); goto L_0a83; }                      // 0ab0 jne 0xa83
  ASM_COST(20); R.ax = (u16)(XOR16(R.ax, R.ax));               // 0ab2 xor ax, ax
  W8(DS, (u16)(0x595), (u8)R.ax);                              // 0ab4 mov byte ptr [0x595], al
  PUSH(R.ds);                                                  // 0ab7 push ds
  R.ds = (u16)(R.ax);                                          // 0ab8 mov ds, ax
  R.ax = (u16)(M16(CS, (u16)(0x588)));                         // 0aba mov ax, word ptr cs:[0x588]
  R.bx = (u16)(M16(CS, (u16)(0x58a)));                         // 0abe mov bx, word ptr cs:[0x58a]
  W16(DS, (u16)(0x20), R.ax);                                  // 0ac3 mov word ptr [0x20], ax
  W16(DS, (u16)(0x22), R.bx);                                  // 0ac6 mov word ptr [0x22], bx
  R.ds = POP();                                                // 0aca pop ds
  SETL(R.ax, 0x36);                                            // 0acb mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0acd out 0x43, al
  SETL(R.ax, M8(DS, (u16)(0x58c)));                            // 0acf mov al, byte ptr [0x58c]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0ad2 out 0x40, al
  SETL(R.ax, M8(DS, (u16)(0x58d)));                            // 0ad4 mov al, byte ptr [0x58d]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0ad7 out 0x40, al
  SETH(R.ax, 0x85);                                            // 0ad9 mov ah, 0x85
  ASM_INT(0x1a);                                               // 0adb int 0x1a
  SETL(R.ax, M8(DS, (u16)(0x592)));                            // 0add mov al, byte ptr [0x592]
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 0ae0 out 0x21, al
  ASM_BACK(); goto L_0a83;                                     // 0ae2 jmp 0xa83
L_ret:
  return;
}

static u16 f_td15_0a66(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_td15_0a66();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0AE4 FUN_1000_0ae4  FIX: recompiled from the machine code (asm2c)
static void a_td15_0ae4(void)
{
  R.cs = td15_seg;
  ASM_COST(8); PUSH(R.ax);                                     // 0ae4 push ax
  PUSH(R.bx);                                                  // 0ae5 push bx
  PUSH(R.ds);                                                  // 0ae6 push ds
  PUSH(R.cs);                                                  // 0ae7 push cs
  SETL(R.ax, 0xfc);                                            // 0ae8 mov al, 0xfc
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 0aea out 0x21, al
  W8(CS, (u16)(0x5a6), XOR8(M8(CS, (u16)(0x5a6)), 0xff));      // 0aec xor byte ptr cs:[0x5a6], 0xff
  if (!R.zf) goto L_0afa;                                      // 0af2 jne 0xafa
  ASM_COST(3); R.ds = POP();                                   // 0af4 pop ds
  SETL(R.ax, M8(DS, (u16)(0x5a7)));                            // 0af5 mov al, byte ptr [0x5a7]
  goto L_0b18;                                                 // 0af8 jmp 0xb18
L_0afa:   ASM_COST(5); { u16 a_ = (u16)(0x57e); R.bx = (u16)(M16(CS, a_)); R.ds = M16(CS, (u16)(a_ + 2)); } // 0afa lds bx, ptr cs:[0x57e]
  SETL(R.ax, M8(DS, (u16)(R.bx)));                             // 0aff mov al, byte ptr [bx]
  R.ds = POP();                                                // 0b01 pop ds
  SUB16(R.bx, M16(DS, (u16)(0x57c)));                          // 0b02 cmp bx, word ptr [0x57c]
  if (!R.cf) goto L_0b4e;                                      // 0b06 jae 0xb4e
  ASM_COST(7); R.bx = (u16)(INC16(R.bx));                      // 0b08 inc bx
  W16(DS, (u16)(0x57e), R.bx);                                 // 0b09 mov word ptr [0x57e], bx
  W8(DS, (u16)(0x5a7), (u8)R.ax);                              // 0b0d mov byte ptr [0x5a7], al
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 0b10 shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 0b12 shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 0b14 shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 0b16 shr al, 1
L_0b18:   ASM_COST(7); R.ax = (u16)(AND16(R.ax, 0xf));                 // 0b18 and ax, 0xf
  R.bx = (u16)((u16)(0x596));                                  // 0b1b lea bx, [0x596]
  SETL(R.ax, M8(DS, (u16)(R.bx + (u8)R.ax)));                  // 0b1f xlatb
  SETL(R.ax, ADD8((u8)R.ax, M8(DS, (u16)(0x5a8))));            // 0b20 add al, byte ptr [0x5a8]
  W8(DS, (u16)(0x5a8), (u8)R.ax);                              // 0b24 mov byte ptr [0x5a8], al
  SUB8((u8)R.ax, M8(DS, (u16)(0x587)));                        // 0b27 cmp al, byte ptr [0x587]
  if (R.zf) goto L_0b32;                                       // 0b2b je 0xb32
  ASM_COST(2); W8(DS, (u16)(0x587), (u8)R.ax);                 // 0b2d mov byte ptr [0x587], al
  ASM_PORT_OUT(0xc5, (u8)R.ax);                                // 0b30 out 0xc5, al
L_0b32:   ASM_COST(2); W16(DS, (u16)(0x590), DEC16(M16(DS, (u16)(0x590)))); // 0b32 dec word ptr [0x590]
  if (R.zf) goto L_0b40;                                       // 0b36 je 0xb40
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0b38 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0b3a out 0x20, al
  R.ds = POP();                                                // 0b3c pop ds
  R.bx = POP();                                                // 0b3d pop bx
  R.ax = POP();                                                // 0b3e pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0b3f iret
L_0b40:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0x58e)));            // 0b40 mov ax, word ptr [0x58e]
  W16(DS, (u16)(0x590), R.ax);                                 // 0b43 mov word ptr [0x590], ax
  R.ds = POP();                                                // 0b46 pop ds
  R.bx = POP();                                                // 0b47 pop bx
  R.ax = POP();                                                // 0b48 pop ax
  { u16 o_ = M16(CS, (u16)(0x588)), s_ = M16(CS, (u16)((u16)(0x588) + 2)); asm_far_jump(s_, o_); } return; // 0b49 ljmp cs:[0x588]
L_0b4e:   ASM_COST(12); { u16 a_ = (u16)(0x578); R.bx = (u16)(M16(DS, a_)); R.ds = M16(DS, (u16)(a_ + 2)); } // 0b4e lds bx, ptr [0x578]
  SETL(R.ax, M8(DS, (u16)(R.bx)));                             // 0b52 mov al, byte ptr [bx]
  PUSH(R.cs);                                                  // 0b54 push cs
  R.ds = POP();                                                // 0b55 pop ds
  W8(DS, (u16)(0x5a7), (u8)R.ax);                              // 0b56 mov byte ptr [0x5a7], al
  W8(DS, (u16)(0x5a8), (u8)R.ax);                              // 0b59 mov byte ptr [0x5a8], al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0b5c xor al, al
  W8(DS, (u16)(0x5a6), (u8)R.ax);                              // 0b5e mov byte ptr [0x5a6], al
  R.bx = (u16)(INC16(R.bx));                                   // 0b61 inc bx
  W16(DS, (u16)(0x57e), R.bx);                                 // 0b62 mov word ptr [0x57e], bx
  SUB8(M8(DS, (u16)(0x582)), 0x0);                             // 0b66 cmp byte ptr [0x582], 0
  if (R.zf) { ASM_BACK(); goto L_0b32; }                       // 0b6b je 0xb32
  ASM_COST(2); W8(DS, (u16)(0x582), DEC8(M8(DS, (u16)(0x582)))); // 0b6d dec byte ptr [0x582]
  if (!R.zf) { ASM_BACK(); goto L_0b32; }                      // 0b71 jne 0xb32
  ASM_COST(20); R.ax = (u16)(XOR16(R.ax, R.ax));               // 0b73 xor ax, ax
  W8(DS, (u16)(0x595), (u8)R.ax);                              // 0b75 mov byte ptr [0x595], al
  PUSH(R.ds);                                                  // 0b78 push ds
  R.ds = (u16)(R.ax);                                          // 0b79 mov ds, ax
  R.ax = (u16)(M16(CS, (u16)(0x588)));                         // 0b7b mov ax, word ptr cs:[0x588]
  R.bx = (u16)(M16(CS, (u16)(0x58a)));                         // 0b7f mov bx, word ptr cs:[0x58a]
  W16(DS, (u16)(0x20), R.ax);                                  // 0b84 mov word ptr [0x20], ax
  W16(DS, (u16)(0x22), R.bx);                                  // 0b87 mov word ptr [0x22], bx
  R.ds = POP();                                                // 0b8b pop ds
  SETL(R.ax, 0x36);                                            // 0b8c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0b8e out 0x43, al
  SETL(R.ax, M8(DS, (u16)(0x58c)));                            // 0b90 mov al, byte ptr [0x58c]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0b93 out 0x40, al
  SETL(R.ax, M8(DS, (u16)(0x58d)));                            // 0b95 mov al, byte ptr [0x58d]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0b98 out 0x40, al
  SETH(R.ax, 0x85);                                            // 0b9a mov ah, 0x85
  ASM_INT(0x1a);                                               // 0b9c int 0x1a
  SETL(R.ax, M8(DS, (u16)(0x592)));                            // 0b9e mov al, byte ptr [0x592]
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 0ba1 out 0x21, al
  ASM_BACK(); goto L_0b32;                                     // 0ba3 jmp 0xb32
L_ret:
  return;
}

static u16 f_td15_0ae4(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_td15_0ae4();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0BB6 FUN_1000_0bb6  FIX: recompiled from the machine code (asm2c)
static void a_td15_0bb6(void)
{
  R.cs = td15_seg;
  ASM_COST(10);                                                // 0bb6 cli
  SETL(R.ax, 0xff);                                            // 0bb7 mov al, 0xff
  W8(DS, (u16)(0x595), (u8)R.ax);                              // 0bb9 mov byte ptr [0x595], al
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xe)));                    // 0bbc mov ax, word ptr [bp + 0xe]
  W8(DS, (u16)(0x582), (u8)R.ax);                              // 0bbf mov byte ptr [0x582], al
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0bc2 les bx, ptr [bp + 8]
  R.ax = (u16)((u16)(R.bx + 0x32));                            // 0bc5 lea ax, [bx + 0x32]
  R.cx = (u16)(R.ax);                                          // 0bc8 mov cx, ax
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 0bca cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_0be6;                                      // 0bcf jne 0xbe6
  ASM_COST(11); PUSH(R.ax);                                    // 0bd1 push ax
  PUSH(R.bx);                                                  // 0bd2 push bx
  R.bx = (u16)(R.ax);                                          // 0bd3 mov bx, ax
  SETL(R.ax, M8(ES, (u16)(R.bx)));                             // 0bd5 mov al, byte ptr es:[bx]
  W8(DS, (u16)(0x5a7), (u8)R.ax);                              // 0bd8 mov byte ptr [0x5a7], al
  W8(DS, (u16)(0x5a8), (u8)R.ax);                              // 0bdb mov byte ptr [0x5a8], al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0bde xor al, al
  W8(DS, (u16)(0x5a6), (u8)R.ax);                              // 0be0 mov byte ptr [0x5a6], al
  R.bx = POP();                                                // 0be3 pop bx
  R.ax = POP();                                                // 0be4 pop ax
  R.cx = (u16)(INC16(R.cx));                                   // 0be5 inc cx
L_0be6:   ASM_COST(7); W16(DS, (u16)(0x578), R.ax);                    // 0be6 mov word ptr [0x578], ax
  W16(DS, (u16)(0x57a), R.es);                                 // 0be9 mov word ptr [0x57a], es
  W16(DS, (u16)(0x57e), R.cx);                                 // 0bed mov word ptr [0x57e], cx
  W16(DS, (u16)(0x580), R.es);                                 // 0bf1 mov word ptr [0x580], es
  { u16 a_ = (u16)(R.bx + 0x8); R.cx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 0bf5 les cx, ptr es:[bx + 8]
  SUB16(R.cx, 0x0);                                            // 0bf9 cmp cx, 0
  if (!R.zf) goto L_0c07;                                      // 0bfc jne 0xc07
  ASM_COST(6); SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));           // 0bfe xor al, al
  W8(DS, (u16)(0x595), (u8)R.ax);                              // 0c00 mov byte ptr [0x595], al
  // 0c03 sti 
  R.ds = POP();                                                // 0c04 pop ds
  R.bp = POP();                                                // 0c05 pop bp
  R.sp += 4; goto L_ret;                                       // 0c06 retf
L_0c07:   ASM_COST(15); R.cx = (u16)(ADD16(R.cx, R.ax));               // 0c07 add cx, ax
  R.cx = (u16)(DEC16(R.cx));                                   // 0c09 dec cx
  W16(CS, (u16)(0x57c), R.cx);                                 // 0c0a mov word ptr cs:[0x57c], cx
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0c0f xor ax, ax
  R.es = (u16)(R.ax);                                          // 0c11 mov es, ax
  R.ax = (u16)(M16(ES, (u16)(0x20)));                          // 0c13 mov ax, word ptr es:[0x20]
  R.dx = (u16)(M16(ES, (u16)(0x22)));                          // 0c17 mov dx, word ptr es:[0x22]
  W16(DS, (u16)(0x588), R.ax);                                 // 0c1c mov word ptr [0x588], ax
  W16(DS, (u16)(0x58a), R.dx);                                 // 0c1f mov word ptr [0x58a], dx
  PUSH(R.es);                                                  // 0c23 push es
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0c24 les bx, ptr [bp + 8]
  R.ax = (u16)(0xa66);                                         // 0c27 mov ax, 0xa66
  R.dx = (u16)(R.cs);                                          // 0c2a mov dx, cs
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 0c2c cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_0c38;                                      // 0c31 jne 0xc38
  ASM_COST(2); R.ax = (u16)(0xae4);                            // 0c33 mov ax, 0xae4
  R.dx = (u16)(R.cs);                                          // 0c36 mov dx, cs
L_0c38:   ASM_COST(6); R.es = POP();                                   // 0c38 pop es
  W16(ES, (u16)(0x20), R.ax);                                  // 0c39 mov word ptr es:[0x20], ax
  W16(ES, (u16)(0x22), R.dx);                                  // 0c3d mov word ptr es:[0x22], dx
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));                    // 0c42 mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c45 cmp bx, 0x64
  if (!R.cf) goto L_0c4f;                                      // 0c48 jae 0xc4f
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c4a mov bx, 0x64
  goto L_0c58;                                                 // 0c4d jmp 0xc58
L_0c4f:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c4f cmp bx, 0x4e20
  if (R.cf) goto L_0c58;                                       // 0c53 jb 0xc58
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c55 mov bx, 0x4e20
L_0c58:   ASM_COST(27); R.dx = (u16)(0x12);                            // 0c58 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c5b mov ax, 0x34dc
  DIV16(R.bx, 0x0c5e);                                         // 0c5e div bx
  R.bx = (u16)(R.ax);                                          // 0c60 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x58c)));                         // 0c62 mov ax, word ptr [0x58c]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c65 xor dx, dx
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  W16(DS, (u16)(0x58e), R.ax);                                 // 0c69 mov word ptr [0x58e], ax
  W16(DS, (u16)(0x590), R.ax);                                 // 0c6c mov word ptr [0x590], ax
  W16(DS, (u16)(0x593), R.bx);                                 // 0c6f mov word ptr [0x593], bx
  SETL(R.ax, 0x36);                                            // 0c73 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c75 out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c77 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c79 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c7b mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c7d out 0x40, al
  SETL(R.ax, 0x3);                                             // 0c7f mov al, 3
  ASM_PORT_OUT(0xc4, (u8)R.ax);                                // 0c81 out 0xc4, al
  R.dx = (u16)(0x21);                                          // 0c83 mov dx, 0x21
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0c86 in al, dx
  W8(DS, (u16)(0x592), (u8)R.ax);                              // 0c87 mov byte ptr [0x592], al
  SETL(R.ax, 0xfc);                                            // 0c8a mov al, 0xfc
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0c8c out dx, al
  // 0c8d sti 
  R.ds = POP();                                                // 0c8e pop ds
  R.bp = POP();                                                // 0c8f pop bp
  R.sp += 4; goto L_ret;                                       // 0c90 retf
L_ret:
  return;
}

static u16 f_td15_0bb6(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4)
{
  ASM_ENTER();
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0bb6();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0A48 FUN_1000_0a48  FIX: recompiled from the machine code (asm2c)
static void a_td15_0a48(void)
{
  R.cs = td15_seg;
  ASM_COST(8);                                                 // 0a48 cli
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0a49 xor al, al
  W8(CS, (u16)(0x5a6), (u8)R.ax);                              // 0a4b mov byte ptr cs:[0x5a6], al
  R.ax = (u16)(0xffff);                                        // 0a4f mov ax, 0xffff
  W16(CS, (u16)(0x57e), R.ax);                                 // 0a52 mov word ptr cs:[0x57e], ax
  SETL(R.ax, 0x1);                                             // 0a56 mov al, 1
  W8(CS, (u16)(0x582), (u8)R.ax);                              // 0a58 mov byte ptr cs:[0x582], al
  // 0a5c sti 
L_0a5d:   ASM_COST(3); SETL(R.ax, M8(CS, (u16)(0x595)));               // 0a5d mov al, byte ptr cs:[0x595]
  SUB8((u8)R.ax, 0x0);                                         // 0a61 cmp al, 0
  if (!R.zf) { ASM_BACK(); goto L_0a5d; }                      // 0a63 jne 0xa5d
  ASM_COST(1); R.sp += 2; goto L_ret;                          // 0a65 ret
L_ret:
  return;
}

static u16 f_td15_0a48(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_td15_0a48();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:05F6 FUN_1000_05f6  FIX: recompiled from the machine code (asm2c)
static void a_td15_05f6(void)
{
  R.cs = td15_seg;
  ASM_COST(11); PUSH(R.ds);                                    // 05f6 push ds
  PUSH(R.cs);                                                  // 05f7 push cs
  R.ds = POP();                                                // 05f8 pop ds
  SETL(R.cx, 0xf);                                             // 05f9 mov cl, 0xf
  SETL(R.cx, SUB8((u8)R.cx, (u8)(R.ax >> 8)));                 // 05fb sub cl, ah
  R.bx = (u16)((u16)(0x5b5));                                  // 05fd lea bx, [0x5b5]
  SETL(R.ax, M8(DS, (u16)(R.bx + (u8)R.ax)));                  // 0601 xlatb
  SETL(R.ax, OR8((u8)R.ax, (u8)R.cx));                         // 0603 or al, cl
  ASM_PORT_OUT(0xc0, (u8)R.ax);                                // 0605 out 0xc0, al
  R.ds = POP();                                                // 0607 pop ds
  R.sp += 2; goto L_ret;                                       // 0608 ret
L_ret:
  return;
}

static u16 f_td15_05f6(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_td15_05f6();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:05BF FUN_1000_05bf  FIX: recompiled from the machine code (asm2c)
static void a_td15_05bf(void)
{
  R.cs = td15_seg;
  ASM_COST(5); PUSH(R.ds);                                     // 05bf push ds
  PUSH(R.cs);                                                  // 05c0 push cs
  R.ds = POP();                                                // 05c1 pop ds
  SUB16(R.dx, 0x400);                                          // 05c2 cmp dx, 0x400
  if (R.cf) goto L_05cb;                                       // 05c6 jb 0x5cb
  ASM_COST(1); R.dx = (u16)(0x3ff);                            // 05c8 mov dx, 0x3ff
L_05cb:   ASM_COST(23); R.bx = (u16)((u16)(0x5ba));                    // 05cb lea bx, [0x5ba]
  SETL(R.ax, M8(DS, (u16)(R.bx + (u8)R.ax)));                  // 05cf xlatb
  SETH(R.ax, (u8)R.ax);                                        // 05d1 mov ah, al
  SETL(R.ax, AND8((u8)R.ax, 0x0));                             // 05d3 and al, 0
  PUSH(R.ax);                                                  // 05d5 push ax
  SETH(R.ax, AND8((u8)(R.ax >> 8), 0x0));                      // 05d6 and ah, 0
  R.dx = (u16)(ROR16(R.dx, 0x1));                              // 05d9 ror dx, 1
  R.dx = (u16)(ROR16(R.dx, 0x1));                              // 05db ror dx, 1
  R.dx = (u16)(ROR16(R.dx, 0x1));                              // 05dd ror dx, 1
  R.dx = (u16)(ROR16(R.dx, 0x1));                              // 05df ror dx, 1
  SETH(R.dx, SHR8((u8)(R.dx >> 8), 0x1));                      // 05e1 shr dh, 1
  SETH(R.dx, SHR8((u8)(R.dx >> 8), 0x1));                      // 05e3 shr dh, 1
  SETH(R.dx, SHR8((u8)(R.dx >> 8), 0x1));                      // 05e5 shr dh, 1
  SETH(R.dx, SHR8((u8)(R.dx >> 8), 0x1));                      // 05e7 shr dh, 1
  R.ax = POP();                                                // 05e9 pop ax
  R.ax = (u16)(OR16(R.ax, R.dx));                              // 05ea or ax, dx
  PUSH(R.ax);                                                  // 05ec push ax
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 05ed mov al, ah
  ASM_PORT_OUT(0xc0, (u8)R.ax);                                // 05ef out 0xc0, al
  R.ax = POP();                                                // 05f1 pop ax
  ASM_PORT_OUT(0xc1, (u8)R.ax);                                // 05f2 out 0xc1, al
  R.ds = POP();                                                // 05f4 pop ds
  R.sp += 2; goto L_ret;                                       // 05f5 ret
L_ret:
  return;
}

static u16 f_td15_05bf(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_td15_05bf();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:076B FUN_1000_076b  FIX: recompiled from the machine code (asm2c)
static void a_td15_076b(void)
{
  R.cs = td15_seg;
  ASM_COST(5); PUSH(R.bp);                                     // 076b push bp
  R.bp = (u16)(R.sp);                                          // 076c mov bp, sp
  SETL(R.ax, M8(SS, (u16)(R.bp + 0xa)));                       // 076e mov al, byte ptr [bp + 0xa]
  SUB8((u8)R.ax, 0x7);                                         // 0771 cmp al, 7
  if (!R.zf) goto L_0786;                                      // 0773 jne 0x786
  ASM_COST(6); SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));          // 0775 mov al, byte ptr [bp + 0xc]
  PUSH(R.ax);                                                  // 0778 push ax
  PUSH(M16(SS, (u16)(R.bp + 0x8)));                            // 0779 push word ptr [bp + 8]
  PUSH(M16(SS, (u16)(R.bp + 0x6)));                            // 077c push word ptr [bp + 6]
  // 077f push cs
  PUSH(td15_seg); PUSH(0x0783); a_td15_0744();                 // 0780 call 0x744
  ASM_COST(1); R.sp = (u16)(ADD16(R.sp, 0x6));                 // 0783 add sp, 6
L_0786:   ASM_COST(2); R.bp = POP();                                   // 0786 pop bp
  R.sp += 4; goto L_ret;                                       // 0787 retf
L_ret:
  return;
}

static u16 f_td15_076b(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_076b();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0744 FUN_1000_0744  FIX: recompiled from the machine code (asm2c)
static void a_td15_0744(void)
{
  R.cs = td15_seg;
  ASM_COST(11); PUSH(R.bp);                                    // 0744 push bp
  R.bp = (u16)(R.sp);                                          // 0745 mov bp, sp
  PUSH(R.si);                                                  // 0747 push si
  SETL(R.ax, M8(SS, (u16)(R.bp + 0xa)));                       // 0748 mov al, byte ptr [bp + 0xa]
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 074b shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 074d shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 074f shr al, 1
  R.si = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0751 mov si, word ptr [bp + 6]
  W8(CS, (u16)(R.si + 0x5af), (u8)R.ax);                       // 0754 mov byte ptr cs:[si + 0x5af], al
  SUB8((u8)R.ax, 0x0);                                         // 0759 cmp al, 0
  if (!R.zf) goto L_0768;                                      // 075b jne 0x768
  ASM_COST(2); SUB16(R.si, 0x5);                               // 075d cmp si, 5
  if (!R.zf) goto L_0768;                                      // 0760 jne 0x768
  ASM_COST(3); SETL(R.ax, ASM_PORT_IN(0x61));                  // 0762 in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfc));                            // 0764 and al, 0xfc
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 0766 out 0x61, al
L_0768:   ASM_COST(3); R.si = POP();                                   // 0768 pop si
  R.bp = POP();                                                // 0769 pop bp
  R.sp += 4; goto L_ret;                                       // 076a retf
L_ret:
  return;
}

static u16 f_td15_0744(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0744();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0BA5 FUN_1000_0ba5  FIX: recompiled from the machine code (asm2c)
static void a_td15_0ba5(void)
{
  R.cs = td15_seg;
  ASM_COST(4); PUSH(R.bp);                                     // 0ba5 push bp
  R.bp = (u16)(R.sp);                                          // 0ba6 mov bp, sp
  SUB16(M16(SS, (u16)(R.bp + 0x6)), 0x0);                      // 0ba8 cmp word ptr [bp + 6], 0
  if (R.zf) goto L_0bb0;                                       // 0bac je 0xbb0
  ASM_COST(2); R.bp = POP();                                   // 0bae pop bp
  R.sp += 4; goto L_ret;                                       // 0baf retf
L_0bb0:   ASM_COST(4); PUSH(R.ds);                                     // 0bb0 push ds
  PUSH(R.cs);                                                  // 0bb1 push cs
  R.ds = POP();                                                // 0bb2 pop ds
  PUSH(0x0bb6); a_td15_0a48();                                 // 0bb3 call 0xa48
  ASM_COST(10);                                                // 0bb6 cli
  SETL(R.ax, 0xff);                                            // 0bb7 mov al, 0xff
  W8(DS, (u16)(0x595), (u8)R.ax);                              // 0bb9 mov byte ptr [0x595], al
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xe)));                    // 0bbc mov ax, word ptr [bp + 0xe]
  W8(DS, (u16)(0x582), (u8)R.ax);                              // 0bbf mov byte ptr [0x582], al
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0bc2 les bx, ptr [bp + 8]
  R.ax = (u16)((u16)(R.bx + 0x32));                            // 0bc5 lea ax, [bx + 0x32]
  R.cx = (u16)(R.ax);                                          // 0bc8 mov cx, ax
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 0bca cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_0be6;                                      // 0bcf jne 0xbe6
  ASM_COST(11); PUSH(R.ax);                                    // 0bd1 push ax
  PUSH(R.bx);                                                  // 0bd2 push bx
  R.bx = (u16)(R.ax);                                          // 0bd3 mov bx, ax
  SETL(R.ax, M8(ES, (u16)(R.bx)));                             // 0bd5 mov al, byte ptr es:[bx]
  W8(DS, (u16)(0x5a7), (u8)R.ax);                              // 0bd8 mov byte ptr [0x5a7], al
  W8(DS, (u16)(0x5a8), (u8)R.ax);                              // 0bdb mov byte ptr [0x5a8], al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0bde xor al, al
  W8(DS, (u16)(0x5a6), (u8)R.ax);                              // 0be0 mov byte ptr [0x5a6], al
  R.bx = POP();                                                // 0be3 pop bx
  R.ax = POP();                                                // 0be4 pop ax
  R.cx = (u16)(INC16(R.cx));                                   // 0be5 inc cx
L_0be6:   ASM_COST(7); W16(DS, (u16)(0x578), R.ax);                    // 0be6 mov word ptr [0x578], ax
  W16(DS, (u16)(0x57a), R.es);                                 // 0be9 mov word ptr [0x57a], es
  W16(DS, (u16)(0x57e), R.cx);                                 // 0bed mov word ptr [0x57e], cx
  W16(DS, (u16)(0x580), R.es);                                 // 0bf1 mov word ptr [0x580], es
  { u16 a_ = (u16)(R.bx + 0x8); R.cx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 0bf5 les cx, ptr es:[bx + 8]
  SUB16(R.cx, 0x0);                                            // 0bf9 cmp cx, 0
  if (!R.zf) goto L_0c07;                                      // 0bfc jne 0xc07
  ASM_COST(6); SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));           // 0bfe xor al, al
  W8(DS, (u16)(0x595), (u8)R.ax);                              // 0c00 mov byte ptr [0x595], al
  // 0c03 sti 
  R.ds = POP();                                                // 0c04 pop ds
  R.bp = POP();                                                // 0c05 pop bp
  R.sp += 4; goto L_ret;                                       // 0c06 retf
L_0c07:   ASM_COST(15); R.cx = (u16)(ADD16(R.cx, R.ax));               // 0c07 add cx, ax
  R.cx = (u16)(DEC16(R.cx));                                   // 0c09 dec cx
  W16(CS, (u16)(0x57c), R.cx);                                 // 0c0a mov word ptr cs:[0x57c], cx
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0c0f xor ax, ax
  R.es = (u16)(R.ax);                                          // 0c11 mov es, ax
  R.ax = (u16)(M16(ES, (u16)(0x20)));                          // 0c13 mov ax, word ptr es:[0x20]
  R.dx = (u16)(M16(ES, (u16)(0x22)));                          // 0c17 mov dx, word ptr es:[0x22]
  W16(DS, (u16)(0x588), R.ax);                                 // 0c1c mov word ptr [0x588], ax
  W16(DS, (u16)(0x58a), R.dx);                                 // 0c1f mov word ptr [0x58a], dx
  PUSH(R.es);                                                  // 0c23 push es
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0c24 les bx, ptr [bp + 8]
  R.ax = (u16)(0xa66);                                         // 0c27 mov ax, 0xa66
  R.dx = (u16)(R.cs);                                          // 0c2a mov dx, cs
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 0c2c cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_0c38;                                      // 0c31 jne 0xc38
  ASM_COST(2); R.ax = (u16)(0xae4);                            // 0c33 mov ax, 0xae4
  R.dx = (u16)(R.cs);                                          // 0c36 mov dx, cs
L_0c38:   ASM_COST(6); R.es = POP();                                   // 0c38 pop es
  W16(ES, (u16)(0x20), R.ax);                                  // 0c39 mov word ptr es:[0x20], ax
  W16(ES, (u16)(0x22), R.dx);                                  // 0c3d mov word ptr es:[0x22], dx
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));                    // 0c42 mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c45 cmp bx, 0x64
  if (!R.cf) goto L_0c4f;                                      // 0c48 jae 0xc4f
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c4a mov bx, 0x64
  goto L_0c58;                                                 // 0c4d jmp 0xc58
L_0c4f:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c4f cmp bx, 0x4e20
  if (R.cf) goto L_0c58;                                       // 0c53 jb 0xc58
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c55 mov bx, 0x4e20
L_0c58:   ASM_COST(27); R.dx = (u16)(0x12);                            // 0c58 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c5b mov ax, 0x34dc
  DIV16(R.bx, 0x0c5e);                                         // 0c5e div bx
  R.bx = (u16)(R.ax);                                          // 0c60 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x58c)));                         // 0c62 mov ax, word ptr [0x58c]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c65 xor dx, dx
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  W16(DS, (u16)(0x58e), R.ax);                                 // 0c69 mov word ptr [0x58e], ax
  W16(DS, (u16)(0x590), R.ax);                                 // 0c6c mov word ptr [0x590], ax
  W16(DS, (u16)(0x593), R.bx);                                 // 0c6f mov word ptr [0x593], bx
  SETL(R.ax, 0x36);                                            // 0c73 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c75 out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c77 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c79 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c7b mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c7d out 0x40, al
  SETL(R.ax, 0x3);                                             // 0c7f mov al, 3
  ASM_PORT_OUT(0xc4, (u8)R.ax);                                // 0c81 out 0xc4, al
  R.dx = (u16)(0x21);                                          // 0c83 mov dx, 0x21
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0c86 in al, dx
  W8(DS, (u16)(0x592), (u8)R.ax);                              // 0c87 mov byte ptr [0x592], al
  SETL(R.ax, 0xfc);                                            // 0c8a mov al, 0xfc
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0c8c out dx, al
  // 0c8d sti 
  R.ds = POP();                                                // 0c8e pop ds
  R.bp = POP();                                                // 0c8f pop bp
  R.sp += 4; goto L_ret;                                       // 0c90 retf
L_ret:
  return;
}

static u16 f_td15_0ba5(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4)
{
  ASM_ENTER();
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0ba5();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0647 FUN_1000_0647  FIX: recompiled from the machine code (asm2c)
static void a_td15_0647(void)
{
  R.cs = td15_seg;
  ASM_COST(1); PUSH(0x064a); a_td15_0a48();                    // 0647 call 0xa48
  ASM_COST(5); SETL(R.ax, ASM_PORT_IN(0x61));                  // 064a in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfe));                            // 064c and al, 0xfe
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 064e out 0x61, al
  R.ax = (u16)(0x1);                                           // 0650 mov ax, 1
  PUSH(0x0656); a_td15_05f6();                                 // 0653 call 0x5f6
  ASM_COST(2); R.ax = (u16)(0x2);                              // 0656 mov ax, 2
  PUSH(0x065c); a_td15_05f6();                                 // 0659 call 0x5f6
  ASM_COST(2); R.ax = (u16)(0x3);                              // 065c mov ax, 3
  PUSH(0x0662); a_td15_05f6();                                 // 065f call 0x5f6
  ASM_COST(2); R.ax = (u16)(0x4);                              // 0662 mov ax, 4
  PUSH(0x0668); a_td15_05f6();                                 // 0665 call 0x5f6
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0668 retf
L_ret:
  return;
}

static u16 f_td15_0647(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_td15_0647();
  ASM_LEAVE(); return (u16)R.ax;
}

// the driver's slots: slot 0 + k runs the k-th entry, with the caller's return address on the stack
void td15_slot(int slot)
{
  switch (slot)
  {
  case 0: a_td15_0000(); return;
  case 1: a_td15_0003(); return;
  case 2: a_td15_0006(); return;
  case 3: a_td15_0009(); return;
  case 4: a_td15_000c(); return;
  case 5: a_td15_000f(); return;
  case 6: a_td15_0012(); return;
  case 7: a_td15_0015(); return;
  case 8: a_td15_0018(); return;
  case 9: a_td15_001b(); return;
  case 10: a_td15_001e(); return;
  case 11: a_td15_0021(); return;
  case 12: a_td15_0024(); return;
  case 13: a_td15_0027(); return;
  case 14: a_td15_002a(); return;
  case 15: a_td15_002d(); return;
  case 16: a_td15_0030(); return;
  case 17: a_td15_0033(); return;
  case 18: a_td15_0036(); return;
  case 19: a_td15_0039(); return;
  case 20: a_td15_003c(); return;
  default: R.sp += 4; return;  // a slot that is only retf
  }
}

// any routine of the module by its offset (the callbacks it registers with the program)
bool td15_run(u16 off)
{
  switch (off)
  {
  case 0x0000: a_td15_0000(); return true;
  case 0x0003: a_td15_0003(); return true;
  case 0x0006: a_td15_0006(); return true;
  case 0x0009: a_td15_0009(); return true;
  case 0x000c: a_td15_000c(); return true;
  case 0x000f: a_td15_000f(); return true;
  case 0x0012: a_td15_0012(); return true;
  case 0x0015: a_td15_0015(); return true;
  case 0x0018: a_td15_0018(); return true;
  case 0x001b: a_td15_001b(); return true;
  case 0x001e: a_td15_001e(); return true;
  case 0x0021: a_td15_0021(); return true;
  case 0x0024: a_td15_0024(); return true;
  case 0x0027: a_td15_0027(); return true;
  case 0x002a: a_td15_002a(); return true;
  case 0x002d: a_td15_002d(); return true;
  case 0x0030: a_td15_0030(); return true;
  case 0x0033: a_td15_0033(); return true;
  case 0x0036: a_td15_0036(); return true;
  case 0x0039: a_td15_0039(); return true;
  case 0x003c: a_td15_003c(); return true;
  case 0x05bf: a_td15_05bf(); return true;
  case 0x05f6: a_td15_05f6(); return true;
  case 0x061a: a_td15_061a(); return true;
  case 0x0647: a_td15_0647(); return true;
  case 0x0656: a_td15_0656(); return true;
  case 0x065c: a_td15_065c(); return true;
  case 0x0662: a_td15_0662(); return true;
  case 0x0739: a_td15_0739(); return true;
  case 0x0744: a_td15_0744(); return true;
  case 0x076b: a_td15_076b(); return true;
  case 0x0783: a_td15_0783(); return true;
  case 0x07b3: a_td15_07b3(); return true;
  case 0x07db: a_td15_07db(); return true;
  case 0x0a48: a_td15_0a48(); return true;
  case 0x0a66: a_td15_0a66(); return true;
  case 0x0ae4: a_td15_0ae4(); return true;
  case 0x0ba5: a_td15_0ba5(); return true;
  case 0x0bb6: a_td15_0bb6(); return true;
  default: return false;
  }
}
