// SB15.DRV (the game's sb15 sound driver) recompiled from its machine code (the workspace's work/asm2c.py,
// work/drv_gen.sh): generated, do not edit. sb15_seg is the segment the game loaded it at.
#include "drivers.h"
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-variable"
u16 sb15_seg;


// ---- recompiled bodies
static void a_sb15_0000(void);
static void a_sb15_0003(void);
static void a_sb15_0006(void);
static void a_sb15_0009(void);
static void a_sb15_000c(void);
static void a_sb15_000f(void);
static void a_sb15_0012(void);
static void a_sb15_0015(void);
static void a_sb15_0018(void);
static void a_sb15_001b(void);
static void a_sb15_001e(void);
static void a_sb15_0021(void);
static void a_sb15_0024(void);
static void a_sb15_0027(void);
static void a_sb15_002a(void);
static void a_sb15_002d(void);
static void a_sb15_0030(void);
static void a_sb15_0033(void);
static void a_sb15_0036(void);
static void a_sb15_0039(void);
static void a_sb15_003c(void);
static void a_sb15_003f(void);
static void a_sb15_004e(void);
static void a_sb15_00c3(void);
static void a_sb15_00d2(void);
static void a_sb15_0120(void);
static void a_sb15_012c(void);
static void a_sb15_0156(void);
static void a_sb15_016c(void);
static void a_sb15_0316(void);
static void a_sb15_0412(void);
static void a_sb15_0808(void);
static void a_sb15_080f(void);
static void a_sb15_0816(void);
static void a_sb15_0819(void);
static void a_sb15_0822(void);
static void a_sb15_0840(void);
static void a_sb15_0847(void);
static void a_sb15_09bf(void);
static void a_sb15_09e2(void);
static void a_sb15_09e9(void);
static void a_sb15_09f0(void);
static void a_sb15_0a01(void);
static void a_sb15_0a14(void);
static void a_sb15_0a17(void);
static void a_sb15_0a75(void);
static void a_sb15_0b12(void);
static void a_sb15_0b1d(void);
static void a_sb15_0b28(void);
static void a_sb15_0b33(void);
static void a_sb15_0b57(void);
static void a_sb15_0b5f(void);
static void a_sb15_0b67(void);
static void a_sb15_0b6f(void);
static void a_sb15_0b78(void);
static void a_sb15_0b83(void);
static void a_sb15_0b8e(void);
static void a_sb15_0b99(void);
static void a_sb15_0c75(void);
static void a_sb15_0c8a(void);
static void a_sb15_0cb3(void);
static void a_sb15_0cc0(void);
static void a_sb15_0cc3(void);
static void a_sb15_0d02(void);
static void a_sb15_0d0c(void);
static void a_sb15_0d19(void);
static void a_sb15_0e0d(void);
static void a_sb15_0e21(void);
static void a_sb15_0e9d(void);
static void a_sb15_0f43(void);
static void a_sb15_0f48(void);
static void a_sb15_0fa0(void);
static void a_sb15_1000(void);
static void a_sb15_106a(void);
static void a_sb15_10ff(void);
static void a_sb15_1105(void);
static void a_sb15_110b(void);
static void a_sb15_1111(void);
static void a_sb15_1117(void);
static void a_sb15_111d(void);
static void a_sb15_1123(void);
static void a_sb15_112d(void);
static void a_sb15_1133(void);
static void a_sb15_1155(void);
static void a_sb15_115b(void);
static void a_sb15_0d46(void);
static void a_sb15_0d4b(void);
static void a_sb15_0d64(void);
static void a_sb15_0d6c(void);
static void a_sb15_0d7b(void);
static void a_sb15_0d85(void);
static void a_sb15_0db1(void);
static void a_sb15_0db9(void);
static void a_sb15_0dc1(void);
static void a_sb15_0dcb(void);
static void a_sb15_0deb(void);
static void a_sb15_0f3b(void);
static void a_sb15_0f41(void);
static void a_sb15_0f46(void);
static void a_sb15_101f(void);
static void a_sb15_1025(void);
static void a_sb15_102a(void);
static void a_sb15_0bcc(void);
static void a_sb15_0a1d(void);
static void a_sb15_06c9(void);
static void a_sb15_0526(void);
static void a_sb15_07cb(void);
static void a_sb15_0734(void);
static void a_sb15_0a81(void);
static void a_sb15_0ac4(void);
static void a_sb15_06f7(void);
static void a_sb15_071e(void);
static void a_sb15_102c(void);
static void a_sb15_0dff(void);
static void a_sb15_0c4c(void);
static void a_sb15_0e7e(void);
static void a_sb15_0bb6(void);
static void a_sb15_0bf9(void);
static void a_sb15_0e35(void);
static void a_sb15_0a5b(void);
static void a_sb15_04ca(void);
static void a_sb15_0b00(void);
static void a_sb15_07fe(void);
static void a_sb15_07f3(void);
static void a_sb15_0a3a(void);
static void a_sb15_0d8d(void);
static void a_sb15_0dd4(void);
static void a_sb15_0d53(void);
static void a_sb15_0ba4(void);
static void a_sb15_0583(void);

// Recompiled from the machine code by the workspace's work/asm2c.py (the decompilation of these functions
// failed); see asm2c.h.

// 1000:0000 FUN_1000_0000  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0000(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_0970;                                    // 0000 jmp 0x970
L_0970:   ASM_COST(2); W16(CS, (u16)(0x11bc), 0x240);                  // 0970 mov word ptr cs:[0x11bc], 0x240
  PUSH(0x097a); a_sb15_0a5b();                                 // 0977 call 0xa5b
  ASM_COST(1); if (!R.cf) goto L_09bc;                         // 097a jae 0x9bc
  ASM_COST(2); W16(CS, (u16)(0x11bc), 0x220);                  // 097c mov word ptr cs:[0x11bc], 0x220
  PUSH(0x0986); a_sb15_0a5b();                                 // 0983 call 0xa5b
  ASM_COST(1); if (!R.cf) goto L_09bc;                         // 0986 jae 0x9bc
  ASM_COST(2); W16(CS, (u16)(0x11bc), 0x210);                  // 0988 mov word ptr cs:[0x11bc], 0x210
  PUSH(0x0992); a_sb15_0a5b();                                 // 098f call 0xa5b
  ASM_COST(1); if (!R.cf) goto L_09bc;                         // 0992 jae 0x9bc
  ASM_COST(2); W16(CS, (u16)(0x11bc), 0x230);                  // 0994 mov word ptr cs:[0x11bc], 0x230
  PUSH(0x099e); a_sb15_0a5b();                                 // 099b call 0xa5b
  ASM_COST(1); if (!R.cf) goto L_09bc;                         // 099e jae 0x9bc
  ASM_COST(2); W16(CS, (u16)(0x11bc), 0x250);                  // 09a0 mov word ptr cs:[0x11bc], 0x250
  PUSH(0x09aa); a_sb15_0a5b();                                 // 09a7 call 0xa5b
  ASM_COST(1); if (!R.cf) goto L_09bc;                         // 09aa jae 0x9bc
  ASM_COST(2); W16(CS, (u16)(0x11bc), 0x260);                  // 09ac mov word ptr cs:[0x11bc], 0x260
  PUSH(0x09b6); a_sb15_0a5b();                                 // 09b3 call 0xa5b
  ASM_COST(1); if (!R.cf) goto L_09bc;                         // 09b6 jae 0x9bc
  ASM_COST(2); R.ax = (u16)(0x0);                              // 09b8 mov ax, 0
  R.sp += 4; goto L_ret;                                       // 09bb retf
L_09bc:   ASM_COST(1); PUSH(0x09bf); a_sb15_04ca();                    // 09bc call 0x4ca
  ASM_COST(1); PUSH(0x09c2); a_sb15_0b00();                    // 09bf call 0xb00
  ASM_COST(2); SUB16(R.ax, 0xffff);                            // 09c2 cmp ax, 0xffff
  if (!R.zf) goto L_09cb;                                      // 09c5 jne 0x9cb
  ASM_COST(2); R.ax = (u16)(0x0);                              // 09c7 mov ax, 0
  R.sp += 4; goto L_ret;                                       // 09ca retf
L_09cb:   ASM_COST(2); W16(CS, (u16)(0x960), 0x388);                   // 09cb mov word ptr cs:[0x960], 0x388
  PUSH(0x09d5); a_sb15_07fe();                                 // 09d2 call 0x7fe
  ASM_COST(1); if (!R.cf) goto L_09db;                         // 09d5 jae 0x9db
  ASM_COST(2); R.ax = (u16)(0x0);                              // 09d7 mov ax, 0
  R.sp += 4; goto L_ret;                                       // 09da retf
L_09db:   ASM_COST(3); SETH(R.ax, 0x1);                                // 09db mov ah, 1
  SETL(R.ax, 0x20);                                            // 09dd mov al, 0x20
  PUSH(0x09e2); a_sb15_07cb();                                 // 09df call 0x7cb
  ASM_COST(3); SETH(R.ax, 0x8);                                // 09e2 mov ah, 8
  SETL(R.ax, 0x0);                                             // 09e4 mov al, 0
  PUSH(0x09e9); a_sb15_07cb();                                 // 09e6 call 0x7cb
  ASM_COST(3); SETH(R.ax, 0xbd);                               // 09e9 mov ah, 0xbd
  SETL(R.ax, 0x0);                                             // 09eb mov al, 0
  PUSH(0x09f0); a_sb15_07cb();                                 // 09ed call 0x7cb
  ASM_COST(1); R.ax = (u16)(0x0);                              // 09f0 mov ax, 0
L_09f3:   ASM_COST(1); PUSH(0x09f6); a_sb15_0526();                    // 09f3 call 0x526
  ASM_COST(3); R.ax = (u16)(INC16(R.ax));                      // 09f6 inc ax
  SUB16(R.ax, 0x9);                                            // 09f7 cmp ax, 9
  if (R.cf) { ASM_BACK(); goto L_09f3; }                       // 09fa jb 0x9f3
  ASM_COST(2); SETH(R.ax, 0xd1);                               // 09fc mov ah, 0xd1
  PUSH(0x0a01); a_sb15_0a1d();                                 // 09fe call 0xa1d
  ASM_COST(2); R.ax = (u16)(0xb);                              // 0a01 mov ax, 0xb
  R.sp += 4; goto L_ret;                                       // 0a04 retf
L_ret:
  return;
}

static u16 f_sb15_0000(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0000();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0003 FUN_1000_0003  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0003(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_0a05;                                    // 0003 jmp 0xa05
L_0a05:   ASM_COST(1); R.ax = (u16)(0x0);                              // 0a05 mov ax, 0
L_0a08:   ASM_COST(1); PUSH(0x0a0b); a_sb15_0526();                    // 0a08 call 0x526
  ASM_COST(3); R.ax = (u16)(INC16(R.ax));                      // 0a0b inc ax
  SUB16(R.ax, 0x9);                                            // 0a0c cmp ax, 9
  if (R.cf) { ASM_BACK(); goto L_0a08; }                       // 0a0f jb 0xa08
  ASM_COST(1); PUSH(0x0a14); a_sb15_0e7e();                    // 0a11 call 0xe7e
  ASM_COST(1); PUSH(0x0a17); a_sb15_0dff();                    // 0a14 call 0xdff
  ASM_COST(2); SETH(R.ax, 0xd3);                               // 0a17 mov ah, 0xd3
  PUSH(0x0a1c); a_sb15_0a1d();                                 // 0a19 call 0xa1d
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0a1c retf
L_ret:
  return;
}

static u16 f_sb15_0003(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0003();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0006 FUN_1000_0006  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0006(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_003f;                                    // 0006 jmp 0x3f
L_003f:   ASM_COST(1); R.ax = (u16)(0x0);                              // 003f mov ax, 0
L_0042:   ASM_COST(1); PUSH(0x0045); a_sb15_0526();                    // 0042 call 0x526
  ASM_COST(3); R.ax = (u16)(INC16(R.ax));                      // 0045 inc ax
  SUB16(R.ax, 0x9);                                            // 0046 cmp ax, 9
  if (R.cf) { ASM_BACK(); goto L_0042; }                       // 0049 jb 0x42
  ASM_COST(1); PUSH(0x004e); a_sb15_0e7e();                    // 004b call 0xe7e
  ASM_COST(1); PUSH(0x0051); a_sb15_0dff();                    // 004e call 0xdff
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0051 retf
L_ret:
  return;
}

static u16 f_sb15_0006(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0006();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0009 FUN_1000_0009  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0009(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_0105;                                    // 0009 jmp 0x105
L_0105:   ASM_COST(9); PUSH(R.bp);                                     // 0105 push bp
  R.bp = (u16)(R.sp);                                          // 0106 mov bp, sp
  PUSH(R.di);                                                  // 0108 push di
  PUSH(R.si);                                                  // 0109 push si
  { u16 a_ = (u16)(R.bp + 0x10); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 010a les bx, ptr [bp + 0x10]
  R.di = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 010d mov di, word ptr [bp + 8]
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0110 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 0113 cmp ax, 0
  if (R.zf) goto L_011f;                                       // 0116 je 0x11f
  ASM_COST(2); SUB16(R.ax, 0xa);                               // 0118 cmp ax, 0xa
  if (R.zf) goto L_011f;                                       // 011b je 0x11f
  ASM_COST(1); goto L_015d;                                    // 011d jmp 0x15d
L_011f:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0xa)), 0x0);           // 011f cmp byte ptr es:[bx + 0xa], 0
  if (R.zf) goto L_0159;                                       // 0124 je 0x159
  ASM_COST(3); R.ax = (u16)(XOR16(R.ax, R.ax));                // 0126 xor ax, ax
  SUB8(M8(ES, (u16)(R.bx + 0x5)), 0x6);                        // 0128 cmp byte ptr es:[bx + 5], 6
  if (R.zf) goto L_0130;                                       // 012d je 0x130
  ASM_COST(1); R.ax = (u16)(INC16(R.ax));                      // 012f inc ax
L_0130:   ASM_COST(4); PUSH(R.ax);                                     // 0130 push ax
  SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 0131 mov al, byte ptr [bp + 0xc]
  W8(DS, (u16)(R.di + 0x3), (u8)R.ax);                         // 0134 mov byte ptr [di + 3], al
  PUSH(0x013a); a_sb15_071e();                                 // 0137 call 0x71e
  ASM_COST(13); W16(DS, (u16)(R.di + 0x4), R.cx);              // 013a mov word ptr [di + 4], cx
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x11)));                      // 013d mov al, byte ptr es:[bx + 0x11]
  R.ax = (u16)(i16)(i8)R.ax;                                   // 0141 cwde
  R.cx = (u16)(ADD16(R.cx, R.ax));                             // 0142 add cx, ax
  W16(DS, (u16)(R.di + 0x6), R.cx);                            // 0144 mov word ptr [di + 6], cx
  PUSH(R.cx);                                                  // 0147 push cx
  { u16 a_ = (u16)(R.bx + 0x6); R.bx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 0148 les bx, ptr es:[bx + 6]
  PUSH(R.es);                                                  // 014c push es
  PUSH(R.bx);                                                  // 014d push bx
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 014e mov ax, word ptr [bp + 6]
  PUSH(R.ax);                                                  // 0151 push ax
  // 0152 push cs
  PUSH(sb15_seg); PUSH(0x0156); a_sb15_102c();                 // 0153 call 0x102c
  ASM_COST(1); R.sp = (u16)(ADD16(R.sp, 0xa));                 // 0156 add sp, 0xa
L_0159:   ASM_COST(4); R.si = POP();                                   // 0159 pop si
  R.di = POP();                                                // 015a pop di
  R.bp = POP();                                                // 015b pop bp
  R.sp += 4; goto L_ret;                                       // 015c retf
L_015d:   ASM_COST(5); SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));          // 015d mov al, byte ptr [bp + 0xc]
  W8(DS, (u16)(R.di + 0x3), (u8)R.ax);                         // 0160 mov byte ptr [di + 3], al
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 0163 xor ah, ah
  SUB8((u8)R.ax, 0xff);                                        // 0165 cmp al, 0xff
  if (R.zf) goto L_017b;                                       // 0167 je 0x17b
  ASM_COST(1); PUSH(0x016c); a_sb15_06f7();                    // 0169 call 0x6f7
  ASM_COST(6); R.dx = (u16)(R.ax);                             // 016c mov dx, ax
  W16(DS, (u16)(R.di + 0x4), R.dx);                            // 016e mov word ptr [di + 4], dx
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x11)));                      // 0171 mov al, byte ptr es:[bx + 0x11]
  R.ax = (u16)(i16)(i8)R.ax;                                   // 0175 cwde
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 0176 add dx, ax
  W16(DS, (u16)(R.di + 0x6), R.dx);                            // 0178 mov word ptr [di + 6], dx
L_017b:   ASM_COST(10); R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));      // 017b mov ax, word ptr [bp + 6]
  R.ax = (u16)(DEC16(R.ax));                                   // 017e dec ax
  R.di = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 017f mov di, word ptr [bp + 0xa]
  PUSH(R.ax);                                                  // 0182 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0183 shl ax, 1
  R.si = (u16)(R.ax);                                          // 0185 mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x85e)));                     // 0187 mov ah, byte ptr cs:[si + 0x85e]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 018c add ah, 0x40
  SETL(R.ax, 0x3f);                                            // 018f mov al, 0x3f
  PUSH(0x0194); a_sb15_07cb();                                 // 0191 call 0x7cb
  ASM_COST(9); R.ax = POP();                                   // 0194 pop ax
  PUSH(R.ax);                                                  // 0195 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0196 shl ax, 1
  R.ax = (u16)(INC16(R.ax));                                   // 0198 inc ax
  R.si = (u16)(R.ax);                                          // 0199 mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x85e)));                     // 019b mov ah, byte ptr cs:[si + 0x85e]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 01a0 add ah, 0x40
  SETL(R.ax, 0x3f);                                            // 01a3 mov al, 0x3f
  PUSH(0x01a8); a_sb15_07cb();                                 // 01a5 call 0x7cb
  ASM_COST(6); R.ax = POP();                                   // 01a8 pop ax
  PUSH(R.ax);                                                  // 01a9 push ax
  SETH(R.ax, (u8)R.ax);                                        // 01aa mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xa0));                     // 01ac add ah, 0xa0
  SETL(R.ax, (u8)R.dx);                                        // 01af mov al, dl
  PUSH(0x01b4); a_sb15_07cb();                                 // 01b1 call 0x7cb
  ASM_COST(7); R.ax = POP();                                   // 01b4 pop ax
  PUSH(R.ax);                                                  // 01b5 push ax
  SETH(R.ax, (u8)R.ax);                                        // 01b6 mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xb0));                     // 01b8 add ah, 0xb0
  SETL(R.ax, 0x20);                                            // 01bb mov al, 0x20
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 01bd or al, dh
  PUSH(0x01c2); a_sb15_07cb();                                 // 01bf call 0x7cb
  ASM_COST(4); R.ax = POP();                                   // 01c2 pop ax
  SETL(R.cx, 0x7f);                                            // 01c3 mov cl, 0x7f
  SUB8(M8(ES, (u16)(R.bx + 0x15)), 0x0);                       // 01c5 cmp byte ptr es:[bx + 0x15], 0
  if (R.zf) goto L_01cf;                                       // 01ca je 0x1cf
  ASM_COST(1); SETL(R.cx, M8(SS, (u16)(R.bp + 0xe)));          // 01cc mov cl, byte ptr [bp + 0xe]
L_01cf:   ASM_COST(4); R.si = (u16)(R.ax);                             // 01cf mov si, ax
  W8(CS, (u16)(R.si + 0x966), (u8)R.cx);                       // 01d1 mov byte ptr cs:[si + 0x966], cl
  SETH(R.cx, M8(DS, (u16)(R.di + 0x28)));                      // 01d6 mov ch, byte ptr [di + 0x28]
  PUSH(0x01dc); a_sb15_0734();                                 // 01d9 call 0x734
  ASM_COST(4); R.si = POP();                                   // 01dc pop si
  R.di = POP();                                                // 01dd pop di
  R.bp = POP();                                                // 01de pop bp
  R.sp += 4; goto L_ret;                                       // 01df retf
L_ret:
  return;
}

static u16 f_sb15_0009(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4, u16 p5)
{
  ASM_ENTER();
  PUSH((u16)p5);
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0009();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:000C FUN_1000_000c  FIX: recompiled from the machine code (asm2c)
static void a_sb15_000c(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_01e0;                                    // 000c jmp 0x1e0
L_01e0:   ASM_COST(5); PUSH(R.bp);                                     // 01e0 push bp
  R.bp = (u16)(R.sp);                                          // 01e1 mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 01e3 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 01e6 cmp ax, 0
  if (!R.zf) goto L_01ed;                                      // 01e9 jne 0x1ed
  ASM_COST(2); R.bp = POP();                                   // 01eb pop bp
  R.sp += 4; goto L_ret;                                       // 01ec retf
L_01ed:   ASM_COST(2); SUB16(R.ax, 0xa);                               // 01ed cmp ax, 0xa
  if (!R.zf) goto L_01f4;                                      // 01f0 jne 0x1f4
  ASM_COST(2); R.bp = POP();                                   // 01f2 pop bp
  R.sp += 4; goto L_ret;                                       // 01f3 retf
L_01f4:   ASM_COST(9); R.ax = (u16)(DEC16(R.ax));                      // 01f4 dec ax
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 01f5 mov bx, word ptr [bp + 8]
  R.dx = (u16)(M16(DS, (u16)(R.bx + 0x6)));                    // 01f8 mov dx, word ptr [bx + 6]
  PUSH(R.ax);                                                  // 01fb push ax
  SETH(R.ax, (u8)R.ax);                                        // 01fc mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xb0));                     // 01fe add ah, 0xb0
  SETL(R.ax, 0x0);                                             // 0201 mov al, 0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0203 or al, dh
  PUSH(0x0208); a_sb15_07cb();                                 // 0205 call 0x7cb
  ASM_COST(3); R.ax = POP();                                   // 0208 pop ax
  R.bp = POP();                                                // 0209 pop bp
  R.sp += 4; goto L_ret;                                       // 020a retf
L_ret:
  return;
}

static u16 f_sb15_000c(u16 p0, u16 p1)
{
  ASM_ENTER();
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_000c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:000F FUN_1000_000f  FIX: recompiled from the machine code (asm2c)
static void a_sb15_000f(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_020b;                                    // 000f jmp 0x20b
L_020b:   ASM_COST(6); PUSH(R.bp);                                     // 020b push bp
  R.bp = (u16)(R.sp);                                          // 020c mov bp, sp
  PUSH(R.si);                                                  // 020e push si
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 020f mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 0212 cmp ax, 0
  if (!R.zf) goto L_021d;                                      // 0215 jne 0x21d
  ASM_COST(1); PUSH(0x021a); a_sb15_0dff();                    // 0217 call 0xdff
  ASM_COST(3); R.si = POP();                                   // 021a pop si
  R.bp = POP();                                                // 021b pop bp
  R.sp += 4; goto L_ret;                                       // 021c retf
L_021d:   ASM_COST(2); SUB16(R.ax, 0xa);                               // 021d cmp ax, 0xa
  if (!R.zf) goto L_0228;                                      // 0220 jne 0x228
  ASM_COST(1); PUSH(0x0225); a_sb15_0e7e();                    // 0222 call 0xe7e
  ASM_COST(3); R.si = POP();                                   // 0225 pop si
  R.bp = POP();                                                // 0226 pop bp
  R.sp += 4; goto L_ret;                                       // 0227 retf
L_0228:   ASM_COST(8); R.ax = (u16)(DEC16(R.ax));                      // 0228 dec ax
  PUSH(R.ax);                                                  // 0229 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 022a shl ax, 1
  R.si = (u16)(R.ax);                                          // 022c mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x85e)));                     // 022e mov ah, byte ptr cs:[si + 0x85e]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 0233 add ah, 0x40
  SETL(R.ax, 0x3f);                                            // 0236 mov al, 0x3f
  PUSH(0x023b); a_sb15_07cb();                                 // 0238 call 0x7cb
  ASM_COST(9); R.ax = POP();                                   // 023b pop ax
  PUSH(R.ax);                                                  // 023c push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 023d shl ax, 1
  R.ax = (u16)(INC16(R.ax));                                   // 023f inc ax
  R.si = (u16)(R.ax);                                          // 0240 mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x85e)));                     // 0242 mov ah, byte ptr cs:[si + 0x85e]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 0247 add ah, 0x40
  SETL(R.ax, 0x3f);                                            // 024a mov al, 0x3f
  PUSH(0x024f); a_sb15_07cb();                                 // 024c call 0x7cb
  ASM_COST(4); R.ax = POP();                                   // 024f pop ax
  R.si = POP();                                                // 0250 pop si
  R.bp = POP();                                                // 0251 pop bp
  R.sp += 4; goto L_ret;                                       // 0252 retf
L_ret:
  return;
}

static u16 f_sb15_000f(u16 p0)
{
  ASM_ENTER();
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_000f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0012 FUN_1000_0012  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0012(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_03d5;                                    // 0012 jmp 0x3d5
L_03d5:   ASM_COST(7); PUSH(R.bp);                                     // 03d5 push bp
  R.bp = (u16)(R.sp);                                          // 03d6 mov bp, sp
  PUSH(R.di);                                                  // 03d8 push di
  PUSH(R.si);                                                  // 03d9 push si
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 03da mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 03dd cmp ax, 0
  if (!R.zf) goto L_03e6;                                      // 03e0 jne 0x3e6
  ASM_COST(4); R.si = POP();                                   // 03e2 pop si
  R.di = POP();                                                // 03e3 pop di
  R.bp = POP();                                                // 03e4 pop bp
  R.sp += 4; goto L_ret;                                       // 03e5 retf
L_03e6:   ASM_COST(2); SUB16(R.ax, 0xa);                               // 03e6 cmp ax, 0xa
  if (!R.zf) goto L_03ef;                                      // 03e9 jne 0x3ef
  ASM_COST(4); R.si = POP();                                   // 03eb pop si
  R.di = POP();                                                // 03ec pop di
  R.bp = POP();                                                // 03ed pop bp
  R.sp += 4; goto L_ret;                                       // 03ee retf
L_03ef:   ASM_COST(7); R.ax = (u16)(DEC16(R.ax));                      // 03ef dec ax
  R.si = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 03f0 mov si, word ptr [bp + 8]
  { u16 a_ = (u16)(R.si + 0x10); R.bx = (u16)(M16(DS, a_)); R.es = M16(DS, (u16)(a_ + 2)); } // 03f3 les bx, ptr [si + 0x10]
  R.di = (u16)(R.ax);                                          // 03f6 mov di, ax
  SETL(R.cx, M8(CS, (u16)(R.di + 0x966)));                     // 03f8 mov cl, byte ptr cs:[di + 0x966]
  SETH(R.cx, M8(SS, (u16)(R.bp + 0xa)));                       // 03fd mov ch, byte ptr [bp + 0xa]
  PUSH(0x0403); a_sb15_0734();                                 // 0400 call 0x734
  ASM_COST(4); R.si = POP();                                   // 0403 pop si
  R.di = POP();                                                // 0404 pop di
  R.bp = POP();                                                // 0405 pop bp
  R.sp += 4; goto L_ret;                                       // 0406 retf
L_ret:
  return;
}

static u16 f_sb15_0012(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0012();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0015 FUN_1000_0015  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0015(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_0253;                                    // 0015 jmp 0x253
L_0253:   ASM_COST(7); PUSH(R.bp);                                     // 0253 push bp
  R.bp = (u16)(R.sp);                                          // 0254 mov bp, sp
  PUSH(R.di);                                                  // 0256 push di
  PUSH(R.si);                                                  // 0257 push si
  R.si = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 0258 mov si, word ptr [bp + 8]
  SUB8(M8(DS, (u16)(R.si + 0x1)), 0x0);                        // 025b cmp byte ptr [si + 1], 0
  if (!R.zf) goto L_0265;                                      // 025f jne 0x265
  ASM_COST(4); R.si = POP();                                   // 0261 pop si
  R.di = POP();                                                // 0262 pop di
  R.bp = POP();                                                // 0263 pop bp
  R.sp += 4; goto L_ret;                                       // 0264 retf
L_0265:   ASM_COST(3); R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));       // 0265 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 0268 cmp ax, 0
  if (!R.zf) goto L_0271;                                      // 026b jne 0x271
  ASM_COST(4); R.si = POP();                                   // 026d pop si
  R.di = POP();                                                // 026e pop di
  R.bp = POP();                                                // 026f pop bp
  R.sp += 4; goto L_ret;                                       // 0270 retf
L_0271:   ASM_COST(2); SUB16(R.ax, 0xa);                               // 0271 cmp ax, 0xa
  if (!R.zf) goto L_027a;                                      // 0274 jne 0x27a
  ASM_COST(4); R.si = POP();                                   // 0276 pop si
  R.di = POP();                                                // 0277 pop di
  R.bp = POP();                                                // 0278 pop bp
  R.sp += 4; goto L_ret;                                       // 0279 retf
L_027a:   ASM_COST(8); R.ax = (u16)(DEC16(R.ax));                      // 027a dec ax
  { u16 a_ = (u16)(R.si + 0x10); R.bx = (u16)(M16(DS, a_)); R.es = M16(DS, (u16)(a_ + 2)); } // 027b les bx, ptr [si + 0x10]
  SETL(R.cx, M8(SS, (u16)(R.bp + 0xa)));                       // 027e mov cl, byte ptr [bp + 0xa]
  SETH(R.cx, XOR8((u8)(R.cx >> 8), (u8)(R.cx >> 8)));          // 0281 xor ch, ch
  SETL(R.dx, M8(SS, (u16)(R.bp + 0xc)));                       // 0283 mov dl, byte ptr [bp + 0xc]
  SETH(R.dx, XOR8((u8)(R.dx >> 8), (u8)(R.dx >> 8)));          // 0286 xor dh, dh
  SUB16(R.cx, 0x1);                                            // 0288 cmp cx, 1
  if (!R.zf) goto L_0298;                                      // 028b jne 0x298
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x16)));         // 028d mov cl, byte ptr es:[bx + 0x16]
  PUSH(0x0294); a_sb15_06c9();                                 // 0291 call 0x6c9
  ASM_COST(4); R.si = POP();                                   // 0294 pop si
  R.di = POP();                                                // 0295 pop di
  R.bp = POP();                                                // 0296 pop bp
  R.sp += 4; goto L_ret;                                       // 0297 retf
L_0298:   ASM_COST(2); SUB16(R.cx, 0x7);                               // 0298 cmp cx, 7
  if (!R.zf) goto L_02ae;                                      // 029b jne 0x2ae
  ASM_COST(4); R.di = (u16)(R.ax);                             // 029d mov di, ax
  SETL(R.cx, M8(CS, (u16)(R.di + 0x966)));                     // 029f mov cl, byte ptr cs:[di + 0x966]
  SETH(R.cx, M8(SS, (u16)(R.bp + 0xc)));                       // 02a4 mov ch, byte ptr [bp + 0xc]
  PUSH(0x02aa); a_sb15_0734();                                 // 02a7 call 0x734
  ASM_COST(4); R.si = POP();                                   // 02aa pop si
  R.di = POP();                                                // 02ab pop di
  R.bp = POP();                                                // 02ac pop bp
  R.sp += 4; goto L_ret;                                       // 02ad retf
L_02ae:   ASM_COST(2); SUB16(R.cx, 0xb);                               // 02ae cmp cx, 0xb
  if (!R.zf) goto L_02be;                                      // 02b1 jne 0x2be
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x17)));         // 02b3 mov cl, byte ptr es:[bx + 0x17]
  PUSH(0x02ba); a_sb15_06c9();                                 // 02b7 call 0x6c9
  ASM_COST(4); R.si = POP();                                   // 02ba pop si
  R.di = POP();                                                // 02bb pop di
  R.bp = POP();                                                // 02bc pop bp
  R.sp += 4; goto L_ret;                                       // 02bd retf
L_02be:   ASM_COST(2); SUB16(R.cx, 0xc);                               // 02be cmp cx, 0xc
  if (!R.zf) goto L_02ce;                                      // 02c1 jne 0x2ce
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x18)));         // 02c3 mov cl, byte ptr es:[bx + 0x18]
  PUSH(0x02ca); a_sb15_06c9();                                 // 02c7 call 0x6c9
  ASM_COST(4); R.si = POP();                                   // 02ca pop si
  R.di = POP();                                                // 02cb pop di
  R.bp = POP();                                                // 02cc pop bp
  R.sp += 4; goto L_ret;                                       // 02cd retf
L_02ce:   ASM_COST(4); R.si = POP();                                   // 02ce pop si
  R.di = POP();                                                // 02cf pop di
  R.bp = POP();                                                // 02d0 pop bp
  R.sp += 4; goto L_ret;                                       // 02d1 retf
L_ret:
  return;
}

static u16 f_sb15_0015(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0015();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0018 FUN_1000_0018  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0018(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_04c6;                                    // 0018 jmp 0x4c6
L_04c6:   ASM_COST(2); R.ax = (u16)(0xffff);                           // 04c6 mov ax, 0xffff
  R.sp += 4; goto L_ret;                                       // 04c9 retf
L_ret:
  return;
}

static u16 f_sb15_0018(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0018();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:001B FUN_1000_001b  FIX: recompiled from the machine code (asm2c)
static void a_sb15_001b(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_04c6;                                    // 001b jmp 0x4c6
L_04c6:   ASM_COST(2); R.ax = (u16)(0xffff);                           // 04c6 mov ax, 0xffff
  R.sp += 4; goto L_ret;                                       // 04c9 retf
L_ret:
  return;
}

static u16 f_sb15_001b(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_001b();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:001E FUN_1000_001e  FIX: recompiled from the machine code (asm2c)
static void a_sb15_001e(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_00e5;                                    // 001e jmp 0xe5
L_00e5:   ASM_COST(5); PUSH(R.bp);                                     // 00e5 push bp
  R.bp = (u16)(R.sp);                                          // 00e6 mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 00e8 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 00eb cmp ax, 0
  if (!R.zf) goto L_00f5;                                      // 00ee jne 0xf5
  ASM_COST(1); PUSH(0x00f3); a_sb15_0dff();                    // 00f0 call 0xdff
  ASM_COST(2); R.bp = POP();                                   // 00f3 pop bp
  R.sp += 4; goto L_ret;                                       // 00f4 retf
L_00f5:   ASM_COST(2); SUB16(R.ax, 0xa);                               // 00f5 cmp ax, 0xa
  if (!R.zf) goto L_00ff;                                      // 00f8 jne 0xff
  ASM_COST(1); PUSH(0x00fd); a_sb15_0e7e();                    // 00fa call 0xe7e
  ASM_COST(2); R.bp = POP();                                   // 00fd pop bp
  R.sp += 4; goto L_ret;                                       // 00fe retf
L_00ff:   ASM_COST(2); R.ax = (u16)(DEC16(R.ax));                      // 00ff dec ax
  PUSH(0x0103); a_sb15_0526();                                 // 0100 call 0x526
  ASM_COST(2); R.bp = POP();                                   // 0103 pop bp
  R.sp += 4; goto L_ret;                                       // 0104 retf
L_ret:
  return;
}

static u16 f_sb15_001e(u16 p0)
{
  ASM_ENTER();
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_001e();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0021 FUN_1000_0021  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0021(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_0052;                                    // 0021 jmp 0x52
L_0052:   ASM_COST(7); PUSH(R.bp);                                     // 0052 push bp
  R.bp = (u16)(R.sp);                                          // 0053 mov bp, sp
  PUSH(R.di);                                                  // 0055 push di
  PUSH(R.si);                                                  // 0056 push si
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0057 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 005a cmp ax, 0
  if (!R.zf) goto L_0063;                                      // 005d jne 0x63
  ASM_COST(4); R.si = POP();                                   // 005f pop si
  R.di = POP();                                                // 0060 pop di
  R.bp = POP();                                                // 0061 pop bp
  R.sp += 4; goto L_ret;                                       // 0062 retf
L_0063:   ASM_COST(2); SUB16(R.ax, 0xa);                               // 0063 cmp ax, 0xa
  if (!R.zf) goto L_006c;                                      // 0066 jne 0x6c
  ASM_COST(4); R.si = POP();                                   // 0068 pop si
  R.di = POP();                                                // 0069 pop di
  R.bp = POP();                                                // 006a pop bp
  R.sp += 4; goto L_ret;                                       // 006b retf
L_006c:   ASM_COST(11); R.ax = (u16)(DEC16(R.ax));                     // 006c dec ax
  R.si = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 006d mov si, word ptr [bp + 0xa]
  { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0070 les bx, ptr [bp + 0xc]
  PUSH(R.ax);                                                  // 0073 push ax
  SETH(R.ax, (u8)R.ax);                                        // 0074 mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xc0));                     // 0076 add ah, 0xc0
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x45)));                      // 0079 mov al, byte ptr es:[bx + 0x45]
  SETL(R.cx, 0x1);                                             // 007d mov cl, 1
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 007f shl al, cl
  SETL(R.ax, OR8((u8)R.ax, M8(ES, (u16)(R.bx + 0x44))));       // 0081 or al, byte ptr es:[bx + 0x44]
  PUSH(0x0088); a_sb15_07cb();                                 // 0085 call 0x7cb
  ASM_COST(8); R.ax = POP();                                   // 0088 pop ax
  PUSH(R.ax);                                                  // 0089 push ax
  PUSH(R.bx);                                                  // 008a push bx
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 008b shl ax, 1
  R.di = (u16)(R.ax);                                          // 008d mov di, ax
  SETH(R.ax, M8(CS, (u16)(R.di + 0x85e)));                     // 008f mov ah, byte ptr cs:[di + 0x85e]
  R.bx = (u16)(ADD16(R.bx, 0x46));                             // 0094 add bx, 0x46
  PUSH(0x009a); a_sb15_0583();                                 // 0097 call 0x583
  ASM_COST(10); R.bx = POP();                                  // 009a pop bx
  R.ax = POP();                                                // 009b pop ax
  PUSH(R.ax);                                                  // 009c push ax
  PUSH(R.bx);                                                  // 009d push bx
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 009e shl ax, 1
  R.ax = (u16)(INC16(R.ax));                                   // 00a0 inc ax
  R.di = (u16)(R.ax);                                          // 00a1 mov di, ax
  SETH(R.ax, M8(CS, (u16)(R.di + 0x85e)));                     // 00a3 mov ah, byte ptr cs:[di + 0x85e]
  R.bx = (u16)(ADD16(R.bx, 0x52));                             // 00a8 add bx, 0x52
  PUSH(0x00ae); a_sb15_0583();                                 // 00ab call 0x583
  ASM_COST(7); R.bx = POP();                                   // 00ae pop bx
  R.ax = POP();                                                // 00af pop ax
  R.cx = (u16)(XOR16(R.cx, R.cx));                             // 00b0 xor cx, cx
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 00b2 xor dx, dx
  SETL(R.dx, M8(DS, (u16)(R.si + 0x29)));                      // 00b4 mov dl, byte ptr [si + 0x29]
  SUB16(R.dx, 0x0);                                            // 00b7 cmp dx, 0
  if (R.zf) goto L_00c3;                                       // 00ba je 0xc3
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x16)));         // 00bc mov cl, byte ptr es:[bx + 0x16]
  PUSH(0x00c3); a_sb15_06c9();                                 // 00c0 call 0x6c9
L_00c3:   ASM_COST(3); SETL(R.dx, M8(DS, (u16)(R.si + 0x2b)));         // 00c3 mov dl, byte ptr [si + 0x2b]
  SUB16(R.dx, 0x0);                                            // 00c6 cmp dx, 0
  if (R.zf) goto L_00d2;                                       // 00c9 je 0xd2
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x17)));         // 00cb mov cl, byte ptr es:[bx + 0x17]
  PUSH(0x00d2); a_sb15_06c9();                                 // 00cf call 0x6c9
L_00d2:   ASM_COST(3); SETL(R.dx, M8(DS, (u16)(R.si + 0x2c)));         // 00d2 mov dl, byte ptr [si + 0x2c]
  SUB16(R.dx, 0x0);                                            // 00d5 cmp dx, 0
  if (R.zf) goto L_00e1;                                       // 00d8 je 0xe1
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x18)));         // 00da mov cl, byte ptr es:[bx + 0x18]
  PUSH(0x00e1); a_sb15_06c9();                                 // 00de call 0x6c9
L_00e1:   ASM_COST(4); R.si = POP();                                   // 00e1 pop si
  R.di = POP();                                                // 00e2 pop di
  R.bp = POP();                                                // 00e3 pop bp
  R.sp += 4; goto L_ret;                                       // 00e4 retf
L_ret:
  return;
}

static u16 f_sb15_0021(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0021();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0024 FUN_1000_0024  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0024(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_0475;                                    // 0024 jmp 0x475
L_0475:   ASM_COST(5); PUSH(R.bp);                                     // 0475 push bp
  R.bp = (u16)(R.sp);                                          // 0476 mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0478 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 047b cmp ax, 0
  if (!R.zf) goto L_0482;                                      // 047e jne 0x482
  ASM_COST(2); R.bp = POP();                                   // 0480 pop bp
  R.sp += 4; goto L_ret;                                       // 0481 retf
L_0482:   ASM_COST(2); SUB16(R.ax, 0xa);                               // 0482 cmp ax, 0xa
  if (!R.zf) goto L_0489;                                      // 0485 jne 0x489
  ASM_COST(2); R.bp = POP();                                   // 0487 pop bp
  R.sp += 4; goto L_ret;                                       // 0488 retf
L_0489:   ASM_COST(3); R.ax = (u16)(0x0);                              // 0489 mov ax, 0
  R.dx = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 048c mov dx, word ptr [bp + 0xa]
  R.cx = (u16)(0x0);                                           // 048f mov cx, 0
L_0492:   ASM_COST(2); SUB16(R.dx, 0x185);                             // 0492 cmp dx, 0x185
  if (R.cf || R.zf) goto L_049f;                               // 0496 jbe 0x49f
  ASM_COST(4); R.dx = (u16)(SHR16(R.dx, 0x1));                 // 0498 shr dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 049a rcr ax, 1
  R.cx = (u16)(INC16(R.cx));                                   // 049c inc cx
  ASM_BACK(); goto L_0492;                                     // 049d jmp 0x492
L_049f:   ASM_COST(1); if (R.cf) goto L_04ad;                          // 049f jb 0x4ad
  ASM_COST(2); SUB16(R.ax, 0xdcb0);                            // 04a1 cmp ax, 0xdcb0
  if (R.cf || R.zf) goto L_04ad;                               // 04a4 jbe 0x4ad
  ASM_COST(4); R.dx = (u16)(SHR16(R.dx, 0x1));                 // 04a6 shr dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 04a8 rcr ax, 1
  R.cx = (u16)(INC16(R.cx));                                   // 04aa inc cx
  ASM_BACK(); goto L_049f;                                     // 04ab jmp 0x49f
L_04ad:   ASM_COST(11); R.bx = (u16)(R.cx);                            // 04ad mov bx, cx
  R.cx = (u16)(0xc350);                                        // 04af mov cx, 0xc350
  DIV16(R.cx, 0x04b2);                                         // 04b2 div cx
  R.cx = (u16)(0x2);                                           // 04b4 mov cx, 2
  SETL(R.bx, SHL8((u8)R.bx, (u8)R.cx));                        // 04b7 shl bl, cl
  SETH(R.ax, OR8((u8)(R.ax >> 8), (u8)R.bx));                  // 04b9 or ah, bl
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 04bb mov bx, word ptr [bp + 8]
  W16(DS, (u16)(R.bx + 0x4), R.ax);                            // 04be mov word ptr [bx + 4], ax
  W16(DS, (u16)(R.bx + 0x6), R.ax);                            // 04c1 mov word ptr [bx + 6], ax
  R.bp = POP();                                                // 04c4 pop bp
  R.sp += 4; goto L_ret;                                       // 04c5 retf
L_ret:
  return;
}

static u16 f_sb15_0024(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0024();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0027 FUN_1000_0027  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0027(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_02d2;                                    // 0027 jmp 0x2d2
L_02d2:   ASM_COST(7); PUSH(R.bp);                                     // 02d2 push bp
  R.bp = (u16)(R.sp);                                          // 02d3 mov bp, sp
  PUSH(R.di);                                                  // 02d5 push di
  PUSH(R.si);                                                  // 02d6 push si
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 02d7 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 02da cmp ax, 0
  if (!R.zf) goto L_02e3;                                      // 02dd jne 0x2e3
  ASM_COST(4); R.si = POP();                                   // 02df pop si
  R.di = POP();                                                // 02e0 pop di
  R.bp = POP();                                                // 02e1 pop bp
  R.sp += 4; goto L_ret;                                       // 02e2 retf
L_02e3:   ASM_COST(2); SUB16(R.ax, 0xa);                               // 02e3 cmp ax, 0xa
  if (!R.zf) goto L_02ec;                                      // 02e6 jne 0x2ec
  ASM_COST(4); R.si = POP();                                   // 02e8 pop si
  R.di = POP();                                                // 02e9 pop di
  R.bp = POP();                                                // 02ea pop bp
  R.sp += 4; goto L_ret;                                       // 02eb retf
L_02ec:   ASM_COST(6); R.ax = (u16)(DEC16(R.ax));                      // 02ec dec ax
  R.di = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 02ed mov di, word ptr [bp + 8]
  R.si = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 02f0 mov si, word ptr [bp + 0xa]
  { u16 a_ = (u16)(R.di + 0x10); R.bx = (u16)(M16(DS, a_)); R.es = M16(DS, (u16)(a_ + 2)); } // 02f3 les bx, ptr [di + 0x10]
  SUB8(M8(DS, (u16)(R.di + 0x1)), 0x0);                        // 02f6 cmp byte ptr [di + 1], 0
  if (!R.zf) goto L_0300;                                      // 02fa jne 0x300
  ASM_COST(4); R.si = POP();                                   // 02fc pop si
  R.di = POP();                                                // 02fd pop di
  R.bp = POP();                                                // 02fe pop bp
  R.sp += 4; goto L_ret;                                       // 02ff retf
L_0300:   ASM_COST(3); R.dx = (u16)(M16(DS, (u16)(R.di + 0x4)));       // 0300 mov dx, word ptr [di + 4]
  SUB8(M8(ES, (u16)(R.bx + 0x35)), 0x91);                      // 0303 cmp byte ptr es:[bx + 0x35], 0x91
  if (!R.zf) goto L_0319;                                      // 0308 jne 0x319
  ASM_COST(5); PUSH(R.ax);                                     // 030a push ax
  SETL(R.ax, M8(DS, (u16)(R.di + 0x3)));                       // 030b mov al, byte ptr [di + 3]
  SETL(R.ax, ADD8((u8)R.ax, M8(DS, (u16)(R.di + 0x22))));      // 030e add al, byte ptr [di + 0x22]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 0311 xor ah, ah
  PUSH(0x0316); a_sb15_06f7();                                 // 0313 call 0x6f7
  ASM_COST(2); R.dx = (u16)(R.ax);                             // 0316 mov dx, ax
  R.ax = POP();                                                // 0318 pop ax
L_0319:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x28)), 0x90);         // 0319 cmp byte ptr es:[bx + 0x28], 0x90
  if (!R.zf) goto L_0323;                                      // 031e jne 0x323
  ASM_COST(1); R.dx = (u16)(ADD16(R.dx, M16(DS, (u16)(R.di + 0x1c)))); // 0320 add dx, word ptr [di + 0x1c]
L_0323:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x90);         // 0323 cmp byte ptr es:[bx + 0x19], 0x90
  if (!R.zf) goto L_032d;                                      // 0328 jne 0x32d
  ASM_COST(1); R.dx = (u16)(ADD16(R.dx, M16(DS, (u16)(R.di + 0x14)))); // 032a add dx, word ptr [di + 0x14]
L_032d:   ASM_COST(3); R.cx = (u16)(M16(DS, (u16)(R.si + 0x26)));      // 032d mov cx, word ptr [si + 0x26]
  SUB16(R.cx, 0x0);                                            // 0330 cmp cx, 0
  if (R.zf || R.sf != R.of) goto L_0356;                       // 0333 jle 0x356
  ASM_COST(4); PUSH(R.ax);                                     // 0335 push ax
  SETL(R.ax, M8(DS, (u16)(R.di + 0x3)));                       // 0336 mov al, byte ptr [di + 3]
  SETH(R.ax, M8(ES, (u16)(R.bx + 0x12)));                      // 0339 mov ah, byte ptr es:[bx + 0x12]
  PUSH(0x0340); a_sb15_06f7();                                 // 033d call 0x6f7
  ASM_COST(4); R.ax = (u16)(SUB16(R.ax, R.dx));                // 0340 sub ax, dx
  PUSH(R.dx);                                                  // 0342 push dx
  IMUL16(R.cx);                                                // 0343 imul cx
  R.cx = (u16)(0x5);                                           // 0345 mov cx, 5
L_0348:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 0348 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 034a rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_0348; }                // 034c loop 0x348
  ASM_COST(5); SETL(R.ax, (u8)(R.ax >> 8));                    // 034e mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 0350 mov ah, dl
  R.dx = POP();                                                // 0352 pop dx
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 0353 add dx, ax
  R.ax = POP();                                                // 0355 pop ax
L_0356:   ASM_COST(2); SUB16(R.cx, 0x0);                               // 0356 cmp cx, 0
  if (R.sf == R.of) goto L_0382;                               // 0359 jge 0x382
  ASM_COST(6); R.cx = (u16)(NEG16(R.cx));                      // 035b neg cx
  PUSH(R.ax);                                                  // 035d push ax
  SETL(R.ax, M8(DS, (u16)(R.di + 0x3)));                       // 035e mov al, byte ptr [di + 3]
  SETH(R.ax, M8(ES, (u16)(R.bx + 0x12)));                      // 0361 mov ah, byte ptr es:[bx + 0x12]
  SETH(R.ax, NEG8((u8)(R.ax >> 8)));                           // 0365 neg ah
  PUSH(0x036a); a_sb15_06f7();                                 // 0367 call 0x6f7
  ASM_COST(5); R.ax = (u16)(SUB16(R.ax, R.dx));                // 036a sub ax, dx
  R.ax = (u16)(NEG16(R.ax));                                   // 036c neg ax
  PUSH(R.dx);                                                  // 036e push dx
  IMUL16(R.cx);                                                // 036f imul cx
  R.cx = (u16)(0x5);                                           // 0371 mov cx, 5
L_0374:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 0374 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0376 rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_0374; }                // 0378 loop 0x374
  ASM_COST(5); SETL(R.ax, (u8)(R.ax >> 8));                    // 037a mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 037c mov ah, dl
  R.dx = POP();                                                // 037e pop dx
  R.dx = (u16)(SUB16(R.dx, R.ax));                             // 037f sub dx, ax
  R.ax = POP();                                                // 0381 pop ax
L_0382:   ASM_COST(11); PUSH(R.ax);                                    // 0382 push ax
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x11)));                      // 0383 mov al, byte ptr es:[bx + 0x11]
  R.ax = (u16)(i16)(i8)R.ax;                                   // 0387 cwde
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 0388 add dx, ax
  W16(DS, (u16)(R.di + 0x6), R.dx);                            // 038a mov word ptr [di + 6], dx
  R.ax = POP();                                                // 038d pop ax
  PUSH(R.ax);                                                  // 038e push ax
  SETH(R.ax, (u8)R.ax);                                        // 038f mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xa0));                     // 0391 add ah, 0xa0
  SETL(R.ax, (u8)R.dx);                                        // 0394 mov al, dl
  PUSH(0x0399); a_sb15_07cb();                                 // 0396 call 0x7cb
  ASM_COST(10); R.ax = POP();                                  // 0399 pop ax
  PUSH(R.ax);                                                  // 039a push ax
  SETH(R.ax, (u8)R.ax);                                        // 039b mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xb0));                     // 039d add ah, 0xb0
  SETL(R.ax, 0x2);                                             // 03a0 mov al, 2
  SETL(R.ax, SUB8((u8)R.ax, M8(DS, (u16)(R.di + 0x1))));       // 03a2 sub al, byte ptr [di + 1]
  SETL(R.cx, 0x5);                                             // 03a5 mov cl, 5
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 03a7 shl al, cl
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 03a9 or al, dh
  PUSH(0x03ae); a_sb15_07cb();                                 // 03ab call 0x7cb
  ASM_COST(6); R.ax = POP();                                   // 03ae pop ax
  R.cx = (u16)(XOR16(R.cx, R.cx));                             // 03af xor cx, cx
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 03b1 xor dx, dx
  SETL(R.cx, M8(ES, (u16)(R.bx + 0x35)));                      // 03b3 mov cl, byte ptr es:[bx + 0x35]
  SETL(R.dx, M8(DS, (u16)(R.di + 0x22)));                      // 03b7 mov dl, byte ptr [di + 0x22]
  PUSH(0x03bd); a_sb15_06c9();                                 // 03ba call 0x6c9
  ASM_COST(3); SETL(R.cx, M8(ES, (u16)(R.bx + 0x28)));         // 03bd mov cl, byte ptr es:[bx + 0x28]
  R.dx = (u16)(M16(DS, (u16)(R.di + 0x1c)));                   // 03c1 mov dx, word ptr [di + 0x1c]
  PUSH(0x03c7); a_sb15_06c9();                                 // 03c4 call 0x6c9
  ASM_COST(3); SETL(R.cx, M8(ES, (u16)(R.bx + 0x19)));         // 03c7 mov cl, byte ptr es:[bx + 0x19]
  R.dx = (u16)(M16(DS, (u16)(R.di + 0x14)));                   // 03cb mov dx, word ptr [di + 0x14]
  PUSH(0x03d1); a_sb15_06c9();                                 // 03ce call 0x6c9
  ASM_COST(4); R.si = POP();                                   // 03d1 pop si
  R.di = POP();                                                // 03d2 pop di
  R.bp = POP();                                                // 03d3 pop bp
  R.sp += 4; goto L_ret;                                       // 03d4 retf
L_ret:
  return;
}

static u16 f_sb15_0027(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0027();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:002A FUN_1000_002a  FIX: recompiled from the machine code (asm2c)
static void a_sb15_002a(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_0467;                                    // 002a jmp 0x467
L_0467:   ASM_COST(7); PUSH(R.bp);                                     // 0467 push bp
  R.bp = (u16)(R.sp);                                          // 0468 mov bp, sp
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 046a mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 046d mov ax, word ptr [bp + 0xa]
  W16(DS, (u16)(R.bx + 0x4), R.ax);                            // 0470 mov word ptr [bx + 4], ax
  R.bp = POP();                                                // 0473 pop bp
  R.sp += 4; goto L_ret;                                       // 0474 retf
L_ret:
  return;
}

static u16 f_sb15_002a(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_002a();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:002D FUN_1000_002d  FIX: recompiled from the machine code (asm2c)
static void a_sb15_002d(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_0407;                                    // 002d jmp 0x407
L_0407:   ASM_COST(5); PUSH(R.bp);                                     // 0407 push bp
  R.bp = (u16)(R.sp);                                          // 0408 mov bp, sp
  SETL(R.ax, M8(SS, (u16)(R.bp + 0x8)));                       // 040a mov al, byte ptr [bp + 8]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 040d xor ah, ah
  PUSH(0x0412); a_sb15_06f7();                                 // 040f call 0x6f7
  ASM_COST(4); R.dx = (u16)(R.ax);                             // 0412 mov dx, ax
  R.cx = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 0414 mov cx, word ptr [bp + 0xa]
  SUB16(R.cx, 0x0);                                            // 0417 cmp cx, 0
  if (R.zf || R.sf != R.of) goto L_043a;                       // 041a jle 0x43a
  ASM_COST(3); SETL(R.ax, M8(SS, (u16)(R.bp + 0x8)));          // 041c mov al, byte ptr [bp + 8]
  SETH(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 041f mov ah, byte ptr [bp + 0xc]
  PUSH(0x0425); a_sb15_06f7();                                 // 0422 call 0x6f7
  ASM_COST(4); R.ax = (u16)(SUB16(R.ax, R.dx));                // 0425 sub ax, dx
  PUSH(R.dx);                                                  // 0427 push dx
  IMUL16(R.cx);                                                // 0428 imul cx
  R.cx = (u16)(0x5);                                           // 042a mov cx, 5
L_042d:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 042d sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 042f rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_042d; }                // 0431 loop 0x42d
  ASM_COST(4); SETL(R.ax, (u8)(R.ax >> 8));                    // 0433 mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 0435 mov ah, dl
  R.dx = POP();                                                // 0437 pop dx
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 0438 add dx, ax
L_043a:   ASM_COST(2); SUB16(R.cx, 0x0);                               // 043a cmp cx, 0
  if (R.sf == R.of) goto L_0463;                               // 043d jge 0x463
  ASM_COST(5); R.cx = (u16)(NEG16(R.cx));                      // 043f neg cx
  SETL(R.ax, M8(SS, (u16)(R.bp + 0x8)));                       // 0441 mov al, byte ptr [bp + 8]
  SETH(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 0444 mov ah, byte ptr [bp + 0xc]
  SETH(R.ax, NEG8((u8)(R.ax >> 8)));                           // 0447 neg ah
  PUSH(0x044c); a_sb15_06f7();                                 // 0449 call 0x6f7
  ASM_COST(5); R.ax = (u16)(SUB16(R.ax, R.dx));                // 044c sub ax, dx
  R.ax = (u16)(NEG16(R.ax));                                   // 044e neg ax
  PUSH(R.dx);                                                  // 0450 push dx
  IMUL16(R.cx);                                                // 0451 imul cx
  R.cx = (u16)(0x5);                                           // 0453 mov cx, 5
L_0456:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 0456 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0458 rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_0456; }                // 045a loop 0x456
  ASM_COST(4); SETL(R.ax, (u8)(R.ax >> 8));                    // 045c mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 045e mov ah, dl
  R.dx = POP();                                                // 0460 pop dx
  R.dx = (u16)(SUB16(R.dx, R.ax));                             // 0461 sub dx, ax
L_0463:   ASM_COST(3); R.ax = (u16)(R.dx);                             // 0463 mov ax, dx
  R.bp = POP();                                                // 0465 pop bp
  R.sp += 4; goto L_ret;                                       // 0466 retf
L_ret:
  return;
}

static u16 f_sb15_002d(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_002d();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0030 FUN_1000_0030  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0030(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_04c6;                                    // 0030 jmp 0x4c6
L_04c6:   ASM_COST(2); R.ax = (u16)(0xffff);                           // 04c6 mov ax, 0xffff
  R.sp += 4; goto L_ret;                                       // 04c9 retf
L_ret:
  return;
}

static u16 f_sb15_0030(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0030();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0033 FUN_1000_0033  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0033(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_102c;                                    // 0033 jmp 0x102c
L_102c:   ASM_COST(6); PUSH(R.bp);                                     // 102c push bp
  R.bp = (u16)(R.sp);                                          // 102d mov bp, sp
  PUSH(R.si);                                                  // 102f push si
  PUSH(R.di);                                                  // 1030 push di
  SUB16(M16(SS, (u16)(R.bp + 0x6)), 0xa);                      // 1031 cmp word ptr [bp + 6], 0xa
  if (R.zf) goto L_1064;                                       // 1035 je 0x1064
  ASM_COST(2); SUB16(M16(SS, (u16)(R.bp + 0x6)), 0x0);         // 1037 cmp word ptr [bp + 6], 0
  if (!R.zf) goto L_1060;                                      // 103b jne 0x1060
  ASM_COST(1); PUSH(0x1040); a_sb15_0dff();                    // 103d call 0xdff
  ASM_COST(12); { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 1040 les bx, ptr [bp + 8]
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x4)));                       // 1043 mov al, byte ptr es:[bx + 4]
  R.ax = (u16)(AND16(R.ax, 0xf));                              // 1047 and ax, 0xf
  R.si = (u16)(R.ax);                                          // 104a mov si, ax
  PUSH(R.ds);                                                  // 104c push ds
  { u16 a_ = (u16)(R.bx + 0x8); R.ax = (u16)(M16(ES, a_)); R.ds = M16(ES, (u16)(a_ + 2)); } // 104d lds ax, ptr es:[bx + 8]
  R.dx = (u16)(R.ds);                                          // 1051 mov dx, ds
  R.ds = POP();                                                // 1053 pop ds
  R.di = (u16)((u16)(R.bx + 0x32));                            // 1054 lea di, [bx + 0x32]
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0xe)));                    // 1057 mov bx, word ptr [bp + 0xe]
  R.cx = (u16)(M16(SS, (u16)(R.bp + 0xc)));                    // 105a mov cx, word ptr [bp + 0xc]
  PUSH(0x1060); a_sb15_0c4c();                                 // 105d call 0xc4c
L_1060:   ASM_COST(4); R.di = POP();                                   // 1060 pop di
  R.si = POP();                                                // 1061 pop si
  R.bp = POP();                                                // 1062 pop bp
  R.sp += 4; goto L_ret;                                       // 1063 retf
L_1064:   ASM_COST(4); PUSH(R.ds);                                     // 1064 push ds
  PUSH(R.cs);                                                  // 1065 push cs
  R.ds = POP();                                                // 1066 pop ds
  PUSH(0x106a); a_sb15_0e7e();                                 // 1067 call 0xe7e
  ASM_COST(10);                                                // 106a cli
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 106b xor ax, ax
  W16(DS, (u16)(0x1206), R.ax);                                // 106d mov word ptr [0x1206], ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xe)));                    // 1070 mov ax, word ptr [bp + 0xe]
  W8(DS, (u16)(0x11f6), (u8)R.ax);                             // 1073 mov byte ptr [0x11f6], al
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 1076 les bx, ptr [bp + 8]
  R.ax = (u16)((u16)(R.bx + 0x32));                            // 1079 lea ax, [bx + 0x32]
  R.cx = (u16)(R.ax);                                          // 107c mov cx, ax
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 107e cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_109a;                                      // 1083 jne 0x109a
  ASM_COST(11); PUSH(R.ax);                                    // 1085 push ax
  PUSH(R.bx);                                                  // 1086 push bx
  R.bx = (u16)(R.ax);                                          // 1087 mov bx, ax
  SETL(R.ax, M8(ES, (u16)(R.bx)));                             // 1089 mov al, byte ptr es:[bx]
  W8(DS, (u16)(0x1219), (u8)R.ax);                             // 108c mov byte ptr [0x1219], al
  W8(DS, (u16)(0x121a), (u8)R.ax);                             // 108f mov byte ptr [0x121a], al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 1092 xor al, al
  W8(DS, (u16)(0x1218), (u8)R.ax);                             // 1094 mov byte ptr [0x1218], al
  R.bx = POP();                                                // 1097 pop bx
  R.ax = POP();                                                // 1098 pop ax
  R.cx = (u16)(INC16(R.cx));                                   // 1099 inc cx
L_109a:   ASM_COST(7); W16(DS, (u16)(0x11ea), R.ax);                   // 109a mov word ptr [0x11ea], ax
  W16(DS, (u16)(0x11ec), R.es);                                // 109d mov word ptr [0x11ec], es
  W16(DS, (u16)(0x11ee), R.cx);                                // 10a1 mov word ptr [0x11ee], cx
  W16(DS, (u16)(0x11f0), R.es);                                // 10a5 mov word ptr [0x11f0], es
  { u16 a_ = (u16)(R.bx + 0x8); R.cx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 10a9 les cx, ptr es:[bx + 8]
  SUB16(R.cx, 0x0);                                            // 10ad cmp cx, 0
  if (!R.zf) goto L_10be;                                      // 10b0 jne 0x10be
  ASM_COST(8); R.ax = (u16)(0x1);                              // 10b2 mov ax, 1
  W16(DS, (u16)(0x1206), R.ax);                                // 10b5 mov word ptr [0x1206], ax
  // 10b8 sti 
  R.ds = POP();                                                // 10b9 pop ds
  R.di = POP();                                                // 10ba pop di
  R.si = POP();                                                // 10bb pop si
  R.bp = POP();                                                // 10bc pop bp
  R.sp += 4; goto L_ret;                                       // 10bd retf
L_10be:   ASM_COST(15); R.cx = (u16)(ADD16(R.cx, R.ax));               // 10be add cx, ax
  R.cx = (u16)(DEC16(R.cx));                                   // 10c0 dec cx
  W16(CS, (u16)(0x11f2), R.cx);                                // 10c1 mov word ptr cs:[0x11f2], cx
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 10c6 xor ax, ax
  R.es = (u16)(R.ax);                                          // 10c8 mov es, ax
  R.ax = (u16)(M16(ES, (u16)(0x20)));                          // 10ca mov ax, word ptr es:[0x20]
  R.dx = (u16)(M16(ES, (u16)(0x22)));                          // 10ce mov dx, word ptr es:[0x22]
  W16(DS, (u16)(0x11fa), R.ax);                                // 10d3 mov word ptr [0x11fa], ax
  W16(DS, (u16)(0x11fc), R.dx);                                // 10d6 mov word ptr [0x11fc], dx
  PUSH(R.es);                                                  // 10da push es
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 10db les bx, ptr [bp + 8]
  R.ax = (u16)(0xe9d);                                         // 10de mov ax, 0xe9d
  R.dx = (u16)(R.cs);                                          // 10e1 mov dx, cs
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 10e3 cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_10ef;                                      // 10e8 jne 0x10ef
  ASM_COST(2); R.ax = (u16)(0xf48);                            // 10ea mov ax, 0xf48
  R.dx = (u16)(R.cs);                                          // 10ed mov dx, cs
L_10ef:   ASM_COST(5); R.es = POP();                                   // 10ef pop es
  W16(ES, (u16)(0x20), R.ax);                                  // 10f0 mov word ptr es:[0x20], ax
  W16(ES, (u16)(0x22), R.dx);                                  // 10f4 mov word ptr es:[0x22], dx
  R.ax = (u16)(0x120);                                         // 10f9 mov ax, 0x120
  PUSH(0x10ff); a_sb15_07cb();                                 // 10fc call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x2021);                           // 10ff mov ax, 0x2021
  PUSH(0x1105); a_sb15_07cb();                                 // 1102 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x60f0);                           // 1105 mov ax, 0x60f0
  PUSH(0x110b); a_sb15_07cb();                                 // 1108 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x80f0);                           // 110b mov ax, 0x80f0
  PUSH(0x1111); a_sb15_07cb();                                 // 110e call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xc001);                           // 1111 mov ax, 0xc001
  PUSH(0x1117); a_sb15_07cb();                                 // 1114 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xe000);                           // 1117 mov ax, 0xe000
  PUSH(0x111d); a_sb15_07cb();                                 // 111a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 111d mov ax, 0x433f
  PUSH(0x1123); a_sb15_07cb();                                 // 1120 call 0x7cb
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 1123 mov ax, 0xb001
  // 1126 cli 
  R.ax = (u16)(0xa08f);                                        // 1127 mov ax, 0xa08f
  PUSH(0x112d); a_sb15_07cb();                                 // 112a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 112d mov ax, 0xb02e
  PUSH(0x1133); a_sb15_07cb();                                 // 1130 call 0x7cb
  ASM_COST(5); SETL(R.ax, 0x36);                               // 1133 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 1135 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 1137 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1139 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 113b out 0x40, al
L_113d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 113d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 113f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1141 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 1143 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1145 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 1147 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 1149 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_113d; }      // 114d jg 0x113d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 114f mov ax, 0xb020
  PUSH(0x1155); a_sb15_07cb();                                 // 1152 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 1155 mov ax, 0xa000
  PUSH(0x115b); a_sb15_07cb();                                 // 1158 call 0x7cb
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 115b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 115e cmp bx, 0x64
  if (!R.cf) goto L_1168;                                      // 1161 jae 0x1168
  ASM_COST(2); R.bx = (u16)(0x64);                             // 1163 mov bx, 0x64
  goto L_1171;                                                 // 1166 jmp 0x1171
L_1168:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 1168 cmp bx, 0x4e20
  if (R.cf) goto L_1171;                                       // 116c jb 0x1171
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 116e mov bx, 0x4e20
L_1171:   ASM_COST(22); R.dx = (u16)(0x12);                            // 1171 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 1174 mov ax, 0x34dc
  DIV16(R.bx, 0x1177);                                         // 1177 div bx
  R.bx = (u16)(R.ax);                                          // 1179 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x11fe)));                        // 117b mov ax, word ptr [0x11fe]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 117e xor dx, dx
  DIV16(R.bx, 0x1180);                                         // 1180 div bx
  W16(DS, (u16)(0x1200), R.ax);                                // 1182 mov word ptr [0x1200], ax
  W16(DS, (u16)(0x1202), R.ax);                                // 1185 mov word ptr [0x1202], ax
  W16(DS, (u16)(0x11f4), R.bx);                                // 1188 mov word ptr [0x11f4], bx
  SETL(R.ax, 0x36);                                            // 118c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 118e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 1190 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1192 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 1194 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1196 out 0x40, al
  // 1198 sti 
  R.ds = POP();                                                // 1199 pop ds
  R.di = POP();                                                // 119a pop di
  R.si = POP();                                                // 119b pop si
  R.bp = POP();                                                // 119c pop bp
  R.sp += 4; goto L_ret;                                       // 119d retf
L_ret:
  return;
}

static u16 f_sb15_0033(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4)
{
  ASM_ENTER();
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0033();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0036 FUN_1000_0036  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0036(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_119e;                                    // 0036 jmp 0x119e
L_119e:   ASM_COST(5); PUSH(R.bp);                                     // 119e push bp
  R.bp = (u16)(R.sp);                                          // 119f mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 11a1 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 11a4 cmp ax, 0
  if (!R.zf) goto L_11af;                                      // 11a7 jne 0x11af
  ASM_COST(3); R.ax = (u16)(M16(CS, (u16)(0x11e4)));           // 11a9 mov ax, word ptr cs:[0x11e4]
  R.bp = POP();                                                // 11ad pop bp
  R.sp += 4; goto L_ret;                                       // 11ae retf
L_11af:   ASM_COST(2); SUB16(R.ax, 0xa);                               // 11af cmp ax, 0xa
  if (!R.zf) goto L_11ba;                                      // 11b2 jne 0x11ba
  ASM_COST(3); R.ax = (u16)(M16(CS, (u16)(0x1206)));           // 11b4 mov ax, word ptr cs:[0x1206]
  R.bp = POP();                                                // 11b8 pop bp
  R.sp += 4; goto L_ret;                                       // 11b9 retf
L_11ba:   ASM_COST(2); R.bp = POP();                                   // 11ba pop bp
  R.sp += 4; goto L_ret;                                       // 11bb retf
L_ret:
  return;
}

static u16 f_sb15_0036(u16 p0)
{
  ASM_ENTER();
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0036();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0039 FUN_1000_0039  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0039(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_04c6;                                    // 0039 jmp 0x4c6
L_04c6:   ASM_COST(2); R.ax = (u16)(0xffff);                           // 04c6 mov ax, 0xffff
  R.sp += 4; goto L_ret;                                       // 04c9 retf
L_ret:
  return;
}

static u16 f_sb15_0039(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0039();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:003C FUN_1000_003c  FIX: recompiled from the machine code (asm2c)
static void a_sb15_003c(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_04c6;                                    // 003c jmp 0x4c6
L_04c6:   ASM_COST(2); R.ax = (u16)(0xffff);                           // 04c6 mov ax, 0xffff
  R.sp += 4; goto L_ret;                                       // 04c9 retf
L_ret:
  return;
}

static u16 f_sb15_003c(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_003c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:003F FUN_1000_003f  FIX: recompiled from the machine code (asm2c)
static void a_sb15_003f(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); R.ax = (u16)(0x0);                              // 003f mov ax, 0
L_0042:   ASM_COST(1); PUSH(0x0045); a_sb15_0526();                    // 0042 call 0x526
  ASM_COST(3); R.ax = (u16)(INC16(R.ax));                      // 0045 inc ax
  SUB16(R.ax, 0x9);                                            // 0046 cmp ax, 9
  if (R.cf) { ASM_BACK(); goto L_0042; }                       // 0049 jb 0x42
  ASM_COST(1); PUSH(0x004e); a_sb15_0e7e();                    // 004b call 0xe7e
  ASM_COST(1); PUSH(0x0051); a_sb15_0dff();                    // 004e call 0xdff
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0051 retf
L_ret:
  return;
}

static u16 f_sb15_003f(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_003f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:004E FUN_1000_004e  FIX: recompiled from the machine code (asm2c)
static void a_sb15_004e(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); PUSH(0x0051); a_sb15_0dff();                    // 004e call 0xdff
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0051 retf
L_ret:
  return;
}

static u16 f_sb15_004e(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_004e();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:00C3 FUN_1000_00c3  FIX: recompiled from the machine code (asm2c)
static void a_sb15_00c3(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); SETL(R.dx, M8(DS, (u16)(R.si + 0x2b)));         // 00c3 mov dl, byte ptr [si + 0x2b]
  SUB16(R.dx, 0x0);                                            // 00c6 cmp dx, 0
  if (R.zf) goto L_00d2;                                       // 00c9 je 0xd2
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x17)));         // 00cb mov cl, byte ptr es:[bx + 0x17]
  PUSH(0x00d2); a_sb15_06c9();                                 // 00cf call 0x6c9
L_00d2:   ASM_COST(3); SETL(R.dx, M8(DS, (u16)(R.si + 0x2c)));         // 00d2 mov dl, byte ptr [si + 0x2c]
  SUB16(R.dx, 0x0);                                            // 00d5 cmp dx, 0
  if (R.zf) goto L_00e1;                                       // 00d8 je 0xe1
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x18)));         // 00da mov cl, byte ptr es:[bx + 0x18]
  PUSH(0x00e1); a_sb15_06c9();                                 // 00de call 0x6c9
L_00e1:   ASM_COST(4); R.si = POP();                                   // 00e1 pop si
  R.di = POP();                                                // 00e2 pop di
  R.bp = POP();                                                // 00e3 pop bp
  R.sp += 4; goto L_ret;                                       // 00e4 retf
L_ret:
  return;
}

static u16 f_sb15_00c3(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_00c3();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:00D2 FUN_1000_00d2  FIX: recompiled from the machine code (asm2c)
static void a_sb15_00d2(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); SETL(R.dx, M8(DS, (u16)(R.si + 0x2c)));         // 00d2 mov dl, byte ptr [si + 0x2c]
  SUB16(R.dx, 0x0);                                            // 00d5 cmp dx, 0
  if (R.zf) goto L_00e1;                                       // 00d8 je 0xe1
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x18)));         // 00da mov cl, byte ptr es:[bx + 0x18]
  PUSH(0x00e1); a_sb15_06c9();                                 // 00de call 0x6c9
L_00e1:   ASM_COST(4); R.si = POP();                                   // 00e1 pop si
  R.di = POP();                                                // 00e2 pop di
  R.bp = POP();                                                // 00e3 pop bp
  R.sp += 4; goto L_ret;                                       // 00e4 retf
L_ret:
  return;
}

static u16 f_sb15_00d2(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_00d2();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0120 FUN_1000_0120  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0120(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); SUB8(M8(DS, (u16)(R.bx + 0xa)), 0x0);           // 0120 cmp byte ptr [bx + 0xa], 0
  if (R.zf) goto L_0159;                                       // 0124 je 0x159
  ASM_COST(3); R.ax = (u16)(XOR16(R.ax, R.ax));                // 0126 xor ax, ax
  SUB8(M8(ES, (u16)(R.bx + 0x5)), 0x6);                        // 0128 cmp byte ptr es:[bx + 5], 6
  if (R.zf) goto L_0130;                                       // 012d je 0x130
  ASM_COST(1); R.ax = (u16)(INC16(R.ax));                      // 012f inc ax
L_0130:   ASM_COST(4); PUSH(R.ax);                                     // 0130 push ax
  SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 0131 mov al, byte ptr [bp + 0xc]
  W8(DS, (u16)(R.di + 0x3), (u8)R.ax);                         // 0134 mov byte ptr [di + 3], al
  PUSH(0x013a); a_sb15_071e();                                 // 0137 call 0x71e
  ASM_COST(13); W16(DS, (u16)(R.di + 0x4), R.cx);              // 013a mov word ptr [di + 4], cx
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x11)));                      // 013d mov al, byte ptr es:[bx + 0x11]
  R.ax = (u16)(i16)(i8)R.ax;                                   // 0141 cwde
  R.cx = (u16)(ADD16(R.cx, R.ax));                             // 0142 add cx, ax
  W16(DS, (u16)(R.di + 0x6), R.cx);                            // 0144 mov word ptr [di + 6], cx
  PUSH(R.cx);                                                  // 0147 push cx
  { u16 a_ = (u16)(R.bx + 0x6); R.bx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 0148 les bx, ptr es:[bx + 6]
  PUSH(R.es);                                                  // 014c push es
  PUSH(R.bx);                                                  // 014d push bx
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 014e mov ax, word ptr [bp + 6]
  PUSH(R.ax);                                                  // 0151 push ax
  // 0152 push cs
  PUSH(sb15_seg); PUSH(0x0156); a_sb15_102c();                 // 0153 call 0x102c
  ASM_COST(1); R.sp = (u16)(ADD16(R.sp, 0xa));                 // 0156 add sp, 0xa
L_0159:   ASM_COST(4); R.si = POP();                                   // 0159 pop si
  R.di = POP();                                                // 015a pop di
  R.bp = POP();                                                // 015b pop bp
  R.sp += 4; goto L_ret;                                       // 015c retf
L_ret:
  return;
}

static u16 f_sb15_0120(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0120();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:012C FUN_1000_012c  FIX: recompiled from the machine code (asm2c)
static void a_sb15_012c(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); PUSH(R.es);                                     // 012c push es
  if (R.zf) goto L_0130;                                       // 012d je 0x130
  ASM_COST(1); R.ax = (u16)(INC16(R.ax));                      // 012f inc ax
L_0130:   ASM_COST(4); PUSH(R.ax);                                     // 0130 push ax
  SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 0131 mov al, byte ptr [bp + 0xc]
  W8(DS, (u16)(R.di + 0x3), (u8)R.ax);                         // 0134 mov byte ptr [di + 3], al
  PUSH(0x013a); a_sb15_071e();                                 // 0137 call 0x71e
  ASM_COST(13); W16(DS, (u16)(R.di + 0x4), R.cx);              // 013a mov word ptr [di + 4], cx
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x11)));                      // 013d mov al, byte ptr es:[bx + 0x11]
  R.ax = (u16)(i16)(i8)R.ax;                                   // 0141 cwde
  R.cx = (u16)(ADD16(R.cx, R.ax));                             // 0142 add cx, ax
  W16(DS, (u16)(R.di + 0x6), R.cx);                            // 0144 mov word ptr [di + 6], cx
  PUSH(R.cx);                                                  // 0147 push cx
  { u16 a_ = (u16)(R.bx + 0x6); R.bx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 0148 les bx, ptr es:[bx + 6]
  PUSH(R.es);                                                  // 014c push es
  PUSH(R.bx);                                                  // 014d push bx
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 014e mov ax, word ptr [bp + 6]
  PUSH(R.ax);                                                  // 0151 push ax
  // 0152 push cs
  PUSH(sb15_seg); PUSH(0x0156); a_sb15_102c();                 // 0153 call 0x102c
  ASM_COST(5); R.sp = (u16)(ADD16(R.sp, 0xa));                 // 0156 add sp, 0xa
  R.si = POP();                                                // 0159 pop si
  R.di = POP();                                                // 015a pop di
  R.bp = POP();                                                // 015b pop bp
  R.sp += 4; goto L_ret;                                       // 015c retf
L_ret:
  return;
}

static u16 f_sb15_012c(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_012c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0156 FUN_1000_0156  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0156(void)
{
  R.cs = sb15_seg;
  ASM_COST(5); R.sp = (u16)(ADD16(R.sp, 0xa));                 // 0156 add sp, 0xa
  R.si = POP();                                                // 0159 pop si
  R.di = POP();                                                // 015a pop di
  R.bp = POP();                                                // 015b pop bp
  R.sp += 4; goto L_ret;                                       // 015c retf
L_ret:
  return;
}

static u16 f_sb15_0156(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0156();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:016C FUN_1000_016c  FIX: recompiled from the machine code (asm2c)
static void a_sb15_016c(void)
{
  R.cs = sb15_seg;
  ASM_COST(16); R.dx = (u16)(R.ax);                            // 016c mov dx, ax
  W16(DS, (u16)(R.di + 0x4), R.dx);                            // 016e mov word ptr [di + 4], dx
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x11)));                      // 0171 mov al, byte ptr es:[bx + 0x11]
  R.ax = (u16)(i16)(i8)R.ax;                                   // 0175 cwde
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 0176 add dx, ax
  W16(DS, (u16)(R.di + 0x6), R.dx);                            // 0178 mov word ptr [di + 6], dx
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 017b mov ax, word ptr [bp + 6]
  R.ax = (u16)(DEC16(R.ax));                                   // 017e dec ax
  R.di = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 017f mov di, word ptr [bp + 0xa]
  PUSH(R.ax);                                                  // 0182 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0183 shl ax, 1
  R.si = (u16)(R.ax);                                          // 0185 mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x85e)));                     // 0187 mov ah, byte ptr cs:[si + 0x85e]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 018c add ah, 0x40
  SETL(R.ax, 0x3f);                                            // 018f mov al, 0x3f
  PUSH(0x0194); a_sb15_07cb();                                 // 0191 call 0x7cb
  ASM_COST(9); R.ax = POP();                                   // 0194 pop ax
  PUSH(R.ax);                                                  // 0195 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0196 shl ax, 1
  R.ax = (u16)(INC16(R.ax));                                   // 0198 inc ax
  R.si = (u16)(R.ax);                                          // 0199 mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x85e)));                     // 019b mov ah, byte ptr cs:[si + 0x85e]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 01a0 add ah, 0x40
  SETL(R.ax, 0x3f);                                            // 01a3 mov al, 0x3f
  PUSH(0x01a8); a_sb15_07cb();                                 // 01a5 call 0x7cb
  ASM_COST(6); R.ax = POP();                                   // 01a8 pop ax
  PUSH(R.ax);                                                  // 01a9 push ax
  SETH(R.ax, (u8)R.ax);                                        // 01aa mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xa0));                     // 01ac add ah, 0xa0
  SETL(R.ax, (u8)R.dx);                                        // 01af mov al, dl
  PUSH(0x01b4); a_sb15_07cb();                                 // 01b1 call 0x7cb
  ASM_COST(7); R.ax = POP();                                   // 01b4 pop ax
  PUSH(R.ax);                                                  // 01b5 push ax
  SETH(R.ax, (u8)R.ax);                                        // 01b6 mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xb0));                     // 01b8 add ah, 0xb0
  SETL(R.ax, 0x20);                                            // 01bb mov al, 0x20
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 01bd or al, dh
  PUSH(0x01c2); a_sb15_07cb();                                 // 01bf call 0x7cb
  ASM_COST(4); R.ax = POP();                                   // 01c2 pop ax
  SETL(R.cx, 0x7f);                                            // 01c3 mov cl, 0x7f
  SUB8(M8(ES, (u16)(R.bx + 0x15)), 0x0);                       // 01c5 cmp byte ptr es:[bx + 0x15], 0
  if (R.zf) goto L_01cf;                                       // 01ca je 0x1cf
  ASM_COST(1); SETL(R.cx, M8(SS, (u16)(R.bp + 0xe)));          // 01cc mov cl, byte ptr [bp + 0xe]
L_01cf:   ASM_COST(4); R.si = (u16)(R.ax);                             // 01cf mov si, ax
  W8(CS, (u16)(R.si + 0x966), (u8)R.cx);                       // 01d1 mov byte ptr cs:[si + 0x966], cl
  SETH(R.cx, M8(DS, (u16)(R.di + 0x28)));                      // 01d6 mov ch, byte ptr [di + 0x28]
  PUSH(0x01dc); a_sb15_0734();                                 // 01d9 call 0x734
  ASM_COST(4); R.si = POP();                                   // 01dc pop si
  R.di = POP();                                                // 01dd pop di
  R.bp = POP();                                                // 01de pop bp
  R.sp += 4; goto L_ret;                                       // 01df retf
L_ret:
  return;
}

static u16 f_sb15_016c(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4)
{
  ASM_ENTER();
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_016c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0316 FUN_1000_0316  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0316(void)
{
  R.cs = sb15_seg;
  ASM_COST(4); R.dx = (u16)(R.ax);                             // 0316 mov dx, ax
  R.ax = POP();                                                // 0318 pop ax
  SUB8(M8(ES, (u16)(R.bx + 0x28)), 0x90);                      // 0319 cmp byte ptr es:[bx + 0x28], 0x90
  if (!R.zf) goto L_0323;                                      // 031e jne 0x323
  ASM_COST(1); R.dx = (u16)(ADD16(R.dx, M16(DS, (u16)(R.di + 0x1c)))); // 0320 add dx, word ptr [di + 0x1c]
L_0323:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x90);         // 0323 cmp byte ptr es:[bx + 0x19], 0x90
  if (!R.zf) goto L_032d;                                      // 0328 jne 0x32d
  ASM_COST(1); R.dx = (u16)(ADD16(R.dx, M16(DS, (u16)(R.di + 0x14)))); // 032a add dx, word ptr [di + 0x14]
L_032d:   ASM_COST(3); R.cx = (u16)(M16(DS, (u16)(R.si + 0x26)));      // 032d mov cx, word ptr [si + 0x26]
  SUB16(R.cx, 0x0);                                            // 0330 cmp cx, 0
  if (R.zf || R.sf != R.of) goto L_0356;                       // 0333 jle 0x356
  ASM_COST(4); PUSH(R.ax);                                     // 0335 push ax
  SETL(R.ax, M8(DS, (u16)(R.di + 0x3)));                       // 0336 mov al, byte ptr [di + 3]
  SETH(R.ax, M8(ES, (u16)(R.bx + 0x12)));                      // 0339 mov ah, byte ptr es:[bx + 0x12]
  PUSH(0x0340); a_sb15_06f7();                                 // 033d call 0x6f7
  ASM_COST(4); R.ax = (u16)(SUB16(R.ax, R.dx));                // 0340 sub ax, dx
  PUSH(R.dx);                                                  // 0342 push dx
  IMUL16(R.cx);                                                // 0343 imul cx
  R.cx = (u16)(0x5);                                           // 0345 mov cx, 5
L_0348:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 0348 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 034a rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_0348; }                // 034c loop 0x348
  ASM_COST(5); SETL(R.ax, (u8)(R.ax >> 8));                    // 034e mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 0350 mov ah, dl
  R.dx = POP();                                                // 0352 pop dx
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 0353 add dx, ax
  R.ax = POP();                                                // 0355 pop ax
L_0356:   ASM_COST(2); SUB16(R.cx, 0x0);                               // 0356 cmp cx, 0
  if (R.sf == R.of) goto L_0382;                               // 0359 jge 0x382
  ASM_COST(6); R.cx = (u16)(NEG16(R.cx));                      // 035b neg cx
  PUSH(R.ax);                                                  // 035d push ax
  SETL(R.ax, M8(DS, (u16)(R.di + 0x3)));                       // 035e mov al, byte ptr [di + 3]
  SETH(R.ax, M8(ES, (u16)(R.bx + 0x12)));                      // 0361 mov ah, byte ptr es:[bx + 0x12]
  SETH(R.ax, NEG8((u8)(R.ax >> 8)));                           // 0365 neg ah
  PUSH(0x036a); a_sb15_06f7();                                 // 0367 call 0x6f7
  ASM_COST(5); R.ax = (u16)(SUB16(R.ax, R.dx));                // 036a sub ax, dx
  R.ax = (u16)(NEG16(R.ax));                                   // 036c neg ax
  PUSH(R.dx);                                                  // 036e push dx
  IMUL16(R.cx);                                                // 036f imul cx
  R.cx = (u16)(0x5);                                           // 0371 mov cx, 5
L_0374:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 0374 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0376 rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_0374; }                // 0378 loop 0x374
  ASM_COST(5); SETL(R.ax, (u8)(R.ax >> 8));                    // 037a mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 037c mov ah, dl
  R.dx = POP();                                                // 037e pop dx
  R.dx = (u16)(SUB16(R.dx, R.ax));                             // 037f sub dx, ax
  R.ax = POP();                                                // 0381 pop ax
L_0382:   ASM_COST(11); PUSH(R.ax);                                    // 0382 push ax
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x11)));                      // 0383 mov al, byte ptr es:[bx + 0x11]
  R.ax = (u16)(i16)(i8)R.ax;                                   // 0387 cwde
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 0388 add dx, ax
  W16(DS, (u16)(R.di + 0x6), R.dx);                            // 038a mov word ptr [di + 6], dx
  R.ax = POP();                                                // 038d pop ax
  PUSH(R.ax);                                                  // 038e push ax
  SETH(R.ax, (u8)R.ax);                                        // 038f mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xa0));                     // 0391 add ah, 0xa0
  SETL(R.ax, (u8)R.dx);                                        // 0394 mov al, dl
  PUSH(0x0399); a_sb15_07cb();                                 // 0396 call 0x7cb
  ASM_COST(10); R.ax = POP();                                  // 0399 pop ax
  PUSH(R.ax);                                                  // 039a push ax
  SETH(R.ax, (u8)R.ax);                                        // 039b mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xb0));                     // 039d add ah, 0xb0
  SETL(R.ax, 0x2);                                             // 03a0 mov al, 2
  SETL(R.ax, SUB8((u8)R.ax, M8(DS, (u16)(R.di + 0x1))));       // 03a2 sub al, byte ptr [di + 1]
  SETL(R.cx, 0x5);                                             // 03a5 mov cl, 5
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 03a7 shl al, cl
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 03a9 or al, dh
  PUSH(0x03ae); a_sb15_07cb();                                 // 03ab call 0x7cb
  ASM_COST(6); R.ax = POP();                                   // 03ae pop ax
  R.cx = (u16)(XOR16(R.cx, R.cx));                             // 03af xor cx, cx
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 03b1 xor dx, dx
  SETL(R.cx, M8(ES, (u16)(R.bx + 0x35)));                      // 03b3 mov cl, byte ptr es:[bx + 0x35]
  SETL(R.dx, M8(DS, (u16)(R.di + 0x22)));                      // 03b7 mov dl, byte ptr [di + 0x22]
  PUSH(0x03bd); a_sb15_06c9();                                 // 03ba call 0x6c9
  ASM_COST(3); SETL(R.cx, M8(ES, (u16)(R.bx + 0x28)));         // 03bd mov cl, byte ptr es:[bx + 0x28]
  R.dx = (u16)(M16(DS, (u16)(R.di + 0x1c)));                   // 03c1 mov dx, word ptr [di + 0x1c]
  PUSH(0x03c7); a_sb15_06c9();                                 // 03c4 call 0x6c9
  ASM_COST(3); SETL(R.cx, M8(ES, (u16)(R.bx + 0x19)));         // 03c7 mov cl, byte ptr es:[bx + 0x19]
  R.dx = (u16)(M16(DS, (u16)(R.di + 0x14)));                   // 03cb mov dx, word ptr [di + 0x14]
  PUSH(0x03d1); a_sb15_06c9();                                 // 03ce call 0x6c9
  ASM_COST(4); R.si = POP();                                   // 03d1 pop si
  R.di = POP();                                                // 03d2 pop di
  R.bp = POP();                                                // 03d3 pop bp
  R.sp += 4; goto L_ret;                                       // 03d4 retf
L_ret:
  return;
}

static u16 f_sb15_0316(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0316();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0412 FUN_1000_0412  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0412(void)
{
  R.cs = sb15_seg;
  ASM_COST(4); R.dx = (u16)(R.ax);                             // 0412 mov dx, ax
  R.cx = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 0414 mov cx, word ptr [bp + 0xa]
  SUB16(R.cx, 0x0);                                            // 0417 cmp cx, 0
  if (R.zf || R.sf != R.of) goto L_043a;                       // 041a jle 0x43a
  ASM_COST(3); SETL(R.ax, M8(SS, (u16)(R.bp + 0x8)));          // 041c mov al, byte ptr [bp + 8]
  SETH(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 041f mov ah, byte ptr [bp + 0xc]
  PUSH(0x0425); a_sb15_06f7();                                 // 0422 call 0x6f7
  ASM_COST(4); R.ax = (u16)(SUB16(R.ax, R.dx));                // 0425 sub ax, dx
  PUSH(R.dx);                                                  // 0427 push dx
  IMUL16(R.cx);                                                // 0428 imul cx
  R.cx = (u16)(0x5);                                           // 042a mov cx, 5
L_042d:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 042d sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 042f rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_042d; }                // 0431 loop 0x42d
  ASM_COST(4); SETL(R.ax, (u8)(R.ax >> 8));                    // 0433 mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 0435 mov ah, dl
  R.dx = POP();                                                // 0437 pop dx
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 0438 add dx, ax
L_043a:   ASM_COST(2); SUB16(R.cx, 0x0);                               // 043a cmp cx, 0
  if (R.sf == R.of) goto L_0463;                               // 043d jge 0x463
  ASM_COST(5); R.cx = (u16)(NEG16(R.cx));                      // 043f neg cx
  SETL(R.ax, M8(SS, (u16)(R.bp + 0x8)));                       // 0441 mov al, byte ptr [bp + 8]
  SETH(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 0444 mov ah, byte ptr [bp + 0xc]
  SETH(R.ax, NEG8((u8)(R.ax >> 8)));                           // 0447 neg ah
  PUSH(0x044c); a_sb15_06f7();                                 // 0449 call 0x6f7
  ASM_COST(5); R.ax = (u16)(SUB16(R.ax, R.dx));                // 044c sub ax, dx
  R.ax = (u16)(NEG16(R.ax));                                   // 044e neg ax
  PUSH(R.dx);                                                  // 0450 push dx
  IMUL16(R.cx);                                                // 0451 imul cx
  R.cx = (u16)(0x5);                                           // 0453 mov cx, 5
L_0456:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 0456 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0458 rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_0456; }                // 045a loop 0x456
  ASM_COST(4); SETL(R.ax, (u8)(R.ax >> 8));                    // 045c mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 045e mov ah, dl
  R.dx = POP();                                                // 0460 pop dx
  R.dx = (u16)(SUB16(R.dx, R.ax));                             // 0461 sub dx, ax
L_0463:   ASM_COST(3); R.ax = (u16)(R.dx);                             // 0463 mov ax, dx
  R.bp = POP();                                                // 0465 pop bp
  R.sp += 4; goto L_ret;                                       // 0466 retf
L_ret:
  return;
}

static u16 f_sb15_0412(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0412();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0808 FUN_1000_0808  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0808(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0808 mov ah, 4
  SETL(R.ax, 0x60);                                            // 080a mov al, 0x60
  PUSH(0x080f); a_sb15_07cb();                                 // 080c call 0x7cb
  ASM_COST(3); SETH(R.ax, 0x4);                                // 080f mov ah, 4
  SETL(R.ax, 0x80);                                            // 0811 mov al, 0x80
  PUSH(0x0816); a_sb15_07cb();                                 // 0813 call 0x7cb
  ASM_COST(1); PUSH(0x0819); a_sb15_07f3();                    // 0816 call 0x7f3
  ASM_COST(4); R.dx = (u16)(R.ax);                             // 0819 mov dx, ax
  SETH(R.ax, 0x2);                                             // 081b mov ah, 2
  SETL(R.ax, 0xff);                                            // 081d mov al, 0xff
  PUSH(0x0822); a_sb15_07cb();                                 // 081f call 0x7cb
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0822 mov ah, 4
  SETL(R.ax, 0x21);                                            // 0824 mov al, 0x21
  PUSH(0x0829); a_sb15_07cb();                                 // 0826 call 0x7cb
  ASM_COST(1); R.cx = (u16)(0x12c);                            // 0829 mov cx, 0x12c
L_082c:   ASM_COST(1); PUSH(0x082f); a_sb15_07f3();                    // 082c call 0x7f3
  ASM_COST(3); SETL(R.ax, AND8((u8)R.ax, 0xe0));               // 082f and al, 0xe0
  SUB8((u8)R.ax, 0xc0);                                        // 0831 cmp al, 0xc0
  if (R.zf) goto L_0837;                                       // 0833 je 0x837
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_082c; }   // 0835 loop 0x82c
L_0837:   ASM_COST(4); R.cx = (u16)(R.ax);                             // 0837 mov cx, ax
  SETH(R.ax, 0x4);                                             // 0839 mov ah, 4
  SETL(R.ax, 0x60);                                            // 083b mov al, 0x60
  PUSH(0x0840); a_sb15_07cb();                                 // 083d call 0x7cb
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0840 mov ah, 4
  SETL(R.ax, 0x80);                                            // 0842 mov al, 0x80
  PUSH(0x0847); a_sb15_07cb();                                 // 0844 call 0x7cb
  ASM_COST(4); SETL(R.dx, AND8((u8)R.dx, 0xe0));               // 0847 and dl, 0xe0
  SUB8((u8)R.dx, 0x0);                                         // 084a cmp dl, 0
  R.cf = 1;                                                    // 084d stc
  if (!R.zf) goto L_085a;                                      // 084e jne 0x85a
  ASM_COST(4); SETL(R.cx, AND8((u8)R.cx, 0xe0));               // 0850 and cl, 0xe0
  SUB8((u8)R.cx, 0xc0);                                        // 0853 cmp cl, 0xc0
  R.cf = 1;                                                    // 0856 stc
  if (!R.zf) goto L_085a;                                      // 0857 jne 0x85a
  ASM_COST(1); R.cf = 0;                                       // 0859 clc
L_085a:   ASM_COST(4); R.dx = POP();                                   // 085a pop dx
  R.cx = POP();                                                // 085b pop cx
  R.ax = POP();                                                // 085c pop ax
  R.sp += 2; goto L_ret;                                       // 085d ret
L_ret:
  return;
}

static u16 f_sb15_0808(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0808();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:080F FUN_1000_080f  FIX: recompiled from the machine code (asm2c)
static void a_sb15_080f(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); SETH(R.ax, 0x4);                                // 080f mov ah, 4
  SETL(R.ax, 0x80);                                            // 0811 mov al, 0x80
  PUSH(0x0816); a_sb15_07cb();                                 // 0813 call 0x7cb
  ASM_COST(1); PUSH(0x0819); a_sb15_07f3();                    // 0816 call 0x7f3
  ASM_COST(4); R.dx = (u16)(R.ax);                             // 0819 mov dx, ax
  SETH(R.ax, 0x2);                                             // 081b mov ah, 2
  SETL(R.ax, 0xff);                                            // 081d mov al, 0xff
  PUSH(0x0822); a_sb15_07cb();                                 // 081f call 0x7cb
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0822 mov ah, 4
  SETL(R.ax, 0x21);                                            // 0824 mov al, 0x21
  PUSH(0x0829); a_sb15_07cb();                                 // 0826 call 0x7cb
  ASM_COST(1); R.cx = (u16)(0x12c);                            // 0829 mov cx, 0x12c
L_082c:   ASM_COST(1); PUSH(0x082f); a_sb15_07f3();                    // 082c call 0x7f3
  ASM_COST(3); SETL(R.ax, AND8((u8)R.ax, 0xe0));               // 082f and al, 0xe0
  SUB8((u8)R.ax, 0xc0);                                        // 0831 cmp al, 0xc0
  if (R.zf) goto L_0837;                                       // 0833 je 0x837
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_082c; }   // 0835 loop 0x82c
L_0837:   ASM_COST(4); R.cx = (u16)(R.ax);                             // 0837 mov cx, ax
  SETH(R.ax, 0x4);                                             // 0839 mov ah, 4
  SETL(R.ax, 0x60);                                            // 083b mov al, 0x60
  PUSH(0x0840); a_sb15_07cb();                                 // 083d call 0x7cb
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0840 mov ah, 4
  SETL(R.ax, 0x80);                                            // 0842 mov al, 0x80
  PUSH(0x0847); a_sb15_07cb();                                 // 0844 call 0x7cb
  ASM_COST(4); SETL(R.dx, AND8((u8)R.dx, 0xe0));               // 0847 and dl, 0xe0
  SUB8((u8)R.dx, 0x0);                                         // 084a cmp dl, 0
  R.cf = 1;                                                    // 084d stc
  if (!R.zf) goto L_085a;                                      // 084e jne 0x85a
  ASM_COST(4); SETL(R.cx, AND8((u8)R.cx, 0xe0));               // 0850 and cl, 0xe0
  SUB8((u8)R.cx, 0xc0);                                        // 0853 cmp cl, 0xc0
  R.cf = 1;                                                    // 0856 stc
  if (!R.zf) goto L_085a;                                      // 0857 jne 0x85a
  ASM_COST(1); R.cf = 0;                                       // 0859 clc
L_085a:   ASM_COST(4); R.dx = POP();                                   // 085a pop dx
  R.cx = POP();                                                // 085b pop cx
  R.ax = POP();                                                // 085c pop ax
  R.sp += 2; goto L_ret;                                       // 085d ret
L_ret:
  return;
}

static u16 f_sb15_080f(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_080f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0816 FUN_1000_0816  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0816(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); PUSH(0x0819); a_sb15_07f3();                    // 0816 call 0x7f3
  ASM_COST(4); R.dx = (u16)(R.ax);                             // 0819 mov dx, ax
  SETH(R.ax, 0x2);                                             // 081b mov ah, 2
  SETL(R.ax, 0xff);                                            // 081d mov al, 0xff
  PUSH(0x0822); a_sb15_07cb();                                 // 081f call 0x7cb
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0822 mov ah, 4
  SETL(R.ax, 0x21);                                            // 0824 mov al, 0x21
  PUSH(0x0829); a_sb15_07cb();                                 // 0826 call 0x7cb
  ASM_COST(1); R.cx = (u16)(0x12c);                            // 0829 mov cx, 0x12c
L_082c:   ASM_COST(1); PUSH(0x082f); a_sb15_07f3();                    // 082c call 0x7f3
  ASM_COST(3); SETL(R.ax, AND8((u8)R.ax, 0xe0));               // 082f and al, 0xe0
  SUB8((u8)R.ax, 0xc0);                                        // 0831 cmp al, 0xc0
  if (R.zf) goto L_0837;                                       // 0833 je 0x837
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_082c; }   // 0835 loop 0x82c
L_0837:   ASM_COST(4); R.cx = (u16)(R.ax);                             // 0837 mov cx, ax
  SETH(R.ax, 0x4);                                             // 0839 mov ah, 4
  SETL(R.ax, 0x60);                                            // 083b mov al, 0x60
  PUSH(0x0840); a_sb15_07cb();                                 // 083d call 0x7cb
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0840 mov ah, 4
  SETL(R.ax, 0x80);                                            // 0842 mov al, 0x80
  PUSH(0x0847); a_sb15_07cb();                                 // 0844 call 0x7cb
  ASM_COST(4); SETL(R.dx, AND8((u8)R.dx, 0xe0));               // 0847 and dl, 0xe0
  SUB8((u8)R.dx, 0x0);                                         // 084a cmp dl, 0
  R.cf = 1;                                                    // 084d stc
  if (!R.zf) goto L_085a;                                      // 084e jne 0x85a
  ASM_COST(4); SETL(R.cx, AND8((u8)R.cx, 0xe0));               // 0850 and cl, 0xe0
  SUB8((u8)R.cx, 0xc0);                                        // 0853 cmp cl, 0xc0
  R.cf = 1;                                                    // 0856 stc
  if (!R.zf) goto L_085a;                                      // 0857 jne 0x85a
  ASM_COST(1); R.cf = 0;                                       // 0859 clc
L_085a:   ASM_COST(4); R.dx = POP();                                   // 085a pop dx
  R.cx = POP();                                                // 085b pop cx
  R.ax = POP();                                                // 085c pop ax
  R.sp += 2; goto L_ret;                                       // 085d ret
L_ret:
  return;
}

static u16 f_sb15_0816(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0816();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0819 FUN_1000_0819  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0819(void)
{
  R.cs = sb15_seg;
  ASM_COST(4); R.dx = (u16)(R.ax);                             // 0819 mov dx, ax
  SETH(R.ax, 0x2);                                             // 081b mov ah, 2
  SETL(R.ax, 0xff);                                            // 081d mov al, 0xff
  PUSH(0x0822); a_sb15_07cb();                                 // 081f call 0x7cb
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0822 mov ah, 4
  SETL(R.ax, 0x21);                                            // 0824 mov al, 0x21
  PUSH(0x0829); a_sb15_07cb();                                 // 0826 call 0x7cb
  ASM_COST(1); R.cx = (u16)(0x12c);                            // 0829 mov cx, 0x12c
L_082c:   ASM_COST(1); PUSH(0x082f); a_sb15_07f3();                    // 082c call 0x7f3
  ASM_COST(3); SETL(R.ax, AND8((u8)R.ax, 0xe0));               // 082f and al, 0xe0
  SUB8((u8)R.ax, 0xc0);                                        // 0831 cmp al, 0xc0
  if (R.zf) goto L_0837;                                       // 0833 je 0x837
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_082c; }   // 0835 loop 0x82c
L_0837:   ASM_COST(4); R.cx = (u16)(R.ax);                             // 0837 mov cx, ax
  SETH(R.ax, 0x4);                                             // 0839 mov ah, 4
  SETL(R.ax, 0x60);                                            // 083b mov al, 0x60
  PUSH(0x0840); a_sb15_07cb();                                 // 083d call 0x7cb
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0840 mov ah, 4
  SETL(R.ax, 0x80);                                            // 0842 mov al, 0x80
  PUSH(0x0847); a_sb15_07cb();                                 // 0844 call 0x7cb
  ASM_COST(4); SETL(R.dx, AND8((u8)R.dx, 0xe0));               // 0847 and dl, 0xe0
  SUB8((u8)R.dx, 0x0);                                         // 084a cmp dl, 0
  R.cf = 1;                                                    // 084d stc
  if (!R.zf) goto L_085a;                                      // 084e jne 0x85a
  ASM_COST(4); SETL(R.cx, AND8((u8)R.cx, 0xe0));               // 0850 and cl, 0xe0
  SUB8((u8)R.cx, 0xc0);                                        // 0853 cmp cl, 0xc0
  R.cf = 1;                                                    // 0856 stc
  if (!R.zf) goto L_085a;                                      // 0857 jne 0x85a
  ASM_COST(1); R.cf = 0;                                       // 0859 clc
L_085a:   ASM_COST(4); R.dx = POP();                                   // 085a pop dx
  R.cx = POP();                                                // 085b pop cx
  R.ax = POP();                                                // 085c pop ax
  R.sp += 2; goto L_ret;                                       // 085d ret
L_ret:
  return;
}

static u16 f_sb15_0819(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0819();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0822 FUN_1000_0822  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0822(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0822 mov ah, 4
  SETL(R.ax, 0x21);                                            // 0824 mov al, 0x21
  PUSH(0x0829); a_sb15_07cb();                                 // 0826 call 0x7cb
  ASM_COST(1); R.cx = (u16)(0x12c);                            // 0829 mov cx, 0x12c
L_082c:   ASM_COST(1); PUSH(0x082f); a_sb15_07f3();                    // 082c call 0x7f3
  ASM_COST(3); SETL(R.ax, AND8((u8)R.ax, 0xe0));               // 082f and al, 0xe0
  SUB8((u8)R.ax, 0xc0);                                        // 0831 cmp al, 0xc0
  if (R.zf) goto L_0837;                                       // 0833 je 0x837
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_082c; }   // 0835 loop 0x82c
L_0837:   ASM_COST(4); R.cx = (u16)(R.ax);                             // 0837 mov cx, ax
  SETH(R.ax, 0x4);                                             // 0839 mov ah, 4
  SETL(R.ax, 0x60);                                            // 083b mov al, 0x60
  PUSH(0x0840); a_sb15_07cb();                                 // 083d call 0x7cb
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0840 mov ah, 4
  SETL(R.ax, 0x80);                                            // 0842 mov al, 0x80
  PUSH(0x0847); a_sb15_07cb();                                 // 0844 call 0x7cb
  ASM_COST(4); SETL(R.dx, AND8((u8)R.dx, 0xe0));               // 0847 and dl, 0xe0
  SUB8((u8)R.dx, 0x0);                                         // 084a cmp dl, 0
  R.cf = 1;                                                    // 084d stc
  if (!R.zf) goto L_085a;                                      // 084e jne 0x85a
  ASM_COST(4); SETL(R.cx, AND8((u8)R.cx, 0xe0));               // 0850 and cl, 0xe0
  SUB8((u8)R.cx, 0xc0);                                        // 0853 cmp cl, 0xc0
  R.cf = 1;                                                    // 0856 stc
  if (!R.zf) goto L_085a;                                      // 0857 jne 0x85a
  ASM_COST(1); R.cf = 0;                                       // 0859 clc
L_085a:   ASM_COST(4); R.dx = POP();                                   // 085a pop dx
  R.cx = POP();                                                // 085b pop cx
  R.ax = POP();                                                // 085c pop ax
  R.sp += 2; goto L_ret;                                       // 085d ret
L_ret:
  return;
}

static u16 f_sb15_0822(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0822();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0840 FUN_1000_0840  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0840(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0840 mov ah, 4
  SETL(R.ax, 0x80);                                            // 0842 mov al, 0x80
  PUSH(0x0847); a_sb15_07cb();                                 // 0844 call 0x7cb
  ASM_COST(4); SETL(R.dx, AND8((u8)R.dx, 0xe0));               // 0847 and dl, 0xe0
  SUB8((u8)R.dx, 0x0);                                         // 084a cmp dl, 0
  R.cf = 1;                                                    // 084d stc
  if (!R.zf) goto L_085a;                                      // 084e jne 0x85a
  ASM_COST(4); SETL(R.cx, AND8((u8)R.cx, 0xe0));               // 0850 and cl, 0xe0
  SUB8((u8)R.cx, 0xc0);                                        // 0853 cmp cl, 0xc0
  R.cf = 1;                                                    // 0856 stc
  if (!R.zf) goto L_085a;                                      // 0857 jne 0x85a
  ASM_COST(1); R.cf = 0;                                       // 0859 clc
L_085a:   ASM_COST(4); R.dx = POP();                                   // 085a pop dx
  R.cx = POP();                                                // 085b pop cx
  R.ax = POP();                                                // 085c pop ax
  R.sp += 2; goto L_ret;                                       // 085d ret
L_ret:
  return;
}

static u16 f_sb15_0840(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0840();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0847 FUN_1000_0847  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0847(void)
{
  R.cs = sb15_seg;
  ASM_COST(4); SETL(R.dx, AND8((u8)R.dx, 0xe0));               // 0847 and dl, 0xe0
  SUB8((u8)R.dx, 0x0);                                         // 084a cmp dl, 0
  R.cf = 1;                                                    // 084d stc
  if (!R.zf) goto L_085a;                                      // 084e jne 0x85a
  ASM_COST(4); SETL(R.cx, AND8((u8)R.cx, 0xe0));               // 0850 and cl, 0xe0
  SUB8((u8)R.cx, 0xc0);                                        // 0853 cmp cl, 0xc0
  R.cf = 1;                                                    // 0856 stc
  if (!R.zf) goto L_085a;                                      // 0857 jne 0x85a
  ASM_COST(1); R.cf = 0;                                       // 0859 clc
L_085a:   ASM_COST(4); R.dx = POP();                                   // 085a pop dx
  R.cx = POP();                                                // 085b pop cx
  R.ax = POP();                                                // 085c pop ax
  R.sp += 2; goto L_ret;                                       // 085d ret
L_ret:
  return;
}

static u16 f_sb15_0847(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0847();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:09BF FUN_1000_09bf  FIX: recompiled from the machine code (asm2c)
static void a_sb15_09bf(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); PUSH(0x09c2); a_sb15_0b00();                    // 09bf call 0xb00
  ASM_COST(2); SUB16(R.ax, 0xffff);                            // 09c2 cmp ax, 0xffff
  if (!R.zf) goto L_09cb;                                      // 09c5 jne 0x9cb
  ASM_COST(2); R.ax = (u16)(0x0);                              // 09c7 mov ax, 0
  R.sp += 4; goto L_ret;                                       // 09ca retf
L_09cb:   ASM_COST(2); W16(CS, (u16)(0x960), 0x388);                   // 09cb mov word ptr cs:[0x960], 0x388
  PUSH(0x09d5); a_sb15_07fe();                                 // 09d2 call 0x7fe
  ASM_COST(1); if (!R.cf) goto L_09db;                         // 09d5 jae 0x9db
  ASM_COST(2); R.ax = (u16)(0x0);                              // 09d7 mov ax, 0
  R.sp += 4; goto L_ret;                                       // 09da retf
L_09db:   ASM_COST(3); SETH(R.ax, 0x1);                                // 09db mov ah, 1
  SETL(R.ax, 0x20);                                            // 09dd mov al, 0x20
  PUSH(0x09e2); a_sb15_07cb();                                 // 09df call 0x7cb
  ASM_COST(3); SETH(R.ax, 0x8);                                // 09e2 mov ah, 8
  SETL(R.ax, 0x0);                                             // 09e4 mov al, 0
  PUSH(0x09e9); a_sb15_07cb();                                 // 09e6 call 0x7cb
  ASM_COST(3); SETH(R.ax, 0xbd);                               // 09e9 mov ah, 0xbd
  SETL(R.ax, 0x0);                                             // 09eb mov al, 0
  PUSH(0x09f0); a_sb15_07cb();                                 // 09ed call 0x7cb
  ASM_COST(1); R.ax = (u16)(0x0);                              // 09f0 mov ax, 0
L_09f3:   ASM_COST(1); PUSH(0x09f6); a_sb15_0526();                    // 09f3 call 0x526
  ASM_COST(3); R.ax = (u16)(INC16(R.ax));                      // 09f6 inc ax
  SUB16(R.ax, 0x9);                                            // 09f7 cmp ax, 9
  if (R.cf) { ASM_BACK(); goto L_09f3; }                       // 09fa jb 0x9f3
  ASM_COST(2); SETH(R.ax, 0xd1);                               // 09fc mov ah, 0xd1
  PUSH(0x0a01); a_sb15_0a1d();                                 // 09fe call 0xa1d
  ASM_COST(2); R.ax = (u16)(0xb);                              // 0a01 mov ax, 0xb
  R.sp += 4; goto L_ret;                                       // 0a04 retf
L_ret:
  return;
}

static u16 f_sb15_09bf(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_09bf();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:09E2 FUN_1000_09e2  FIX: recompiled from the machine code (asm2c)
static void a_sb15_09e2(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); SETH(R.ax, 0x8);                                // 09e2 mov ah, 8
  SETL(R.ax, 0x0);                                             // 09e4 mov al, 0
  PUSH(0x09e9); a_sb15_07cb();                                 // 09e6 call 0x7cb
  ASM_COST(3); SETH(R.ax, 0xbd);                               // 09e9 mov ah, 0xbd
  SETL(R.ax, 0x0);                                             // 09eb mov al, 0
  PUSH(0x09f0); a_sb15_07cb();                                 // 09ed call 0x7cb
  ASM_COST(1); R.ax = (u16)(0x0);                              // 09f0 mov ax, 0
L_09f3:   ASM_COST(1); PUSH(0x09f6); a_sb15_0526();                    // 09f3 call 0x526
  ASM_COST(3); R.ax = (u16)(INC16(R.ax));                      // 09f6 inc ax
  SUB16(R.ax, 0x9);                                            // 09f7 cmp ax, 9
  if (R.cf) { ASM_BACK(); goto L_09f3; }                       // 09fa jb 0x9f3
  ASM_COST(2); SETH(R.ax, 0xd1);                               // 09fc mov ah, 0xd1
  PUSH(0x0a01); a_sb15_0a1d();                                 // 09fe call 0xa1d
  ASM_COST(2); R.ax = (u16)(0xb);                              // 0a01 mov ax, 0xb
  R.sp += 4; goto L_ret;                                       // 0a04 retf
L_ret:
  return;
}

static u16 f_sb15_09e2(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_09e2();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:09E9 FUN_1000_09e9  FIX: recompiled from the machine code (asm2c)
static void a_sb15_09e9(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); SETH(R.ax, 0xbd);                               // 09e9 mov ah, 0xbd
  SETL(R.ax, 0x0);                                             // 09eb mov al, 0
  PUSH(0x09f0); a_sb15_07cb();                                 // 09ed call 0x7cb
  ASM_COST(1); R.ax = (u16)(0x0);                              // 09f0 mov ax, 0
L_09f3:   ASM_COST(1); PUSH(0x09f6); a_sb15_0526();                    // 09f3 call 0x526
  ASM_COST(3); R.ax = (u16)(INC16(R.ax));                      // 09f6 inc ax
  SUB16(R.ax, 0x9);                                            // 09f7 cmp ax, 9
  if (R.cf) { ASM_BACK(); goto L_09f3; }                       // 09fa jb 0x9f3
  ASM_COST(2); SETH(R.ax, 0xd1);                               // 09fc mov ah, 0xd1
  PUSH(0x0a01); a_sb15_0a1d();                                 // 09fe call 0xa1d
  ASM_COST(2); R.ax = (u16)(0xb);                              // 0a01 mov ax, 0xb
  R.sp += 4; goto L_ret;                                       // 0a04 retf
L_ret:
  return;
}

static u16 f_sb15_09e9(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_09e9();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:09F0 FUN_1000_09f0  FIX: recompiled from the machine code (asm2c)
static void a_sb15_09f0(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); R.ax = (u16)(0x0);                              // 09f0 mov ax, 0
L_09f3:   ASM_COST(1); PUSH(0x09f6); a_sb15_0526();                    // 09f3 call 0x526
  ASM_COST(3); R.ax = (u16)(INC16(R.ax));                      // 09f6 inc ax
  SUB16(R.ax, 0x9);                                            // 09f7 cmp ax, 9
  if (R.cf) { ASM_BACK(); goto L_09f3; }                       // 09fa jb 0x9f3
  ASM_COST(2); SETH(R.ax, 0xd1);                               // 09fc mov ah, 0xd1
  PUSH(0x0a01); a_sb15_0a1d();                                 // 09fe call 0xa1d
  ASM_COST(2); R.ax = (u16)(0xb);                              // 0a01 mov ax, 0xb
  R.sp += 4; goto L_ret;                                       // 0a04 retf
L_ret:
  return;
}

static u16 f_sb15_09f0(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_09f0();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0A01 FUN_1000_0a01  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0a01(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); R.ax = (u16)(0xb);                              // 0a01 mov ax, 0xb
  R.sp += 4; goto L_ret;                                       // 0a04 retf
L_ret:
  return;
}

static u16 f_sb15_0a01(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0a01();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0A14 FUN_1000_0a14  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0a14(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); PUSH(0x0a17); a_sb15_0dff();                    // 0a14 call 0xdff
  ASM_COST(2); SETH(R.ax, 0xd3);                               // 0a17 mov ah, 0xd3
  PUSH(0x0a1c); a_sb15_0a1d();                                 // 0a19 call 0xa1d
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0a1c retf
L_ret:
  return;
}

static u16 f_sb15_0a14(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0a14();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0A17 FUN_1000_0a17  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0a17(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); SETH(R.ax, 0xd3);                               // 0a17 mov ah, 0xd3
  PUSH(0x0a1c); a_sb15_0a1d();                                 // 0a19 call 0xa1d
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 0a1c retf
L_ret:
  return;
}

static u16 f_sb15_0a17(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_0a17();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0A75 FUN_1000_0a75  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0a75(void)
{
  R.cs = sb15_seg;
  goto L_0a75;
L_0a72:   ASM_COST(1); PUSH(0x0a75); a_sb15_0a3a();                    // 0a72 call 0xa3a
L_0a75:   ASM_COST(3); SUB8((u8)R.ax, 0xaa);                           // 0a75 cmp al, 0xaa
  R.cf = 0;                                                    // 0a77 clc
  if (R.zf) goto L_0a7d;                                       // 0a78 je 0xa7d
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_0a72; }   // 0a7a loop 0xa72
  ASM_COST(1); R.cf = 1;                                       // 0a7c stc
L_0a7d:   ASM_COST(4); R.dx = POP();                                   // 0a7d pop dx
  R.cx = POP();                                                // 0a7e pop cx
  R.ax = POP();                                                // 0a7f pop ax
  R.sp += 2; goto L_ret;                                       // 0a80 ret
L_ret:
  return;
}

static u16 f_sb15_0a75(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0a75();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B12 FUN_1000_0b12  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0b12(void)
{
  R.cs = sb15_seg;
  ASM_COST(4); SETL(R.ax, 0x3);                                // 0b12 mov al, 3
  R.dx = (u16)(0xb83);                                         // 0b14 mov dx, 0xb83
  R.di = (u16)(0x11c4);                                        // 0b17 mov di, 0x11c4
  PUSH(0x0b1d); a_sb15_0a81();                                 // 0b1a call 0xa81
  ASM_COST(4); SETL(R.ax, 0x5);                                // 0b1d mov al, 5
  R.dx = (u16)(0xb8e);                                         // 0b1f mov dx, 0xb8e
  R.di = (u16)(0x11c8);                                        // 0b22 mov di, 0x11c8
  PUSH(0x0b28); a_sb15_0a81();                                 // 0b25 call 0xa81
  ASM_COST(4); SETL(R.ax, 0x7);                                // 0b28 mov al, 7
  R.dx = (u16)(0xb99);                                         // 0b2a mov dx, 0xb99
  R.di = (u16)(0x11cc);                                        // 0b2d mov di, 0x11cc
  PUSH(0x0b33); a_sb15_0a81();                                 // 0b30 call 0xa81
  ASM_COST(3); W16(CS, (u16)(0x11be), 0xffff);                 // 0b33 mov word ptr cs:[0x11be], 0xffff
  SETH(R.ax, 0xf2);                                            // 0b3a mov ah, 0xf2
  PUSH(0x0b3f); a_sb15_0a1d();                                 // 0b3c call 0xa1d
  ASM_COST(1); R.cx = (u16)(0xffff);                           // 0b3f mov cx, 0xffff
L_0b42:   ASM_COST(2); SUB16(M16(CS, (u16)(0x11be)), 0xffff);          // 0b42 cmp word ptr cs:[0x11be], -1
  if (!R.zf) goto L_0b4c;                                      // 0b48 jne 0xb4c
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_0b42; }   // 0b4a loop 0xb42
L_0b4c:   ASM_COST(5); R.ax = POP();                                   // 0b4c pop ax
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 0b4d out 0x21, al
  SETL(R.ax, 0x2);                                             // 0b4f mov al, 2
  R.si = (u16)(0x11c0);                                        // 0b51 mov si, 0x11c0
  PUSH(0x0b57); a_sb15_0ac4();                                 // 0b54 call 0xac4
  ASM_COST(3); SETL(R.ax, 0x3);                                // 0b57 mov al, 3
  R.si = (u16)(0x11c4);                                        // 0b59 mov si, 0x11c4
  PUSH(0x0b5f); a_sb15_0ac4();                                 // 0b5c call 0xac4
  ASM_COST(3); SETL(R.ax, 0x5);                                // 0b5f mov al, 5
  R.si = (u16)(0x11c8);                                        // 0b61 mov si, 0x11c8
  PUSH(0x0b67); a_sb15_0ac4();                                 // 0b64 call 0xac4
  ASM_COST(3); SETL(R.ax, 0x7);                                // 0b67 mov al, 7
  R.si = (u16)(0x11cc);                                        // 0b69 mov si, 0x11cc
  PUSH(0x0b6f); a_sb15_0ac4();                                 // 0b6c call 0xac4
  ASM_COST(6); R.ax = (u16)(M16(CS, (u16)(0x11be)));           // 0b6f mov ax, word ptr cs:[0x11be]
  R.si = POP();                                                // 0b73 pop si
  R.di = POP();                                                // 0b74 pop di
  R.dx = POP();                                                // 0b75 pop dx
  R.cx = POP();                                                // 0b76 pop cx
  R.sp += 2; goto L_ret;                                       // 0b77 ret
L_ret:
  return;
}

static u16 f_sb15_0b12(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0b12();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B1D FUN_1000_0b1d  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0b1d(void)
{
  R.cs = sb15_seg;
  ASM_COST(4); SETL(R.ax, 0x5);                                // 0b1d mov al, 5
  R.dx = (u16)(0xb8e);                                         // 0b1f mov dx, 0xb8e
  R.di = (u16)(0x11c8);                                        // 0b22 mov di, 0x11c8
  PUSH(0x0b28); a_sb15_0a81();                                 // 0b25 call 0xa81
  ASM_COST(4); SETL(R.ax, 0x7);                                // 0b28 mov al, 7
  R.dx = (u16)(0xb99);                                         // 0b2a mov dx, 0xb99
  R.di = (u16)(0x11cc);                                        // 0b2d mov di, 0x11cc
  PUSH(0x0b33); a_sb15_0a81();                                 // 0b30 call 0xa81
  ASM_COST(3); W16(CS, (u16)(0x11be), 0xffff);                 // 0b33 mov word ptr cs:[0x11be], 0xffff
  SETH(R.ax, 0xf2);                                            // 0b3a mov ah, 0xf2
  PUSH(0x0b3f); a_sb15_0a1d();                                 // 0b3c call 0xa1d
  ASM_COST(1); R.cx = (u16)(0xffff);                           // 0b3f mov cx, 0xffff
L_0b42:   ASM_COST(2); SUB16(M16(CS, (u16)(0x11be)), 0xffff);          // 0b42 cmp word ptr cs:[0x11be], -1
  if (!R.zf) goto L_0b4c;                                      // 0b48 jne 0xb4c
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_0b42; }   // 0b4a loop 0xb42
L_0b4c:   ASM_COST(5); R.ax = POP();                                   // 0b4c pop ax
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 0b4d out 0x21, al
  SETL(R.ax, 0x2);                                             // 0b4f mov al, 2
  R.si = (u16)(0x11c0);                                        // 0b51 mov si, 0x11c0
  PUSH(0x0b57); a_sb15_0ac4();                                 // 0b54 call 0xac4
  ASM_COST(3); SETL(R.ax, 0x3);                                // 0b57 mov al, 3
  R.si = (u16)(0x11c4);                                        // 0b59 mov si, 0x11c4
  PUSH(0x0b5f); a_sb15_0ac4();                                 // 0b5c call 0xac4
  ASM_COST(3); SETL(R.ax, 0x5);                                // 0b5f mov al, 5
  R.si = (u16)(0x11c8);                                        // 0b61 mov si, 0x11c8
  PUSH(0x0b67); a_sb15_0ac4();                                 // 0b64 call 0xac4
  ASM_COST(3); SETL(R.ax, 0x7);                                // 0b67 mov al, 7
  R.si = (u16)(0x11cc);                                        // 0b69 mov si, 0x11cc
  PUSH(0x0b6f); a_sb15_0ac4();                                 // 0b6c call 0xac4
  ASM_COST(6); R.ax = (u16)(M16(CS, (u16)(0x11be)));           // 0b6f mov ax, word ptr cs:[0x11be]
  R.si = POP();                                                // 0b73 pop si
  R.di = POP();                                                // 0b74 pop di
  R.dx = POP();                                                // 0b75 pop dx
  R.cx = POP();                                                // 0b76 pop cx
  R.sp += 2; goto L_ret;                                       // 0b77 ret
L_ret:
  return;
}

static u16 f_sb15_0b1d(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0b1d();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B28 FUN_1000_0b28  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0b28(void)
{
  R.cs = sb15_seg;
  ASM_COST(4); SETL(R.ax, 0x7);                                // 0b28 mov al, 7
  R.dx = (u16)(0xb99);                                         // 0b2a mov dx, 0xb99
  R.di = (u16)(0x11cc);                                        // 0b2d mov di, 0x11cc
  PUSH(0x0b33); a_sb15_0a81();                                 // 0b30 call 0xa81
  ASM_COST(3); W16(CS, (u16)(0x11be), 0xffff);                 // 0b33 mov word ptr cs:[0x11be], 0xffff
  SETH(R.ax, 0xf2);                                            // 0b3a mov ah, 0xf2
  PUSH(0x0b3f); a_sb15_0a1d();                                 // 0b3c call 0xa1d
  ASM_COST(1); R.cx = (u16)(0xffff);                           // 0b3f mov cx, 0xffff
L_0b42:   ASM_COST(2); SUB16(M16(CS, (u16)(0x11be)), 0xffff);          // 0b42 cmp word ptr cs:[0x11be], -1
  if (!R.zf) goto L_0b4c;                                      // 0b48 jne 0xb4c
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_0b42; }   // 0b4a loop 0xb42
L_0b4c:   ASM_COST(5); R.ax = POP();                                   // 0b4c pop ax
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 0b4d out 0x21, al
  SETL(R.ax, 0x2);                                             // 0b4f mov al, 2
  R.si = (u16)(0x11c0);                                        // 0b51 mov si, 0x11c0
  PUSH(0x0b57); a_sb15_0ac4();                                 // 0b54 call 0xac4
  ASM_COST(3); SETL(R.ax, 0x3);                                // 0b57 mov al, 3
  R.si = (u16)(0x11c4);                                        // 0b59 mov si, 0x11c4
  PUSH(0x0b5f); a_sb15_0ac4();                                 // 0b5c call 0xac4
  ASM_COST(3); SETL(R.ax, 0x5);                                // 0b5f mov al, 5
  R.si = (u16)(0x11c8);                                        // 0b61 mov si, 0x11c8
  PUSH(0x0b67); a_sb15_0ac4();                                 // 0b64 call 0xac4
  ASM_COST(3); SETL(R.ax, 0x7);                                // 0b67 mov al, 7
  R.si = (u16)(0x11cc);                                        // 0b69 mov si, 0x11cc
  PUSH(0x0b6f); a_sb15_0ac4();                                 // 0b6c call 0xac4
  ASM_COST(6); R.ax = (u16)(M16(CS, (u16)(0x11be)));           // 0b6f mov ax, word ptr cs:[0x11be]
  R.si = POP();                                                // 0b73 pop si
  R.di = POP();                                                // 0b74 pop di
  R.dx = POP();                                                // 0b75 pop dx
  R.cx = POP();                                                // 0b76 pop cx
  R.sp += 2; goto L_ret;                                       // 0b77 ret
L_ret:
  return;
}

static u16 f_sb15_0b28(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0b28();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B33 FUN_1000_0b33  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0b33(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); W16(CS, (u16)(0x11be), 0xffff);                 // 0b33 mov word ptr cs:[0x11be], 0xffff
  SETH(R.ax, 0xf2);                                            // 0b3a mov ah, 0xf2
  PUSH(0x0b3f); a_sb15_0a1d();                                 // 0b3c call 0xa1d
  ASM_COST(1); R.cx = (u16)(0xffff);                           // 0b3f mov cx, 0xffff
L_0b42:   ASM_COST(2); SUB16(M16(CS, (u16)(0x11be)), 0xffff);          // 0b42 cmp word ptr cs:[0x11be], -1
  if (!R.zf) goto L_0b4c;                                      // 0b48 jne 0xb4c
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_0b42; }   // 0b4a loop 0xb42
L_0b4c:   ASM_COST(5); R.ax = POP();                                   // 0b4c pop ax
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 0b4d out 0x21, al
  SETL(R.ax, 0x2);                                             // 0b4f mov al, 2
  R.si = (u16)(0x11c0);                                        // 0b51 mov si, 0x11c0
  PUSH(0x0b57); a_sb15_0ac4();                                 // 0b54 call 0xac4
  ASM_COST(3); SETL(R.ax, 0x3);                                // 0b57 mov al, 3
  R.si = (u16)(0x11c4);                                        // 0b59 mov si, 0x11c4
  PUSH(0x0b5f); a_sb15_0ac4();                                 // 0b5c call 0xac4
  ASM_COST(3); SETL(R.ax, 0x5);                                // 0b5f mov al, 5
  R.si = (u16)(0x11c8);                                        // 0b61 mov si, 0x11c8
  PUSH(0x0b67); a_sb15_0ac4();                                 // 0b64 call 0xac4
  ASM_COST(3); SETL(R.ax, 0x7);                                // 0b67 mov al, 7
  R.si = (u16)(0x11cc);                                        // 0b69 mov si, 0x11cc
  PUSH(0x0b6f); a_sb15_0ac4();                                 // 0b6c call 0xac4
  ASM_COST(6); R.ax = (u16)(M16(CS, (u16)(0x11be)));           // 0b6f mov ax, word ptr cs:[0x11be]
  R.si = POP();                                                // 0b73 pop si
  R.di = POP();                                                // 0b74 pop di
  R.dx = POP();                                                // 0b75 pop dx
  R.cx = POP();                                                // 0b76 pop cx
  R.sp += 2; goto L_ret;                                       // 0b77 ret
L_ret:
  return;
}

static u16 f_sb15_0b33(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0b33();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B57 FUN_1000_0b57  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0b57(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); SETL(R.ax, 0x3);                                // 0b57 mov al, 3
  R.si = (u16)(0x11c4);                                        // 0b59 mov si, 0x11c4
  PUSH(0x0b5f); a_sb15_0ac4();                                 // 0b5c call 0xac4
  ASM_COST(3); SETL(R.ax, 0x5);                                // 0b5f mov al, 5
  R.si = (u16)(0x11c8);                                        // 0b61 mov si, 0x11c8
  PUSH(0x0b67); a_sb15_0ac4();                                 // 0b64 call 0xac4
  ASM_COST(3); SETL(R.ax, 0x7);                                // 0b67 mov al, 7
  R.si = (u16)(0x11cc);                                        // 0b69 mov si, 0x11cc
  PUSH(0x0b6f); a_sb15_0ac4();                                 // 0b6c call 0xac4
  ASM_COST(6); R.ax = (u16)(M16(CS, (u16)(0x11be)));           // 0b6f mov ax, word ptr cs:[0x11be]
  R.si = POP();                                                // 0b73 pop si
  R.di = POP();                                                // 0b74 pop di
  R.dx = POP();                                                // 0b75 pop dx
  R.cx = POP();                                                // 0b76 pop cx
  R.sp += 2; goto L_ret;                                       // 0b77 ret
L_ret:
  return;
}

static u16 f_sb15_0b57(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0b57();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B5F FUN_1000_0b5f  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0b5f(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); SETL(R.ax, 0x5);                                // 0b5f mov al, 5
  R.si = (u16)(0x11c8);                                        // 0b61 mov si, 0x11c8
  PUSH(0x0b67); a_sb15_0ac4();                                 // 0b64 call 0xac4
  ASM_COST(3); SETL(R.ax, 0x7);                                // 0b67 mov al, 7
  R.si = (u16)(0x11cc);                                        // 0b69 mov si, 0x11cc
  PUSH(0x0b6f); a_sb15_0ac4();                                 // 0b6c call 0xac4
  ASM_COST(6); R.ax = (u16)(M16(CS, (u16)(0x11be)));           // 0b6f mov ax, word ptr cs:[0x11be]
  R.si = POP();                                                // 0b73 pop si
  R.di = POP();                                                // 0b74 pop di
  R.dx = POP();                                                // 0b75 pop dx
  R.cx = POP();                                                // 0b76 pop cx
  R.sp += 2; goto L_ret;                                       // 0b77 ret
L_ret:
  return;
}

static u16 f_sb15_0b5f(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0b5f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B67 FUN_1000_0b67  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0b67(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); SETL(R.ax, 0x7);                                // 0b67 mov al, 7
  R.si = (u16)(0x11cc);                                        // 0b69 mov si, 0x11cc
  PUSH(0x0b6f); a_sb15_0ac4();                                 // 0b6c call 0xac4
  ASM_COST(6); R.ax = (u16)(M16(CS, (u16)(0x11be)));           // 0b6f mov ax, word ptr cs:[0x11be]
  R.si = POP();                                                // 0b73 pop si
  R.di = POP();                                                // 0b74 pop di
  R.dx = POP();                                                // 0b75 pop dx
  R.cx = POP();                                                // 0b76 pop cx
  R.sp += 2; goto L_ret;                                       // 0b77 ret
L_ret:
  return;
}

static u16 f_sb15_0b67(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0b67();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B6F FUN_1000_0b6f  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0b6f(void)
{
  R.cs = sb15_seg;
  ASM_COST(6); R.ax = (u16)(M16(CS, (u16)(0x11be)));           // 0b6f mov ax, word ptr cs:[0x11be]
  R.si = POP();                                                // 0b73 pop si
  R.di = POP();                                                // 0b74 pop di
  R.dx = POP();                                                // 0b75 pop dx
  R.cx = POP();                                                // 0b76 pop cx
  R.sp += 2; goto L_ret;                                       // 0b77 ret
L_ret:
  return;
}

static u16 f_sb15_0b6f(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0b6f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B78 FUN_1000_0b78  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0b78(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); W16(CS, (u16)(0x11be), 0x2);                    // 0b78 mov word ptr cs:[0x11be], 2
  PUSH(0x0b82); a_sb15_0ba4();                                 // 0b7f call 0xba4
  ASM_COST(1); SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0b82 iret
L_ret:
  return;
}

static u16 f_sb15_0b78(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0b78();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B83 FUN_1000_0b83  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0b83(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); W16(CS, (u16)(0x11be), 0x3);                    // 0b83 mov word ptr cs:[0x11be], 3
  PUSH(0x0b8d); a_sb15_0ba4();                                 // 0b8a call 0xba4
  ASM_COST(1); SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0b8d iret
L_ret:
  return;
}

static u16 f_sb15_0b83(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0b83();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B8E FUN_1000_0b8e  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0b8e(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); W16(CS, (u16)(0x11be), 0x5);                    // 0b8e mov word ptr cs:[0x11be], 5
  PUSH(0x0b98); a_sb15_0ba4();                                 // 0b95 call 0xba4
  ASM_COST(1); SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0b98 iret
L_ret:
  return;
}

static u16 f_sb15_0b8e(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0b8e();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B99 FUN_1000_0b99  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0b99(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); W16(CS, (u16)(0x11be), 0x7);                    // 0b99 mov word ptr cs:[0x11be], 7
  PUSH(0x0ba3); a_sb15_0ba4();                                 // 0ba0 call 0xba4
  ASM_COST(1); SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0ba3 iret
L_ret:
  return;
}

static u16 f_sb15_0b99(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0b99();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0C75 FUN_1000_0c75  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0c75(void)
{
  R.cs = sb15_seg;
  ASM_COST(5); W8(CS, (u16)(0x11d4), (u8)R.dx);                // 0c75 mov byte ptr cs:[0x11d4], dl
  W16(CS, (u16)(0x11d5), R.ax);                                // 0c7a mov word ptr cs:[0x11d5], ax
  W8(CS, (u16)(0x11db), (u8)R.dx);                             // 0c7e mov byte ptr cs:[0x11db], dl
  W16(CS, (u16)(0x11dc), R.ax);                                // 0c83 mov word ptr cs:[0x11dc], ax
  PUSH(0x0c8a); a_sb15_0bf9();                                 // 0c87 call 0xbf9
  ASM_COST(5); W16(CS, (u16)(0x11de), R.cx);                   // 0c8a mov word ptr cs:[0x11de], cx
  SETL(R.ax, ASM_PORT_IN(0x21));                               // 0c8f in al, 0x21
  W8(CS, (u16)(0x11e9), (u8)R.ax);                             // 0c91 mov byte ptr cs:[0x11e9], al
  SETH(R.ax, 0x40);                                            // 0c95 mov ah, 0x40
  PUSH(0x0c9a); a_sb15_0a1d();                                 // 0c97 call 0xa1d
  ASM_COST(5); R.dx = (u16)(0xf);                              // 0c9a mov dx, 0xf
  R.ax = (u16)(0x4240);                                        // 0c9d mov ax, 0x4240
  R.cx = POP();                                                // 0ca0 pop cx
  SUB16(R.cx, 0xf43);                                          // 0ca1 cmp cx, 0xf43
  if (!R.cf) goto L_0caa;                                      // 0ca5 jae 0xcaa
  ASM_COST(1); R.cx = (u16)(0xf43);                            // 0ca7 mov cx, 0xf43
L_0caa:   ASM_COST(4); DIV16(R.cx, 0x0caa);                            // 0caa div cx
  SETL(R.ax, NEG8((u8)R.ax));                                  // 0cac neg al
  SETH(R.ax, (u8)R.ax);                                        // 0cae mov ah, al
  PUSH(0x0cb3); a_sb15_0a1d();                                 // 0cb0 call 0xa1d
  ASM_COST(4); R.ax = (u16)(M16(CS, (u16)(0x11be)));           // 0cb3 mov ax, word ptr cs:[0x11be]
  R.dx = (u16)(0xd19);                                         // 0cb7 mov dx, 0xd19
  R.di = (u16)(0x11d0);                                        // 0cba mov di, 0x11d0
  PUSH(0x0cc0); a_sb15_0a81();                                 // 0cbd call 0xa81
  ASM_COST(1); PUSH(0x0cc3); a_sb15_0bcc();                    // 0cc0 call 0xbcc
  ASM_COST(2); SUB16(R.si, 0x1);                               // 0cc3 cmp si, 1
  if (!R.zf) goto L_0cd2;                                      // 0cc6 jne 0xcd2
  ASM_COST(3); SETH(R.ax, 0x14);                               // 0cc8 mov ah, 0x14
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cca mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0ccf jmp 0xcff
L_0cd2:   ASM_COST(2); SUB16(R.si, 0x3);                               // 0cd2 cmp si, 3
  if (!R.zf) goto L_0ce1;                                      // 0cd5 jne 0xce1
  ASM_COST(3); SETH(R.ax, 0x75);                               // 0cd7 mov ah, 0x75
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cd9 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0cde jmp 0xcff
L_0ce1:   ASM_COST(2); SUB16(R.si, 0x4);                               // 0ce1 cmp si, 4
  if (!R.zf) goto L_0cf0;                                      // 0ce4 jne 0xcf0
  ASM_COST(3); SETH(R.ax, 0x77);                               // 0ce6 mov ah, 0x77
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0ce8 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0ced jmp 0xcff
L_0cf0:   ASM_COST(2); SUB16(R.si, 0x5);                               // 0cf0 cmp si, 5
  if (!R.zf) goto L_0cff;                                      // 0cf3 jne 0xcff
  ASM_COST(3); SETH(R.ax, 0x17);                               // 0cf5 mov ah, 0x17
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cf7 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0cfc jmp 0xcff
L_0cff:   ASM_COST(1); PUSH(0x0d02); a_sb15_0a1d();                    // 0cff call 0xa1d
  ASM_COST(3); R.cx = (u16)(M16(CS, (u16)(0x11de)));           // 0d02 mov cx, word ptr cs:[0x11de]
  SETH(R.ax, (u8)R.cx);                                        // 0d07 mov ah, cl
  PUSH(0x0d0c); a_sb15_0a1d();                                 // 0d09 call 0xa1d
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0d0c mov ah, ch
  PUSH(0x0d11); a_sb15_0a1d();                                 // 0d0e call 0xa1d
  ASM_COST(8); R.es = POP();                                   // 0d11 pop es
  R.si = POP();                                                // 0d12 pop si
  R.di = POP();                                                // 0d13 pop di
  R.dx = POP();                                                // 0d14 pop dx
  R.cx = POP();                                                // 0d15 pop cx
  R.bx = POP();                                                // 0d16 pop bx
  R.ax = POP();                                                // 0d17 pop ax
  R.sp += 2; goto L_ret;                                       // 0d18 ret
L_ret:
  return;
}

static u16 f_sb15_0c75(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0c75();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0C8A FUN_1000_0c8a  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0c8a(void)
{
  R.cs = sb15_seg;
  ASM_COST(5); W16(CS, (u16)(0x11de), R.cx);                   // 0c8a mov word ptr cs:[0x11de], cx
  SETL(R.ax, ASM_PORT_IN(0x21));                               // 0c8f in al, 0x21
  W8(CS, (u16)(0x11e9), (u8)R.ax);                             // 0c91 mov byte ptr cs:[0x11e9], al
  SETH(R.ax, 0x40);                                            // 0c95 mov ah, 0x40
  PUSH(0x0c9a); a_sb15_0a1d();                                 // 0c97 call 0xa1d
  ASM_COST(5); R.dx = (u16)(0xf);                              // 0c9a mov dx, 0xf
  R.ax = (u16)(0x4240);                                        // 0c9d mov ax, 0x4240
  R.cx = POP();                                                // 0ca0 pop cx
  SUB16(R.cx, 0xf43);                                          // 0ca1 cmp cx, 0xf43
  if (!R.cf) goto L_0caa;                                      // 0ca5 jae 0xcaa
  ASM_COST(1); R.cx = (u16)(0xf43);                            // 0ca7 mov cx, 0xf43
L_0caa:   ASM_COST(4); DIV16(R.cx, 0x0caa);                            // 0caa div cx
  SETL(R.ax, NEG8((u8)R.ax));                                  // 0cac neg al
  SETH(R.ax, (u8)R.ax);                                        // 0cae mov ah, al
  PUSH(0x0cb3); a_sb15_0a1d();                                 // 0cb0 call 0xa1d
  ASM_COST(4); R.ax = (u16)(M16(CS, (u16)(0x11be)));           // 0cb3 mov ax, word ptr cs:[0x11be]
  R.dx = (u16)(0xd19);                                         // 0cb7 mov dx, 0xd19
  R.di = (u16)(0x11d0);                                        // 0cba mov di, 0x11d0
  PUSH(0x0cc0); a_sb15_0a81();                                 // 0cbd call 0xa81
  ASM_COST(1); PUSH(0x0cc3); a_sb15_0bcc();                    // 0cc0 call 0xbcc
  ASM_COST(2); SUB16(R.si, 0x1);                               // 0cc3 cmp si, 1
  if (!R.zf) goto L_0cd2;                                      // 0cc6 jne 0xcd2
  ASM_COST(3); SETH(R.ax, 0x14);                               // 0cc8 mov ah, 0x14
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cca mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0ccf jmp 0xcff
L_0cd2:   ASM_COST(2); SUB16(R.si, 0x3);                               // 0cd2 cmp si, 3
  if (!R.zf) goto L_0ce1;                                      // 0cd5 jne 0xce1
  ASM_COST(3); SETH(R.ax, 0x75);                               // 0cd7 mov ah, 0x75
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cd9 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0cde jmp 0xcff
L_0ce1:   ASM_COST(2); SUB16(R.si, 0x4);                               // 0ce1 cmp si, 4
  if (!R.zf) goto L_0cf0;                                      // 0ce4 jne 0xcf0
  ASM_COST(3); SETH(R.ax, 0x77);                               // 0ce6 mov ah, 0x77
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0ce8 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0ced jmp 0xcff
L_0cf0:   ASM_COST(2); SUB16(R.si, 0x5);                               // 0cf0 cmp si, 5
  if (!R.zf) goto L_0cff;                                      // 0cf3 jne 0xcff
  ASM_COST(3); SETH(R.ax, 0x17);                               // 0cf5 mov ah, 0x17
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cf7 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0cfc jmp 0xcff
L_0cff:   ASM_COST(1); PUSH(0x0d02); a_sb15_0a1d();                    // 0cff call 0xa1d
  ASM_COST(3); R.cx = (u16)(M16(CS, (u16)(0x11de)));           // 0d02 mov cx, word ptr cs:[0x11de]
  SETH(R.ax, (u8)R.cx);                                        // 0d07 mov ah, cl
  PUSH(0x0d0c); a_sb15_0a1d();                                 // 0d09 call 0xa1d
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0d0c mov ah, ch
  PUSH(0x0d11); a_sb15_0a1d();                                 // 0d0e call 0xa1d
  ASM_COST(8); R.es = POP();                                   // 0d11 pop es
  R.si = POP();                                                // 0d12 pop si
  R.di = POP();                                                // 0d13 pop di
  R.dx = POP();                                                // 0d14 pop dx
  R.cx = POP();                                                // 0d15 pop cx
  R.bx = POP();                                                // 0d16 pop bx
  R.ax = POP();                                                // 0d17 pop ax
  R.sp += 2; goto L_ret;                                       // 0d18 ret
L_ret:
  return;
}

static u16 f_sb15_0c8a(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0c8a();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0CB3 FUN_1000_0cb3  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0cb3(void)
{
  R.cs = sb15_seg;
  ASM_COST(4); R.ax = (u16)(M16(CS, (u16)(0x11be)));           // 0cb3 mov ax, word ptr cs:[0x11be]
  R.dx = (u16)(0xd19);                                         // 0cb7 mov dx, 0xd19
  R.di = (u16)(0x11d0);                                        // 0cba mov di, 0x11d0
  PUSH(0x0cc0); a_sb15_0a81();                                 // 0cbd call 0xa81
  ASM_COST(1); PUSH(0x0cc3); a_sb15_0bcc();                    // 0cc0 call 0xbcc
  ASM_COST(2); SUB16(R.si, 0x1);                               // 0cc3 cmp si, 1
  if (!R.zf) goto L_0cd2;                                      // 0cc6 jne 0xcd2
  ASM_COST(3); SETH(R.ax, 0x14);                               // 0cc8 mov ah, 0x14
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cca mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0ccf jmp 0xcff
L_0cd2:   ASM_COST(2); SUB16(R.si, 0x3);                               // 0cd2 cmp si, 3
  if (!R.zf) goto L_0ce1;                                      // 0cd5 jne 0xce1
  ASM_COST(3); SETH(R.ax, 0x75);                               // 0cd7 mov ah, 0x75
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cd9 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0cde jmp 0xcff
L_0ce1:   ASM_COST(2); SUB16(R.si, 0x4);                               // 0ce1 cmp si, 4
  if (!R.zf) goto L_0cf0;                                      // 0ce4 jne 0xcf0
  ASM_COST(3); SETH(R.ax, 0x77);                               // 0ce6 mov ah, 0x77
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0ce8 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0ced jmp 0xcff
L_0cf0:   ASM_COST(2); SUB16(R.si, 0x5);                               // 0cf0 cmp si, 5
  if (!R.zf) goto L_0cff;                                      // 0cf3 jne 0xcff
  ASM_COST(3); SETH(R.ax, 0x17);                               // 0cf5 mov ah, 0x17
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cf7 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0cfc jmp 0xcff
L_0cff:   ASM_COST(1); PUSH(0x0d02); a_sb15_0a1d();                    // 0cff call 0xa1d
  ASM_COST(3); R.cx = (u16)(M16(CS, (u16)(0x11de)));           // 0d02 mov cx, word ptr cs:[0x11de]
  SETH(R.ax, (u8)R.cx);                                        // 0d07 mov ah, cl
  PUSH(0x0d0c); a_sb15_0a1d();                                 // 0d09 call 0xa1d
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0d0c mov ah, ch
  PUSH(0x0d11); a_sb15_0a1d();                                 // 0d0e call 0xa1d
  ASM_COST(8); R.es = POP();                                   // 0d11 pop es
  R.si = POP();                                                // 0d12 pop si
  R.di = POP();                                                // 0d13 pop di
  R.dx = POP();                                                // 0d14 pop dx
  R.cx = POP();                                                // 0d15 pop cx
  R.bx = POP();                                                // 0d16 pop bx
  R.ax = POP();                                                // 0d17 pop ax
  R.sp += 2; goto L_ret;                                       // 0d18 ret
L_ret:
  return;
}

static u16 f_sb15_0cb3(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0cb3();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0CC0 FUN_1000_0cc0  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0cc0(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); PUSH(0x0cc3); a_sb15_0bcc();                    // 0cc0 call 0xbcc
  ASM_COST(2); SUB16(R.si, 0x1);                               // 0cc3 cmp si, 1
  if (!R.zf) goto L_0cd2;                                      // 0cc6 jne 0xcd2
  ASM_COST(3); SETH(R.ax, 0x14);                               // 0cc8 mov ah, 0x14
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cca mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0ccf jmp 0xcff
L_0cd2:   ASM_COST(2); SUB16(R.si, 0x3);                               // 0cd2 cmp si, 3
  if (!R.zf) goto L_0ce1;                                      // 0cd5 jne 0xce1
  ASM_COST(3); SETH(R.ax, 0x75);                               // 0cd7 mov ah, 0x75
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cd9 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0cde jmp 0xcff
L_0ce1:   ASM_COST(2); SUB16(R.si, 0x4);                               // 0ce1 cmp si, 4
  if (!R.zf) goto L_0cf0;                                      // 0ce4 jne 0xcf0
  ASM_COST(3); SETH(R.ax, 0x77);                               // 0ce6 mov ah, 0x77
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0ce8 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0ced jmp 0xcff
L_0cf0:   ASM_COST(2); SUB16(R.si, 0x5);                               // 0cf0 cmp si, 5
  if (!R.zf) goto L_0cff;                                      // 0cf3 jne 0xcff
  ASM_COST(3); SETH(R.ax, 0x17);                               // 0cf5 mov ah, 0x17
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cf7 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0cfc jmp 0xcff
L_0cff:   ASM_COST(1); PUSH(0x0d02); a_sb15_0a1d();                    // 0cff call 0xa1d
  ASM_COST(3); R.cx = (u16)(M16(CS, (u16)(0x11de)));           // 0d02 mov cx, word ptr cs:[0x11de]
  SETH(R.ax, (u8)R.cx);                                        // 0d07 mov ah, cl
  PUSH(0x0d0c); a_sb15_0a1d();                                 // 0d09 call 0xa1d
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0d0c mov ah, ch
  PUSH(0x0d11); a_sb15_0a1d();                                 // 0d0e call 0xa1d
  ASM_COST(8); R.es = POP();                                   // 0d11 pop es
  R.si = POP();                                                // 0d12 pop si
  R.di = POP();                                                // 0d13 pop di
  R.dx = POP();                                                // 0d14 pop dx
  R.cx = POP();                                                // 0d15 pop cx
  R.bx = POP();                                                // 0d16 pop bx
  R.ax = POP();                                                // 0d17 pop ax
  R.sp += 2; goto L_ret;                                       // 0d18 ret
L_ret:
  return;
}

static u16 f_sb15_0cc0(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0cc0();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0CC3 FUN_1000_0cc3  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0cc3(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); SUB16(R.si, 0x1);                               // 0cc3 cmp si, 1
  if (!R.zf) goto L_0cd2;                                      // 0cc6 jne 0xcd2
  ASM_COST(3); SETH(R.ax, 0x14);                               // 0cc8 mov ah, 0x14
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cca mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0ccf jmp 0xcff
L_0cd2:   ASM_COST(2); SUB16(R.si, 0x3);                               // 0cd2 cmp si, 3
  if (!R.zf) goto L_0ce1;                                      // 0cd5 jne 0xce1
  ASM_COST(3); SETH(R.ax, 0x75);                               // 0cd7 mov ah, 0x75
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cd9 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0cde jmp 0xcff
L_0ce1:   ASM_COST(2); SUB16(R.si, 0x4);                               // 0ce1 cmp si, 4
  if (!R.zf) goto L_0cf0;                                      // 0ce4 jne 0xcf0
  ASM_COST(3); SETH(R.ax, 0x77);                               // 0ce6 mov ah, 0x77
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0ce8 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0ced jmp 0xcff
L_0cf0:   ASM_COST(2); SUB16(R.si, 0x5);                               // 0cf0 cmp si, 5
  if (!R.zf) goto L_0cff;                                      // 0cf3 jne 0xcff
  ASM_COST(3); SETH(R.ax, 0x17);                               // 0cf5 mov ah, 0x17
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cf7 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0cfc jmp 0xcff
L_0cff:   ASM_COST(1); PUSH(0x0d02); a_sb15_0a1d();                    // 0cff call 0xa1d
  ASM_COST(3); R.cx = (u16)(M16(CS, (u16)(0x11de)));           // 0d02 mov cx, word ptr cs:[0x11de]
  SETH(R.ax, (u8)R.cx);                                        // 0d07 mov ah, cl
  PUSH(0x0d0c); a_sb15_0a1d();                                 // 0d09 call 0xa1d
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0d0c mov ah, ch
  PUSH(0x0d11); a_sb15_0a1d();                                 // 0d0e call 0xa1d
  ASM_COST(8); R.es = POP();                                   // 0d11 pop es
  R.si = POP();                                                // 0d12 pop si
  R.di = POP();                                                // 0d13 pop di
  R.dx = POP();                                                // 0d14 pop dx
  R.cx = POP();                                                // 0d15 pop cx
  R.bx = POP();                                                // 0d16 pop bx
  R.ax = POP();                                                // 0d17 pop ax
  R.sp += 2; goto L_ret;                                       // 0d18 ret
L_ret:
  return;
}

static u16 f_sb15_0cc3(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0cc3();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0D02 FUN_1000_0d02  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0d02(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); R.cx = (u16)(M16(CS, (u16)(0x11de)));           // 0d02 mov cx, word ptr cs:[0x11de]
  SETH(R.ax, (u8)R.cx);                                        // 0d07 mov ah, cl
  PUSH(0x0d0c); a_sb15_0a1d();                                 // 0d09 call 0xa1d
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0d0c mov ah, ch
  PUSH(0x0d11); a_sb15_0a1d();                                 // 0d0e call 0xa1d
  ASM_COST(8); R.es = POP();                                   // 0d11 pop es
  R.si = POP();                                                // 0d12 pop si
  R.di = POP();                                                // 0d13 pop di
  R.dx = POP();                                                // 0d14 pop dx
  R.cx = POP();                                                // 0d15 pop cx
  R.bx = POP();                                                // 0d16 pop bx
  R.ax = POP();                                                // 0d17 pop ax
  R.sp += 2; goto L_ret;                                       // 0d18 ret
L_ret:
  return;
}

static u16 f_sb15_0d02(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0d02();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0D0C FUN_1000_0d0c  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0d0c(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0d0c mov ah, ch
  PUSH(0x0d11); a_sb15_0a1d();                                 // 0d0e call 0xa1d
  ASM_COST(8); R.es = POP();                                   // 0d11 pop es
  R.si = POP();                                                // 0d12 pop si
  R.di = POP();                                                // 0d13 pop di
  R.dx = POP();                                                // 0d14 pop dx
  R.cx = POP();                                                // 0d15 pop cx
  R.bx = POP();                                                // 0d16 pop bx
  R.ax = POP();                                                // 0d17 pop ax
  R.sp += 2; goto L_ret;                                       // 0d18 ret
L_ret:
  return;
}

static u16 f_sb15_0d0c(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0d0c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0D19 FUN_1000_0d19  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0d19(void)
{
  R.cs = sb15_seg;
  ASM_COST(11); PUSH(R.ax);                                    // 0d19 push ax
  PUSH(R.dx);                                                  // 0d1a push dx
  R.dx = (u16)(M16(CS, (u16)(0x11bc)));                        // 0d1b mov dx, word ptr cs:[0x11bc]
  SETL(R.dx, ADD8((u8)R.dx, 0xe));                             // 0d20 add dl, 0xe
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0d23 in al, dx
  SETL(R.ax, 0x20);                                            // 0d24 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0d26 out 0x20, al
  // 0d28 sti 
  R.ax = (u16)(M16(CS, (u16)(0x11e2)));                        // 0d29 mov ax, word ptr cs:[0x11e2]
  R.ax = (u16)(OR16(R.ax, M16(CS, (u16)(0x11e0))));            // 0d2d or ax, word ptr cs:[0x11e0]
  if (!R.zf) goto L_0d4d;                                      // 0d32 jne 0xd4d
  ASM_COST(2); SUB16(M16(CS, (u16)(0x11e7)), 0x0);             // 0d34 cmp word ptr cs:[0x11e7], 0
  if (R.zf) goto L_0d43;                                       // 0d3a je 0xd43
  ASM_COST(2); W16(CS, (u16)(0x11e7), DEC16(M16(CS, (u16)(0x11e7)))); // 0d3c dec word ptr cs:[0x11e7]
  if (R.zf) goto L_0d48;                                       // 0d41 je 0xd48
L_0d43:   ASM_COST(1); PUSH(0x0d46); a_sb15_0d8d();                    // 0d43 call 0xd8d
  ASM_COST(1); goto L_0d50;                                    // 0d46 jmp 0xd50
L_0d48:   ASM_COST(1); PUSH(0x0d4b); a_sb15_0dd4();                    // 0d48 call 0xdd4
  ASM_COST(1); goto L_0d50;                                    // 0d4b jmp 0xd50
L_0d4d:   ASM_COST(1); PUSH(0x0d50); a_sb15_0d53();                    // 0d4d call 0xd53
L_0d50:   ASM_COST(3); R.dx = POP();                                   // 0d50 pop dx
  R.ax = POP();                                                // 0d51 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0d52 iret
L_ret:
  return;
}

static u16 f_sb15_0d19(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0d19();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0E0D FUN_1000_0e0d  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0e0d(void)
{
  R.cs = sb15_seg;
  ASM_COST(7); SETL(R.ax, 0x5);                                // 0e0d mov al, 5
  ASM_PORT_OUT(0xa, (u8)R.ax);                                 // 0e0f out 0xa, al
  SETL(R.ax, M8(CS, (u16)(0x11e9)));                           // 0e11 mov al, byte ptr cs:[0x11e9]
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 0e15 out 0x21, al
  R.ax = (u16)(M16(CS, (u16)(0x11be)));                        // 0e17 mov ax, word ptr cs:[0x11be]
  R.si = (u16)(0x11d0);                                        // 0e1b mov si, 0x11d0
  PUSH(0x0e21); a_sb15_0ac4();                                 // 0e1e call 0xac4
  ASM_COST(8); R.dx = (u16)(M16(CS, (u16)(0x11bc)));           // 0e21 mov dx, word ptr cs:[0x11bc]
  SETL(R.dx, ADD8((u8)R.dx, 0xe));                             // 0e26 add dl, 0xe
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0e29 in al, dx
  W16(CS, (u16)(0x11e4), 0x1);                                 // 0e2a mov word ptr cs:[0x11e4], 1
  R.si = POP();                                                // 0e31 pop si
  R.dx = POP();                                                // 0e32 pop dx
  R.ax = POP();                                                // 0e33 pop ax
  R.sp += 2; goto L_ret;                                       // 0e34 ret
L_ret:
  return;
}

static u16 f_sb15_0e0d(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0e0d();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0E21 FUN_1000_0e21  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0e21(void)
{
  R.cs = sb15_seg;
  ASM_COST(8); R.dx = (u16)(M16(CS, (u16)(0x11bc)));           // 0e21 mov dx, word ptr cs:[0x11bc]
  SETL(R.dx, ADD8((u8)R.dx, 0xe));                             // 0e26 add dl, 0xe
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0e29 in al, dx
  W16(CS, (u16)(0x11e4), 0x1);                                 // 0e2a mov word ptr cs:[0x11e4], 1
  R.si = POP();                                                // 0e31 pop si
  R.dx = POP();                                                // 0e32 pop dx
  R.ax = POP();                                                // 0e33 pop ax
  R.sp += 2; goto L_ret;                                       // 0e34 ret
L_ret:
  return;
}

static u16 f_sb15_0e21(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0e21();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0E9D FUN_1000_0e9d  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0e9d(void)
{
  R.cs = sb15_seg;
  ASM_COST(9); PUSH(R.ax);                                     // 0e9d push ax
  PUSH(R.bx);                                                  // 0e9e push bx
  PUSH(R.ds);                                                  // 0e9f push ds
  PUSH(R.cs);                                                  // 0ea0 push cs
  { u16 a_ = (u16)(0x11ee); R.bx = (u16)(M16(CS, a_)); R.ds = M16(CS, (u16)(a_ + 2)); } // 0ea1 lds bx, ptr cs:[0x11ee]
  SETL(R.ax, M8(DS, (u16)(R.bx)));                             // 0ea6 mov al, byte ptr [bx]
  R.ds = POP();                                                // 0ea8 pop ds
  SUB16(R.bx, M16(DS, (u16)(0x11f2)));                         // 0ea9 cmp bx, word ptr [0x11f2]
  if (!R.cf) goto L_0ef8;                                      // 0ead jae 0xef8
  ASM_COST(6); R.bx = (u16)(INC16(R.bx));                      // 0eaf inc bx
  W16(DS, (u16)(0x11ee), R.bx);                                // 0eb0 mov word ptr [0x11ee], bx
  R.bx = (u16)((u16)(0x121b));                                 // 0eb4 lea bx, [0x121b]
  SETL(R.ax, M8(DS, (u16)(R.bx + (u8)R.ax)));                  // 0eb8 xlatb
  SUB8((u8)R.ax, M8(DS, (u16)(0x11f8)));                       // 0eb9 cmp al, byte ptr [0x11f8]
  if (R.zf) goto L_0edc;                                       // 0ebd je 0xedc
  ASM_COST(8); W8(DS, (u16)(0x11f8), (u8)R.ax);                // 0ebf mov byte ptr [0x11f8], al
  SETH(R.ax, (u8)R.ax);                                        // 0ec2 mov ah, al
  R.bx = (u16)(R.dx);                                          // 0ec4 mov bx, dx
  SETL(R.ax, 0x40);                                            // 0ec6 mov al, 0x40
  R.dx = (u16)(M16(DS, (u16)(0x960)));                         // 0ec8 mov dx, word ptr [0x960]
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0ecc out dx, al
  PUSH(R.cx);                                                  // 0ecd push cx
  R.cx = (u16)(M16(DS, (u16)(0x964)));                         // 0ece mov cx, word ptr [0x964]
L_0ed2:   ASM_COST(2); SETL(R.ax, ASM_PORT_IN(R.dx));                  // 0ed2 in al, dx
  if (--R.cx != 0) { ASM_BACK(); goto L_0ed2; }                // 0ed3 loop 0xed2
  ASM_COST(5); R.cx = POP();                                   // 0ed5 pop cx
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 0ed6 mov al, ah
  R.dx = (u16)(INC16(R.dx));                                   // 0ed8 inc dx
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0ed9 out dx, al
  R.dx = (u16)(R.bx);                                          // 0eda mov dx, bx
L_0edc:   ASM_COST(2); W16(DS, (u16)(0x1202), DEC16(M16(DS, (u16)(0x1202)))); // 0edc dec word ptr [0x1202]
  if (R.zf) goto L_0eea;                                       // 0ee0 je 0xeea
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0ee2 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0ee4 out 0x20, al
  R.ds = POP();                                                // 0ee6 pop ds
  R.bx = POP();                                                // 0ee7 pop bx
  R.ax = POP();                                                // 0ee8 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0ee9 iret
L_0eea:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0x1200)));           // 0eea mov ax, word ptr [0x1200]
  W16(DS, (u16)(0x1202), R.ax);                                // 0eed mov word ptr [0x1202], ax
  R.ds = POP();                                                // 0ef0 pop ds
  R.bx = POP();                                                // 0ef1 pop bx
  R.ax = POP();                                                // 0ef2 pop ax
  { u16 o_ = M16(CS, (u16)(0x11fa)), s_ = M16(CS, (u16)((u16)(0x11fa) + 2)); asm_far_jump(s_, o_); } return; // 0ef3 ljmp cs:[0x11fa]
L_0ef8:   ASM_COST(4); R.ax = (u16)(M16(DS, (u16)(0x11ea)));           // 0ef8 mov ax, word ptr [0x11ea]
  W16(DS, (u16)(0x11ee), R.ax);                                // 0efb mov word ptr [0x11ee], ax
  SUB8(M8(DS, (u16)(0x11f6)), 0x0);                            // 0efe cmp byte ptr [0x11f6], 0
  if (R.zf) { ASM_BACK(); goto L_0edc; }                       // 0f03 je 0xedc
  ASM_COST(2); W8(DS, (u16)(0x11f6), DEC8(M8(DS, (u16)(0x11f6)))); // 0f05 dec byte ptr [0x11f6]
  if (!R.zf) { ASM_BACK(); goto L_0edc; }                      // 0f09 jne 0xedc
  ASM_COST(18); R.ax = (u16)(0x1);                             // 0f0b mov ax, 1
  W16(DS, (u16)(0x1206), R.ax);                                // 0f0e mov word ptr [0x1206], ax
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0f11 xor ax, ax
  PUSH(R.ds);                                                  // 0f13 push ds
  R.ds = (u16)(R.ax);                                          // 0f14 mov ds, ax
  R.ax = (u16)(M16(CS, (u16)(0x11fa)));                        // 0f16 mov ax, word ptr cs:[0x11fa]
  R.bx = (u16)(M16(CS, (u16)(0x11fc)));                        // 0f1a mov bx, word ptr cs:[0x11fc]
  W16(DS, (u16)(0x20), R.ax);                                  // 0f1f mov word ptr [0x20], ax
  W16(DS, (u16)(0x22), R.bx);                                  // 0f22 mov word ptr [0x22], bx
  R.ds = POP();                                                // 0f26 pop ds
  SETL(R.ax, 0x36);                                            // 0f27 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0f29 out 0x43, al
  SETL(R.ax, M8(DS, (u16)(0x11fe)));                           // 0f2b mov al, byte ptr [0x11fe]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0f2e out 0x40, al
  SETL(R.ax, M8(DS, (u16)(0x11ff)));                           // 0f30 mov al, byte ptr [0x11ff]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0f33 out 0x40, al
  R.ax = (u16)(0xb001);                                        // 0f35 mov ax, 0xb001
  PUSH(0x0f3b); a_sb15_07cb();                                 // 0f38 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x4001);                           // 0f3b mov ax, 0x4001
  PUSH(0x0f41); a_sb15_07cb();                                 // 0f3e call 0x7cb
  ASM_COST(2); R.ax = (u16)(XOR16(R.ax, R.ax));                // 0f41 xor ax, ax
  PUSH(0x0f46); a_sb15_07cb();                                 // 0f43 call 0x7cb
  ASM_COST(1); ASM_BACK(); goto L_0edc;                        // 0f46 jmp 0xedc
L_ret:
  return;
}

static u16 f_sb15_0e9d(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0e9d();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0F43 FUN_1000_0f43  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0f43(void)
{
  R.cs = sb15_seg;
  goto L_0f43;
L_0edc:   ASM_COST(2); W16(DS, (u16)(0x1202), DEC16(M16(DS, (u16)(0x1202)))); // 0edc dec word ptr [0x1202]
  if (R.zf) goto L_0eea;                                       // 0ee0 je 0xeea
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0ee2 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0ee4 out 0x20, al
  R.ds = POP();                                                // 0ee6 pop ds
  R.bx = POP();                                                // 0ee7 pop bx
  R.ax = POP();                                                // 0ee8 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0ee9 iret
L_0eea:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0x1200)));           // 0eea mov ax, word ptr [0x1200]
  W16(DS, (u16)(0x1202), R.ax);                                // 0eed mov word ptr [0x1202], ax
  R.ds = POP();                                                // 0ef0 pop ds
  R.bx = POP();                                                // 0ef1 pop bx
  R.ax = POP();                                                // 0ef2 pop ax
  { u16 o_ = M16(CS, (u16)(0x11fa)), s_ = M16(CS, (u16)((u16)(0x11fa) + 2)); asm_far_jump(s_, o_); } return; // 0ef3 ljmp cs:[0x11fa]
L_0f43:   ASM_COST(1); PUSH(0x0f46); a_sb15_07cb();                    // 0f43 call 0x7cb
  ASM_COST(1); ASM_BACK(); goto L_0edc;                        // 0f46 jmp 0xedc
L_ret:
  return;
}

static u16 f_sb15_0f43(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0f43();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0F48 FUN_1000_0f48  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0f48(void)
{
  R.cs = sb15_seg;
  ASM_COST(6); PUSH(R.ax);                                     // 0f48 push ax
  PUSH(R.bx);                                                  // 0f49 push bx
  PUSH(R.ds);                                                  // 0f4a push ds
  PUSH(R.cs);                                                  // 0f4b push cs
  W8(CS, (u16)(0x1218), XOR8(M8(CS, (u16)(0x1218)), 0xff));    // 0f4c xor byte ptr cs:[0x1218], 0xff
  if (!R.zf) goto L_0f5a;                                      // 0f52 jne 0xf5a
  ASM_COST(3); R.ds = POP();                                   // 0f54 pop ds
  SETL(R.ax, M8(DS, (u16)(0x1219)));                           // 0f55 mov al, byte ptr [0x1219]
  goto L_0f78;                                                 // 0f58 jmp 0xf78
L_0f5a:   ASM_COST(5); { u16 a_ = (u16)(0x11ee); R.bx = (u16)(M16(CS, a_)); R.ds = M16(CS, (u16)(a_ + 2)); } // 0f5a lds bx, ptr cs:[0x11ee]
  SETL(R.ax, M8(DS, (u16)(R.bx)));                             // 0f5f mov al, byte ptr [bx]
  R.ds = POP();                                                // 0f61 pop ds
  SUB16(R.bx, M16(DS, (u16)(0x11f2)));                         // 0f62 cmp bx, word ptr [0x11f2]
  if (!R.cf) goto L_0fca;                                      // 0f66 jae 0xfca
  ASM_COST(7); R.bx = (u16)(INC16(R.bx));                      // 0f68 inc bx
  W16(DS, (u16)(0x11ee), R.bx);                                // 0f69 mov word ptr [0x11ee], bx
  W8(DS, (u16)(0x1219), (u8)R.ax);                             // 0f6d mov byte ptr [0x1219], al
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 0f70 shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 0f72 shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 0f74 shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 0f76 shr al, 1
L_0f78:   ASM_COST(9); R.ax = (u16)(AND16(R.ax, 0xf));                 // 0f78 and ax, 0xf
  R.bx = (u16)((u16)(0x1208));                                 // 0f7b lea bx, [0x1208]
  SETL(R.ax, M8(DS, (u16)(R.bx + (u8)R.ax)));                  // 0f7f xlatb
  SETL(R.ax, ADD8((u8)R.ax, M8(DS, (u16)(0x121a))));           // 0f80 add al, byte ptr [0x121a]
  W8(DS, (u16)(0x121a), (u8)R.ax);                             // 0f84 mov byte ptr [0x121a], al
  R.bx = (u16)((u16)(0x121b));                                 // 0f87 lea bx, [0x121b]
  SETL(R.ax, M8(DS, (u16)(R.bx + (u8)R.ax)));                  // 0f8b xlatb
  SUB8((u8)R.ax, M8(DS, (u16)(0x11f8)));                       // 0f8c cmp al, byte ptr [0x11f8]
  if (R.zf) goto L_0fae;                                       // 0f90 je 0xfae
  ASM_COST(8); W8(DS, (u16)(0x11f8), (u8)R.ax);                // 0f92 mov byte ptr [0x11f8], al
  SETH(R.ax, (u8)R.ax);                                        // 0f95 mov ah, al
  R.bx = (u16)(R.dx);                                          // 0f97 mov bx, dx
  SETL(R.ax, 0x40);                                            // 0f99 mov al, 0x40
  R.dx = (u16)(M16(DS, (u16)(0x960)));                         // 0f9b mov dx, word ptr [0x960]
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0f9f out dx, al
  PUSH(R.cx);                                                  // 0fa0 push cx
  R.cx = (u16)(0x5);                                           // 0fa1 mov cx, 5
L_0fa4:   ASM_COST(2); SETL(R.ax, ASM_PORT_IN(R.dx));                  // 0fa4 in al, dx
  if (--R.cx != 0) { ASM_BACK(); goto L_0fa4; }                // 0fa5 loop 0xfa4
  ASM_COST(5); R.cx = POP();                                   // 0fa7 pop cx
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 0fa8 mov al, ah
  R.dx = (u16)(INC16(R.dx));                                   // 0faa inc dx
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0fab out dx, al
  R.dx = (u16)(R.bx);                                          // 0fac mov dx, bx
L_0fae:   ASM_COST(2); W16(DS, (u16)(0x1202), DEC16(M16(DS, (u16)(0x1202)))); // 0fae dec word ptr [0x1202]
  if (R.zf) goto L_0fbc;                                       // 0fb2 je 0xfbc
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0fb4 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0fb6 out 0x20, al
  R.ds = POP();                                                // 0fb8 pop ds
  R.bx = POP();                                                // 0fb9 pop bx
  R.ax = POP();                                                // 0fba pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0fbb iret
L_0fbc:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0x1200)));           // 0fbc mov ax, word ptr [0x1200]
  W16(DS, (u16)(0x1202), R.ax);                                // 0fbf mov word ptr [0x1202], ax
  R.ds = POP();                                                // 0fc2 pop ds
  R.bx = POP();                                                // 0fc3 pop bx
  R.ax = POP();                                                // 0fc4 pop ax
  { u16 o_ = M16(CS, (u16)(0x11fa)), s_ = M16(CS, (u16)((u16)(0x11fa) + 2)); asm_far_jump(s_, o_); } return; // 0fc5 ljmp cs:[0x11fa]
L_0fca:   ASM_COST(12); { u16 a_ = (u16)(0x11ea); R.bx = (u16)(M16(DS, a_)); R.ds = M16(DS, (u16)(a_ + 2)); } // 0fca lds bx, ptr [0x11ea]
  SETL(R.ax, M8(DS, (u16)(R.bx)));                             // 0fce mov al, byte ptr [bx]
  PUSH(R.cs);                                                  // 0fd0 push cs
  R.ds = POP();                                                // 0fd1 pop ds
  W8(DS, (u16)(0x1219), (u8)R.ax);                             // 0fd2 mov byte ptr [0x1219], al
  W8(DS, (u16)(0x121a), (u8)R.ax);                             // 0fd5 mov byte ptr [0x121a], al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0fd8 xor al, al
  W8(DS, (u16)(0x1218), (u8)R.ax);                             // 0fda mov byte ptr [0x1218], al
  R.bx = (u16)(INC16(R.bx));                                   // 0fdd inc bx
  W16(DS, (u16)(0x11ee), R.bx);                                // 0fde mov word ptr [0x11ee], bx
  SUB8(M8(DS, (u16)(0x11f6)), 0x0);                            // 0fe2 cmp byte ptr [0x11f6], 0
  if (R.zf) { ASM_BACK(); goto L_0fae; }                       // 0fe7 je 0xfae
  ASM_COST(2); W8(DS, (u16)(0x11f6), DEC8(M8(DS, (u16)(0x11f6)))); // 0fe9 dec byte ptr [0x11f6]
  if (!R.zf) { ASM_BACK(); goto L_0fae; }                      // 0fed jne 0xfae
  ASM_COST(18); R.ax = (u16)(0x1);                             // 0fef mov ax, 1
  W16(DS, (u16)(0x1206), R.ax);                                // 0ff2 mov word ptr [0x1206], ax
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0ff5 xor ax, ax
  PUSH(R.ds);                                                  // 0ff7 push ds
  R.ds = (u16)(R.ax);                                          // 0ff8 mov ds, ax
  R.ax = (u16)(M16(CS, (u16)(0x11fa)));                        // 0ffa mov ax, word ptr cs:[0x11fa]
  R.bx = (u16)(M16(CS, (u16)(0x11fc)));                        // 0ffe mov bx, word ptr cs:[0x11fc]
  W16(DS, (u16)(0x20), R.ax);                                  // 1003 mov word ptr [0x20], ax
  W16(DS, (u16)(0x22), R.bx);                                  // 1006 mov word ptr [0x22], bx
  R.ds = POP();                                                // 100a pop ds
  SETL(R.ax, 0x36);                                            // 100b mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 100d out 0x43, al
  SETL(R.ax, M8(DS, (u16)(0x11fe)));                           // 100f mov al, byte ptr [0x11fe]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1012 out 0x40, al
  SETL(R.ax, M8(DS, (u16)(0x11ff)));                           // 1014 mov al, byte ptr [0x11ff]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1017 out 0x40, al
  R.ax = (u16)(0xb001);                                        // 1019 mov ax, 0xb001
  PUSH(0x101f); a_sb15_07cb();                                 // 101c call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x4001);                           // 101f mov ax, 0x4001
  PUSH(0x1025); a_sb15_07cb();                                 // 1022 call 0x7cb
  ASM_COST(2); R.ax = (u16)(XOR16(R.ax, R.ax));                // 1025 xor ax, ax
  PUSH(0x102a); a_sb15_07cb();                                 // 1027 call 0x7cb
  ASM_COST(1); ASM_BACK(); goto L_0fae;                        // 102a jmp 0xfae
L_ret:
  return;
}

static u16 f_sb15_0f48(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0f48();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0FA0 FUN_1000_0fa0  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0fa0(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); PUSH(R.cx);                                     // 0fa0 push cx
  R.cx = (u16)(0x5);                                           // 0fa1 mov cx, 5
L_0fa4:   ASM_COST(2); SETL(R.ax, ASM_PORT_IN(R.dx));                  // 0fa4 in al, dx
  if (--R.cx != 0) { ASM_BACK(); goto L_0fa4; }                // 0fa5 loop 0xfa4
  ASM_COST(7); R.cx = POP();                                   // 0fa7 pop cx
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 0fa8 mov al, ah
  R.dx = (u16)(INC16(R.dx));                                   // 0faa inc dx
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0fab out dx, al
  R.dx = (u16)(R.bx);                                          // 0fac mov dx, bx
  W16(DS, (u16)(0x1202), DEC16(M16(DS, (u16)(0x1202))));       // 0fae dec word ptr [0x1202]
  if (R.zf) goto L_0fbc;                                       // 0fb2 je 0xfbc
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0fb4 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0fb6 out 0x20, al
  R.ds = POP();                                                // 0fb8 pop ds
  R.bx = POP();                                                // 0fb9 pop bx
  R.ax = POP();                                                // 0fba pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0fbb iret
L_0fbc:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0x1200)));           // 0fbc mov ax, word ptr [0x1200]
  W16(DS, (u16)(0x1202), R.ax);                                // 0fbf mov word ptr [0x1202], ax
  R.ds = POP();                                                // 0fc2 pop ds
  R.bx = POP();                                                // 0fc3 pop bx
  R.ax = POP();                                                // 0fc4 pop ax
  { u16 o_ = M16(CS, (u16)(0x11fa)), s_ = M16(CS, (u16)((u16)(0x11fa) + 2)); asm_far_jump(s_, o_); } return; // 0fc5 ljmp cs:[0x11fa]
L_ret:
  return;
}

static u16 f_sb15_0fa0(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0fa0();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:1000 FUN_1000_1000  FIX: recompiled from the machine code (asm2c)
static void a_sb15_1000(void)
{
  R.cs = sb15_seg;
  goto L_1000;
L_0fae:   ASM_COST(2); W16(DS, (u16)(0x1202), DEC16(M16(DS, (u16)(0x1202)))); // 0fae dec word ptr [0x1202]
  if (R.zf) goto L_0fbc;                                       // 0fb2 je 0xfbc
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0fb4 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0fb6 out 0x20, al
  R.ds = POP();                                                // 0fb8 pop ds
  R.bx = POP();                                                // 0fb9 pop bx
  R.ax = POP();                                                // 0fba pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0fbb iret
L_0fbc:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0x1200)));           // 0fbc mov ax, word ptr [0x1200]
  W16(DS, (u16)(0x1202), R.ax);                                // 0fbf mov word ptr [0x1202], ax
  R.ds = POP();                                                // 0fc2 pop ds
  R.bx = POP();                                                // 0fc3 pop bx
  R.ax = POP();                                                // 0fc4 pop ax
  { u16 o_ = M16(CS, (u16)(0x11fa)), s_ = M16(CS, (u16)((u16)(0x11fa) + 2)); asm_far_jump(s_, o_); } return; // 0fc5 ljmp cs:[0x11fa]
L_1000:   ASM_COST(13); PUSH(R.ds);                                    // 1000 push ds
  R.df = 0;                                                    // 1001 cld
  W16(SS, (u16)(R.bp + R.di + 0x20), ADC16(M16(SS, (u16)(R.bp + R.di + 0x20)), R.sp)); // 1002 adc word ptr [bp + di + 0x20], sp
  W16(DS, (u16)(0x22), R.bx);                                  // 1006 mov word ptr [0x22], bx
  R.ds = POP();                                                // 100a pop ds
  SETL(R.ax, 0x36);                                            // 100b mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 100d out 0x43, al
  SETL(R.ax, M8(DS, (u16)(0x11fe)));                           // 100f mov al, byte ptr [0x11fe]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1012 out 0x40, al
  SETL(R.ax, M8(DS, (u16)(0x11ff)));                           // 1014 mov al, byte ptr [0x11ff]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1017 out 0x40, al
  R.ax = (u16)(0xb001);                                        // 1019 mov ax, 0xb001
  PUSH(0x101f); a_sb15_07cb();                                 // 101c call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x4001);                           // 101f mov ax, 0x4001
  PUSH(0x1025); a_sb15_07cb();                                 // 1022 call 0x7cb
  ASM_COST(2); R.ax = (u16)(XOR16(R.ax, R.ax));                // 1025 xor ax, ax
  PUSH(0x102a); a_sb15_07cb();                                 // 1027 call 0x7cb
  ASM_COST(1); ASM_BACK(); goto L_0fae;                        // 102a jmp 0xfae
L_ret:
  return;
}

static u16 f_sb15_1000(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_1000();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:106A FUN_1000_106a  FIX: recompiled from the machine code (asm2c)
static void a_sb15_106a(void)
{
  R.cs = sb15_seg;
  ASM_COST(10);                                                // 106a cli
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 106b xor ax, ax
  W16(DS, (u16)(0x1206), R.ax);                                // 106d mov word ptr [0x1206], ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xe)));                    // 1070 mov ax, word ptr [bp + 0xe]
  W8(DS, (u16)(0x11f6), (u8)R.ax);                             // 1073 mov byte ptr [0x11f6], al
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 1076 les bx, ptr [bp + 8]
  R.ax = (u16)((u16)(R.bx + 0x32));                            // 1079 lea ax, [bx + 0x32]
  R.cx = (u16)(R.ax);                                          // 107c mov cx, ax
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 107e cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_109a;                                      // 1083 jne 0x109a
  ASM_COST(11); PUSH(R.ax);                                    // 1085 push ax
  PUSH(R.bx);                                                  // 1086 push bx
  R.bx = (u16)(R.ax);                                          // 1087 mov bx, ax
  SETL(R.ax, M8(ES, (u16)(R.bx)));                             // 1089 mov al, byte ptr es:[bx]
  W8(DS, (u16)(0x1219), (u8)R.ax);                             // 108c mov byte ptr [0x1219], al
  W8(DS, (u16)(0x121a), (u8)R.ax);                             // 108f mov byte ptr [0x121a], al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 1092 xor al, al
  W8(DS, (u16)(0x1218), (u8)R.ax);                             // 1094 mov byte ptr [0x1218], al
  R.bx = POP();                                                // 1097 pop bx
  R.ax = POP();                                                // 1098 pop ax
  R.cx = (u16)(INC16(R.cx));                                   // 1099 inc cx
L_109a:   ASM_COST(7); W16(DS, (u16)(0x11ea), R.ax);                   // 109a mov word ptr [0x11ea], ax
  W16(DS, (u16)(0x11ec), R.es);                                // 109d mov word ptr [0x11ec], es
  W16(DS, (u16)(0x11ee), R.cx);                                // 10a1 mov word ptr [0x11ee], cx
  W16(DS, (u16)(0x11f0), R.es);                                // 10a5 mov word ptr [0x11f0], es
  { u16 a_ = (u16)(R.bx + 0x8); R.cx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 10a9 les cx, ptr es:[bx + 8]
  SUB16(R.cx, 0x0);                                            // 10ad cmp cx, 0
  if (!R.zf) goto L_10be;                                      // 10b0 jne 0x10be
  ASM_COST(8); R.ax = (u16)(0x1);                              // 10b2 mov ax, 1
  W16(DS, (u16)(0x1206), R.ax);                                // 10b5 mov word ptr [0x1206], ax
  // 10b8 sti 
  R.ds = POP();                                                // 10b9 pop ds
  R.di = POP();                                                // 10ba pop di
  R.si = POP();                                                // 10bb pop si
  R.bp = POP();                                                // 10bc pop bp
  R.sp += 4; goto L_ret;                                       // 10bd retf
L_10be:   ASM_COST(15); R.cx = (u16)(ADD16(R.cx, R.ax));               // 10be add cx, ax
  R.cx = (u16)(DEC16(R.cx));                                   // 10c0 dec cx
  W16(CS, (u16)(0x11f2), R.cx);                                // 10c1 mov word ptr cs:[0x11f2], cx
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 10c6 xor ax, ax
  R.es = (u16)(R.ax);                                          // 10c8 mov es, ax
  R.ax = (u16)(M16(ES, (u16)(0x20)));                          // 10ca mov ax, word ptr es:[0x20]
  R.dx = (u16)(M16(ES, (u16)(0x22)));                          // 10ce mov dx, word ptr es:[0x22]
  W16(DS, (u16)(0x11fa), R.ax);                                // 10d3 mov word ptr [0x11fa], ax
  W16(DS, (u16)(0x11fc), R.dx);                                // 10d6 mov word ptr [0x11fc], dx
  PUSH(R.es);                                                  // 10da push es
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 10db les bx, ptr [bp + 8]
  R.ax = (u16)(0xe9d);                                         // 10de mov ax, 0xe9d
  R.dx = (u16)(R.cs);                                          // 10e1 mov dx, cs
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 10e3 cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_10ef;                                      // 10e8 jne 0x10ef
  ASM_COST(2); R.ax = (u16)(0xf48);                            // 10ea mov ax, 0xf48
  R.dx = (u16)(R.cs);                                          // 10ed mov dx, cs
L_10ef:   ASM_COST(5); R.es = POP();                                   // 10ef pop es
  W16(ES, (u16)(0x20), R.ax);                                  // 10f0 mov word ptr es:[0x20], ax
  W16(ES, (u16)(0x22), R.dx);                                  // 10f4 mov word ptr es:[0x22], dx
  R.ax = (u16)(0x120);                                         // 10f9 mov ax, 0x120
  PUSH(0x10ff); a_sb15_07cb();                                 // 10fc call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x2021);                           // 10ff mov ax, 0x2021
  PUSH(0x1105); a_sb15_07cb();                                 // 1102 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x60f0);                           // 1105 mov ax, 0x60f0
  PUSH(0x110b); a_sb15_07cb();                                 // 1108 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x80f0);                           // 110b mov ax, 0x80f0
  PUSH(0x1111); a_sb15_07cb();                                 // 110e call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xc001);                           // 1111 mov ax, 0xc001
  PUSH(0x1117); a_sb15_07cb();                                 // 1114 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xe000);                           // 1117 mov ax, 0xe000
  PUSH(0x111d); a_sb15_07cb();                                 // 111a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 111d mov ax, 0x433f
  PUSH(0x1123); a_sb15_07cb();                                 // 1120 call 0x7cb
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 1123 mov ax, 0xb001
  // 1126 cli 
  R.ax = (u16)(0xa08f);                                        // 1127 mov ax, 0xa08f
  PUSH(0x112d); a_sb15_07cb();                                 // 112a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 112d mov ax, 0xb02e
  PUSH(0x1133); a_sb15_07cb();                                 // 1130 call 0x7cb
  ASM_COST(5); SETL(R.ax, 0x36);                               // 1133 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 1135 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 1137 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1139 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 113b out 0x40, al
L_113d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 113d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 113f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1141 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 1143 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1145 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 1147 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 1149 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_113d; }      // 114d jg 0x113d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 114f mov ax, 0xb020
  PUSH(0x1155); a_sb15_07cb();                                 // 1152 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 1155 mov ax, 0xa000
  PUSH(0x115b); a_sb15_07cb();                                 // 1158 call 0x7cb
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 115b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 115e cmp bx, 0x64
  if (!R.cf) goto L_1168;                                      // 1161 jae 0x1168
  ASM_COST(2); R.bx = (u16)(0x64);                             // 1163 mov bx, 0x64
  goto L_1171;                                                 // 1166 jmp 0x1171
L_1168:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 1168 cmp bx, 0x4e20
  if (R.cf) goto L_1171;                                       // 116c jb 0x1171
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 116e mov bx, 0x4e20
L_1171:   ASM_COST(22); R.dx = (u16)(0x12);                            // 1171 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 1174 mov ax, 0x34dc
  DIV16(R.bx, 0x1177);                                         // 1177 div bx
  R.bx = (u16)(R.ax);                                          // 1179 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x11fe)));                        // 117b mov ax, word ptr [0x11fe]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 117e xor dx, dx
  DIV16(R.bx, 0x1180);                                         // 1180 div bx
  W16(DS, (u16)(0x1200), R.ax);                                // 1182 mov word ptr [0x1200], ax
  W16(DS, (u16)(0x1202), R.ax);                                // 1185 mov word ptr [0x1202], ax
  W16(DS, (u16)(0x11f4), R.bx);                                // 1188 mov word ptr [0x11f4], bx
  SETL(R.ax, 0x36);                                            // 118c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 118e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 1190 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1192 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 1194 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1196 out 0x40, al
  // 1198 sti 
  R.ds = POP();                                                // 1199 pop ds
  R.di = POP();                                                // 119a pop di
  R.si = POP();                                                // 119b pop si
  R.bp = POP();                                                // 119c pop bp
  R.sp += 4; goto L_ret;                                       // 119d retf
L_ret:
  return;
}

static u16 f_sb15_106a(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4)
{
  ASM_ENTER();
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_106a();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:10FF FUN_1000_10ff  FIX: recompiled from the machine code (asm2c)
static void a_sb15_10ff(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); R.ax = (u16)(0x2021);                           // 10ff mov ax, 0x2021
  PUSH(0x1105); a_sb15_07cb();                                 // 1102 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x60f0);                           // 1105 mov ax, 0x60f0
  PUSH(0x110b); a_sb15_07cb();                                 // 1108 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x80f0);                           // 110b mov ax, 0x80f0
  PUSH(0x1111); a_sb15_07cb();                                 // 110e call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xc001);                           // 1111 mov ax, 0xc001
  PUSH(0x1117); a_sb15_07cb();                                 // 1114 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xe000);                           // 1117 mov ax, 0xe000
  PUSH(0x111d); a_sb15_07cb();                                 // 111a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 111d mov ax, 0x433f
  PUSH(0x1123); a_sb15_07cb();                                 // 1120 call 0x7cb
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 1123 mov ax, 0xb001
  // 1126 cli 
  R.ax = (u16)(0xa08f);                                        // 1127 mov ax, 0xa08f
  PUSH(0x112d); a_sb15_07cb();                                 // 112a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 112d mov ax, 0xb02e
  PUSH(0x1133); a_sb15_07cb();                                 // 1130 call 0x7cb
  ASM_COST(5); SETL(R.ax, 0x36);                               // 1133 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 1135 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 1137 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1139 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 113b out 0x40, al
L_113d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 113d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 113f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1141 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 1143 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1145 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 1147 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 1149 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_113d; }      // 114d jg 0x113d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 114f mov ax, 0xb020
  PUSH(0x1155); a_sb15_07cb();                                 // 1152 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 1155 mov ax, 0xa000
  PUSH(0x115b); a_sb15_07cb();                                 // 1158 call 0x7cb
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 115b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 115e cmp bx, 0x64
  if (!R.cf) goto L_1168;                                      // 1161 jae 0x1168
  ASM_COST(2); R.bx = (u16)(0x64);                             // 1163 mov bx, 0x64
  goto L_1171;                                                 // 1166 jmp 0x1171
L_1168:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 1168 cmp bx, 0x4e20
  if (R.cf) goto L_1171;                                       // 116c jb 0x1171
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 116e mov bx, 0x4e20
L_1171:   ASM_COST(22); R.dx = (u16)(0x12);                            // 1171 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 1174 mov ax, 0x34dc
  DIV16(R.bx, 0x1177);                                         // 1177 div bx
  R.bx = (u16)(R.ax);                                          // 1179 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x11fe)));                        // 117b mov ax, word ptr [0x11fe]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 117e xor dx, dx
  DIV16(R.bx, 0x1180);                                         // 1180 div bx
  W16(DS, (u16)(0x1200), R.ax);                                // 1182 mov word ptr [0x1200], ax
  W16(DS, (u16)(0x1202), R.ax);                                // 1185 mov word ptr [0x1202], ax
  W16(DS, (u16)(0x11f4), R.bx);                                // 1188 mov word ptr [0x11f4], bx
  SETL(R.ax, 0x36);                                            // 118c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 118e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 1190 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1192 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 1194 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1196 out 0x40, al
  // 1198 sti 
  R.ds = POP();                                                // 1199 pop ds
  R.di = POP();                                                // 119a pop di
  R.si = POP();                                                // 119b pop si
  R.bp = POP();                                                // 119c pop bp
  R.sp += 4; goto L_ret;                                       // 119d retf
L_ret:
  return;
}

static u16 f_sb15_10ff(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_10ff();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:1105 FUN_1000_1105  FIX: recompiled from the machine code (asm2c)
static void a_sb15_1105(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); R.ax = (u16)(0x60f0);                           // 1105 mov ax, 0x60f0
  PUSH(0x110b); a_sb15_07cb();                                 // 1108 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x80f0);                           // 110b mov ax, 0x80f0
  PUSH(0x1111); a_sb15_07cb();                                 // 110e call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xc001);                           // 1111 mov ax, 0xc001
  PUSH(0x1117); a_sb15_07cb();                                 // 1114 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xe000);                           // 1117 mov ax, 0xe000
  PUSH(0x111d); a_sb15_07cb();                                 // 111a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 111d mov ax, 0x433f
  PUSH(0x1123); a_sb15_07cb();                                 // 1120 call 0x7cb
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 1123 mov ax, 0xb001
  // 1126 cli 
  R.ax = (u16)(0xa08f);                                        // 1127 mov ax, 0xa08f
  PUSH(0x112d); a_sb15_07cb();                                 // 112a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 112d mov ax, 0xb02e
  PUSH(0x1133); a_sb15_07cb();                                 // 1130 call 0x7cb
  ASM_COST(5); SETL(R.ax, 0x36);                               // 1133 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 1135 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 1137 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1139 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 113b out 0x40, al
L_113d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 113d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 113f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1141 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 1143 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1145 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 1147 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 1149 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_113d; }      // 114d jg 0x113d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 114f mov ax, 0xb020
  PUSH(0x1155); a_sb15_07cb();                                 // 1152 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 1155 mov ax, 0xa000
  PUSH(0x115b); a_sb15_07cb();                                 // 1158 call 0x7cb
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 115b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 115e cmp bx, 0x64
  if (!R.cf) goto L_1168;                                      // 1161 jae 0x1168
  ASM_COST(2); R.bx = (u16)(0x64);                             // 1163 mov bx, 0x64
  goto L_1171;                                                 // 1166 jmp 0x1171
L_1168:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 1168 cmp bx, 0x4e20
  if (R.cf) goto L_1171;                                       // 116c jb 0x1171
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 116e mov bx, 0x4e20
L_1171:   ASM_COST(22); R.dx = (u16)(0x12);                            // 1171 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 1174 mov ax, 0x34dc
  DIV16(R.bx, 0x1177);                                         // 1177 div bx
  R.bx = (u16)(R.ax);                                          // 1179 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x11fe)));                        // 117b mov ax, word ptr [0x11fe]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 117e xor dx, dx
  DIV16(R.bx, 0x1180);                                         // 1180 div bx
  W16(DS, (u16)(0x1200), R.ax);                                // 1182 mov word ptr [0x1200], ax
  W16(DS, (u16)(0x1202), R.ax);                                // 1185 mov word ptr [0x1202], ax
  W16(DS, (u16)(0x11f4), R.bx);                                // 1188 mov word ptr [0x11f4], bx
  SETL(R.ax, 0x36);                                            // 118c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 118e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 1190 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1192 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 1194 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1196 out 0x40, al
  // 1198 sti 
  R.ds = POP();                                                // 1199 pop ds
  R.di = POP();                                                // 119a pop di
  R.si = POP();                                                // 119b pop si
  R.bp = POP();                                                // 119c pop bp
  R.sp += 4; goto L_ret;                                       // 119d retf
L_ret:
  return;
}

static u16 f_sb15_1105(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_1105();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:110B FUN_1000_110b  FIX: recompiled from the machine code (asm2c)
static void a_sb15_110b(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); R.ax = (u16)(0x80f0);                           // 110b mov ax, 0x80f0
  PUSH(0x1111); a_sb15_07cb();                                 // 110e call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xc001);                           // 1111 mov ax, 0xc001
  PUSH(0x1117); a_sb15_07cb();                                 // 1114 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xe000);                           // 1117 mov ax, 0xe000
  PUSH(0x111d); a_sb15_07cb();                                 // 111a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 111d mov ax, 0x433f
  PUSH(0x1123); a_sb15_07cb();                                 // 1120 call 0x7cb
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 1123 mov ax, 0xb001
  // 1126 cli 
  R.ax = (u16)(0xa08f);                                        // 1127 mov ax, 0xa08f
  PUSH(0x112d); a_sb15_07cb();                                 // 112a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 112d mov ax, 0xb02e
  PUSH(0x1133); a_sb15_07cb();                                 // 1130 call 0x7cb
  ASM_COST(5); SETL(R.ax, 0x36);                               // 1133 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 1135 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 1137 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1139 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 113b out 0x40, al
L_113d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 113d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 113f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1141 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 1143 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1145 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 1147 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 1149 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_113d; }      // 114d jg 0x113d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 114f mov ax, 0xb020
  PUSH(0x1155); a_sb15_07cb();                                 // 1152 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 1155 mov ax, 0xa000
  PUSH(0x115b); a_sb15_07cb();                                 // 1158 call 0x7cb
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 115b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 115e cmp bx, 0x64
  if (!R.cf) goto L_1168;                                      // 1161 jae 0x1168
  ASM_COST(2); R.bx = (u16)(0x64);                             // 1163 mov bx, 0x64
  goto L_1171;                                                 // 1166 jmp 0x1171
L_1168:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 1168 cmp bx, 0x4e20
  if (R.cf) goto L_1171;                                       // 116c jb 0x1171
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 116e mov bx, 0x4e20
L_1171:   ASM_COST(22); R.dx = (u16)(0x12);                            // 1171 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 1174 mov ax, 0x34dc
  DIV16(R.bx, 0x1177);                                         // 1177 div bx
  R.bx = (u16)(R.ax);                                          // 1179 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x11fe)));                        // 117b mov ax, word ptr [0x11fe]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 117e xor dx, dx
  DIV16(R.bx, 0x1180);                                         // 1180 div bx
  W16(DS, (u16)(0x1200), R.ax);                                // 1182 mov word ptr [0x1200], ax
  W16(DS, (u16)(0x1202), R.ax);                                // 1185 mov word ptr [0x1202], ax
  W16(DS, (u16)(0x11f4), R.bx);                                // 1188 mov word ptr [0x11f4], bx
  SETL(R.ax, 0x36);                                            // 118c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 118e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 1190 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1192 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 1194 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1196 out 0x40, al
  // 1198 sti 
  R.ds = POP();                                                // 1199 pop ds
  R.di = POP();                                                // 119a pop di
  R.si = POP();                                                // 119b pop si
  R.bp = POP();                                                // 119c pop bp
  R.sp += 4; goto L_ret;                                       // 119d retf
L_ret:
  return;
}

static u16 f_sb15_110b(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_110b();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:1111 FUN_1000_1111  FIX: recompiled from the machine code (asm2c)
static void a_sb15_1111(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); R.ax = (u16)(0xc001);                           // 1111 mov ax, 0xc001
  PUSH(0x1117); a_sb15_07cb();                                 // 1114 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xe000);                           // 1117 mov ax, 0xe000
  PUSH(0x111d); a_sb15_07cb();                                 // 111a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 111d mov ax, 0x433f
  PUSH(0x1123); a_sb15_07cb();                                 // 1120 call 0x7cb
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 1123 mov ax, 0xb001
  // 1126 cli 
  R.ax = (u16)(0xa08f);                                        // 1127 mov ax, 0xa08f
  PUSH(0x112d); a_sb15_07cb();                                 // 112a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 112d mov ax, 0xb02e
  PUSH(0x1133); a_sb15_07cb();                                 // 1130 call 0x7cb
  ASM_COST(5); SETL(R.ax, 0x36);                               // 1133 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 1135 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 1137 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1139 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 113b out 0x40, al
L_113d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 113d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 113f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1141 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 1143 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1145 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 1147 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 1149 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_113d; }      // 114d jg 0x113d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 114f mov ax, 0xb020
  PUSH(0x1155); a_sb15_07cb();                                 // 1152 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 1155 mov ax, 0xa000
  PUSH(0x115b); a_sb15_07cb();                                 // 1158 call 0x7cb
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 115b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 115e cmp bx, 0x64
  if (!R.cf) goto L_1168;                                      // 1161 jae 0x1168
  ASM_COST(2); R.bx = (u16)(0x64);                             // 1163 mov bx, 0x64
  goto L_1171;                                                 // 1166 jmp 0x1171
L_1168:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 1168 cmp bx, 0x4e20
  if (R.cf) goto L_1171;                                       // 116c jb 0x1171
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 116e mov bx, 0x4e20
L_1171:   ASM_COST(22); R.dx = (u16)(0x12);                            // 1171 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 1174 mov ax, 0x34dc
  DIV16(R.bx, 0x1177);                                         // 1177 div bx
  R.bx = (u16)(R.ax);                                          // 1179 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x11fe)));                        // 117b mov ax, word ptr [0x11fe]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 117e xor dx, dx
  DIV16(R.bx, 0x1180);                                         // 1180 div bx
  W16(DS, (u16)(0x1200), R.ax);                                // 1182 mov word ptr [0x1200], ax
  W16(DS, (u16)(0x1202), R.ax);                                // 1185 mov word ptr [0x1202], ax
  W16(DS, (u16)(0x11f4), R.bx);                                // 1188 mov word ptr [0x11f4], bx
  SETL(R.ax, 0x36);                                            // 118c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 118e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 1190 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1192 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 1194 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1196 out 0x40, al
  // 1198 sti 
  R.ds = POP();                                                // 1199 pop ds
  R.di = POP();                                                // 119a pop di
  R.si = POP();                                                // 119b pop si
  R.bp = POP();                                                // 119c pop bp
  R.sp += 4; goto L_ret;                                       // 119d retf
L_ret:
  return;
}

static u16 f_sb15_1111(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_1111();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:1117 FUN_1000_1117  FIX: recompiled from the machine code (asm2c)
static void a_sb15_1117(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); R.ax = (u16)(0xe000);                           // 1117 mov ax, 0xe000
  PUSH(0x111d); a_sb15_07cb();                                 // 111a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 111d mov ax, 0x433f
  PUSH(0x1123); a_sb15_07cb();                                 // 1120 call 0x7cb
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 1123 mov ax, 0xb001
  // 1126 cli 
  R.ax = (u16)(0xa08f);                                        // 1127 mov ax, 0xa08f
  PUSH(0x112d); a_sb15_07cb();                                 // 112a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 112d mov ax, 0xb02e
  PUSH(0x1133); a_sb15_07cb();                                 // 1130 call 0x7cb
  ASM_COST(5); SETL(R.ax, 0x36);                               // 1133 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 1135 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 1137 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1139 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 113b out 0x40, al
L_113d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 113d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 113f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1141 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 1143 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1145 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 1147 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 1149 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_113d; }      // 114d jg 0x113d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 114f mov ax, 0xb020
  PUSH(0x1155); a_sb15_07cb();                                 // 1152 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 1155 mov ax, 0xa000
  PUSH(0x115b); a_sb15_07cb();                                 // 1158 call 0x7cb
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 115b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 115e cmp bx, 0x64
  if (!R.cf) goto L_1168;                                      // 1161 jae 0x1168
  ASM_COST(2); R.bx = (u16)(0x64);                             // 1163 mov bx, 0x64
  goto L_1171;                                                 // 1166 jmp 0x1171
L_1168:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 1168 cmp bx, 0x4e20
  if (R.cf) goto L_1171;                                       // 116c jb 0x1171
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 116e mov bx, 0x4e20
L_1171:   ASM_COST(22); R.dx = (u16)(0x12);                            // 1171 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 1174 mov ax, 0x34dc
  DIV16(R.bx, 0x1177);                                         // 1177 div bx
  R.bx = (u16)(R.ax);                                          // 1179 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x11fe)));                        // 117b mov ax, word ptr [0x11fe]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 117e xor dx, dx
  DIV16(R.bx, 0x1180);                                         // 1180 div bx
  W16(DS, (u16)(0x1200), R.ax);                                // 1182 mov word ptr [0x1200], ax
  W16(DS, (u16)(0x1202), R.ax);                                // 1185 mov word ptr [0x1202], ax
  W16(DS, (u16)(0x11f4), R.bx);                                // 1188 mov word ptr [0x11f4], bx
  SETL(R.ax, 0x36);                                            // 118c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 118e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 1190 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1192 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 1194 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1196 out 0x40, al
  // 1198 sti 
  R.ds = POP();                                                // 1199 pop ds
  R.di = POP();                                                // 119a pop di
  R.si = POP();                                                // 119b pop si
  R.bp = POP();                                                // 119c pop bp
  R.sp += 4; goto L_ret;                                       // 119d retf
L_ret:
  return;
}

static u16 f_sb15_1117(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_1117();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:111D FUN_1000_111d  FIX: recompiled from the machine code (asm2c)
static void a_sb15_111d(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 111d mov ax, 0x433f
  PUSH(0x1123); a_sb15_07cb();                                 // 1120 call 0x7cb
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 1123 mov ax, 0xb001
  // 1126 cli 
  R.ax = (u16)(0xa08f);                                        // 1127 mov ax, 0xa08f
  PUSH(0x112d); a_sb15_07cb();                                 // 112a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 112d mov ax, 0xb02e
  PUSH(0x1133); a_sb15_07cb();                                 // 1130 call 0x7cb
  ASM_COST(5); SETL(R.ax, 0x36);                               // 1133 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 1135 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 1137 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1139 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 113b out 0x40, al
L_113d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 113d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 113f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1141 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 1143 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1145 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 1147 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 1149 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_113d; }      // 114d jg 0x113d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 114f mov ax, 0xb020
  PUSH(0x1155); a_sb15_07cb();                                 // 1152 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 1155 mov ax, 0xa000
  PUSH(0x115b); a_sb15_07cb();                                 // 1158 call 0x7cb
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 115b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 115e cmp bx, 0x64
  if (!R.cf) goto L_1168;                                      // 1161 jae 0x1168
  ASM_COST(2); R.bx = (u16)(0x64);                             // 1163 mov bx, 0x64
  goto L_1171;                                                 // 1166 jmp 0x1171
L_1168:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 1168 cmp bx, 0x4e20
  if (R.cf) goto L_1171;                                       // 116c jb 0x1171
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 116e mov bx, 0x4e20
L_1171:   ASM_COST(22); R.dx = (u16)(0x12);                            // 1171 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 1174 mov ax, 0x34dc
  DIV16(R.bx, 0x1177);                                         // 1177 div bx
  R.bx = (u16)(R.ax);                                          // 1179 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x11fe)));                        // 117b mov ax, word ptr [0x11fe]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 117e xor dx, dx
  DIV16(R.bx, 0x1180);                                         // 1180 div bx
  W16(DS, (u16)(0x1200), R.ax);                                // 1182 mov word ptr [0x1200], ax
  W16(DS, (u16)(0x1202), R.ax);                                // 1185 mov word ptr [0x1202], ax
  W16(DS, (u16)(0x11f4), R.bx);                                // 1188 mov word ptr [0x11f4], bx
  SETL(R.ax, 0x36);                                            // 118c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 118e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 1190 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1192 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 1194 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1196 out 0x40, al
  // 1198 sti 
  R.ds = POP();                                                // 1199 pop ds
  R.di = POP();                                                // 119a pop di
  R.si = POP();                                                // 119b pop si
  R.bp = POP();                                                // 119c pop bp
  R.sp += 4; goto L_ret;                                       // 119d retf
L_ret:
  return;
}

static u16 f_sb15_111d(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_111d();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:1123 FUN_1000_1123  FIX: recompiled from the machine code (asm2c)
static void a_sb15_1123(void)
{
  R.cs = sb15_seg;
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 1123 mov ax, 0xb001
  // 1126 cli 
  R.ax = (u16)(0xa08f);                                        // 1127 mov ax, 0xa08f
  PUSH(0x112d); a_sb15_07cb();                                 // 112a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 112d mov ax, 0xb02e
  PUSH(0x1133); a_sb15_07cb();                                 // 1130 call 0x7cb
  ASM_COST(5); SETL(R.ax, 0x36);                               // 1133 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 1135 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 1137 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1139 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 113b out 0x40, al
L_113d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 113d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 113f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1141 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 1143 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1145 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 1147 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 1149 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_113d; }      // 114d jg 0x113d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 114f mov ax, 0xb020
  PUSH(0x1155); a_sb15_07cb();                                 // 1152 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 1155 mov ax, 0xa000
  PUSH(0x115b); a_sb15_07cb();                                 // 1158 call 0x7cb
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 115b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 115e cmp bx, 0x64
  if (!R.cf) goto L_1168;                                      // 1161 jae 0x1168
  ASM_COST(2); R.bx = (u16)(0x64);                             // 1163 mov bx, 0x64
  goto L_1171;                                                 // 1166 jmp 0x1171
L_1168:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 1168 cmp bx, 0x4e20
  if (R.cf) goto L_1171;                                       // 116c jb 0x1171
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 116e mov bx, 0x4e20
L_1171:   ASM_COST(22); R.dx = (u16)(0x12);                            // 1171 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 1174 mov ax, 0x34dc
  DIV16(R.bx, 0x1177);                                         // 1177 div bx
  R.bx = (u16)(R.ax);                                          // 1179 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x11fe)));                        // 117b mov ax, word ptr [0x11fe]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 117e xor dx, dx
  DIV16(R.bx, 0x1180);                                         // 1180 div bx
  W16(DS, (u16)(0x1200), R.ax);                                // 1182 mov word ptr [0x1200], ax
  W16(DS, (u16)(0x1202), R.ax);                                // 1185 mov word ptr [0x1202], ax
  W16(DS, (u16)(0x11f4), R.bx);                                // 1188 mov word ptr [0x11f4], bx
  SETL(R.ax, 0x36);                                            // 118c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 118e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 1190 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1192 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 1194 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1196 out 0x40, al
  // 1198 sti 
  R.ds = POP();                                                // 1199 pop ds
  R.di = POP();                                                // 119a pop di
  R.si = POP();                                                // 119b pop si
  R.bp = POP();                                                // 119c pop bp
  R.sp += 4; goto L_ret;                                       // 119d retf
L_ret:
  return;
}

static u16 f_sb15_1123(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_1123();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:112D FUN_1000_112d  FIX: recompiled from the machine code (asm2c)
static void a_sb15_112d(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 112d mov ax, 0xb02e
  PUSH(0x1133); a_sb15_07cb();                                 // 1130 call 0x7cb
  ASM_COST(5); SETL(R.ax, 0x36);                               // 1133 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 1135 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 1137 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1139 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 113b out 0x40, al
L_113d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 113d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 113f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1141 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 1143 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1145 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 1147 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 1149 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_113d; }      // 114d jg 0x113d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 114f mov ax, 0xb020
  PUSH(0x1155); a_sb15_07cb();                                 // 1152 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 1155 mov ax, 0xa000
  PUSH(0x115b); a_sb15_07cb();                                 // 1158 call 0x7cb
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 115b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 115e cmp bx, 0x64
  if (!R.cf) goto L_1168;                                      // 1161 jae 0x1168
  ASM_COST(2); R.bx = (u16)(0x64);                             // 1163 mov bx, 0x64
  goto L_1171;                                                 // 1166 jmp 0x1171
L_1168:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 1168 cmp bx, 0x4e20
  if (R.cf) goto L_1171;                                       // 116c jb 0x1171
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 116e mov bx, 0x4e20
L_1171:   ASM_COST(22); R.dx = (u16)(0x12);                            // 1171 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 1174 mov ax, 0x34dc
  DIV16(R.bx, 0x1177);                                         // 1177 div bx
  R.bx = (u16)(R.ax);                                          // 1179 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x11fe)));                        // 117b mov ax, word ptr [0x11fe]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 117e xor dx, dx
  DIV16(R.bx, 0x1180);                                         // 1180 div bx
  W16(DS, (u16)(0x1200), R.ax);                                // 1182 mov word ptr [0x1200], ax
  W16(DS, (u16)(0x1202), R.ax);                                // 1185 mov word ptr [0x1202], ax
  W16(DS, (u16)(0x11f4), R.bx);                                // 1188 mov word ptr [0x11f4], bx
  SETL(R.ax, 0x36);                                            // 118c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 118e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 1190 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1192 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 1194 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1196 out 0x40, al
  // 1198 sti 
  R.ds = POP();                                                // 1199 pop ds
  R.di = POP();                                                // 119a pop di
  R.si = POP();                                                // 119b pop si
  R.bp = POP();                                                // 119c pop bp
  R.sp += 4; goto L_ret;                                       // 119d retf
L_ret:
  return;
}

static u16 f_sb15_112d(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_112d();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:1133 FUN_1000_1133  FIX: recompiled from the machine code (asm2c)
static void a_sb15_1133(void)
{
  R.cs = sb15_seg;
  ASM_COST(5); SETL(R.ax, 0x36);                               // 1133 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 1135 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 1137 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1139 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 113b out 0x40, al
L_113d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 113d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 113f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1141 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 1143 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1145 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 1147 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 1149 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_113d; }      // 114d jg 0x113d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 114f mov ax, 0xb020
  PUSH(0x1155); a_sb15_07cb();                                 // 1152 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 1155 mov ax, 0xa000
  PUSH(0x115b); a_sb15_07cb();                                 // 1158 call 0x7cb
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 115b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 115e cmp bx, 0x64
  if (!R.cf) goto L_1168;                                      // 1161 jae 0x1168
  ASM_COST(2); R.bx = (u16)(0x64);                             // 1163 mov bx, 0x64
  goto L_1171;                                                 // 1166 jmp 0x1171
L_1168:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 1168 cmp bx, 0x4e20
  if (R.cf) goto L_1171;                                       // 116c jb 0x1171
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 116e mov bx, 0x4e20
L_1171:   ASM_COST(22); R.dx = (u16)(0x12);                            // 1171 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 1174 mov ax, 0x34dc
  DIV16(R.bx, 0x1177);                                         // 1177 div bx
  R.bx = (u16)(R.ax);                                          // 1179 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x11fe)));                        // 117b mov ax, word ptr [0x11fe]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 117e xor dx, dx
  DIV16(R.bx, 0x1180);                                         // 1180 div bx
  W16(DS, (u16)(0x1200), R.ax);                                // 1182 mov word ptr [0x1200], ax
  W16(DS, (u16)(0x1202), R.ax);                                // 1185 mov word ptr [0x1202], ax
  W16(DS, (u16)(0x11f4), R.bx);                                // 1188 mov word ptr [0x11f4], bx
  SETL(R.ax, 0x36);                                            // 118c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 118e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 1190 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1192 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 1194 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1196 out 0x40, al
  // 1198 sti 
  R.ds = POP();                                                // 1199 pop ds
  R.di = POP();                                                // 119a pop di
  R.si = POP();                                                // 119b pop si
  R.bp = POP();                                                // 119c pop bp
  R.sp += 4; goto L_ret;                                       // 119d retf
L_ret:
  return;
}

static u16 f_sb15_1133(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_1133();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:1155 FUN_1000_1155  FIX: recompiled from the machine code (asm2c)
static void a_sb15_1155(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 1155 mov ax, 0xa000
  PUSH(0x115b); a_sb15_07cb();                                 // 1158 call 0x7cb
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 115b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 115e cmp bx, 0x64
  if (!R.cf) goto L_1168;                                      // 1161 jae 0x1168
  ASM_COST(2); R.bx = (u16)(0x64);                             // 1163 mov bx, 0x64
  goto L_1171;                                                 // 1166 jmp 0x1171
L_1168:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 1168 cmp bx, 0x4e20
  if (R.cf) goto L_1171;                                       // 116c jb 0x1171
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 116e mov bx, 0x4e20
L_1171:   ASM_COST(22); R.dx = (u16)(0x12);                            // 1171 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 1174 mov ax, 0x34dc
  DIV16(R.bx, 0x1177);                                         // 1177 div bx
  R.bx = (u16)(R.ax);                                          // 1179 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x11fe)));                        // 117b mov ax, word ptr [0x11fe]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 117e xor dx, dx
  DIV16(R.bx, 0x1180);                                         // 1180 div bx
  W16(DS, (u16)(0x1200), R.ax);                                // 1182 mov word ptr [0x1200], ax
  W16(DS, (u16)(0x1202), R.ax);                                // 1185 mov word ptr [0x1202], ax
  W16(DS, (u16)(0x11f4), R.bx);                                // 1188 mov word ptr [0x11f4], bx
  SETL(R.ax, 0x36);                                            // 118c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 118e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 1190 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1192 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 1194 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1196 out 0x40, al
  // 1198 sti 
  R.ds = POP();                                                // 1199 pop ds
  R.di = POP();                                                // 119a pop di
  R.si = POP();                                                // 119b pop si
  R.bp = POP();                                                // 119c pop bp
  R.sp += 4; goto L_ret;                                       // 119d retf
L_ret:
  return;
}

static u16 f_sb15_1155(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_1155();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:115B FUN_1000_115b  FIX: recompiled from the machine code (asm2c)
static void a_sb15_115b(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 115b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 115e cmp bx, 0x64
  if (!R.cf) goto L_1168;                                      // 1161 jae 0x1168
  ASM_COST(2); R.bx = (u16)(0x64);                             // 1163 mov bx, 0x64
  goto L_1171;                                                 // 1166 jmp 0x1171
L_1168:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 1168 cmp bx, 0x4e20
  if (R.cf) goto L_1171;                                       // 116c jb 0x1171
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 116e mov bx, 0x4e20
L_1171:   ASM_COST(22); R.dx = (u16)(0x12);                            // 1171 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 1174 mov ax, 0x34dc
  DIV16(R.bx, 0x1177);                                         // 1177 div bx
  R.bx = (u16)(R.ax);                                          // 1179 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x11fe)));                        // 117b mov ax, word ptr [0x11fe]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 117e xor dx, dx
  DIV16(R.bx, 0x1180);                                         // 1180 div bx
  W16(DS, (u16)(0x1200), R.ax);                                // 1182 mov word ptr [0x1200], ax
  W16(DS, (u16)(0x1202), R.ax);                                // 1185 mov word ptr [0x1202], ax
  W16(DS, (u16)(0x11f4), R.bx);                                // 1188 mov word ptr [0x11f4], bx
  SETL(R.ax, 0x36);                                            // 118c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 118e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 1190 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1192 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 1194 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1196 out 0x40, al
  // 1198 sti 
  R.ds = POP();                                                // 1199 pop ds
  R.di = POP();                                                // 119a pop di
  R.si = POP();                                                // 119b pop si
  R.bp = POP();                                                // 119c pop bp
  R.sp += 4; goto L_ret;                                       // 119d retf
L_ret:
  return;
}

static u16 f_sb15_115b(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_115b();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0D46 FUN_1000_0d46  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0d46(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_0d50;                                    // 0d46 jmp 0xd50
L_0d50:   ASM_COST(3); R.dx = POP();                                   // 0d50 pop dx
  R.ax = POP();                                                // 0d51 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0d52 iret
L_ret:
  return;
}

static u16 f_sb15_0d46(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0d46();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0D4B FUN_1000_0d4b  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0d4b(void)
{
  R.cs = sb15_seg;
  ASM_COST(1); goto L_0d50;                                    // 0d4b jmp 0xd50
L_0d50:   ASM_COST(3); R.dx = POP();                                   // 0d50 pop dx
  R.ax = POP();                                                // 0d51 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0d52 iret
L_ret:
  return;
}

static u16 f_sb15_0d4b(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0d4b();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0D64 FUN_1000_0d64  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0d64(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); W16(CS, (u16)(0x11de), R.cx);                   // 0d64 mov word ptr cs:[0x11de], cx
  PUSH(0x0d6c); a_sb15_0bcc();                                 // 0d69 call 0xbcc
  ASM_COST(3); SETH(R.ax, M8(CS, (u16)(0x11e6)));              // 0d6c mov ah, byte ptr cs:[0x11e6]
  SUB8((u8)(R.ax >> 8), 0x14);                                 // 0d71 cmp ah, 0x14
  if (R.zf) goto L_0d78;                                       // 0d74 je 0xd78
  ASM_COST(1); SETH(R.ax, DEC8((u8)(R.ax >> 8)));              // 0d76 dec ah
L_0d78:   ASM_COST(1); PUSH(0x0d7b); a_sb15_0a1d();                    // 0d78 call 0xa1d
  ASM_COST(3); R.cx = (u16)(M16(CS, (u16)(0x11de)));           // 0d7b mov cx, word ptr cs:[0x11de]
  SETH(R.ax, (u8)R.cx);                                        // 0d80 mov ah, cl
  PUSH(0x0d85); a_sb15_0a1d();                                 // 0d82 call 0xa1d
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0d85 mov ah, ch
  PUSH(0x0d8a); a_sb15_0a1d();                                 // 0d87 call 0xa1d
  ASM_COST(3); R.cx = POP();                                   // 0d8a pop cx
  R.ax = POP();                                                // 0d8b pop ax
  R.sp += 2; goto L_ret;                                       // 0d8c ret
L_ret:
  return;
}

static u16 f_sb15_0d64(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0d64();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0D6C FUN_1000_0d6c  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0d6c(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); SETH(R.ax, M8(CS, (u16)(0x11e6)));              // 0d6c mov ah, byte ptr cs:[0x11e6]
  SUB8((u8)(R.ax >> 8), 0x14);                                 // 0d71 cmp ah, 0x14
  if (R.zf) goto L_0d78;                                       // 0d74 je 0xd78
  ASM_COST(1); SETH(R.ax, DEC8((u8)(R.ax >> 8)));              // 0d76 dec ah
L_0d78:   ASM_COST(1); PUSH(0x0d7b); a_sb15_0a1d();                    // 0d78 call 0xa1d
  ASM_COST(3); R.cx = (u16)(M16(CS, (u16)(0x11de)));           // 0d7b mov cx, word ptr cs:[0x11de]
  SETH(R.ax, (u8)R.cx);                                        // 0d80 mov ah, cl
  PUSH(0x0d85); a_sb15_0a1d();                                 // 0d82 call 0xa1d
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0d85 mov ah, ch
  PUSH(0x0d8a); a_sb15_0a1d();                                 // 0d87 call 0xa1d
  ASM_COST(3); R.cx = POP();                                   // 0d8a pop cx
  R.ax = POP();                                                // 0d8b pop ax
  R.sp += 2; goto L_ret;                                       // 0d8c ret
L_ret:
  return;
}

static u16 f_sb15_0d6c(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0d6c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0D7B FUN_1000_0d7b  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0d7b(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); R.cx = (u16)(M16(CS, (u16)(0x11de)));           // 0d7b mov cx, word ptr cs:[0x11de]
  SETH(R.ax, (u8)R.cx);                                        // 0d80 mov ah, cl
  PUSH(0x0d85); a_sb15_0a1d();                                 // 0d82 call 0xa1d
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0d85 mov ah, ch
  PUSH(0x0d8a); a_sb15_0a1d();                                 // 0d87 call 0xa1d
  ASM_COST(3); R.cx = POP();                                   // 0d8a pop cx
  R.ax = POP();                                                // 0d8b pop ax
  R.sp += 2; goto L_ret;                                       // 0d8c ret
L_ret:
  return;
}

static u16 f_sb15_0d7b(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0d7b();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0D85 FUN_1000_0d85  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0d85(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0d85 mov ah, ch
  PUSH(0x0d8a); a_sb15_0a1d();                                 // 0d87 call 0xa1d
  ASM_COST(3); R.cx = POP();                                   // 0d8a pop cx
  R.ax = POP();                                                // 0d8b pop ax
  R.sp += 2; goto L_ret;                                       // 0d8c ret
L_ret:
  return;
}

static u16 f_sb15_0d85(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0d85();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0DB1 FUN_1000_0db1  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0db1(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); W16(CS, (u16)(0x11de), R.cx);                   // 0db1 mov word ptr cs:[0x11de], cx
  PUSH(0x0db9); a_sb15_0bcc();                                 // 0db6 call 0xbcc
  ASM_COST(2); SETH(R.ax, M8(CS, (u16)(0x11e6)));              // 0db9 mov ah, byte ptr cs:[0x11e6]
  PUSH(0x0dc1); a_sb15_0a1d();                                 // 0dbe call 0xa1d
  ASM_COST(3); R.cx = (u16)(M16(CS, (u16)(0x11de)));           // 0dc1 mov cx, word ptr cs:[0x11de]
  SETH(R.ax, (u8)R.cx);                                        // 0dc6 mov ah, cl
  PUSH(0x0dcb); a_sb15_0a1d();                                 // 0dc8 call 0xa1d
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0dcb mov ah, ch
  PUSH(0x0dd0); a_sb15_0a1d();                                 // 0dcd call 0xa1d
  ASM_COST(4); R.es = POP();                                   // 0dd0 pop es
  R.cx = POP();                                                // 0dd1 pop cx
  R.ax = POP();                                                // 0dd2 pop ax
  R.sp += 2; goto L_ret;                                       // 0dd3 ret
L_ret:
  return;
}

static u16 f_sb15_0db1(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0db1();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0DB9 FUN_1000_0db9  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0db9(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); SETH(R.ax, M8(CS, (u16)(0x11e6)));              // 0db9 mov ah, byte ptr cs:[0x11e6]
  PUSH(0x0dc1); a_sb15_0a1d();                                 // 0dbe call 0xa1d
  ASM_COST(3); R.cx = (u16)(M16(CS, (u16)(0x11de)));           // 0dc1 mov cx, word ptr cs:[0x11de]
  SETH(R.ax, (u8)R.cx);                                        // 0dc6 mov ah, cl
  PUSH(0x0dcb); a_sb15_0a1d();                                 // 0dc8 call 0xa1d
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0dcb mov ah, ch
  PUSH(0x0dd0); a_sb15_0a1d();                                 // 0dcd call 0xa1d
  ASM_COST(4); R.es = POP();                                   // 0dd0 pop es
  R.cx = POP();                                                // 0dd1 pop cx
  R.ax = POP();                                                // 0dd2 pop ax
  R.sp += 2; goto L_ret;                                       // 0dd3 ret
L_ret:
  return;
}

static u16 f_sb15_0db9(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0db9();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0DC1 FUN_1000_0dc1  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0dc1(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); R.cx = (u16)(M16(CS, (u16)(0x11de)));           // 0dc1 mov cx, word ptr cs:[0x11de]
  SETH(R.ax, (u8)R.cx);                                        // 0dc6 mov ah, cl
  PUSH(0x0dcb); a_sb15_0a1d();                                 // 0dc8 call 0xa1d
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0dcb mov ah, ch
  PUSH(0x0dd0); a_sb15_0a1d();                                 // 0dcd call 0xa1d
  ASM_COST(4); R.es = POP();                                   // 0dd0 pop es
  R.cx = POP();                                                // 0dd1 pop cx
  R.ax = POP();                                                // 0dd2 pop ax
  R.sp += 2; goto L_ret;                                       // 0dd3 ret
L_ret:
  return;
}

static u16 f_sb15_0dc1(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0dc1();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0DCB FUN_1000_0dcb  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0dcb(void)
{
  R.cs = sb15_seg;
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0dcb mov ah, ch
  PUSH(0x0dd0); a_sb15_0a1d();                                 // 0dcd call 0xa1d
  ASM_COST(4); R.es = POP();                                   // 0dd0 pop es
  R.cx = POP();                                                // 0dd1 pop cx
  R.ax = POP();                                                // 0dd2 pop ax
  R.sp += 2; goto L_ret;                                       // 0dd3 ret
L_ret:
  return;
}

static u16 f_sb15_0dcb(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0dcb();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0DEB FUN_1000_0deb  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0deb(void)
{
  R.cs = sb15_seg;
  ASM_COST(8); R.dx = (u16)(M16(CS, (u16)(0x11bc)));           // 0deb mov dx, word ptr cs:[0x11bc]
  SETL(R.dx, ADD8((u8)R.dx, 0xe));                             // 0df0 add dl, 0xe
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0df3 in al, dx
  W16(CS, (u16)(0x11e4), 0x1);                                 // 0df4 mov word ptr cs:[0x11e4], 1
  R.si = POP();                                                // 0dfb pop si
  R.dx = POP();                                                // 0dfc pop dx
  R.ax = POP();                                                // 0dfd pop ax
  R.sp += 2; goto L_ret;                                       // 0dfe ret
L_ret:
  return;
}

static u16 f_sb15_0deb(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0deb();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0F3B FUN_1000_0f3b  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0f3b(void)
{
  R.cs = sb15_seg;
  goto L_0f3b;
L_0edc:   ASM_COST(2); W16(DS, (u16)(0x1202), DEC16(M16(DS, (u16)(0x1202)))); // 0edc dec word ptr [0x1202]
  if (R.zf) goto L_0eea;                                       // 0ee0 je 0xeea
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0ee2 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0ee4 out 0x20, al
  R.ds = POP();                                                // 0ee6 pop ds
  R.bx = POP();                                                // 0ee7 pop bx
  R.ax = POP();                                                // 0ee8 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0ee9 iret
L_0eea:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0x1200)));           // 0eea mov ax, word ptr [0x1200]
  W16(DS, (u16)(0x1202), R.ax);                                // 0eed mov word ptr [0x1202], ax
  R.ds = POP();                                                // 0ef0 pop ds
  R.bx = POP();                                                // 0ef1 pop bx
  R.ax = POP();                                                // 0ef2 pop ax
  { u16 o_ = M16(CS, (u16)(0x11fa)), s_ = M16(CS, (u16)((u16)(0x11fa) + 2)); asm_far_jump(s_, o_); } return; // 0ef3 ljmp cs:[0x11fa]
L_0f3b:   ASM_COST(2); R.ax = (u16)(0x4001);                           // 0f3b mov ax, 0x4001
  PUSH(0x0f41); a_sb15_07cb();                                 // 0f3e call 0x7cb
  ASM_COST(2); R.ax = (u16)(XOR16(R.ax, R.ax));                // 0f41 xor ax, ax
  PUSH(0x0f46); a_sb15_07cb();                                 // 0f43 call 0x7cb
  ASM_COST(1); ASM_BACK(); goto L_0edc;                        // 0f46 jmp 0xedc
L_ret:
  return;
}

static u16 f_sb15_0f3b(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0f3b();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0F41 FUN_1000_0f41  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0f41(void)
{
  R.cs = sb15_seg;
  goto L_0f41;
L_0edc:   ASM_COST(2); W16(DS, (u16)(0x1202), DEC16(M16(DS, (u16)(0x1202)))); // 0edc dec word ptr [0x1202]
  if (R.zf) goto L_0eea;                                       // 0ee0 je 0xeea
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0ee2 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0ee4 out 0x20, al
  R.ds = POP();                                                // 0ee6 pop ds
  R.bx = POP();                                                // 0ee7 pop bx
  R.ax = POP();                                                // 0ee8 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0ee9 iret
L_0eea:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0x1200)));           // 0eea mov ax, word ptr [0x1200]
  W16(DS, (u16)(0x1202), R.ax);                                // 0eed mov word ptr [0x1202], ax
  R.ds = POP();                                                // 0ef0 pop ds
  R.bx = POP();                                                // 0ef1 pop bx
  R.ax = POP();                                                // 0ef2 pop ax
  { u16 o_ = M16(CS, (u16)(0x11fa)), s_ = M16(CS, (u16)((u16)(0x11fa) + 2)); asm_far_jump(s_, o_); } return; // 0ef3 ljmp cs:[0x11fa]
L_0f41:   ASM_COST(2); R.ax = (u16)(XOR16(R.ax, R.ax));                // 0f41 xor ax, ax
  PUSH(0x0f46); a_sb15_07cb();                                 // 0f43 call 0x7cb
  ASM_COST(1); ASM_BACK(); goto L_0edc;                        // 0f46 jmp 0xedc
L_ret:
  return;
}

static u16 f_sb15_0f41(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0f41();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0F46 FUN_1000_0f46  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0f46(void)
{
  R.cs = sb15_seg;
  goto L_0f46;
L_0edc:   ASM_COST(2); W16(DS, (u16)(0x1202), DEC16(M16(DS, (u16)(0x1202)))); // 0edc dec word ptr [0x1202]
  if (R.zf) goto L_0eea;                                       // 0ee0 je 0xeea
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0ee2 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0ee4 out 0x20, al
  R.ds = POP();                                                // 0ee6 pop ds
  R.bx = POP();                                                // 0ee7 pop bx
  R.ax = POP();                                                // 0ee8 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0ee9 iret
L_0eea:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0x1200)));           // 0eea mov ax, word ptr [0x1200]
  W16(DS, (u16)(0x1202), R.ax);                                // 0eed mov word ptr [0x1202], ax
  R.ds = POP();                                                // 0ef0 pop ds
  R.bx = POP();                                                // 0ef1 pop bx
  R.ax = POP();                                                // 0ef2 pop ax
  { u16 o_ = M16(CS, (u16)(0x11fa)), s_ = M16(CS, (u16)((u16)(0x11fa) + 2)); asm_far_jump(s_, o_); } return; // 0ef3 ljmp cs:[0x11fa]
L_0f46:   ASM_COST(1); ASM_BACK(); goto L_0edc;                        // 0f46 jmp 0xedc
L_ret:
  return;
}

static u16 f_sb15_0f46(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0f46();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:101F FUN_1000_101f  FIX: recompiled from the machine code (asm2c)
static void a_sb15_101f(void)
{
  R.cs = sb15_seg;
  goto L_101f;
L_0fae:   ASM_COST(2); W16(DS, (u16)(0x1202), DEC16(M16(DS, (u16)(0x1202)))); // 0fae dec word ptr [0x1202]
  if (R.zf) goto L_0fbc;                                       // 0fb2 je 0xfbc
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0fb4 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0fb6 out 0x20, al
  R.ds = POP();                                                // 0fb8 pop ds
  R.bx = POP();                                                // 0fb9 pop bx
  R.ax = POP();                                                // 0fba pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0fbb iret
L_0fbc:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0x1200)));           // 0fbc mov ax, word ptr [0x1200]
  W16(DS, (u16)(0x1202), R.ax);                                // 0fbf mov word ptr [0x1202], ax
  R.ds = POP();                                                // 0fc2 pop ds
  R.bx = POP();                                                // 0fc3 pop bx
  R.ax = POP();                                                // 0fc4 pop ax
  { u16 o_ = M16(CS, (u16)(0x11fa)), s_ = M16(CS, (u16)((u16)(0x11fa) + 2)); asm_far_jump(s_, o_); } return; // 0fc5 ljmp cs:[0x11fa]
L_101f:   ASM_COST(2); R.ax = (u16)(0x4001);                           // 101f mov ax, 0x4001
  PUSH(0x1025); a_sb15_07cb();                                 // 1022 call 0x7cb
  ASM_COST(2); R.ax = (u16)(XOR16(R.ax, R.ax));                // 1025 xor ax, ax
  PUSH(0x102a); a_sb15_07cb();                                 // 1027 call 0x7cb
  ASM_COST(1); ASM_BACK(); goto L_0fae;                        // 102a jmp 0xfae
L_ret:
  return;
}

static u16 f_sb15_101f(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_101f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:1025 FUN_1000_1025  FIX: recompiled from the machine code (asm2c)
static void a_sb15_1025(void)
{
  R.cs = sb15_seg;
  goto L_1025;
L_0fae:   ASM_COST(2); W16(DS, (u16)(0x1202), DEC16(M16(DS, (u16)(0x1202)))); // 0fae dec word ptr [0x1202]
  if (R.zf) goto L_0fbc;                                       // 0fb2 je 0xfbc
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0fb4 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0fb6 out 0x20, al
  R.ds = POP();                                                // 0fb8 pop ds
  R.bx = POP();                                                // 0fb9 pop bx
  R.ax = POP();                                                // 0fba pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0fbb iret
L_0fbc:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0x1200)));           // 0fbc mov ax, word ptr [0x1200]
  W16(DS, (u16)(0x1202), R.ax);                                // 0fbf mov word ptr [0x1202], ax
  R.ds = POP();                                                // 0fc2 pop ds
  R.bx = POP();                                                // 0fc3 pop bx
  R.ax = POP();                                                // 0fc4 pop ax
  { u16 o_ = M16(CS, (u16)(0x11fa)), s_ = M16(CS, (u16)((u16)(0x11fa) + 2)); asm_far_jump(s_, o_); } return; // 0fc5 ljmp cs:[0x11fa]
L_1025:   ASM_COST(2); R.ax = (u16)(XOR16(R.ax, R.ax));                // 1025 xor ax, ax
  PUSH(0x102a); a_sb15_07cb();                                 // 1027 call 0x7cb
  ASM_COST(1); ASM_BACK(); goto L_0fae;                        // 102a jmp 0xfae
L_ret:
  return;
}

static u16 f_sb15_1025(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_1025();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:102A FUN_1000_102a  FIX: recompiled from the machine code (asm2c)
static void a_sb15_102a(void)
{
  R.cs = sb15_seg;
  goto L_102a;
L_0fae:   ASM_COST(2); W16(DS, (u16)(0x1202), DEC16(M16(DS, (u16)(0x1202)))); // 0fae dec word ptr [0x1202]
  if (R.zf) goto L_0fbc;                                       // 0fb2 je 0xfbc
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0fb4 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0fb6 out 0x20, al
  R.ds = POP();                                                // 0fb8 pop ds
  R.bx = POP();                                                // 0fb9 pop bx
  R.ax = POP();                                                // 0fba pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0fbb iret
L_0fbc:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0x1200)));           // 0fbc mov ax, word ptr [0x1200]
  W16(DS, (u16)(0x1202), R.ax);                                // 0fbf mov word ptr [0x1202], ax
  R.ds = POP();                                                // 0fc2 pop ds
  R.bx = POP();                                                // 0fc3 pop bx
  R.ax = POP();                                                // 0fc4 pop ax
  { u16 o_ = M16(CS, (u16)(0x11fa)), s_ = M16(CS, (u16)((u16)(0x11fa) + 2)); asm_far_jump(s_, o_); } return; // 0fc5 ljmp cs:[0x11fa]
L_102a:   ASM_COST(1); ASM_BACK(); goto L_0fae;                        // 102a jmp 0xfae
L_ret:
  return;
}

static u16 f_sb15_102a(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_102a();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0BCC FUN_1000_0bcc  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0bcc(void)
{
  R.cs = sb15_seg;
  ASM_COST(21); PUSH(R.ax);                                    // 0bcc push ax
  SETL(R.ax, 0x5);                                             // 0bcd mov al, 5
  ASM_PORT_OUT(0xa, (u8)R.ax);                                 // 0bcf out 0xa, al
  SETL(R.ax, 0x0);                                             // 0bd1 mov al, 0
  ASM_PORT_OUT(0xc, (u8)R.ax);                                 // 0bd3 out 0xc, al
  SETL(R.ax, 0x49);                                            // 0bd5 mov al, 0x49
  ASM_PORT_OUT(0xb, (u8)R.ax);                                 // 0bd7 out 0xb, al
  R.ax = (u16)(M16(CS, (u16)(0x11dc)));                        // 0bd9 mov ax, word ptr cs:[0x11dc]
  ASM_PORT_OUT(0x2, (u8)R.ax);                                 // 0bdd out 2, al
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 0bdf mov al, ah
  ASM_PORT_OUT(0x2, (u8)R.ax);                                 // 0be1 out 2, al
  SETL(R.ax, M8(CS, (u16)(0x11db)));                           // 0be3 mov al, byte ptr cs:[0x11db]
  ASM_PORT_OUT(0x83, (u8)R.ax);                                // 0be7 out 0x83, al
  R.ax = (u16)(M16(CS, (u16)(0x11de)));                        // 0be9 mov ax, word ptr cs:[0x11de]
  ASM_PORT_OUT(0x3, (u8)R.ax);                                 // 0bed out 3, al
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 0bef mov al, ah
  ASM_PORT_OUT(0x3, (u8)R.ax);                                 // 0bf1 out 3, al
  SETL(R.ax, 0x1);                                             // 0bf3 mov al, 1
  ASM_PORT_OUT(0xa, (u8)R.ax);                                 // 0bf5 out 0xa, al
  R.ax = POP();                                                // 0bf7 pop ax
  R.sp += 2; goto L_ret;                                       // 0bf8 ret
L_ret:
  return;
}

static u16 f_sb15_0bcc(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0bcc();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0A1D FUN_1000_0a1d  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0a1d(void)
{
  R.cs = sb15_seg;
  ASM_COST(6); PUSH(R.ax);                                     // 0a1d push ax
  PUSH(R.dx);                                                  // 0a1e push dx
  PUSH(R.cx);                                                  // 0a1f push cx
  R.dx = (u16)(M16(CS, (u16)(0x11bc)));                        // 0a20 mov dx, word ptr cs:[0x11bc]
  SETL(R.dx, ADD8((u8)R.dx, 0xc));                             // 0a25 add dl, 0xc
  R.cx = (u16)(0x64);                                          // 0a28 mov cx, 0x64
L_0a2b:   ASM_COST(2); R.cx = (u16)(DEC16(R.cx));                      // 0a2b dec cx
  if (R.cx == 0) goto L_0a33;                                  // 0a2c jcxz 0xa33
  ASM_COST(3); SETL(R.ax, ASM_PORT_IN(R.dx));                  // 0a2e in al, dx
  SETL(R.ax, OR8((u8)R.ax, (u8)R.ax));                         // 0a2f or al, al
  if (R.sf) { ASM_BACK(); goto L_0a2b; }                       // 0a31 js 0xa2b
L_0a33:   ASM_COST(6); SETL(R.ax, (u8)(R.ax >> 8));                    // 0a33 mov al, ah
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0a35 out dx, al
  R.cx = POP();                                                // 0a36 pop cx
  R.dx = POP();                                                // 0a37 pop dx
  R.ax = POP();                                                // 0a38 pop ax
  R.sp += 2; goto L_ret;                                       // 0a39 ret
L_ret:
  return;
}

static u16 f_sb15_0a1d(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0a1d();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:06C9 FUN_1000_06c9  FIX: recompiled from the machine code (asm2c)
static void a_sb15_06c9(void)
{
  R.cs = sb15_seg;
  ASM_COST(4); PUSH(R.cx);                                     // 06c9 push cx
  PUSH(R.si);                                                  // 06ca push si
  SUB16(R.cx, 0x81);                                           // 06cb cmp cx, 0x81
  if (!R.cf) goto L_06d4;                                      // 06cf jae 0x6d4
  ASM_COST(3); R.si = POP();                                   // 06d1 pop si
  R.cx = POP();                                                // 06d2 pop cx
  R.sp += 2; goto L_ret;                                       // 06d3 ret
L_06d4:   ASM_COST(2); SUB16(R.cx, 0x85);                              // 06d4 cmp cx, 0x85
  if (R.cf || R.zf) goto L_06dd;                               // 06d8 jbe 0x6dd
  ASM_COST(3); R.si = POP();                                   // 06da pop si
  R.cx = POP();                                                // 06db pop cx
  R.sp += 2; goto L_ret;                                       // 06dc ret
L_06dd:   ASM_COST(4); R.cx = (u16)(SUB16(R.cx, 0x81));                // 06dd sub cx, 0x81
  R.cx = (u16)(SHL16(R.cx, 0x1));                              // 06e1 shl cx, 1
  R.si = (u16)(R.cx);                                          // 06e3 mov si, cx
  { u16 t_ = M16(CS, (u16)(R.si + 0x6ed)); PUSH(0x06ea); asm_near_call(R.cs, t_); } /* call word ptr cs:[si + 0x6ed] */ // 06e5 call word ptr cs:[si + 0x6ed]
  ASM_COST(3); R.si = POP();                                   // 06ea pop si
  R.cx = POP();                                                // 06eb pop cx
  R.sp += 2; goto L_ret;                                       // 06ec ret
L_ret:
  return;
}

static u16 f_sb15_06c9(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_06c9();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0526 FUN_1000_0526  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0526(void)
{
  R.cs = sb15_seg;
  ASM_COST(8); PUSH(R.si);                                     // 0526 push si
  PUSH(R.ax);                                                  // 0527 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0528 shl ax, 1
  R.si = (u16)(R.ax);                                          // 052a mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x85e)));                     // 052c mov ah, byte ptr cs:[si + 0x85e]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 0531 add ah, 0x40
  SETL(R.ax, 0x3f);                                            // 0534 mov al, 0x3f
  PUSH(0x0539); a_sb15_07cb();                                 // 0536 call 0x7cb
  ASM_COST(9); R.ax = POP();                                   // 0539 pop ax
  PUSH(R.ax);                                                  // 053a push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 053b shl ax, 1
  R.ax = (u16)(INC16(R.ax));                                   // 053d inc ax
  R.si = (u16)(R.ax);                                          // 053e mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x85e)));                     // 0540 mov ah, byte ptr cs:[si + 0x85e]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 0545 add ah, 0x40
  SETL(R.ax, 0x3f);                                            // 0548 mov al, 0x3f
  PUSH(0x054d); a_sb15_07cb();                                 // 054a call 0x7cb
  ASM_COST(8); R.ax = POP();                                   // 054d pop ax
  PUSH(R.ax);                                                  // 054e push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 054f shl ax, 1
  R.si = (u16)(R.ax);                                          // 0551 mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x85e)));                     // 0553 mov ah, byte ptr cs:[si + 0x85e]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x80));                     // 0558 add ah, 0x80
  SETL(R.ax, 0xa);                                             // 055b mov al, 0xa
  PUSH(0x0560); a_sb15_07cb();                                 // 055d call 0x7cb
  ASM_COST(9); R.ax = POP();                                   // 0560 pop ax
  PUSH(R.ax);                                                  // 0561 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0562 shl ax, 1
  R.ax = (u16)(INC16(R.ax));                                   // 0564 inc ax
  R.si = (u16)(R.ax);                                          // 0565 mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x85e)));                     // 0567 mov ah, byte ptr cs:[si + 0x85e]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x80));                     // 056c add ah, 0x80
  SETL(R.ax, 0xa);                                             // 056f mov al, 0xa
  PUSH(0x0574); a_sb15_07cb();                                 // 0571 call 0x7cb
  ASM_COST(6); R.ax = POP();                                   // 0574 pop ax
  PUSH(R.ax);                                                  // 0575 push ax
  SETH(R.ax, (u8)R.ax);                                        // 0576 mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xb0));                     // 0578 add ah, 0xb0
  SETL(R.ax, 0x1);                                             // 057b mov al, 1
  PUSH(0x0580); a_sb15_07cb();                                 // 057d call 0x7cb
  ASM_COST(3); R.ax = POP();                                   // 0580 pop ax
  R.si = POP();                                                // 0581 pop si
  R.sp += 2; goto L_ret;                                       // 0582 ret
L_ret:
  return;
}

static u16 f_sb15_0526(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0526();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:07CB FUN_1000_07cb  FIX: recompiled from the machine code (asm2c)
static void a_sb15_07cb(void)
{
  R.cs = sb15_seg;
  ASM_COST(9); PUSH(R.si);                                     // 07cb push si
  PUSH(R.dx);                                                  // 07cc push dx
  PUSH(R.cx);                                                  // 07cd push cx
  PUSH(R.ax);                                                  // 07ce push ax
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 07cf mov al, ah
  R.dx = (u16)(M16(CS, (u16)(0x960)));                         // 07d1 mov dx, word ptr cs:[0x960]
  // 07d6 cli 
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 07d7 out dx, al
  R.cx = (u16)(M16(CS, (u16)(0x964)));                         // 07d8 mov cx, word ptr cs:[0x964]
L_07dd:   ASM_COST(2); SETL(R.ax, ASM_PORT_IN(R.dx));                  // 07dd in al, dx
  if (--R.cx != 0) { ASM_BACK(); goto L_07dd; }                // 07de loop 0x7dd
  ASM_COST(6); R.ax = POP();                                   // 07e0 pop ax
  R.dx = (u16)(INC16(R.dx));                                   // 07e1 inc dx
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 07e2 out dx, al
  R.dx = (u16)(DEC16(R.dx));                                   // 07e3 dec dx
  PUSH(R.ax);                                                  // 07e4 push ax
  R.cx = (u16)(M16(CS, (u16)(0x962)));                         // 07e5 mov cx, word ptr cs:[0x962]
L_07ea:   ASM_COST(2); SETL(R.ax, ASM_PORT_IN(R.dx));                  // 07ea in al, dx
  if (--R.cx != 0) { ASM_BACK(); goto L_07ea; }                // 07eb loop 0x7ea
  ASM_COST(6);                                                 // 07ed sti
  R.ax = POP();                                                // 07ee pop ax
  R.cx = POP();                                                // 07ef pop cx
  R.dx = POP();                                                // 07f0 pop dx
  R.si = POP();                                                // 07f1 pop si
  R.sp += 2; goto L_ret;                                       // 07f2 ret
L_ret:
  return;
}

static u16 f_sb15_07cb(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_07cb();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0734 FUN_1000_0734  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0734(void)
{
  R.cs = sb15_seg;
  ASM_COST(15); PUSH(R.cx);                                    // 0734 push cx
  PUSH(R.dx);                                                  // 0735 push dx
  PUSH(R.si);                                                  // 0736 push si
  R.dx = (u16)(R.cx);                                          // 0737 mov dx, cx
  PUSH(R.ax);                                                  // 0739 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 073a shl ax, 1
  R.si = (u16)(R.ax);                                          // 073c mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x85e)));                     // 073e mov ah, byte ptr cs:[si + 0x85e]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 0743 add ah, 0x40
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x4b)));                      // 0746 mov al, byte ptr es:[bx + 0x4b]
  SETL(R.cx, 0x6);                                             // 074a mov cl, 6
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 074c shl al, cl
  SETL(R.cx, M8(ES, (u16)(R.bx + 0x4a)));                      // 074e mov cl, byte ptr es:[bx + 0x4a]
  SUB8(M8(ES, (u16)(R.bx + 0x44)), 0x1);                       // 0752 cmp byte ptr es:[bx + 0x44], 1
  if (!R.zf) goto L_077f;                                      // 0757 jne 0x77f
  ASM_COST(19); PUSH(R.ax);                                    // 0759 push ax
  SETL(R.ax, (u8)(R.dx >> 8));                                 // 075a mov al, dh
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 075c xor ah, ah
  MUL8((u8)R.dx);                                              // 075e mul dl
  SETL(R.cx, 0x6);                                             // 0760 mov cl, 6
  R.ax = (u16)(SHR16(R.ax, (u8)R.cx));                         // 0762 shr ax, cl
  R.ax = (u16)(INC16(R.ax));                                   // 0764 inc ax
  R.ax = (u16)(SHR16(R.ax, 0x1));                              // 0765 shr ax, 1
  SETL(R.cx, 0x3f);                                            // 0767 mov cl, 0x3f
  SETL(R.cx, SUB8((u8)R.cx, M8(ES, (u16)(R.bx + 0x4a))));      // 0769 sub cl, byte ptr es:[bx + 0x4a]
  MUL8((u8)R.cx);                                              // 076d mul cl
  SETL(R.cx, 0x6);                                             // 076f mov cl, 6
  R.ax = (u16)(SHR16(R.ax, (u8)R.cx));                         // 0771 shr ax, cl
  R.ax = (u16)(INC16(R.ax));                                   // 0773 inc ax
  R.ax = (u16)(SHR16(R.ax, 0x1));                              // 0774 shr ax, 1
  R.ax = (u16)(AND16(R.ax, 0x3f));                             // 0776 and ax, 0x3f
  R.cx = (u16)(0x3f);                                          // 0779 mov cx, 0x3f
  R.cx = (u16)(SUB16(R.cx, R.ax));                             // 077c sub cx, ax
  R.ax = POP();                                                // 077e pop ax
L_077f:   ASM_COST(2); SETL(R.ax, OR8((u8)R.ax, (u8)R.cx));            // 077f or al, cl
  PUSH(0x0784); a_sb15_07cb();                                 // 0781 call 0x7cb
  ASM_COST(31); R.ax = POP();                                  // 0784 pop ax
  PUSH(R.ax);                                                  // 0785 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0786 shl ax, 1
  R.ax = (u16)(INC16(R.ax));                                   // 0788 inc ax
  R.si = (u16)(R.ax);                                          // 0789 mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x85e)));                     // 078b mov ah, byte ptr cs:[si + 0x85e]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 0790 add ah, 0x40
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x57)));                      // 0793 mov al, byte ptr es:[bx + 0x57]
  SETL(R.cx, 0x6);                                             // 0797 mov cl, 6
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 0799 shl al, cl
  PUSH(R.ax);                                                  // 079b push ax
  SETL(R.ax, (u8)(R.dx >> 8));                                 // 079c mov al, dh
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 079e xor ah, ah
  MUL8((u8)R.dx);                                              // 07a0 mul dl
  SETL(R.cx, 0x6);                                             // 07a2 mov cl, 6
  R.ax = (u16)(SHR16(R.ax, (u8)R.cx));                         // 07a4 shr ax, cl
  R.ax = (u16)(INC16(R.ax));                                   // 07a6 inc ax
  R.ax = (u16)(SHR16(R.ax, 0x1));                              // 07a7 shr ax, 1
  SETL(R.cx, 0x3f);                                            // 07a9 mov cl, 0x3f
  SETL(R.cx, SUB8((u8)R.cx, M8(ES, (u16)(R.bx + 0x56))));      // 07ab sub cl, byte ptr es:[bx + 0x56]
  MUL8((u8)R.cx);                                              // 07af mul cl
  SETL(R.cx, 0x6);                                             // 07b1 mov cl, 6
  R.ax = (u16)(SHR16(R.ax, (u8)R.cx));                         // 07b3 shr ax, cl
  R.ax = (u16)(INC16(R.ax));                                   // 07b5 inc ax
  R.ax = (u16)(SHR16(R.ax, 0x1));                              // 07b6 shr ax, 1
  R.ax = (u16)(AND16(R.ax, 0x3f));                             // 07b8 and ax, 0x3f
  R.cx = (u16)(0x3f);                                          // 07bb mov cx, 0x3f
  R.cx = (u16)(SUB16(R.cx, R.ax));                             // 07be sub cx, ax
  R.ax = POP();                                                // 07c0 pop ax
  SETL(R.ax, OR8((u8)R.ax, (u8)R.cx));                         // 07c1 or al, cl
  PUSH(0x07c6); a_sb15_07cb();                                 // 07c3 call 0x7cb
  ASM_COST(5); R.ax = POP();                                   // 07c6 pop ax
  R.si = POP();                                                // 07c7 pop si
  R.dx = POP();                                                // 07c8 pop dx
  R.cx = POP();                                                // 07c9 pop cx
  R.sp += 2; goto L_ret;                                       // 07ca ret
L_ret:
  return;
}

static u16 f_sb15_0734(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0734();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0A81 FUN_1000_0a81  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0a81(void)
{
  R.cs = sb15_seg;
  ASM_COST(11); PUSH(R.ax);                                    // 0a81 push ax
  PUSH(R.bx);                                                  // 0a82 push bx
  PUSH(R.cx);                                                  // 0a83 push cx
  PUSH(R.si);                                                  // 0a84 push si
  PUSH(R.ds);                                                  // 0a85 push ds
  PUSH(R.es);                                                  // 0a86 push es
  // 0a87 cli 
  SETL(R.cx, (u8)R.ax);                                        // 0a88 mov cl, al
  R.ax = (u16)(M16(CS, (u16)(R.di)));                          // 0a8a mov ax, word ptr cs:[di]
  R.ax = (u16)(OR16(R.ax, M16(CS, (u16)(R.di + 0x2))));        // 0a8d or ax, word ptr cs:[di + 2]
  if (!R.zf) goto L_0abc;                                      // 0a91 jne 0xabc
  ASM_COST(18); R.ax = (u16)(XOR16(R.ax, R.ax));               // 0a93 xor ax, ax
  R.ds = (u16)(R.ax);                                          // 0a95 mov ds, ax
  SETL(R.ax, (u8)R.cx);                                        // 0a97 mov al, cl
  R.ax = (u16)(ADD16(R.ax, 0x8));                              // 0a99 add ax, 8
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0a9c shl ax, 1
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0a9e shl ax, 1
  R.si = (u16)(R.ax);                                          // 0aa0 mov si, ax
  { u16 a_ = (u16)(R.si); R.bx = (u16)(M16(DS, a_)); R.es = M16(DS, (u16)(a_ + 2)); } // 0aa2 les bx, ptr [si]
  W16(CS, (u16)(R.di + 0x2), R.es);                            // 0aa4 mov word ptr cs:[di + 2], es
  W16(CS, (u16)(R.di), R.bx);                                  // 0aa8 mov word ptr cs:[di], bx
  W16(DS, (u16)(R.si), R.dx);                                  // 0aab mov word ptr [si], dx
  W16(DS, (u16)(R.si + 0x2), R.cs);                            // 0aad mov word ptr [si + 2], cs
  SETH(R.ax, 0x1);                                             // 0ab0 mov ah, 1
  SETH(R.ax, SHL8((u8)(R.ax >> 8), (u8)R.cx));                 // 0ab2 shl ah, cl
  SETH(R.ax, (u8)~(u8)(R.ax >> 8));                            // 0ab4 not ah
  SETL(R.ax, ASM_PORT_IN(0x21));                               // 0ab6 in al, 0x21
  SETL(R.ax, AND8((u8)R.ax, (u8)(R.ax >> 8)));                 // 0ab8 and al, ah
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 0aba out 0x21, al
L_0abc:   ASM_COST(8);                                                 // 0abc sti
  R.es = POP();                                                // 0abd pop es
  R.ds = POP();                                                // 0abe pop ds
  R.si = POP();                                                // 0abf pop si
  R.cx = POP();                                                // 0ac0 pop cx
  R.bx = POP();                                                // 0ac1 pop bx
  R.ax = POP();                                                // 0ac2 pop ax
  R.sp += 2; goto L_ret;                                       // 0ac3 ret
L_ret:
  return;
}

static u16 f_sb15_0a81(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0a81();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0AC4 FUN_1000_0ac4  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0ac4(void)
{
  R.cs = sb15_seg;
  ASM_COST(11); PUSH(R.ax);                                    // 0ac4 push ax
  PUSH(R.bx);                                                  // 0ac5 push bx
  PUSH(R.cx);                                                  // 0ac6 push cx
  PUSH(R.di);                                                  // 0ac7 push di
  PUSH(R.ds);                                                  // 0ac8 push ds
  PUSH(R.es);                                                  // 0ac9 push es
  // 0aca cli 
  SETL(R.cx, (u8)R.ax);                                        // 0acb mov cl, al
  R.ax = (u16)(M16(CS, (u16)(R.si)));                          // 0acd mov ax, word ptr cs:[si]
  R.ax = (u16)(OR16(R.ax, M16(CS, (u16)(R.si + 0x2))));        // 0ad0 or ax, word ptr cs:[si + 2]
  if (R.zf) goto L_0af8;                                       // 0ad4 je 0xaf8
  ASM_COST(12); R.ax = (u16)(XOR16(R.ax, R.ax));               // 0ad6 xor ax, ax
  R.ds = (u16)(R.ax);                                          // 0ad8 mov ds, ax
  SETL(R.ax, (u8)R.cx);                                        // 0ada mov al, cl
  R.ax = (u16)(ADD16(R.ax, 0x8));                              // 0adc add ax, 8
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0adf shl ax, 1
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0ae1 shl ax, 1
  R.di = (u16)(R.ax);                                          // 0ae3 mov di, ax
  { u16 a_ = (u16)(R.si); R.bx = (u16)(M16(CS, a_)); R.es = M16(CS, (u16)(a_ + 2)); } // 0ae5 les bx, ptr cs:[si]
  W16(DS, (u16)(R.di), R.bx);                                  // 0ae8 mov word ptr [di], bx
  W16(DS, (u16)(R.di + 0x2), R.es);                            // 0aea mov word ptr [di + 2], es
  W16(CS, (u16)(R.si + 0x2), 0x0);                             // 0aed mov word ptr cs:[si + 2], 0
  W16(CS, (u16)(R.si), 0x0);                                   // 0af3 mov word ptr cs:[si], 0
L_0af8:   ASM_COST(8);                                                 // 0af8 sti
  R.es = POP();                                                // 0af9 pop es
  R.ds = POP();                                                // 0afa pop ds
  R.di = POP();                                                // 0afb pop di
  R.cx = POP();                                                // 0afc pop cx
  R.bx = POP();                                                // 0afd pop bx
  R.ax = POP();                                                // 0afe pop ax
  R.sp += 2; goto L_ret;                                       // 0aff ret
L_ret:
  return;
}

static u16 f_sb15_0ac4(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0ac4();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:06F7 FUN_1000_06f7  FIX: recompiled from the machine code (asm2c)
static void a_sb15_06f7(void)
{
  R.cs = sb15_seg;
  ASM_COST(22); PUSH(R.bx);                                    // 06f7 push bx
  PUSH(R.cx);                                                  // 06f8 push cx
  PUSH(R.dx);                                                  // 06f9 push dx
  SETH(R.dx, (u8)(R.ax >> 8));                                 // 06fa mov dh, ah
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 06fc xor ah, ah
  SETL(R.cx, 0xc);                                             // 06fe mov cl, 0xc
  DIV8((u8)R.cx, 0x0700);                                      // 0700 div cl
  SETL(R.dx, (u8)R.ax);                                        // 0702 mov dl, al
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 0704 mov al, ah
  SETL(R.ax, ADD8((u8)R.ax, (u8)(R.dx >> 8)));                 // 0706 add al, dh
  R.ax = (u16)(i16)(i8)R.ax;                                   // 0708 cwde
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0709 shl ax, 1
  R.bx = (u16)(R.ax);                                          // 070b mov bx, ax
  R.ax = (u16)(M16(CS, (u16)(R.bx + 0x8a0)));                  // 070d mov ax, word ptr cs:[bx + 0x8a0]
  SETH(R.dx, XOR8((u8)(R.dx >> 8), (u8)(R.dx >> 8)));          // 0712 xor dh, dh
  SETL(R.cx, 0xa);                                             // 0714 mov cl, 0xa
  R.dx = (u16)(SHL16(R.dx, (u8)R.cx));                         // 0716 shl dx, cl
  R.ax = (u16)(OR16(R.ax, R.dx));                              // 0718 or ax, dx
  R.dx = POP();                                                // 071a pop dx
  R.cx = POP();                                                // 071b pop cx
  R.bx = POP();                                                // 071c pop bx
  R.sp += 2; goto L_ret;                                       // 071d ret
L_ret:
  return;
}

static u16 f_sb15_06f7(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_06f7();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:071E FUN_1000_071e  FIX: recompiled from the machine code (asm2c)
static void a_sb15_071e(void)
{
  R.cs = sb15_seg;
  ASM_COST(4); PUSH(R.ax);                                     // 071e push ax
  PUSH(R.si);                                                  // 071f push si
  SUB8((u8)R.ax, 0x3c);                                        // 0720 cmp al, 0x3c
  if (R.cf) goto L_0726;                                       // 0722 jb 0x726
  ASM_COST(1); SETL(R.ax, 0x3b);                               // 0724 mov al, 0x3b
L_0726:   ASM_COST(7); SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8))); // 0726 xor ah, ah
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0728 shl ax, 1
  R.si = (u16)(R.ax);                                          // 072a mov si, ax
  R.cx = (u16)(M16(CS, (u16)(R.si + 0x8e8)));                  // 072c mov cx, word ptr cs:[si + 0x8e8]
  R.si = POP();                                                // 0731 pop si
  R.ax = POP();                                                // 0732 pop ax
  R.sp += 2; goto L_ret;                                       // 0733 ret
L_ret:
  return;
}

static u16 f_sb15_071e(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_071e();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:102C FUN_1000_102c  FIX: recompiled from the machine code (asm2c)
static void a_sb15_102c(void)
{
  R.cs = sb15_seg;
  ASM_COST(6); PUSH(R.bp);                                     // 102c push bp
  R.bp = (u16)(R.sp);                                          // 102d mov bp, sp
  PUSH(R.si);                                                  // 102f push si
  PUSH(R.di);                                                  // 1030 push di
  SUB16(M16(SS, (u16)(R.bp + 0x6)), 0xa);                      // 1031 cmp word ptr [bp + 6], 0xa
  if (R.zf) goto L_1064;                                       // 1035 je 0x1064
  ASM_COST(2); SUB16(M16(SS, (u16)(R.bp + 0x6)), 0x0);         // 1037 cmp word ptr [bp + 6], 0
  if (!R.zf) goto L_1060;                                      // 103b jne 0x1060
  ASM_COST(1); PUSH(0x1040); a_sb15_0dff();                    // 103d call 0xdff
  ASM_COST(12); { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 1040 les bx, ptr [bp + 8]
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x4)));                       // 1043 mov al, byte ptr es:[bx + 4]
  R.ax = (u16)(AND16(R.ax, 0xf));                              // 1047 and ax, 0xf
  R.si = (u16)(R.ax);                                          // 104a mov si, ax
  PUSH(R.ds);                                                  // 104c push ds
  { u16 a_ = (u16)(R.bx + 0x8); R.ax = (u16)(M16(ES, a_)); R.ds = M16(ES, (u16)(a_ + 2)); } // 104d lds ax, ptr es:[bx + 8]
  R.dx = (u16)(R.ds);                                          // 1051 mov dx, ds
  R.ds = POP();                                                // 1053 pop ds
  R.di = (u16)((u16)(R.bx + 0x32));                            // 1054 lea di, [bx + 0x32]
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0xe)));                    // 1057 mov bx, word ptr [bp + 0xe]
  R.cx = (u16)(M16(SS, (u16)(R.bp + 0xc)));                    // 105a mov cx, word ptr [bp + 0xc]
  PUSH(0x1060); a_sb15_0c4c();                                 // 105d call 0xc4c
L_1060:   ASM_COST(4); R.di = POP();                                   // 1060 pop di
  R.si = POP();                                                // 1061 pop si
  R.bp = POP();                                                // 1062 pop bp
  R.sp += 4; goto L_ret;                                       // 1063 retf
L_1064:   ASM_COST(4); PUSH(R.ds);                                     // 1064 push ds
  PUSH(R.cs);                                                  // 1065 push cs
  R.ds = POP();                                                // 1066 pop ds
  PUSH(0x106a); a_sb15_0e7e();                                 // 1067 call 0xe7e
  ASM_COST(10);                                                // 106a cli
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 106b xor ax, ax
  W16(DS, (u16)(0x1206), R.ax);                                // 106d mov word ptr [0x1206], ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xe)));                    // 1070 mov ax, word ptr [bp + 0xe]
  W8(DS, (u16)(0x11f6), (u8)R.ax);                             // 1073 mov byte ptr [0x11f6], al
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 1076 les bx, ptr [bp + 8]
  R.ax = (u16)((u16)(R.bx + 0x32));                            // 1079 lea ax, [bx + 0x32]
  R.cx = (u16)(R.ax);                                          // 107c mov cx, ax
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 107e cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_109a;                                      // 1083 jne 0x109a
  ASM_COST(11); PUSH(R.ax);                                    // 1085 push ax
  PUSH(R.bx);                                                  // 1086 push bx
  R.bx = (u16)(R.ax);                                          // 1087 mov bx, ax
  SETL(R.ax, M8(ES, (u16)(R.bx)));                             // 1089 mov al, byte ptr es:[bx]
  W8(DS, (u16)(0x1219), (u8)R.ax);                             // 108c mov byte ptr [0x1219], al
  W8(DS, (u16)(0x121a), (u8)R.ax);                             // 108f mov byte ptr [0x121a], al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 1092 xor al, al
  W8(DS, (u16)(0x1218), (u8)R.ax);                             // 1094 mov byte ptr [0x1218], al
  R.bx = POP();                                                // 1097 pop bx
  R.ax = POP();                                                // 1098 pop ax
  R.cx = (u16)(INC16(R.cx));                                   // 1099 inc cx
L_109a:   ASM_COST(7); W16(DS, (u16)(0x11ea), R.ax);                   // 109a mov word ptr [0x11ea], ax
  W16(DS, (u16)(0x11ec), R.es);                                // 109d mov word ptr [0x11ec], es
  W16(DS, (u16)(0x11ee), R.cx);                                // 10a1 mov word ptr [0x11ee], cx
  W16(DS, (u16)(0x11f0), R.es);                                // 10a5 mov word ptr [0x11f0], es
  { u16 a_ = (u16)(R.bx + 0x8); R.cx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 10a9 les cx, ptr es:[bx + 8]
  SUB16(R.cx, 0x0);                                            // 10ad cmp cx, 0
  if (!R.zf) goto L_10be;                                      // 10b0 jne 0x10be
  ASM_COST(8); R.ax = (u16)(0x1);                              // 10b2 mov ax, 1
  W16(DS, (u16)(0x1206), R.ax);                                // 10b5 mov word ptr [0x1206], ax
  // 10b8 sti 
  R.ds = POP();                                                // 10b9 pop ds
  R.di = POP();                                                // 10ba pop di
  R.si = POP();                                                // 10bb pop si
  R.bp = POP();                                                // 10bc pop bp
  R.sp += 4; goto L_ret;                                       // 10bd retf
L_10be:   ASM_COST(15); R.cx = (u16)(ADD16(R.cx, R.ax));               // 10be add cx, ax
  R.cx = (u16)(DEC16(R.cx));                                   // 10c0 dec cx
  W16(CS, (u16)(0x11f2), R.cx);                                // 10c1 mov word ptr cs:[0x11f2], cx
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 10c6 xor ax, ax
  R.es = (u16)(R.ax);                                          // 10c8 mov es, ax
  R.ax = (u16)(M16(ES, (u16)(0x20)));                          // 10ca mov ax, word ptr es:[0x20]
  R.dx = (u16)(M16(ES, (u16)(0x22)));                          // 10ce mov dx, word ptr es:[0x22]
  W16(DS, (u16)(0x11fa), R.ax);                                // 10d3 mov word ptr [0x11fa], ax
  W16(DS, (u16)(0x11fc), R.dx);                                // 10d6 mov word ptr [0x11fc], dx
  PUSH(R.es);                                                  // 10da push es
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 10db les bx, ptr [bp + 8]
  R.ax = (u16)(0xe9d);                                         // 10de mov ax, 0xe9d
  R.dx = (u16)(R.cs);                                          // 10e1 mov dx, cs
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 10e3 cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_10ef;                                      // 10e8 jne 0x10ef
  ASM_COST(2); R.ax = (u16)(0xf48);                            // 10ea mov ax, 0xf48
  R.dx = (u16)(R.cs);                                          // 10ed mov dx, cs
L_10ef:   ASM_COST(5); R.es = POP();                                   // 10ef pop es
  W16(ES, (u16)(0x20), R.ax);                                  // 10f0 mov word ptr es:[0x20], ax
  W16(ES, (u16)(0x22), R.dx);                                  // 10f4 mov word ptr es:[0x22], dx
  R.ax = (u16)(0x120);                                         // 10f9 mov ax, 0x120
  PUSH(0x10ff); a_sb15_07cb();                                 // 10fc call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x2021);                           // 10ff mov ax, 0x2021
  PUSH(0x1105); a_sb15_07cb();                                 // 1102 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x60f0);                           // 1105 mov ax, 0x60f0
  PUSH(0x110b); a_sb15_07cb();                                 // 1108 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x80f0);                           // 110b mov ax, 0x80f0
  PUSH(0x1111); a_sb15_07cb();                                 // 110e call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xc001);                           // 1111 mov ax, 0xc001
  PUSH(0x1117); a_sb15_07cb();                                 // 1114 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xe000);                           // 1117 mov ax, 0xe000
  PUSH(0x111d); a_sb15_07cb();                                 // 111a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 111d mov ax, 0x433f
  PUSH(0x1123); a_sb15_07cb();                                 // 1120 call 0x7cb
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 1123 mov ax, 0xb001
  // 1126 cli 
  R.ax = (u16)(0xa08f);                                        // 1127 mov ax, 0xa08f
  PUSH(0x112d); a_sb15_07cb();                                 // 112a call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 112d mov ax, 0xb02e
  PUSH(0x1133); a_sb15_07cb();                                 // 1130 call 0x7cb
  ASM_COST(5); SETL(R.ax, 0x36);                               // 1133 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 1135 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 1137 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1139 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 113b out 0x40, al
L_113d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 113d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 113f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1141 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 1143 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 1145 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 1147 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 1149 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_113d; }      // 114d jg 0x113d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 114f mov ax, 0xb020
  PUSH(0x1155); a_sb15_07cb();                                 // 1152 call 0x7cb
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 1155 mov ax, 0xa000
  PUSH(0x115b); a_sb15_07cb();                                 // 1158 call 0x7cb
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 115b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 115e cmp bx, 0x64
  if (!R.cf) goto L_1168;                                      // 1161 jae 0x1168
  ASM_COST(2); R.bx = (u16)(0x64);                             // 1163 mov bx, 0x64
  goto L_1171;                                                 // 1166 jmp 0x1171
L_1168:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 1168 cmp bx, 0x4e20
  if (R.cf) goto L_1171;                                       // 116c jb 0x1171
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 116e mov bx, 0x4e20
L_1171:   ASM_COST(22); R.dx = (u16)(0x12);                            // 1171 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 1174 mov ax, 0x34dc
  DIV16(R.bx, 0x1177);                                         // 1177 div bx
  R.bx = (u16)(R.ax);                                          // 1179 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0x11fe)));                        // 117b mov ax, word ptr [0x11fe]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 117e xor dx, dx
  DIV16(R.bx, 0x1180);                                         // 1180 div bx
  W16(DS, (u16)(0x1200), R.ax);                                // 1182 mov word ptr [0x1200], ax
  W16(DS, (u16)(0x1202), R.ax);                                // 1185 mov word ptr [0x1202], ax
  W16(DS, (u16)(0x11f4), R.bx);                                // 1188 mov word ptr [0x11f4], bx
  SETL(R.ax, 0x36);                                            // 118c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 118e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 1190 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1192 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 1194 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 1196 out 0x40, al
  // 1198 sti 
  R.ds = POP();                                                // 1199 pop ds
  R.di = POP();                                                // 119a pop di
  R.si = POP();                                                // 119b pop si
  R.bp = POP();                                                // 119c pop bp
  R.sp += 4; goto L_ret;                                       // 119d retf
L_ret:
  return;
}

static u16 f_sb15_102c(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4)
{
  ASM_ENTER();
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_sb15_102c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0DFF FUN_1000_0dff  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0dff(void)
{
  R.cs = sb15_seg;
  ASM_COST(5); PUSH(R.ax);                                     // 0dff push ax
  PUSH(R.dx);                                                  // 0e00 push dx
  PUSH(R.si);                                                  // 0e01 push si
  SUB16(M16(CS, (u16)(0x11e4)), 0x1);                          // 0e02 cmp word ptr cs:[0x11e4], 1
  if (R.zf) goto L_0e31;                                       // 0e08 je 0xe31
  ASM_COST(1); PUSH(0x0e0d); a_sb15_0e35();                    // 0e0a call 0xe35
  ASM_COST(7); SETL(R.ax, 0x5);                                // 0e0d mov al, 5
  ASM_PORT_OUT(0xa, (u8)R.ax);                                 // 0e0f out 0xa, al
  SETL(R.ax, M8(CS, (u16)(0x11e9)));                           // 0e11 mov al, byte ptr cs:[0x11e9]
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 0e15 out 0x21, al
  R.ax = (u16)(M16(CS, (u16)(0x11be)));                        // 0e17 mov ax, word ptr cs:[0x11be]
  R.si = (u16)(0x11d0);                                        // 0e1b mov si, 0x11d0
  PUSH(0x0e21); a_sb15_0ac4();                                 // 0e1e call 0xac4
  ASM_COST(4); R.dx = (u16)(M16(CS, (u16)(0x11bc)));           // 0e21 mov dx, word ptr cs:[0x11bc]
  SETL(R.dx, ADD8((u8)R.dx, 0xe));                             // 0e26 add dl, 0xe
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0e29 in al, dx
  W16(CS, (u16)(0x11e4), 0x1);                                 // 0e2a mov word ptr cs:[0x11e4], 1
L_0e31:   ASM_COST(4); R.si = POP();                                   // 0e31 pop si
  R.dx = POP();                                                // 0e32 pop dx
  R.ax = POP();                                                // 0e33 pop ax
  R.sp += 2; goto L_ret;                                       // 0e34 ret
L_ret:
  return;
}

static u16 f_sb15_0dff(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0dff();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0C4C FUN_1000_0c4c  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0c4c(void)
{
  R.cs = sb15_seg;
  ASM_COST(15); PUSH(R.ax);                                    // 0c4c push ax
  PUSH(R.bx);                                                  // 0c4d push bx
  PUSH(R.cx);                                                  // 0c4e push cx
  PUSH(R.dx);                                                  // 0c4f push dx
  PUSH(R.di);                                                  // 0c50 push di
  PUSH(R.si);                                                  // 0c51 push si
  PUSH(R.es);                                                  // 0c52 push es
  PUSH(R.cx);                                                  // 0c53 push cx
  W16(CS, (u16)(0x11e4), 0x0);                                 // 0c54 mov word ptr cs:[0x11e4], 0
  W16(CS, (u16)(0x11d7), R.ax);                                // 0c5b mov word ptr cs:[0x11d7], ax
  W16(CS, (u16)(0x11d9), R.dx);                                // 0c5f mov word ptr cs:[0x11d9], dx
  W16(CS, (u16)(0x11e0), R.ax);                                // 0c64 mov word ptr cs:[0x11e0], ax
  W16(CS, (u16)(0x11e2), R.dx);                                // 0c68 mov word ptr cs:[0x11e2], dx
  W16(CS, (u16)(0x11e7), R.bx);                                // 0c6d mov word ptr cs:[0x11e7], bx
  PUSH(0x0c75); a_sb15_0bb6();                                 // 0c72 call 0xbb6
  ASM_COST(5); W8(CS, (u16)(0x11d4), (u8)R.dx);                // 0c75 mov byte ptr cs:[0x11d4], dl
  W16(CS, (u16)(0x11d5), R.ax);                                // 0c7a mov word ptr cs:[0x11d5], ax
  W8(CS, (u16)(0x11db), (u8)R.dx);                             // 0c7e mov byte ptr cs:[0x11db], dl
  W16(CS, (u16)(0x11dc), R.ax);                                // 0c83 mov word ptr cs:[0x11dc], ax
  PUSH(0x0c8a); a_sb15_0bf9();                                 // 0c87 call 0xbf9
  ASM_COST(5); W16(CS, (u16)(0x11de), R.cx);                   // 0c8a mov word ptr cs:[0x11de], cx
  SETL(R.ax, ASM_PORT_IN(0x21));                               // 0c8f in al, 0x21
  W8(CS, (u16)(0x11e9), (u8)R.ax);                             // 0c91 mov byte ptr cs:[0x11e9], al
  SETH(R.ax, 0x40);                                            // 0c95 mov ah, 0x40
  PUSH(0x0c9a); a_sb15_0a1d();                                 // 0c97 call 0xa1d
  ASM_COST(5); R.dx = (u16)(0xf);                              // 0c9a mov dx, 0xf
  R.ax = (u16)(0x4240);                                        // 0c9d mov ax, 0x4240
  R.cx = POP();                                                // 0ca0 pop cx
  SUB16(R.cx, 0xf43);                                          // 0ca1 cmp cx, 0xf43
  if (!R.cf) goto L_0caa;                                      // 0ca5 jae 0xcaa
  ASM_COST(1); R.cx = (u16)(0xf43);                            // 0ca7 mov cx, 0xf43
L_0caa:   ASM_COST(4); DIV16(R.cx, 0x0caa);                            // 0caa div cx
  SETL(R.ax, NEG8((u8)R.ax));                                  // 0cac neg al
  SETH(R.ax, (u8)R.ax);                                        // 0cae mov ah, al
  PUSH(0x0cb3); a_sb15_0a1d();                                 // 0cb0 call 0xa1d
  ASM_COST(4); R.ax = (u16)(M16(CS, (u16)(0x11be)));           // 0cb3 mov ax, word ptr cs:[0x11be]
  R.dx = (u16)(0xd19);                                         // 0cb7 mov dx, 0xd19
  R.di = (u16)(0x11d0);                                        // 0cba mov di, 0x11d0
  PUSH(0x0cc0); a_sb15_0a81();                                 // 0cbd call 0xa81
  ASM_COST(1); PUSH(0x0cc3); a_sb15_0bcc();                    // 0cc0 call 0xbcc
  ASM_COST(2); SUB16(R.si, 0x1);                               // 0cc3 cmp si, 1
  if (!R.zf) goto L_0cd2;                                      // 0cc6 jne 0xcd2
  ASM_COST(3); SETH(R.ax, 0x14);                               // 0cc8 mov ah, 0x14
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cca mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0ccf jmp 0xcff
L_0cd2:   ASM_COST(2); SUB16(R.si, 0x3);                               // 0cd2 cmp si, 3
  if (!R.zf) goto L_0ce1;                                      // 0cd5 jne 0xce1
  ASM_COST(3); SETH(R.ax, 0x75);                               // 0cd7 mov ah, 0x75
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cd9 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0cde jmp 0xcff
L_0ce1:   ASM_COST(2); SUB16(R.si, 0x4);                               // 0ce1 cmp si, 4
  if (!R.zf) goto L_0cf0;                                      // 0ce4 jne 0xcf0
  ASM_COST(3); SETH(R.ax, 0x77);                               // 0ce6 mov ah, 0x77
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0ce8 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0ced jmp 0xcff
L_0cf0:   ASM_COST(2); SUB16(R.si, 0x5);                               // 0cf0 cmp si, 5
  if (!R.zf) goto L_0cff;                                      // 0cf3 jne 0xcff
  ASM_COST(3); SETH(R.ax, 0x17);                               // 0cf5 mov ah, 0x17
  W8(CS, (u16)(0x11e6), (u8)(R.ax >> 8));                      // 0cf7 mov byte ptr cs:[0x11e6], ah
  goto L_0cff;                                                 // 0cfc jmp 0xcff
L_0cff:   ASM_COST(1); PUSH(0x0d02); a_sb15_0a1d();                    // 0cff call 0xa1d
  ASM_COST(3); R.cx = (u16)(M16(CS, (u16)(0x11de)));           // 0d02 mov cx, word ptr cs:[0x11de]
  SETH(R.ax, (u8)R.cx);                                        // 0d07 mov ah, cl
  PUSH(0x0d0c); a_sb15_0a1d();                                 // 0d09 call 0xa1d
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0d0c mov ah, ch
  PUSH(0x0d11); a_sb15_0a1d();                                 // 0d0e call 0xa1d
  ASM_COST(8); R.es = POP();                                   // 0d11 pop es
  R.si = POP();                                                // 0d12 pop si
  R.di = POP();                                                // 0d13 pop di
  R.dx = POP();                                                // 0d14 pop dx
  R.cx = POP();                                                // 0d15 pop cx
  R.bx = POP();                                                // 0d16 pop bx
  R.ax = POP();                                                // 0d17 pop ax
  R.sp += 2; goto L_ret;                                       // 0d18 ret
L_ret:
  return;
}

static u16 f_sb15_0c4c(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0c4c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0E7E FUN_1000_0e7e  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0e7e(void)
{
  R.cs = sb15_seg;
  ASM_COST(8);                                                 // 0e7e cli
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0e7f xor al, al
  W8(CS, (u16)(0x1218), (u8)R.ax);                             // 0e81 mov byte ptr cs:[0x1218], al
  R.ax = (u16)(0xffff);                                        // 0e85 mov ax, 0xffff
  W16(CS, (u16)(0x11ee), R.ax);                                // 0e88 mov word ptr cs:[0x11ee], ax
  SETL(R.ax, 0x1);                                             // 0e8c mov al, 1
  W8(CS, (u16)(0x11f6), (u8)R.ax);                             // 0e8e mov byte ptr cs:[0x11f6], al
  // 0e92 sti 
L_0e93:   ASM_COST(3); R.ax = (u16)(M16(CS, (u16)(0x1206)));           // 0e93 mov ax, word ptr cs:[0x1206]
  SUB16(R.ax, 0x0);                                            // 0e97 cmp ax, 0
  if (R.zf) { ASM_BACK(); goto L_0e93; }                       // 0e9a je 0xe93
  ASM_COST(1); R.sp += 2; goto L_ret;                          // 0e9c ret
L_ret:
  return;
}

static u16 f_sb15_0e7e(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0e7e();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0BB6 FUN_1000_0bb6  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0bb6(void)
{
  R.cs = sb15_seg;
  ASM_COST(11); PUSH(R.cx);                                    // 0bb6 push cx
  R.dx = (u16)(R.es);                                          // 0bb7 mov dx, es
  SETL(R.cx, 0x4);                                             // 0bb9 mov cl, 4
  R.dx = (u16)(ROL16(R.dx, (u8)R.cx));                         // 0bbb rol dx, cl
  R.ax = (u16)(R.dx);                                          // 0bbd mov ax, dx
  R.ax = (u16)(AND16(R.ax, 0xfff0));                           // 0bbf and ax, 0xfff0
  R.dx = (u16)(AND16(R.dx, 0xf));                              // 0bc2 and dx, 0xf
  R.ax = (u16)(ADD16(R.ax, R.di));                             // 0bc5 add ax, di
  R.dx = (u16)(ADC16(R.dx, 0x0));                              // 0bc7 adc dx, 0
  R.cx = POP();                                                // 0bca pop cx
  R.sp += 2; goto L_ret;                                       // 0bcb ret
L_ret:
  return;
}

static u16 f_sb15_0bb6(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0bb6();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0BF9 FUN_1000_0bf9  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0bf9(void)
{
  R.cs = sb15_seg;
  ASM_COST(3); PUSH(R.ax);                                     // 0bf9 push ax
  W16(CS, (u16)(0x11e2), SUB16(M16(CS, (u16)(0x11e2)), 0x1));  // 0bfa sub word ptr cs:[0x11e2], 1
  if (R.cf) goto L_0c18;                                       // 0c00 jb 0xc18
  ASM_COST(7); R.cx = (u16)(0xffff);                           // 0c02 mov cx, 0xffff
  R.ax = (u16)(M16(CS, (u16)(0x11dc)));                        // 0c05 mov ax, word ptr cs:[0x11dc]
  R.cx = (u16)(SUB16(R.cx, R.ax));                             // 0c09 sub cx, ax
  W16(CS, (u16)(0x11e0), ADD16(M16(CS, (u16)(0x11e0)), R.ax)); // 0c0b add word ptr cs:[0x11e0], ax
  W16(CS, (u16)(0x11e2), ADC16(M16(CS, (u16)(0x11e2)), 0x0));  // 0c10 adc word ptr cs:[0x11e2], 0
  R.ax = POP();                                                // 0c16 pop ax
  R.sp += 2; goto L_ret;                                       // 0c17 ret
L_0c18:   ASM_COST(5); R.cx = (u16)(0xffff);                           // 0c18 mov cx, 0xffff
  R.ax = (u16)(M16(CS, (u16)(0x11dc)));                        // 0c1b mov ax, word ptr cs:[0x11dc]
  R.cx = (u16)(SUB16(R.cx, R.ax));                             // 0c1f sub cx, ax
  SUB16(M16(CS, (u16)(0x11e0)), R.cx);                         // 0c21 cmp word ptr cs:[0x11e0], cx
  if (R.cf) goto L_0c36;                                       // 0c26 jb 0xc36
  ASM_COST(4); W16(CS, (u16)(0x11e0), SUB16(M16(CS, (u16)(0x11e0)), R.cx)); // 0c28 sub word ptr cs:[0x11e0], cx
  W16(CS, (u16)(0x11e2), 0x0);                                 // 0c2d mov word ptr cs:[0x11e2], 0
  R.ax = POP();                                                // 0c34 pop ax
  R.sp += 2; goto L_ret;                                       // 0c35 ret
L_0c36:   ASM_COST(6); R.cx = (u16)(M16(CS, (u16)(0x11e0)));           // 0c36 mov cx, word ptr cs:[0x11e0]
  R.cx = (u16)(DEC16(R.cx));                                   // 0c3b dec cx
  W16(CS, (u16)(0x11e0), 0x0);                                 // 0c3c mov word ptr cs:[0x11e0], 0
  W16(CS, (u16)(0x11e2), 0x0);                                 // 0c43 mov word ptr cs:[0x11e2], 0
  R.ax = POP();                                                // 0c4a pop ax
  R.sp += 2; goto L_ret;                                       // 0c4b ret
L_ret:
  return;
}

static u16 f_sb15_0bf9(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0bf9();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0E35 FUN_1000_0e35  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0e35(void)
{
  R.cs = sb15_seg;
  ASM_COST(12); PUSH(R.ax);                                    // 0e35 push ax
  PUSH(R.dx);                                                  // 0e36 push dx
  PUSH(R.cx);                                                  // 0e37 push cx
  PUSH(R.si);                                                  // 0e38 push si
  PUSH(FLAGS16());                                             // 0e39 pushf
  SETH(R.ax, 0xd0);                                            // 0e3a mov ah, 0xd0
  R.dx = (u16)(M16(CS, (u16)(0x11bc)));                        // 0e3c mov dx, word ptr cs:[0x11bc]
  SETL(R.dx, ADD8((u8)R.dx, 0xc));                             // 0e41 add dl, 0xc
  R.si = (u16)(0x64);                                          // 0e44 mov si, 0x64
  R.si = (u16)(DEC16(R.si));                                   // 0e47 dec si
  R.si = (u16)(OR16(R.si, R.si));                              // 0e48 or si, si
  if (R.zf) goto L_0e6f;                                       // 0e4a je 0xe6f
  ASM_COST(1); R.cx = (u16)(0x64);                             // 0e4c mov cx, 0x64
L_0e4f:   ASM_COST(3);                                                 // 0e4f sti
  R.cx = (u16)(DEC16(R.cx));                                   // 0e50 dec cx
  if (R.cx == 0) goto L_0e6f;                                  // 0e51 jcxz 0xe6f
  ASM_COST(2); SUB16(M16(CS, (u16)(0x11e4)), 0x1);             // 0e53 cmp word ptr cs:[0x11e4], 1
  if (R.zf) goto L_0e6f;                                       // 0e59 je 0xe6f
  ASM_COST(4);                                                 // 0e5b cli
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0e5c in al, dx
  SETL(R.ax, OR8((u8)R.ax, (u8)R.ax));                         // 0e5d or al, al
  if (!R.sf) { ASM_BACK(); goto L_0e4f; }                      // 0e5f jns 0xe4f
  ASM_COST(1); R.cx = (u16)(0x64);                             // 0e61 mov cx, 0x64
L_0e64:   ASM_COST(2); R.cx = (u16)(DEC16(R.cx));                      // 0e64 dec cx
  if (R.cx == 0) goto L_0e6f;                                  // 0e65 jcxz 0xe6f
  ASM_COST(3); SETL(R.ax, ASM_PORT_IN(R.dx));                  // 0e67 in al, dx
  SETL(R.ax, OR8((u8)R.ax, (u8)R.ax));                         // 0e68 or al, al
  if (R.sf) { ASM_BACK(); goto L_0e64; }                       // 0e6a js 0xe64
  ASM_COST(1); goto L_0e6f;                                    // 0e6c jmp 0xe6f
L_0e6f:   ASM_COST(2); SETL(R.ax, (u8)(R.ax >> 8));                    // 0e6f mov al, ah
  R.cx = (u16)(0x1);                                           // 0e71 mov cx, 1
L_0e74:   ASM_COST(2); ASM_PORT_OUT(R.dx, (u8)R.ax);                   // 0e74 out dx, al
  if (--R.cx != 0) { ASM_BACK(); goto L_0e74; }                // 0e75 loop 0xe74
  ASM_COST(7);                                                 // 0e77 sti
  SETFLAGS16(POP());                                           // 0e78 popf
  R.si = POP();                                                // 0e79 pop si
  R.cx = POP();                                                // 0e7a pop cx
  R.dx = POP();                                                // 0e7b pop dx
  R.ax = POP();                                                // 0e7c pop ax
  R.sp += 2; goto L_ret;                                       // 0e7d ret
L_ret:
  return;
}

static u16 f_sb15_0e35(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0e35();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0A5B FUN_1000_0a5b  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0a5b(void)
{
  R.cs = sb15_seg;
  ASM_COST(8); PUSH(R.ax);                                     // 0a5b push ax
  PUSH(R.cx);                                                  // 0a5c push cx
  PUSH(R.dx);                                                  // 0a5d push dx
  R.dx = (u16)(M16(CS, (u16)(0x11bc)));                        // 0a5e mov dx, word ptr cs:[0x11bc]
  SETL(R.dx, ADD8((u8)R.dx, 0x6));                             // 0a63 add dl, 6
  SETL(R.ax, 0x1);                                             // 0a66 mov al, 1
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0a68 out dx, al
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0a69 in al, dx
L_0a6a:   ASM_COST(2); SETL(R.ax, INC8((u8)R.ax));                     // 0a6a inc al
  if (!R.zf) { ASM_BACK(); goto L_0a6a; }                      // 0a6c jne 0xa6a
  ASM_COST(2); ASM_PORT_OUT(R.dx, (u8)R.ax);                   // 0a6e out dx, al
  R.cx = (u16)(0x64);                                          // 0a6f mov cx, 0x64
L_0a72:   ASM_COST(1); PUSH(0x0a75); a_sb15_0a3a();                    // 0a72 call 0xa3a
  ASM_COST(3); SUB8((u8)R.ax, 0xaa);                           // 0a75 cmp al, 0xaa
  R.cf = 0;                                                    // 0a77 clc
  if (R.zf) goto L_0a7d;                                       // 0a78 je 0xa7d
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_0a72; }   // 0a7a loop 0xa72
  ASM_COST(1); R.cf = 1;                                       // 0a7c stc
L_0a7d:   ASM_COST(4); R.dx = POP();                                   // 0a7d pop dx
  R.cx = POP();                                                // 0a7e pop cx
  R.ax = POP();                                                // 0a7f pop ax
  R.sp += 2; goto L_ret;                                       // 0a80 ret
L_ret:
  return;
}

static u16 f_sb15_0a5b(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0a5b();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:04CA FUN_1000_04ca  FIX: recompiled from the machine code (asm2c)
static void a_sb15_04ca(void)
{
  R.cs = sb15_seg;
  ASM_COST(15); PUSH(R.ax);                                    // 04ca push ax
  PUSH(R.cx);                                                  // 04cb push cx
  PUSH(R.dx);                                                  // 04cc push dx
  SETL(R.ax, ASM_PORT_IN(0x61));                               // 04cd in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfe));                            // 04cf and al, 0xfe
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 04d1 out 0x61, al
  SETL(R.ax, 0xb0);                                            // 04d3 mov al, 0xb0
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 04d5 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 04d7 xor al, al
  ASM_PORT_OUT(0x42, (u8)R.ax);                                // 04d9 out 0x42, al
  ASM_PORT_OUT(0x42, (u8)R.ax);                                // 04db out 0x42, al
  SETL(R.ax, ASM_PORT_IN(0x61));                               // 04dd in al, 0x61
  SETL(R.ax, OR8((u8)R.ax, 0x1));                              // 04df or al, 1
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 04e1 out 0x61, al
  R.cx = (u16)(0x3e8);                                         // 04e3 mov cx, 0x3e8
L_04e6:   ASM_COST(2); SETL(R.ax, ASM_PORT_IN(0x61));                  // 04e6 in al, 0x61
  if (--R.cx != 0) { ASM_BACK(); goto L_04e6; }                // 04e8 loop 0x4e6
  ASM_COST(14); SETL(R.ax, ASM_PORT_IN(0x61));                 // 04ea in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfe));                            // 04ec and al, 0xfe
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 04ee out 0x61, al
  SETL(R.ax, ASM_PORT_IN(0x42));                               // 04f0 in al, 0x42
  { u16 t_ = (u8)(R.ax >> 8); SETH(R.ax, (u8)R.ax); SETL(R.ax, t_); } // 04f2 xchg ah, al
  SETL(R.ax, ASM_PORT_IN(0x42));                               // 04f4 in al, 0x42
  { u16 t_ = (u8)(R.ax >> 8); SETH(R.ax, (u8)R.ax); SETL(R.ax, t_); } // 04f6 xchg ah, al
  R.ax = (u16)(NEG16(R.ax));                                   // 04f8 neg ax
  R.cx = (u16)(R.ax);                                          // 04fa mov cx, ax
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 04fc xor dx, dx
  R.ax = (u16)(0x6d60);                                        // 04fe mov ax, 0x6d60
  DIV16(R.cx, 0x0501);                                         // 0501 div cx
  SUB16(R.ax, 0x0);                                            // 0503 cmp ax, 0
  if (!R.zf) goto L_050b;                                      // 0506 jne 0x50b
  ASM_COST(1); R.ax = (u16)(0x1);                              // 0508 mov ax, 1
L_050b:   ASM_COST(6); W16(CS, (u16)(0x962), R.ax);                    // 050b mov word ptr cs:[0x962], ax
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 050f xor dx, dx
  R.ax = (u16)(0xfa0);                                         // 0511 mov ax, 0xfa0
  DIV16(R.cx, 0x0514);                                         // 0514 div cx
  SUB16(R.ax, 0x0);                                            // 0516 cmp ax, 0
  if (!R.zf) goto L_051e;                                      // 0519 jne 0x51e
  ASM_COST(1); R.ax = (u16)(0x1);                              // 051b mov ax, 1
L_051e:   ASM_COST(5); W16(CS, (u16)(0x964), R.ax);                    // 051e mov word ptr cs:[0x964], ax
  R.dx = POP();                                                // 0522 pop dx
  R.cx = POP();                                                // 0523 pop cx
  R.ax = POP();                                                // 0524 pop ax
  R.sp += 2; goto L_ret;                                       // 0525 ret
L_ret:
  return;
}

static u16 f_sb15_04ca(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_04ca();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B00 FUN_1000_0b00  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0b00(void)
{
  R.cs = sb15_seg;
  ASM_COST(10); PUSH(R.cx);                                    // 0b00 push cx
  PUSH(R.dx);                                                  // 0b01 push dx
  PUSH(R.di);                                                  // 0b02 push di
  PUSH(R.si);                                                  // 0b03 push si
  SETL(R.ax, ASM_PORT_IN(0x21));                               // 0b04 in al, 0x21
  PUSH(R.ax);                                                  // 0b06 push ax
  SETL(R.ax, 0x2);                                             // 0b07 mov al, 2
  R.dx = (u16)(0xb78);                                         // 0b09 mov dx, 0xb78
  R.di = (u16)(0x11c0);                                        // 0b0c mov di, 0x11c0
  PUSH(0x0b12); a_sb15_0a81();                                 // 0b0f call 0xa81
  ASM_COST(4); SETL(R.ax, 0x3);                                // 0b12 mov al, 3
  R.dx = (u16)(0xb83);                                         // 0b14 mov dx, 0xb83
  R.di = (u16)(0x11c4);                                        // 0b17 mov di, 0x11c4
  PUSH(0x0b1d); a_sb15_0a81();                                 // 0b1a call 0xa81
  ASM_COST(4); SETL(R.ax, 0x5);                                // 0b1d mov al, 5
  R.dx = (u16)(0xb8e);                                         // 0b1f mov dx, 0xb8e
  R.di = (u16)(0x11c8);                                        // 0b22 mov di, 0x11c8
  PUSH(0x0b28); a_sb15_0a81();                                 // 0b25 call 0xa81
  ASM_COST(4); SETL(R.ax, 0x7);                                // 0b28 mov al, 7
  R.dx = (u16)(0xb99);                                         // 0b2a mov dx, 0xb99
  R.di = (u16)(0x11cc);                                        // 0b2d mov di, 0x11cc
  PUSH(0x0b33); a_sb15_0a81();                                 // 0b30 call 0xa81
  ASM_COST(3); W16(CS, (u16)(0x11be), 0xffff);                 // 0b33 mov word ptr cs:[0x11be], 0xffff
  SETH(R.ax, 0xf2);                                            // 0b3a mov ah, 0xf2
  PUSH(0x0b3f); a_sb15_0a1d();                                 // 0b3c call 0xa1d
  ASM_COST(1); R.cx = (u16)(0xffff);                           // 0b3f mov cx, 0xffff
L_0b42:   ASM_COST(2); SUB16(M16(CS, (u16)(0x11be)), 0xffff);          // 0b42 cmp word ptr cs:[0x11be], -1
  if (!R.zf) goto L_0b4c;                                      // 0b48 jne 0xb4c
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_0b42; }   // 0b4a loop 0xb42
L_0b4c:   ASM_COST(5); R.ax = POP();                                   // 0b4c pop ax
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 0b4d out 0x21, al
  SETL(R.ax, 0x2);                                             // 0b4f mov al, 2
  R.si = (u16)(0x11c0);                                        // 0b51 mov si, 0x11c0
  PUSH(0x0b57); a_sb15_0ac4();                                 // 0b54 call 0xac4
  ASM_COST(3); SETL(R.ax, 0x3);                                // 0b57 mov al, 3
  R.si = (u16)(0x11c4);                                        // 0b59 mov si, 0x11c4
  PUSH(0x0b5f); a_sb15_0ac4();                                 // 0b5c call 0xac4
  ASM_COST(3); SETL(R.ax, 0x5);                                // 0b5f mov al, 5
  R.si = (u16)(0x11c8);                                        // 0b61 mov si, 0x11c8
  PUSH(0x0b67); a_sb15_0ac4();                                 // 0b64 call 0xac4
  ASM_COST(3); SETL(R.ax, 0x7);                                // 0b67 mov al, 7
  R.si = (u16)(0x11cc);                                        // 0b69 mov si, 0x11cc
  PUSH(0x0b6f); a_sb15_0ac4();                                 // 0b6c call 0xac4
  ASM_COST(6); R.ax = (u16)(M16(CS, (u16)(0x11be)));           // 0b6f mov ax, word ptr cs:[0x11be]
  R.si = POP();                                                // 0b73 pop si
  R.di = POP();                                                // 0b74 pop di
  R.dx = POP();                                                // 0b75 pop dx
  R.cx = POP();                                                // 0b76 pop cx
  R.sp += 2; goto L_ret;                                       // 0b77 ret
L_ret:
  return;
}

static u16 f_sb15_0b00(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0b00();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:07FE FUN_1000_07fe  FIX: recompiled from the machine code (asm2c)
static void a_sb15_07fe(void)
{
  R.cs = sb15_seg;
  ASM_COST(6); PUSH(R.ax);                                     // 07fe push ax
  PUSH(R.cx);                                                  // 07ff push cx
  PUSH(R.dx);                                                  // 0800 push dx
  SETH(R.ax, 0x1);                                             // 0801 mov ah, 1
  SETL(R.ax, 0x0);                                             // 0803 mov al, 0
  PUSH(0x0808); a_sb15_07cb();                                 // 0805 call 0x7cb
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0808 mov ah, 4
  SETL(R.ax, 0x60);                                            // 080a mov al, 0x60
  PUSH(0x080f); a_sb15_07cb();                                 // 080c call 0x7cb
  ASM_COST(3); SETH(R.ax, 0x4);                                // 080f mov ah, 4
  SETL(R.ax, 0x80);                                            // 0811 mov al, 0x80
  PUSH(0x0816); a_sb15_07cb();                                 // 0813 call 0x7cb
  ASM_COST(1); PUSH(0x0819); a_sb15_07f3();                    // 0816 call 0x7f3
  ASM_COST(4); R.dx = (u16)(R.ax);                             // 0819 mov dx, ax
  SETH(R.ax, 0x2);                                             // 081b mov ah, 2
  SETL(R.ax, 0xff);                                            // 081d mov al, 0xff
  PUSH(0x0822); a_sb15_07cb();                                 // 081f call 0x7cb
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0822 mov ah, 4
  SETL(R.ax, 0x21);                                            // 0824 mov al, 0x21
  PUSH(0x0829); a_sb15_07cb();                                 // 0826 call 0x7cb
  ASM_COST(1); R.cx = (u16)(0x12c);                            // 0829 mov cx, 0x12c
L_082c:   ASM_COST(1); PUSH(0x082f); a_sb15_07f3();                    // 082c call 0x7f3
  ASM_COST(3); SETL(R.ax, AND8((u8)R.ax, 0xe0));               // 082f and al, 0xe0
  SUB8((u8)R.ax, 0xc0);                                        // 0831 cmp al, 0xc0
  if (R.zf) goto L_0837;                                       // 0833 je 0x837
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_082c; }   // 0835 loop 0x82c
L_0837:   ASM_COST(4); R.cx = (u16)(R.ax);                             // 0837 mov cx, ax
  SETH(R.ax, 0x4);                                             // 0839 mov ah, 4
  SETL(R.ax, 0x60);                                            // 083b mov al, 0x60
  PUSH(0x0840); a_sb15_07cb();                                 // 083d call 0x7cb
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0840 mov ah, 4
  SETL(R.ax, 0x80);                                            // 0842 mov al, 0x80
  PUSH(0x0847); a_sb15_07cb();                                 // 0844 call 0x7cb
  ASM_COST(4); SETL(R.dx, AND8((u8)R.dx, 0xe0));               // 0847 and dl, 0xe0
  SUB8((u8)R.dx, 0x0);                                         // 084a cmp dl, 0
  R.cf = 1;                                                    // 084d stc
  if (!R.zf) goto L_085a;                                      // 084e jne 0x85a
  ASM_COST(4); SETL(R.cx, AND8((u8)R.cx, 0xe0));               // 0850 and cl, 0xe0
  SUB8((u8)R.cx, 0xc0);                                        // 0853 cmp cl, 0xc0
  R.cf = 1;                                                    // 0856 stc
  if (!R.zf) goto L_085a;                                      // 0857 jne 0x85a
  ASM_COST(1); R.cf = 0;                                       // 0859 clc
L_085a:   ASM_COST(4); R.dx = POP();                                   // 085a pop dx
  R.cx = POP();                                                // 085b pop cx
  R.ax = POP();                                                // 085c pop ax
  R.sp += 2; goto L_ret;                                       // 085d ret
L_ret:
  return;
}

static u16 f_sb15_07fe(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_07fe();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:07F3 FUN_1000_07f3  FIX: recompiled from the machine code (asm2c)
static void a_sb15_07f3(void)
{
  R.cs = sb15_seg;
  ASM_COST(6); PUSH(R.dx);                                     // 07f3 push dx
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 07f4 xor ax, ax
  R.dx = (u16)(M16(CS, (u16)(0x960)));                         // 07f6 mov dx, word ptr cs:[0x960]
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 07fb in al, dx
  R.dx = POP();                                                // 07fc pop dx
  R.sp += 2; goto L_ret;                                       // 07fd ret
L_ret:
  return;
}

static u16 f_sb15_07f3(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_07f3();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0A3A FUN_1000_0a3a  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0a3a(void)
{
  R.cs = sb15_seg;
  ASM_COST(5); PUSH(R.dx);                                     // 0a3a push dx
  PUSH(R.cx);                                                  // 0a3b push cx
  R.dx = (u16)(M16(CS, (u16)(0x11bc)));                        // 0a3c mov dx, word ptr cs:[0x11bc]
  SETL(R.dx, ADD8((u8)R.dx, 0xe));                             // 0a41 add dl, 0xe
  R.cx = (u16)(0x64);                                          // 0a44 mov cx, 0x64
L_0a47:   ASM_COST(2); R.cx = (u16)(DEC16(R.cx));                      // 0a47 dec cx
  if (R.cx == 0) goto L_0a4f;                                  // 0a48 jcxz 0xa4f
  ASM_COST(3); SETL(R.ax, ASM_PORT_IN(R.dx));                  // 0a4a in al, dx
  SETL(R.ax, OR8((u8)R.ax, (u8)R.ax));                         // 0a4b or al, al
  if (!R.sf) { ASM_BACK(); goto L_0a47; }                      // 0a4d jns 0xa47
L_0a4f:   ASM_COST(7); SETL(R.dx, SUB8((u8)R.dx, 0xe));                // 0a4f sub dl, 0xe
  SETL(R.dx, ADD8((u8)R.dx, 0xa));                             // 0a52 add dl, 0xa
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0a55 in al, dx
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 0a56 xor ah, ah
  R.cx = POP();                                                // 0a58 pop cx
  R.dx = POP();                                                // 0a59 pop dx
  R.sp += 2; goto L_ret;                                       // 0a5a ret
L_ret:
  return;
}

static u16 f_sb15_0a3a(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0a3a();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0D8D FUN_1000_0d8d  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0d8d(void)
{
  R.cs = sb15_seg;
  ASM_COST(11); PUSH(R.ax);                                    // 0d8d push ax
  PUSH(R.cx);                                                  // 0d8e push cx
  PUSH(R.es);                                                  // 0d8f push es
  SETL(R.ax, M8(CS, (u16)(0x11d4)));                           // 0d90 mov al, byte ptr cs:[0x11d4]
  W8(CS, (u16)(0x11db), (u8)R.ax);                             // 0d94 mov byte ptr cs:[0x11db], al
  R.ax = (u16)(M16(CS, (u16)(0x11d5)));                        // 0d98 mov ax, word ptr cs:[0x11d5]
  W16(CS, (u16)(0x11dc), R.ax);                                // 0d9c mov word ptr cs:[0x11dc], ax
  { u16 a_ = (u16)(0x11d7); R.ax = (u16)(M16(CS, a_)); R.es = M16(CS, (u16)(a_ + 2)); } // 0da0 les ax, ptr cs:[0x11d7]
  W16(CS, (u16)(0x11e0), R.ax);                                // 0da5 mov word ptr cs:[0x11e0], ax
  W16(CS, (u16)(0x11e2), R.es);                                // 0da9 mov word ptr cs:[0x11e2], es
  PUSH(0x0db1); a_sb15_0bf9();                                 // 0dae call 0xbf9
  ASM_COST(2); W16(CS, (u16)(0x11de), R.cx);                   // 0db1 mov word ptr cs:[0x11de], cx
  PUSH(0x0db9); a_sb15_0bcc();                                 // 0db6 call 0xbcc
  ASM_COST(2); SETH(R.ax, M8(CS, (u16)(0x11e6)));              // 0db9 mov ah, byte ptr cs:[0x11e6]
  PUSH(0x0dc1); a_sb15_0a1d();                                 // 0dbe call 0xa1d
  ASM_COST(3); R.cx = (u16)(M16(CS, (u16)(0x11de)));           // 0dc1 mov cx, word ptr cs:[0x11de]
  SETH(R.ax, (u8)R.cx);                                        // 0dc6 mov ah, cl
  PUSH(0x0dcb); a_sb15_0a1d();                                 // 0dc8 call 0xa1d
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0dcb mov ah, ch
  PUSH(0x0dd0); a_sb15_0a1d();                                 // 0dcd call 0xa1d
  ASM_COST(4); R.es = POP();                                   // 0dd0 pop es
  R.cx = POP();                                                // 0dd1 pop cx
  R.ax = POP();                                                // 0dd2 pop ax
  R.sp += 2; goto L_ret;                                       // 0dd3 ret
L_ret:
  return;
}

static u16 f_sb15_0d8d(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0d8d();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0DD4 FUN_1000_0dd4  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0dd4(void)
{
  R.cs = sb15_seg;
  ASM_COST(10); PUSH(R.ax);                                    // 0dd4 push ax
  PUSH(R.dx);                                                  // 0dd5 push dx
  PUSH(R.si);                                                  // 0dd6 push si
  SETL(R.ax, 0x5);                                             // 0dd7 mov al, 5
  ASM_PORT_OUT(0xa, (u8)R.ax);                                 // 0dd9 out 0xa, al
  SETL(R.ax, M8(CS, (u16)(0x11e9)));                           // 0ddb mov al, byte ptr cs:[0x11e9]
  ASM_PORT_OUT(0x21, (u8)R.ax);                                // 0ddf out 0x21, al
  R.ax = (u16)(M16(CS, (u16)(0x11be)));                        // 0de1 mov ax, word ptr cs:[0x11be]
  R.si = (u16)(0x11d0);                                        // 0de5 mov si, 0x11d0
  PUSH(0x0deb); a_sb15_0ac4();                                 // 0de8 call 0xac4
  ASM_COST(8); R.dx = (u16)(M16(CS, (u16)(0x11bc)));           // 0deb mov dx, word ptr cs:[0x11bc]
  SETL(R.dx, ADD8((u8)R.dx, 0xe));                             // 0df0 add dl, 0xe
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0df3 in al, dx
  W16(CS, (u16)(0x11e4), 0x1);                                 // 0df4 mov word ptr cs:[0x11e4], 1
  R.si = POP();                                                // 0dfb pop si
  R.dx = POP();                                                // 0dfc pop dx
  R.ax = POP();                                                // 0dfd pop ax
  R.sp += 2; goto L_ret;                                       // 0dfe ret
L_ret:
  return;
}

static u16 f_sb15_0dd4(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0dd4();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0D53 FUN_1000_0d53  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0d53(void)
{
  R.cs = sb15_seg;
  ASM_COST(5); PUSH(R.ax);                                     // 0d53 push ax
  PUSH(R.cx);                                                  // 0d54 push cx
  W8(CS, (u16)(0x11db), INC8(M8(CS, (u16)(0x11db))));          // 0d55 inc byte ptr cs:[0x11db]
  W16(CS, (u16)(0x11dc), 0x0);                                 // 0d5a mov word ptr cs:[0x11dc], 0
  PUSH(0x0d64); a_sb15_0bf9();                                 // 0d61 call 0xbf9
  ASM_COST(2); W16(CS, (u16)(0x11de), R.cx);                   // 0d64 mov word ptr cs:[0x11de], cx
  PUSH(0x0d6c); a_sb15_0bcc();                                 // 0d69 call 0xbcc
  ASM_COST(3); SETH(R.ax, M8(CS, (u16)(0x11e6)));              // 0d6c mov ah, byte ptr cs:[0x11e6]
  SUB8((u8)(R.ax >> 8), 0x14);                                 // 0d71 cmp ah, 0x14
  if (R.zf) goto L_0d78;                                       // 0d74 je 0xd78
  ASM_COST(1); SETH(R.ax, DEC8((u8)(R.ax >> 8)));              // 0d76 dec ah
L_0d78:   ASM_COST(1); PUSH(0x0d7b); a_sb15_0a1d();                    // 0d78 call 0xa1d
  ASM_COST(3); R.cx = (u16)(M16(CS, (u16)(0x11de)));           // 0d7b mov cx, word ptr cs:[0x11de]
  SETH(R.ax, (u8)R.cx);                                        // 0d80 mov ah, cl
  PUSH(0x0d85); a_sb15_0a1d();                                 // 0d82 call 0xa1d
  ASM_COST(2); SETH(R.ax, (u8)(R.cx >> 8));                    // 0d85 mov ah, ch
  PUSH(0x0d8a); a_sb15_0a1d();                                 // 0d87 call 0xa1d
  ASM_COST(3); R.cx = POP();                                   // 0d8a pop cx
  R.ax = POP();                                                // 0d8b pop ax
  R.sp += 2; goto L_ret;                                       // 0d8c ret
L_ret:
  return;
}

static u16 f_sb15_0d53(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0d53();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0BA4 FUN_1000_0ba4  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0ba4(void)
{
  R.cs = sb15_seg;
  ASM_COST(10); PUSH(R.ax);                                    // 0ba4 push ax
  PUSH(R.dx);                                                  // 0ba5 push dx
  R.dx = (u16)(M16(CS, (u16)(0x11bc)));                        // 0ba6 mov dx, word ptr cs:[0x11bc]
  SETL(R.dx, ADD8((u8)R.dx, 0xe));                             // 0bab add dl, 0xe
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 0bae in al, dx
  SETL(R.ax, 0x20);                                            // 0baf mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0bb1 out 0x20, al
  R.dx = POP();                                                // 0bb3 pop dx
  R.ax = POP();                                                // 0bb4 pop ax
  R.sp += 2; goto L_ret;                                       // 0bb5 ret
L_ret:
  return;
}

static u16 f_sb15_0ba4(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0ba4();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0583 FUN_1000_0583  FIX: recompiled from the machine code (asm2c)
static void a_sb15_0583(void)
{
  R.cs = sb15_seg;
  ASM_COST(17); PUSH(R.cx);                                    // 0583 push cx
  PUSH(R.ax);                                                  // 0584 push ax
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x20));                     // 0585 add ah, 0x20
  SETL(R.ax, M8(ES, (u16)(R.bx + 0xa)));                       // 0588 mov al, byte ptr es:[bx + 0xa]
  SETL(R.cx, 0x1);                                             // 058c mov cl, 1
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 058e shl al, cl
  SETL(R.ax, OR8((u8)R.ax, M8(ES, (u16)(R.bx + 0x9))));        // 0590 or al, byte ptr es:[bx + 9]
  SETL(R.cx, 0x1);                                             // 0594 mov cl, 1
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 0596 shl al, cl
  SETL(R.ax, OR8((u8)R.ax, M8(ES, (u16)(R.bx + 0x8))));        // 0598 or al, byte ptr es:[bx + 8]
  SETL(R.cx, 0x1);                                             // 059c mov cl, 1
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 059e shl al, cl
  SETL(R.ax, OR8((u8)R.ax, M8(ES, (u16)(R.bx + 0x7))));        // 05a0 or al, byte ptr es:[bx + 7]
  SETL(R.cx, 0x4);                                             // 05a4 mov cl, 4
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 05a6 shl al, cl
  SETL(R.ax, OR8((u8)R.ax, M8(ES, (u16)(R.bx + 0x6))));        // 05a8 or al, byte ptr es:[bx + 6]
  PUSH(0x05af); a_sb15_07cb();                                 // 05ac call 0x7cb
  ASM_COST(8); R.ax = POP();                                   // 05af pop ax
  PUSH(R.ax);                                                  // 05b0 push ax
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 05b1 add ah, 0x40
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x5)));                       // 05b4 mov al, byte ptr es:[bx + 5]
  SETL(R.cx, 0x6);                                             // 05b8 mov cl, 6
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 05ba shl al, cl
  SETL(R.ax, OR8((u8)R.ax, M8(ES, (u16)(R.bx + 0x4))));        // 05bc or al, byte ptr es:[bx + 4]
  PUSH(0x05c3); a_sb15_07cb();                                 // 05c0 call 0x7cb
  ASM_COST(8); R.ax = POP();                                   // 05c3 pop ax
  PUSH(R.ax);                                                  // 05c4 push ax
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x60));                     // 05c5 add ah, 0x60
  SETL(R.ax, M8(ES, (u16)(R.bx)));                             // 05c8 mov al, byte ptr es:[bx]
  SETL(R.cx, 0x4);                                             // 05cb mov cl, 4
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 05cd shl al, cl
  SETL(R.ax, OR8((u8)R.ax, M8(ES, (u16)(R.bx + 0x1))));        // 05cf or al, byte ptr es:[bx + 1]
  PUSH(0x05d6); a_sb15_07cb();                                 // 05d3 call 0x7cb
  ASM_COST(8); R.ax = POP();                                   // 05d6 pop ax
  PUSH(R.ax);                                                  // 05d7 push ax
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x80));                     // 05d8 add ah, 0x80
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x2)));                       // 05db mov al, byte ptr es:[bx + 2]
  SETL(R.cx, 0x4);                                             // 05df mov cl, 4
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 05e1 shl al, cl
  SETL(R.ax, OR8((u8)R.ax, M8(ES, (u16)(R.bx + 0x3))));        // 05e3 or al, byte ptr es:[bx + 3]
  PUSH(0x05ea); a_sb15_07cb();                                 // 05e7 call 0x7cb
  ASM_COST(5); R.ax = POP();                                   // 05ea pop ax
  PUSH(R.ax);                                                  // 05eb push ax
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xe0));                     // 05ec add ah, 0xe0
  SETL(R.ax, M8(ES, (u16)(R.bx + 0xb)));                       // 05ef mov al, byte ptr es:[bx + 0xb]
  PUSH(0x05f6); a_sb15_07cb();                                 // 05f3 call 0x7cb
  ASM_COST(3); R.ax = POP();                                   // 05f6 pop ax
  R.cx = POP();                                                // 05f7 pop cx
  R.sp += 2; goto L_ret;                                       // 05f8 ret
L_ret:
  return;
}

static u16 f_sb15_0583(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_sb15_0583();
  ASM_LEAVE(); return (u16)R.ax;
}

// the driver's slots: slot 0 + k runs the k-th entry, with the caller's return address on the stack
void sb15_slot(int slot)
{
  switch (slot)
  {
  case 0: a_sb15_0000(); return;
  case 1: a_sb15_0003(); return;
  case 2: a_sb15_0006(); return;
  case 3: a_sb15_0009(); return;
  case 4: a_sb15_000c(); return;
  case 5: a_sb15_000f(); return;
  case 6: a_sb15_0012(); return;
  case 7: a_sb15_0015(); return;
  case 8: a_sb15_0018(); return;
  case 9: a_sb15_001b(); return;
  case 10: a_sb15_001e(); return;
  case 11: a_sb15_0021(); return;
  case 12: a_sb15_0024(); return;
  case 13: a_sb15_0027(); return;
  case 14: a_sb15_002a(); return;
  case 15: a_sb15_002d(); return;
  case 16: a_sb15_0030(); return;
  case 17: a_sb15_0033(); return;
  case 18: a_sb15_0036(); return;
  case 19: a_sb15_0039(); return;
  case 20: a_sb15_003c(); return;
  default: R.sp += 4; return;  // a slot that is only retf
  }
}

// any routine of the module by its offset (the callbacks it registers with the program)
bool sb15_run(u16 off)
{
  switch (off)
  {
  case 0x0000: a_sb15_0000(); return true;
  case 0x0003: a_sb15_0003(); return true;
  case 0x0006: a_sb15_0006(); return true;
  case 0x0009: a_sb15_0009(); return true;
  case 0x000c: a_sb15_000c(); return true;
  case 0x000f: a_sb15_000f(); return true;
  case 0x0012: a_sb15_0012(); return true;
  case 0x0015: a_sb15_0015(); return true;
  case 0x0018: a_sb15_0018(); return true;
  case 0x001b: a_sb15_001b(); return true;
  case 0x001e: a_sb15_001e(); return true;
  case 0x0021: a_sb15_0021(); return true;
  case 0x0024: a_sb15_0024(); return true;
  case 0x0027: a_sb15_0027(); return true;
  case 0x002a: a_sb15_002a(); return true;
  case 0x002d: a_sb15_002d(); return true;
  case 0x0030: a_sb15_0030(); return true;
  case 0x0033: a_sb15_0033(); return true;
  case 0x0036: a_sb15_0036(); return true;
  case 0x0039: a_sb15_0039(); return true;
  case 0x003c: a_sb15_003c(); return true;
  case 0x003f: a_sb15_003f(); return true;
  case 0x004e: a_sb15_004e(); return true;
  case 0x00c3: a_sb15_00c3(); return true;
  case 0x00d2: a_sb15_00d2(); return true;
  case 0x0120: a_sb15_0120(); return true;
  case 0x012c: a_sb15_012c(); return true;
  case 0x0156: a_sb15_0156(); return true;
  case 0x016c: a_sb15_016c(); return true;
  case 0x0316: a_sb15_0316(); return true;
  case 0x0412: a_sb15_0412(); return true;
  case 0x04ca: a_sb15_04ca(); return true;
  case 0x0526: a_sb15_0526(); return true;
  case 0x0583: a_sb15_0583(); return true;
  case 0x06c9: a_sb15_06c9(); return true;
  case 0x06f7: a_sb15_06f7(); return true;
  case 0x071e: a_sb15_071e(); return true;
  case 0x0734: a_sb15_0734(); return true;
  case 0x07cb: a_sb15_07cb(); return true;
  case 0x07f3: a_sb15_07f3(); return true;
  case 0x07fe: a_sb15_07fe(); return true;
  case 0x0808: a_sb15_0808(); return true;
  case 0x080f: a_sb15_080f(); return true;
  case 0x0816: a_sb15_0816(); return true;
  case 0x0819: a_sb15_0819(); return true;
  case 0x0822: a_sb15_0822(); return true;
  case 0x0840: a_sb15_0840(); return true;
  case 0x0847: a_sb15_0847(); return true;
  case 0x09bf: a_sb15_09bf(); return true;
  case 0x09e2: a_sb15_09e2(); return true;
  case 0x09e9: a_sb15_09e9(); return true;
  case 0x09f0: a_sb15_09f0(); return true;
  case 0x0a01: a_sb15_0a01(); return true;
  case 0x0a14: a_sb15_0a14(); return true;
  case 0x0a17: a_sb15_0a17(); return true;
  case 0x0a1d: a_sb15_0a1d(); return true;
  case 0x0a3a: a_sb15_0a3a(); return true;
  case 0x0a5b: a_sb15_0a5b(); return true;
  case 0x0a75: a_sb15_0a75(); return true;
  case 0x0a81: a_sb15_0a81(); return true;
  case 0x0ac4: a_sb15_0ac4(); return true;
  case 0x0b00: a_sb15_0b00(); return true;
  case 0x0b12: a_sb15_0b12(); return true;
  case 0x0b1d: a_sb15_0b1d(); return true;
  case 0x0b28: a_sb15_0b28(); return true;
  case 0x0b33: a_sb15_0b33(); return true;
  case 0x0b57: a_sb15_0b57(); return true;
  case 0x0b5f: a_sb15_0b5f(); return true;
  case 0x0b67: a_sb15_0b67(); return true;
  case 0x0b6f: a_sb15_0b6f(); return true;
  case 0x0b78: a_sb15_0b78(); return true;
  case 0x0b83: a_sb15_0b83(); return true;
  case 0x0b8e: a_sb15_0b8e(); return true;
  case 0x0b99: a_sb15_0b99(); return true;
  case 0x0ba4: a_sb15_0ba4(); return true;
  case 0x0bb6: a_sb15_0bb6(); return true;
  case 0x0bcc: a_sb15_0bcc(); return true;
  case 0x0bf9: a_sb15_0bf9(); return true;
  case 0x0c4c: a_sb15_0c4c(); return true;
  case 0x0c75: a_sb15_0c75(); return true;
  case 0x0c8a: a_sb15_0c8a(); return true;
  case 0x0cb3: a_sb15_0cb3(); return true;
  case 0x0cc0: a_sb15_0cc0(); return true;
  case 0x0cc3: a_sb15_0cc3(); return true;
  case 0x0d02: a_sb15_0d02(); return true;
  case 0x0d0c: a_sb15_0d0c(); return true;
  case 0x0d19: a_sb15_0d19(); return true;
  case 0x0d46: a_sb15_0d46(); return true;
  case 0x0d4b: a_sb15_0d4b(); return true;
  case 0x0d53: a_sb15_0d53(); return true;
  case 0x0d64: a_sb15_0d64(); return true;
  case 0x0d6c: a_sb15_0d6c(); return true;
  case 0x0d7b: a_sb15_0d7b(); return true;
  case 0x0d85: a_sb15_0d85(); return true;
  case 0x0d8d: a_sb15_0d8d(); return true;
  case 0x0db1: a_sb15_0db1(); return true;
  case 0x0db9: a_sb15_0db9(); return true;
  case 0x0dc1: a_sb15_0dc1(); return true;
  case 0x0dcb: a_sb15_0dcb(); return true;
  case 0x0dd4: a_sb15_0dd4(); return true;
  case 0x0deb: a_sb15_0deb(); return true;
  case 0x0dff: a_sb15_0dff(); return true;
  case 0x0e0d: a_sb15_0e0d(); return true;
  case 0x0e21: a_sb15_0e21(); return true;
  case 0x0e35: a_sb15_0e35(); return true;
  case 0x0e7e: a_sb15_0e7e(); return true;
  case 0x0e9d: a_sb15_0e9d(); return true;
  case 0x0f3b: a_sb15_0f3b(); return true;
  case 0x0f41: a_sb15_0f41(); return true;
  case 0x0f43: a_sb15_0f43(); return true;
  case 0x0f46: a_sb15_0f46(); return true;
  case 0x0f48: a_sb15_0f48(); return true;
  case 0x0fa0: a_sb15_0fa0(); return true;
  case 0x1000: a_sb15_1000(); return true;
  case 0x101f: a_sb15_101f(); return true;
  case 0x1025: a_sb15_1025(); return true;
  case 0x102a: a_sb15_102a(); return true;
  case 0x102c: a_sb15_102c(); return true;
  case 0x106a: a_sb15_106a(); return true;
  case 0x10ff: a_sb15_10ff(); return true;
  case 0x1105: a_sb15_1105(); return true;
  case 0x110b: a_sb15_110b(); return true;
  case 0x1111: a_sb15_1111(); return true;
  case 0x1117: a_sb15_1117(); return true;
  case 0x111d: a_sb15_111d(); return true;
  case 0x1123: a_sb15_1123(); return true;
  case 0x112d: a_sb15_112d(); return true;
  case 0x1133: a_sb15_1133(); return true;
  case 0x1155: a_sb15_1155(); return true;
  case 0x115b: a_sb15_115b(); return true;
  default: return false;
  }
}
