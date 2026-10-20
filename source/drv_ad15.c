// AD15.DRV (the game's ad15 sound driver) recompiled from its machine code (the workspace's work/asm2c.py,
// work/drv_gen.sh): generated, do not edit. ad15_seg is the segment the game loaded it at.
#include "drivers.h"
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-variable"
u16 ad15_seg;


// ---- recompiled bodies
static void a_ad15_0000(void);
static void a_ad15_0003(void);
static void a_ad15_0006(void);
static void a_ad15_0009(void);
static void a_ad15_000c(void);
static void a_ad15_000f(void);
static void a_ad15_0012(void);
static void a_ad15_0015(void);
static void a_ad15_0018(void);
static void a_ad15_001b(void);
static void a_ad15_001e(void);
static void a_ad15_0021(void);
static void a_ad15_0024(void);
static void a_ad15_0027(void);
static void a_ad15_002a(void);
static void a_ad15_002d(void);
static void a_ad15_0030(void);
static void a_ad15_0033(void);
static void a_ad15_0036(void);
static void a_ad15_0039(void);
static void a_ad15_003c(void);
static void a_ad15_003f(void);
static void a_ad15_00b7(void);
static void a_ad15_00c6(void);
static void a_ad15_0138(void);
static void a_ad15_014e(void);
static void a_ad15_02d4(void);
static void a_ad15_03c7(void);
static void a_ad15_03e8(void);
static void a_ad15_07c9(void);
static void a_ad15_07d0(void);
static void a_ad15_07d7(void);
static void a_ad15_07da(void);
static void a_ad15_07e3(void);
static void a_ad15_0801(void);
static void a_ad15_0808(void);
static void a_ad15_0967(void);
static void a_ad15_096e(void);
static void a_ad15_0975(void);
static void a_ad15_097c(void);
static void a_ad15_09bb(void);
static void a_ad15_0a66(void);
static void a_ad15_0b5c(void);
static void a_ad15_0bef(void);
static void a_ad15_0bf5(void);
static void a_ad15_0bfb(void);
static void a_ad15_0c01(void);
static void a_ad15_0c07(void);
static void a_ad15_0c0d(void);
static void a_ad15_0c13(void);
static void a_ad15_0c1d(void);
static void a_ad15_0c23(void);
static void a_ad15_0c45(void);
static void a_ad15_0c4b(void);
static void a_ad15_0a59(void);
static void a_ad15_0a5f(void);
static void a_ad15_0a64(void);
static void a_ad15_0b3e(void);
static void a_ad15_0b44(void);
static void a_ad15_0b49(void);
static void a_ad15_099c(void);
static void a_ad15_078c(void);
static void a_ad15_06b8(void);
static void a_ad15_07b4(void);
static void a_ad15_068a(void);
static void a_ad15_0544(void);
static void a_ad15_04e7(void);
static void a_ad15_06f5(void);
static void a_ad15_06df(void);
static void a_ad15_0b4b(void);
static void a_ad15_07bf(void);
static void a_ad15_048b(void);

// Recompiled from the machine code by the workspace's work/asm2c.py (the decompilation of these functions
// failed); see asm2c.h.

// 1000:0000 FUN_1000_0000  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0000(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_0930;                                    // 0000 jmp 0x930
L_0930:   ASM_COST(2); W16(CS, (u16)(0x921), 0x388);                   // 0930 mov word ptr cs:[0x921], 0x388
  PUSH(0x093a); a_ad15_07bf();                                 // 0937 call 0x7bf
  ASM_COST(1); if (!R.cf) goto L_0964;                         // 093a jae 0x964
  ASM_COST(2); W16(CS, (u16)(0x921), 0x318);                   // 093c mov word ptr cs:[0x921], 0x318
  PUSH(0x0946); a_ad15_07bf();                                 // 0943 call 0x7bf
  ASM_COST(1); if (!R.cf) goto L_0964;                         // 0946 jae 0x964
  ASM_COST(2); W16(CS, (u16)(0x921), 0x288);                   // 0948 mov word ptr cs:[0x921], 0x288
  PUSH(0x0952); a_ad15_07bf();                                 // 094f call 0x7bf
  ASM_COST(1); if (!R.cf) goto L_0964;                         // 0952 jae 0x964
  ASM_COST(2); W16(CS, (u16)(0x921), 0x218);                   // 0954 mov word ptr cs:[0x921], 0x218
  PUSH(0x095e); a_ad15_07bf();                                 // 095b call 0x7bf
  ASM_COST(1); if (!R.cf) goto L_0964;                         // 095e jae 0x964
  ASM_COST(2); R.ax = (u16)(0x0);                              // 0960 mov ax, 0
  R.sp += 4; goto L_ret;                                       // 0963 retf
L_0964:   ASM_COST(1); PUSH(0x0967); a_ad15_048b();                    // 0964 call 0x48b
  ASM_COST(3); SETH(R.ax, 0x1);                                // 0967 mov ah, 1
  SETL(R.ax, 0x20);                                            // 0969 mov al, 0x20
  PUSH(0x096e); a_ad15_078c();                                 // 096b call 0x78c
  ASM_COST(3); SETH(R.ax, 0x8);                                // 096e mov ah, 8
  SETL(R.ax, 0x0);                                             // 0970 mov al, 0
  PUSH(0x0975); a_ad15_078c();                                 // 0972 call 0x78c
  ASM_COST(3); SETH(R.ax, 0xbd);                               // 0975 mov ah, 0xbd
  SETL(R.ax, 0x0);                                             // 0977 mov al, 0
  PUSH(0x097c); a_ad15_078c();                                 // 0979 call 0x78c
  ASM_COST(1); R.ax = (u16)(0x0);                              // 097c mov ax, 0
L_097f:   ASM_COST(1); PUSH(0x0982); a_ad15_04e7();                    // 097f call 0x4e7
  ASM_COST(3); R.ax = (u16)(INC16(R.ax));                      // 0982 inc ax
  SUB16(R.ax, 0x9);                                            // 0983 cmp ax, 9
  if (R.cf) { ASM_BACK(); goto L_097f; }                       // 0986 jb 0x97f
  ASM_COST(2); R.ax = (u16)(0xa);                              // 0988 mov ax, 0xa
  R.sp += 4; goto L_ret;                                       // 098b retf
L_ret:
  return;
}

static u16 f_ad15_0000(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0000();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0003 FUN_1000_0003  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0003(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_098c;                                    // 0003 jmp 0x98c
L_098c:   ASM_COST(1); R.ax = (u16)(0x0);                              // 098c mov ax, 0
L_098f:   ASM_COST(1); PUSH(0x0992); a_ad15_04e7();                    // 098f call 0x4e7
  ASM_COST(3); R.ax = (u16)(INC16(R.ax));                      // 0992 inc ax
  SUB16(R.ax, 0x9);                                            // 0993 cmp ax, 9
  if (R.cf) { ASM_BACK(); goto L_098f; }                       // 0996 jb 0x98f
  ASM_COST(1); PUSH(0x099b); a_ad15_099c();                    // 0998 call 0x99c
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 099b retf
L_ret:
  return;
}

static u16 f_ad15_0003(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0003();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0006 FUN_1000_0006  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0006(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_003f;                                    // 0006 jmp 0x3f
L_003f:   ASM_COST(1); R.ax = (u16)(0x0);                              // 003f mov ax, 0
L_0042:   ASM_COST(1); PUSH(0x0045); a_ad15_04e7();                    // 0042 call 0x4e7
  ASM_COST(3); R.ax = (u16)(INC16(R.ax));                      // 0045 inc ax
  SUB16(R.ax, 0x9);                                            // 0046 cmp ax, 9
  if (R.cf) { ASM_BACK(); goto L_0042; }                       // 0049 jb 0x42
  ASM_COST(1); PUSH(0x004e); a_ad15_099c();                    // 004b call 0x99c
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 004e retf
L_ret:
  return;
}

static u16 f_ad15_0006(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0006();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0009 FUN_1000_0009  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0009(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_00ef;                                    // 0009 jmp 0xef
L_00ef:   ASM_COST(9); PUSH(R.bp);                                     // 00ef push bp
  R.bp = (u16)(R.sp);                                          // 00f0 mov bp, sp
  PUSH(R.di);                                                  // 00f2 push di
  PUSH(R.si);                                                  // 00f3 push si
  { u16 a_ = (u16)(R.bp + 0x10); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 00f4 les bx, ptr [bp + 0x10]
  R.di = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 00f7 mov di, word ptr [bp + 8]
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 00fa mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 00fd cmp ax, 0
  if (!R.zf) goto L_013f;                                      // 0100 jne 0x13f
  ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0xa)), 0x0);           // 0102 cmp byte ptr es:[bx + 0xa], 0
  if (R.zf) goto L_013b;                                       // 0107 je 0x13b
  ASM_COST(3); R.ax = (u16)(XOR16(R.ax, R.ax));                // 0109 xor ax, ax
  SUB8(M8(ES, (u16)(R.bx + 0x5)), 0x6);                        // 010b cmp byte ptr es:[bx + 5], 6
  if (R.zf) goto L_0113;                                       // 0110 je 0x113
  ASM_COST(1); R.ax = (u16)(INC16(R.ax));                      // 0112 inc ax
L_0113:   ASM_COST(4); PUSH(R.ax);                                     // 0113 push ax
  SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 0114 mov al, byte ptr [bp + 0xc]
  W8(DS, (u16)(R.di + 0x3), (u8)R.ax);                         // 0117 mov byte ptr [di + 3], al
  PUSH(0x011d); a_ad15_06df();                                 // 011a call 0x6df
  ASM_COST(13); W16(DS, (u16)(R.di + 0x4), R.cx);              // 011d mov word ptr [di + 4], cx
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x11)));                      // 0120 mov al, byte ptr es:[bx + 0x11]
  R.ax = (u16)(i16)(i8)R.ax;                                   // 0124 cwde
  R.cx = (u16)(ADD16(R.cx, R.ax));                             // 0125 add cx, ax
  W16(DS, (u16)(R.di + 0x6), R.cx);                            // 0127 mov word ptr [di + 6], cx
  PUSH(R.cx);                                                  // 012a push cx
  { u16 a_ = (u16)(R.bx + 0x6); R.bx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 012b les bx, ptr es:[bx + 6]
  PUSH(R.es);                                                  // 012f push es
  PUSH(R.bx);                                                  // 0130 push bx
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0131 xor ax, ax
  PUSH(R.ax);                                                  // 0133 push ax
  // 0134 push cs
  PUSH(ad15_seg); PUSH(0x0138); a_ad15_0b4b();                 // 0135 call 0xb4b
  ASM_COST(1); R.sp = (u16)(ADD16(R.sp, 0xa));                 // 0138 add sp, 0xa
L_013b:   ASM_COST(4); R.si = POP();                                   // 013b pop si
  R.di = POP();                                                // 013c pop di
  R.bp = POP();                                                // 013d pop bp
  R.sp += 4; goto L_ret;                                       // 013e retf
L_013f:   ASM_COST(5); SETL(R.ax, M8(SS, (u16)(R.bp + 0xc)));          // 013f mov al, byte ptr [bp + 0xc]
  W8(DS, (u16)(R.di + 0x3), (u8)R.ax);                         // 0142 mov byte ptr [di + 3], al
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 0145 xor ah, ah
  SUB8((u8)R.ax, 0xff);                                        // 0147 cmp al, 0xff
  if (R.zf) goto L_015d;                                       // 0149 je 0x15d
  ASM_COST(1); PUSH(0x014e); a_ad15_06b8();                    // 014b call 0x6b8
  ASM_COST(6); R.dx = (u16)(R.ax);                             // 014e mov dx, ax
  W16(DS, (u16)(R.di + 0x4), R.dx);                            // 0150 mov word ptr [di + 4], dx
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x11)));                      // 0153 mov al, byte ptr es:[bx + 0x11]
  R.ax = (u16)(i16)(i8)R.ax;                                   // 0157 cwde
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 0158 add dx, ax
  W16(DS, (u16)(R.di + 0x6), R.dx);                            // 015a mov word ptr [di + 6], dx
L_015d:   ASM_COST(10); R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));      // 015d mov ax, word ptr [bp + 6]
  R.ax = (u16)(DEC16(R.ax));                                   // 0160 dec ax
  R.di = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 0161 mov di, word ptr [bp + 0xa]
  PUSH(R.ax);                                                  // 0164 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0165 shl ax, 1
  R.si = (u16)(R.ax);                                          // 0167 mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x81f)));                     // 0169 mov ah, byte ptr cs:[si + 0x81f]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 016e add ah, 0x40
  SETL(R.ax, 0x3f);                                            // 0171 mov al, 0x3f
  PUSH(0x0176); a_ad15_078c();                                 // 0173 call 0x78c
  ASM_COST(9); R.ax = POP();                                   // 0176 pop ax
  PUSH(R.ax);                                                  // 0177 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0178 shl ax, 1
  R.ax = (u16)(INC16(R.ax));                                   // 017a inc ax
  R.si = (u16)(R.ax);                                          // 017b mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x81f)));                     // 017d mov ah, byte ptr cs:[si + 0x81f]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 0182 add ah, 0x40
  SETL(R.ax, 0x3f);                                            // 0185 mov al, 0x3f
  PUSH(0x018a); a_ad15_078c();                                 // 0187 call 0x78c
  ASM_COST(6); R.ax = POP();                                   // 018a pop ax
  PUSH(R.ax);                                                  // 018b push ax
  SETH(R.ax, (u8)R.ax);                                        // 018c mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xa0));                     // 018e add ah, 0xa0
  SETL(R.ax, (u8)R.dx);                                        // 0191 mov al, dl
  PUSH(0x0196); a_ad15_078c();                                 // 0193 call 0x78c
  ASM_COST(7); R.ax = POP();                                   // 0196 pop ax
  PUSH(R.ax);                                                  // 0197 push ax
  SETH(R.ax, (u8)R.ax);                                        // 0198 mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xb0));                     // 019a add ah, 0xb0
  SETL(R.ax, 0x20);                                            // 019d mov al, 0x20
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 019f or al, dh
  PUSH(0x01a4); a_ad15_078c();                                 // 01a1 call 0x78c
  ASM_COST(4); R.ax = POP();                                   // 01a4 pop ax
  SETL(R.cx, 0x7f);                                            // 01a5 mov cl, 0x7f
  SUB8(M8(ES, (u16)(R.bx + 0x15)), 0x0);                       // 01a7 cmp byte ptr es:[bx + 0x15], 0
  if (R.zf) goto L_01b1;                                       // 01ac je 0x1b1
  ASM_COST(1); SETL(R.cx, M8(SS, (u16)(R.bp + 0xe)));          // 01ae mov cl, byte ptr [bp + 0xe]
L_01b1:   ASM_COST(4); R.si = (u16)(R.ax);                             // 01b1 mov si, ax
  W8(CS, (u16)(R.si + 0x927), (u8)R.cx);                       // 01b3 mov byte ptr cs:[si + 0x927], cl
  SETH(R.cx, M8(DS, (u16)(R.di + 0x28)));                      // 01b8 mov ch, byte ptr [di + 0x28]
  PUSH(0x01be); a_ad15_06f5();                                 // 01bb call 0x6f5
  ASM_COST(4); R.si = POP();                                   // 01be pop si
  R.di = POP();                                                // 01bf pop di
  R.bp = POP();                                                // 01c0 pop bp
  R.sp += 4; goto L_ret;                                       // 01c1 retf
L_ret:
  return;
}

static u16 f_ad15_0009(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4, u16 p5)
{
  ASM_ENTER();
  PUSH((u16)p5);
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0009();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:000C FUN_1000_000c  FIX: recompiled from the machine code (asm2c)
static void a_ad15_000c(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_01c2;                                    // 000c jmp 0x1c2
L_01c2:   ASM_COST(5); PUSH(R.bp);                                     // 01c2 push bp
  R.bp = (u16)(R.sp);                                          // 01c3 mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 01c5 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 01c8 cmp ax, 0
  if (!R.zf) goto L_01cf;                                      // 01cb jne 0x1cf
  ASM_COST(2); R.bp = POP();                                   // 01cd pop bp
  R.sp += 4; goto L_ret;                                       // 01ce retf
L_01cf:   ASM_COST(9); R.ax = (u16)(DEC16(R.ax));                      // 01cf dec ax
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 01d0 mov bx, word ptr [bp + 8]
  R.dx = (u16)(M16(DS, (u16)(R.bx + 0x6)));                    // 01d3 mov dx, word ptr [bx + 6]
  PUSH(R.ax);                                                  // 01d6 push ax
  SETH(R.ax, (u8)R.ax);                                        // 01d7 mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xb0));                     // 01d9 add ah, 0xb0
  SETL(R.ax, 0x0);                                             // 01dc mov al, 0
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 01de or al, dh
  PUSH(0x01e3); a_ad15_078c();                                 // 01e0 call 0x78c
  ASM_COST(3); R.ax = POP();                                   // 01e3 pop ax
  R.bp = POP();                                                // 01e4 pop bp
  R.sp += 4; goto L_ret;                                       // 01e5 retf
L_ret:
  return;
}

static u16 f_ad15_000c(u16 p0, u16 p1)
{
  ASM_ENTER();
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_000c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:000F FUN_1000_000f  FIX: recompiled from the machine code (asm2c)
static void a_ad15_000f(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_01e6;                                    // 000f jmp 0x1e6
L_01e6:   ASM_COST(6); PUSH(R.bp);                                     // 01e6 push bp
  R.bp = (u16)(R.sp);                                          // 01e7 mov bp, sp
  PUSH(R.si);                                                  // 01e9 push si
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 01ea mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 01ed cmp ax, 0
  if (!R.zf) goto L_01f8;                                      // 01f0 jne 0x1f8
  ASM_COST(1); PUSH(0x01f5); a_ad15_099c();                    // 01f2 call 0x99c
  ASM_COST(3); R.si = POP();                                   // 01f5 pop si
  R.bp = POP();                                                // 01f6 pop bp
  R.sp += 4; goto L_ret;                                       // 01f7 retf
L_01f8:   ASM_COST(8); R.ax = (u16)(DEC16(R.ax));                      // 01f8 dec ax
  PUSH(R.ax);                                                  // 01f9 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 01fa shl ax, 1
  R.si = (u16)(R.ax);                                          // 01fc mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x81f)));                     // 01fe mov ah, byte ptr cs:[si + 0x81f]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 0203 add ah, 0x40
  SETL(R.ax, 0x3f);                                            // 0206 mov al, 0x3f
  PUSH(0x020b); a_ad15_078c();                                 // 0208 call 0x78c
  ASM_COST(9); R.ax = POP();                                   // 020b pop ax
  PUSH(R.ax);                                                  // 020c push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 020d shl ax, 1
  R.ax = (u16)(INC16(R.ax));                                   // 020f inc ax
  R.si = (u16)(R.ax);                                          // 0210 mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x81f)));                     // 0212 mov ah, byte ptr cs:[si + 0x81f]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 0217 add ah, 0x40
  SETL(R.ax, 0x3f);                                            // 021a mov al, 0x3f
  PUSH(0x021f); a_ad15_078c();                                 // 021c call 0x78c
  ASM_COST(4); R.ax = POP();                                   // 021f pop ax
  R.si = POP();                                                // 0220 pop si
  R.bp = POP();                                                // 0221 pop bp
  R.sp += 4; goto L_ret;                                       // 0222 retf
L_ret:
  return;
}

static u16 f_ad15_000f(u16 p0)
{
  ASM_ENTER();
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_000f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0012 FUN_1000_0012  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0012(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_0393;                                    // 0012 jmp 0x393
L_0393:   ASM_COST(7); PUSH(R.bp);                                     // 0393 push bp
  R.bp = (u16)(R.sp);                                          // 0394 mov bp, sp
  PUSH(R.di);                                                  // 0396 push di
  PUSH(R.si);                                                  // 0397 push si
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0398 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 039b cmp ax, 0
  if (!R.zf) goto L_03a4;                                      // 039e jne 0x3a4
  ASM_COST(4); R.si = POP();                                   // 03a0 pop si
  R.di = POP();                                                // 03a1 pop di
  R.bp = POP();                                                // 03a2 pop bp
  R.sp += 4; goto L_ret;                                       // 03a3 retf
L_03a4:   ASM_COST(7); R.ax = (u16)(DEC16(R.ax));                      // 03a4 dec ax
  R.si = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 03a5 mov si, word ptr [bp + 8]
  { u16 a_ = (u16)(R.si + 0x10); R.bx = (u16)(M16(DS, a_)); R.es = M16(DS, (u16)(a_ + 2)); } // 03a8 les bx, ptr [si + 0x10]
  R.di = (u16)(R.ax);                                          // 03ab mov di, ax
  SETL(R.cx, M8(CS, (u16)(R.di + 0x927)));                     // 03ad mov cl, byte ptr cs:[di + 0x927]
  SETH(R.cx, M8(SS, (u16)(R.bp + 0xa)));                       // 03b2 mov ch, byte ptr [bp + 0xa]
  PUSH(0x03b8); a_ad15_06f5();                                 // 03b5 call 0x6f5
  ASM_COST(4); R.si = POP();                                   // 03b8 pop si
  R.di = POP();                                                // 03b9 pop di
  R.bp = POP();                                                // 03ba pop bp
  R.sp += 4; goto L_ret;                                       // 03bb retf
L_ret:
  return;
}

static u16 f_ad15_0012(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0012();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0015 FUN_1000_0015  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0015(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_0223;                                    // 0015 jmp 0x223
L_0223:   ASM_COST(7); PUSH(R.bp);                                     // 0223 push bp
  R.bp = (u16)(R.sp);                                          // 0224 mov bp, sp
  PUSH(R.di);                                                  // 0226 push di
  PUSH(R.si);                                                  // 0227 push si
  R.si = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 0228 mov si, word ptr [bp + 8]
  SUB8(M8(DS, (u16)(R.si + 0x1)), 0x0);                        // 022b cmp byte ptr [si + 1], 0
  if (!R.zf) goto L_0235;                                      // 022f jne 0x235
  ASM_COST(4); R.si = POP();                                   // 0231 pop si
  R.di = POP();                                                // 0232 pop di
  R.bp = POP();                                                // 0233 pop bp
  R.sp += 4; goto L_ret;                                       // 0234 retf
L_0235:   ASM_COST(3); R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));       // 0235 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 0238 cmp ax, 0
  if (!R.zf) goto L_0241;                                      // 023b jne 0x241
  ASM_COST(4); R.si = POP();                                   // 023d pop si
  R.di = POP();                                                // 023e pop di
  R.bp = POP();                                                // 023f pop bp
  R.sp += 4; goto L_ret;                                       // 0240 retf
L_0241:   ASM_COST(8); R.ax = (u16)(DEC16(R.ax));                      // 0241 dec ax
  { u16 a_ = (u16)(R.si + 0x10); R.bx = (u16)(M16(DS, a_)); R.es = M16(DS, (u16)(a_ + 2)); } // 0242 les bx, ptr [si + 0x10]
  SETL(R.cx, M8(SS, (u16)(R.bp + 0xa)));                       // 0245 mov cl, byte ptr [bp + 0xa]
  SETH(R.cx, XOR8((u8)(R.cx >> 8), (u8)(R.cx >> 8)));          // 0248 xor ch, ch
  SETL(R.dx, M8(SS, (u16)(R.bp + 0xc)));                       // 024a mov dl, byte ptr [bp + 0xc]
  SETH(R.dx, XOR8((u8)(R.dx >> 8), (u8)(R.dx >> 8)));          // 024d xor dh, dh
  SUB16(R.cx, 0x1);                                            // 024f cmp cx, 1
  if (!R.zf) goto L_025f;                                      // 0252 jne 0x25f
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x16)));         // 0254 mov cl, byte ptr es:[bx + 0x16]
  PUSH(0x025b); a_ad15_068a();                                 // 0258 call 0x68a
  ASM_COST(4); R.si = POP();                                   // 025b pop si
  R.di = POP();                                                // 025c pop di
  R.bp = POP();                                                // 025d pop bp
  R.sp += 4; goto L_ret;                                       // 025e retf
L_025f:   ASM_COST(2); SUB16(R.cx, 0x7);                               // 025f cmp cx, 7
  if (!R.zf) goto L_0275;                                      // 0262 jne 0x275
  ASM_COST(4); R.di = (u16)(R.ax);                             // 0264 mov di, ax
  SETL(R.cx, M8(CS, (u16)(R.di + 0x927)));                     // 0266 mov cl, byte ptr cs:[di + 0x927]
  SETH(R.cx, M8(SS, (u16)(R.bp + 0xc)));                       // 026b mov ch, byte ptr [bp + 0xc]
  PUSH(0x0271); a_ad15_06f5();                                 // 026e call 0x6f5
  ASM_COST(4); R.si = POP();                                   // 0271 pop si
  R.di = POP();                                                // 0272 pop di
  R.bp = POP();                                                // 0273 pop bp
  R.sp += 4; goto L_ret;                                       // 0274 retf
L_0275:   ASM_COST(2); SUB16(R.cx, 0xb);                               // 0275 cmp cx, 0xb
  if (!R.zf) goto L_0285;                                      // 0278 jne 0x285
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x17)));         // 027a mov cl, byte ptr es:[bx + 0x17]
  PUSH(0x0281); a_ad15_068a();                                 // 027e call 0x68a
  ASM_COST(4); R.si = POP();                                   // 0281 pop si
  R.di = POP();                                                // 0282 pop di
  R.bp = POP();                                                // 0283 pop bp
  R.sp += 4; goto L_ret;                                       // 0284 retf
L_0285:   ASM_COST(2); SUB16(R.cx, 0xc);                               // 0285 cmp cx, 0xc
  if (!R.zf) goto L_0295;                                      // 0288 jne 0x295
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x18)));         // 028a mov cl, byte ptr es:[bx + 0x18]
  PUSH(0x0291); a_ad15_068a();                                 // 028e call 0x68a
  ASM_COST(4); R.si = POP();                                   // 0291 pop si
  R.di = POP();                                                // 0292 pop di
  R.bp = POP();                                                // 0293 pop bp
  R.sp += 4; goto L_ret;                                       // 0294 retf
L_0295:   ASM_COST(4); R.si = POP();                                   // 0295 pop si
  R.di = POP();                                                // 0296 pop di
  R.bp = POP();                                                // 0297 pop bp
  R.sp += 4; goto L_ret;                                       // 0298 retf
L_ret:
  return;
}

static u16 f_ad15_0015(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0015();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0018 FUN_1000_0018  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0018(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_0487;                                    // 0018 jmp 0x487
L_0487:   ASM_COST(2); R.ax = (u16)(0xffff);                           // 0487 mov ax, 0xffff
  R.sp += 4; goto L_ret;                                       // 048a retf
L_ret:
  return;
}

static u16 f_ad15_0018(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0018();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:001B FUN_1000_001b  FIX: recompiled from the machine code (asm2c)
static void a_ad15_001b(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_0487;                                    // 001b jmp 0x487
L_0487:   ASM_COST(2); R.ax = (u16)(0xffff);                           // 0487 mov ax, 0xffff
  R.sp += 4; goto L_ret;                                       // 048a retf
L_ret:
  return;
}

static u16 f_ad15_001b(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_001b();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:001E FUN_1000_001e  FIX: recompiled from the machine code (asm2c)
static void a_ad15_001e(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_00d9;                                    // 001e jmp 0xd9
L_00d9:   ASM_COST(5); PUSH(R.bp);                                     // 00d9 push bp
  R.bp = (u16)(R.sp);                                          // 00da mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 00dc mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 00df cmp ax, 0
  if (!R.zf) goto L_00e9;                                      // 00e2 jne 0xe9
  ASM_COST(1); PUSH(0x00e7); a_ad15_099c();                    // 00e4 call 0x99c
  ASM_COST(2); R.bp = POP();                                   // 00e7 pop bp
  R.sp += 4; goto L_ret;                                       // 00e8 retf
L_00e9:   ASM_COST(2); R.ax = (u16)(DEC16(R.ax));                      // 00e9 dec ax
  PUSH(0x00ed); a_ad15_04e7();                                 // 00ea call 0x4e7
  ASM_COST(2); R.bp = POP();                                   // 00ed pop bp
  R.sp += 4; goto L_ret;                                       // 00ee retf
L_ret:
  return;
}

static u16 f_ad15_001e(u16 p0)
{
  ASM_ENTER();
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_001e();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0021 FUN_1000_0021  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0021(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_004f;                                    // 0021 jmp 0x4f
L_004f:   ASM_COST(7); PUSH(R.bp);                                     // 004f push bp
  R.bp = (u16)(R.sp);                                          // 0050 mov bp, sp
  PUSH(R.di);                                                  // 0052 push di
  PUSH(R.si);                                                  // 0053 push si
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0054 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 0057 cmp ax, 0
  if (!R.zf) goto L_0060;                                      // 005a jne 0x60
  ASM_COST(4); R.si = POP();                                   // 005c pop si
  R.di = POP();                                                // 005d pop di
  R.bp = POP();                                                // 005e pop bp
  R.sp += 4; goto L_ret;                                       // 005f retf
L_0060:   ASM_COST(11); R.ax = (u16)(DEC16(R.ax));                     // 0060 dec ax
  R.si = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 0061 mov si, word ptr [bp + 0xa]
  { u16 a_ = (u16)(R.bp + 0xc); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0064 les bx, ptr [bp + 0xc]
  PUSH(R.ax);                                                  // 0067 push ax
  SETH(R.ax, (u8)R.ax);                                        // 0068 mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xc0));                     // 006a add ah, 0xc0
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x45)));                      // 006d mov al, byte ptr es:[bx + 0x45]
  SETL(R.cx, 0x1);                                             // 0071 mov cl, 1
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 0073 shl al, cl
  SETL(R.ax, OR8((u8)R.ax, M8(ES, (u16)(R.bx + 0x44))));       // 0075 or al, byte ptr es:[bx + 0x44]
  PUSH(0x007c); a_ad15_078c();                                 // 0079 call 0x78c
  ASM_COST(8); R.ax = POP();                                   // 007c pop ax
  PUSH(R.ax);                                                  // 007d push ax
  PUSH(R.bx);                                                  // 007e push bx
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 007f shl ax, 1
  R.di = (u16)(R.ax);                                          // 0081 mov di, ax
  SETH(R.ax, M8(CS, (u16)(R.di + 0x81f)));                     // 0083 mov ah, byte ptr cs:[di + 0x81f]
  R.bx = (u16)(ADD16(R.bx, 0x46));                             // 0088 add bx, 0x46
  PUSH(0x008e); a_ad15_0544();                                 // 008b call 0x544
  ASM_COST(10); R.bx = POP();                                  // 008e pop bx
  R.ax = POP();                                                // 008f pop ax
  PUSH(R.ax);                                                  // 0090 push ax
  PUSH(R.bx);                                                  // 0091 push bx
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0092 shl ax, 1
  R.ax = (u16)(INC16(R.ax));                                   // 0094 inc ax
  R.di = (u16)(R.ax);                                          // 0095 mov di, ax
  SETH(R.ax, M8(CS, (u16)(R.di + 0x81f)));                     // 0097 mov ah, byte ptr cs:[di + 0x81f]
  R.bx = (u16)(ADD16(R.bx, 0x52));                             // 009c add bx, 0x52
  PUSH(0x00a2); a_ad15_0544();                                 // 009f call 0x544
  ASM_COST(7); R.bx = POP();                                   // 00a2 pop bx
  R.ax = POP();                                                // 00a3 pop ax
  R.cx = (u16)(XOR16(R.cx, R.cx));                             // 00a4 xor cx, cx
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 00a6 xor dx, dx
  SETL(R.dx, M8(DS, (u16)(R.si + 0x29)));                      // 00a8 mov dl, byte ptr [si + 0x29]
  SUB16(R.dx, 0x0);                                            // 00ab cmp dx, 0
  if (R.zf) goto L_00b7;                                       // 00ae je 0xb7
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x16)));         // 00b0 mov cl, byte ptr es:[bx + 0x16]
  PUSH(0x00b7); a_ad15_068a();                                 // 00b4 call 0x68a
L_00b7:   ASM_COST(3); SETL(R.dx, M8(DS, (u16)(R.si + 0x2b)));         // 00b7 mov dl, byte ptr [si + 0x2b]
  SUB16(R.dx, 0x0);                                            // 00ba cmp dx, 0
  if (R.zf) goto L_00c6;                                       // 00bd je 0xc6
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x17)));         // 00bf mov cl, byte ptr es:[bx + 0x17]
  PUSH(0x00c6); a_ad15_068a();                                 // 00c3 call 0x68a
L_00c6:   ASM_COST(3); SETL(R.dx, M8(DS, (u16)(R.si + 0x2c)));         // 00c6 mov dl, byte ptr [si + 0x2c]
  SUB16(R.dx, 0x0);                                            // 00c9 cmp dx, 0
  if (R.zf) goto L_00d5;                                       // 00cc je 0xd5
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x18)));         // 00ce mov cl, byte ptr es:[bx + 0x18]
  PUSH(0x00d5); a_ad15_068a();                                 // 00d2 call 0x68a
L_00d5:   ASM_COST(4); R.si = POP();                                   // 00d5 pop si
  R.di = POP();                                                // 00d6 pop di
  R.bp = POP();                                                // 00d7 pop bp
  R.sp += 4; goto L_ret;                                       // 00d8 retf
L_ret:
  return;
}

static u16 f_ad15_0021(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0021();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0024 FUN_1000_0024  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0024(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_043d;                                    // 0024 jmp 0x43d
L_043d:   ASM_COST(5); PUSH(R.bp);                                     // 043d push bp
  R.bp = (u16)(R.sp);                                          // 043e mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 0440 mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 0443 cmp ax, 0
  if (!R.zf) goto L_044a;                                      // 0446 jne 0x44a
  ASM_COST(2); R.bp = POP();                                   // 0448 pop bp
  R.sp += 4; goto L_ret;                                       // 0449 retf
L_044a:   ASM_COST(3); R.ax = (u16)(0x0);                              // 044a mov ax, 0
  R.dx = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 044d mov dx, word ptr [bp + 0xa]
  R.cx = (u16)(0x0);                                           // 0450 mov cx, 0
L_0453:   ASM_COST(2); SUB16(R.dx, 0x185);                             // 0453 cmp dx, 0x185
  if (R.cf || R.zf) goto L_0460;                               // 0457 jbe 0x460
  ASM_COST(4); R.dx = (u16)(SHR16(R.dx, 0x1));                 // 0459 shr dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 045b rcr ax, 1
  R.cx = (u16)(INC16(R.cx));                                   // 045d inc cx
  ASM_BACK(); goto L_0453;                                     // 045e jmp 0x453
L_0460:   ASM_COST(1); if (R.cf) goto L_046e;                          // 0460 jb 0x46e
  ASM_COST(2); SUB16(R.ax, 0xdcb0);                            // 0462 cmp ax, 0xdcb0
  if (R.cf || R.zf) goto L_046e;                               // 0465 jbe 0x46e
  ASM_COST(4); R.dx = (u16)(SHR16(R.dx, 0x1));                 // 0467 shr dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0469 rcr ax, 1
  R.cx = (u16)(INC16(R.cx));                                   // 046b inc cx
  ASM_BACK(); goto L_0460;                                     // 046c jmp 0x460
L_046e:   ASM_COST(11); R.bx = (u16)(R.cx);                            // 046e mov bx, cx
  R.cx = (u16)(0xc350);                                        // 0470 mov cx, 0xc350
  DIV16(R.cx, 0x0473);                                         // 0473 div cx
  R.cx = (u16)(0x2);                                           // 0475 mov cx, 2
  SETL(R.bx, SHL8((u8)R.bx, (u8)R.cx));                        // 0478 shl bl, cl
  SETH(R.ax, OR8((u8)(R.ax >> 8), (u8)R.bx));                  // 047a or ah, bl
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 047c mov bx, word ptr [bp + 8]
  W16(DS, (u16)(R.bx + 0x4), R.ax);                            // 047f mov word ptr [bx + 4], ax
  W16(DS, (u16)(R.bx + 0x6), R.ax);                            // 0482 mov word ptr [bx + 6], ax
  R.bp = POP();                                                // 0485 pop bp
  R.sp += 4; goto L_ret;                                       // 0486 retf
L_ret:
  return;
}

static u16 f_ad15_0024(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0024();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0027 FUN_1000_0027  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0027(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_0299;                                    // 0027 jmp 0x299
L_0299:   ASM_COST(7); PUSH(R.bp);                                     // 0299 push bp
  R.bp = (u16)(R.sp);                                          // 029a mov bp, sp
  PUSH(R.di);                                                  // 029c push di
  PUSH(R.si);                                                  // 029d push si
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 029e mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 02a1 cmp ax, 0
  if (!R.zf) goto L_02aa;                                      // 02a4 jne 0x2aa
  ASM_COST(4); R.si = POP();                                   // 02a6 pop si
  R.di = POP();                                                // 02a7 pop di
  R.bp = POP();                                                // 02a8 pop bp
  R.sp += 4; goto L_ret;                                       // 02a9 retf
L_02aa:   ASM_COST(6); R.ax = (u16)(DEC16(R.ax));                      // 02aa dec ax
  R.di = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 02ab mov di, word ptr [bp + 8]
  R.si = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 02ae mov si, word ptr [bp + 0xa]
  { u16 a_ = (u16)(R.di + 0x10); R.bx = (u16)(M16(DS, a_)); R.es = M16(DS, (u16)(a_ + 2)); } // 02b1 les bx, ptr [di + 0x10]
  SUB8(M8(DS, (u16)(R.di + 0x1)), 0x0);                        // 02b4 cmp byte ptr [di + 1], 0
  if (!R.zf) goto L_02be;                                      // 02b8 jne 0x2be
  ASM_COST(4); R.si = POP();                                   // 02ba pop si
  R.di = POP();                                                // 02bb pop di
  R.bp = POP();                                                // 02bc pop bp
  R.sp += 4; goto L_ret;                                       // 02bd retf
L_02be:   ASM_COST(3); R.dx = (u16)(M16(DS, (u16)(R.di + 0x4)));       // 02be mov dx, word ptr [di + 4]
  SUB8(M8(ES, (u16)(R.bx + 0x35)), 0x91);                      // 02c1 cmp byte ptr es:[bx + 0x35], 0x91
  if (!R.zf) goto L_02d7;                                      // 02c6 jne 0x2d7
  ASM_COST(5); PUSH(R.ax);                                     // 02c8 push ax
  SETL(R.ax, M8(DS, (u16)(R.di + 0x3)));                       // 02c9 mov al, byte ptr [di + 3]
  SETL(R.ax, ADD8((u8)R.ax, M8(DS, (u16)(R.di + 0x22))));      // 02cc add al, byte ptr [di + 0x22]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 02cf xor ah, ah
  PUSH(0x02d4); a_ad15_06b8();                                 // 02d1 call 0x6b8
  ASM_COST(2); R.dx = (u16)(R.ax);                             // 02d4 mov dx, ax
  R.ax = POP();                                                // 02d6 pop ax
L_02d7:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x28)), 0x90);         // 02d7 cmp byte ptr es:[bx + 0x28], 0x90
  if (!R.zf) goto L_02e1;                                      // 02dc jne 0x2e1
  ASM_COST(1); R.dx = (u16)(ADD16(R.dx, M16(DS, (u16)(R.di + 0x1c)))); // 02de add dx, word ptr [di + 0x1c]
L_02e1:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x90);         // 02e1 cmp byte ptr es:[bx + 0x19], 0x90
  if (!R.zf) goto L_02eb;                                      // 02e6 jne 0x2eb
  ASM_COST(1); R.dx = (u16)(ADD16(R.dx, M16(DS, (u16)(R.di + 0x14)))); // 02e8 add dx, word ptr [di + 0x14]
L_02eb:   ASM_COST(3); R.cx = (u16)(M16(DS, (u16)(R.si + 0x26)));      // 02eb mov cx, word ptr [si + 0x26]
  SUB16(R.cx, 0x0);                                            // 02ee cmp cx, 0
  if (R.zf || R.sf != R.of) goto L_0314;                       // 02f1 jle 0x314
  ASM_COST(4); PUSH(R.ax);                                     // 02f3 push ax
  SETL(R.ax, M8(DS, (u16)(R.di + 0x3)));                       // 02f4 mov al, byte ptr [di + 3]
  SETH(R.ax, M8(ES, (u16)(R.bx + 0x12)));                      // 02f7 mov ah, byte ptr es:[bx + 0x12]
  PUSH(0x02fe); a_ad15_06b8();                                 // 02fb call 0x6b8
  ASM_COST(4); R.ax = (u16)(SUB16(R.ax, R.dx));                // 02fe sub ax, dx
  PUSH(R.dx);                                                  // 0300 push dx
  IMUL16(R.cx);                                                // 0301 imul cx
  R.cx = (u16)(0x5);                                           // 0303 mov cx, 5
L_0306:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 0306 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0308 rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_0306; }                // 030a loop 0x306
  ASM_COST(5); SETL(R.ax, (u8)(R.ax >> 8));                    // 030c mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 030e mov ah, dl
  R.dx = POP();                                                // 0310 pop dx
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 0311 add dx, ax
  R.ax = POP();                                                // 0313 pop ax
L_0314:   ASM_COST(2); SUB16(R.cx, 0x0);                               // 0314 cmp cx, 0
  if (R.sf == R.of) goto L_0340;                               // 0317 jge 0x340
  ASM_COST(6); R.cx = (u16)(NEG16(R.cx));                      // 0319 neg cx
  PUSH(R.ax);                                                  // 031b push ax
  SETL(R.ax, M8(DS, (u16)(R.di + 0x3)));                       // 031c mov al, byte ptr [di + 3]
  SETH(R.ax, M8(ES, (u16)(R.bx + 0x12)));                      // 031f mov ah, byte ptr es:[bx + 0x12]
  SETH(R.ax, NEG8((u8)(R.ax >> 8)));                           // 0323 neg ah
  PUSH(0x0328); a_ad15_06b8();                                 // 0325 call 0x6b8
  ASM_COST(5); R.ax = (u16)(SUB16(R.ax, R.dx));                // 0328 sub ax, dx
  R.ax = (u16)(NEG16(R.ax));                                   // 032a neg ax
  PUSH(R.dx);                                                  // 032c push dx
  IMUL16(R.cx);                                                // 032d imul cx
  R.cx = (u16)(0x5);                                           // 032f mov cx, 5
L_0332:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 0332 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0334 rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_0332; }                // 0336 loop 0x332
  ASM_COST(5); SETL(R.ax, (u8)(R.ax >> 8));                    // 0338 mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 033a mov ah, dl
  R.dx = POP();                                                // 033c pop dx
  R.dx = (u16)(SUB16(R.dx, R.ax));                             // 033d sub dx, ax
  R.ax = POP();                                                // 033f pop ax
L_0340:   ASM_COST(11); PUSH(R.ax);                                    // 0340 push ax
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x11)));                      // 0341 mov al, byte ptr es:[bx + 0x11]
  R.ax = (u16)(i16)(i8)R.ax;                                   // 0345 cwde
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 0346 add dx, ax
  W16(DS, (u16)(R.di + 0x6), R.dx);                            // 0348 mov word ptr [di + 6], dx
  R.ax = POP();                                                // 034b pop ax
  PUSH(R.ax);                                                  // 034c push ax
  SETH(R.ax, (u8)R.ax);                                        // 034d mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xa0));                     // 034f add ah, 0xa0
  SETL(R.ax, (u8)R.dx);                                        // 0352 mov al, dl
  PUSH(0x0357); a_ad15_078c();                                 // 0354 call 0x78c
  ASM_COST(10); R.ax = POP();                                  // 0357 pop ax
  PUSH(R.ax);                                                  // 0358 push ax
  SETH(R.ax, (u8)R.ax);                                        // 0359 mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xb0));                     // 035b add ah, 0xb0
  SETL(R.ax, 0x2);                                             // 035e mov al, 2
  SETL(R.ax, SUB8((u8)R.ax, M8(DS, (u16)(R.di + 0x1))));       // 0360 sub al, byte ptr [di + 1]
  SETL(R.cx, 0x5);                                             // 0363 mov cl, 5
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 0365 shl al, cl
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0367 or al, dh
  PUSH(0x036c); a_ad15_078c();                                 // 0369 call 0x78c
  ASM_COST(6); R.ax = POP();                                   // 036c pop ax
  R.cx = (u16)(XOR16(R.cx, R.cx));                             // 036d xor cx, cx
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 036f xor dx, dx
  SETL(R.cx, M8(ES, (u16)(R.bx + 0x35)));                      // 0371 mov cl, byte ptr es:[bx + 0x35]
  SETL(R.dx, M8(DS, (u16)(R.di + 0x22)));                      // 0375 mov dl, byte ptr [di + 0x22]
  PUSH(0x037b); a_ad15_068a();                                 // 0378 call 0x68a
  ASM_COST(3); SETL(R.cx, M8(ES, (u16)(R.bx + 0x28)));         // 037b mov cl, byte ptr es:[bx + 0x28]
  R.dx = (u16)(M16(DS, (u16)(R.di + 0x1c)));                   // 037f mov dx, word ptr [di + 0x1c]
  PUSH(0x0385); a_ad15_068a();                                 // 0382 call 0x68a
  ASM_COST(3); SETL(R.cx, M8(ES, (u16)(R.bx + 0x19)));         // 0385 mov cl, byte ptr es:[bx + 0x19]
  R.dx = (u16)(M16(DS, (u16)(R.di + 0x14)));                   // 0389 mov dx, word ptr [di + 0x14]
  PUSH(0x038f); a_ad15_068a();                                 // 038c call 0x68a
  ASM_COST(4); R.si = POP();                                   // 038f pop si
  R.di = POP();                                                // 0390 pop di
  R.bp = POP();                                                // 0391 pop bp
  R.sp += 4; goto L_ret;                                       // 0392 retf
L_ret:
  return;
}

static u16 f_ad15_0027(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0027();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:002A FUN_1000_002a  FIX: recompiled from the machine code (asm2c)
static void a_ad15_002a(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_041c;                                    // 002a jmp 0x41c
L_041c:   ASM_COST(7); PUSH(R.bp);                                     // 041c push bp
  R.bp = (u16)(R.sp);                                          // 041d mov bp, sp
  R.bx = (u16)(M16(SS, (u16)(R.bp + 0x8)));                    // 041f mov bx, word ptr [bp + 8]
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 0422 mov ax, word ptr [bp + 0xa]
  W16(DS, (u16)(R.bx + 0x4), R.ax);                            // 0425 mov word ptr [bx + 4], ax
  R.bp = POP();                                                // 0428 pop bp
  R.sp += 4; goto L_ret;                                       // 0429 retf
L_ret:
  return;
}

static u16 f_ad15_002a(u16 p0, u16 p1, u16 p2)
{
  ASM_ENTER();
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_002a();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:002D FUN_1000_002d  FIX: recompiled from the machine code (asm2c)
static void a_ad15_002d(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_03bc;                                    // 002d jmp 0x3bc
L_03bc:   ASM_COST(5); PUSH(R.bp);                                     // 03bc push bp
  R.bp = (u16)(R.sp);                                          // 03bd mov bp, sp
  SETL(R.ax, M8(SS, (u16)(R.bp + 0x8)));                       // 03bf mov al, byte ptr [bp + 8]
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 03c2 xor ah, ah
  PUSH(0x03c7); a_ad15_06b8();                                 // 03c4 call 0x6b8
  ASM_COST(4); R.dx = (u16)(R.ax);                             // 03c7 mov dx, ax
  R.cx = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 03c9 mov cx, word ptr [bp + 0xa]
  SUB16(R.cx, 0x0);                                            // 03cc cmp cx, 0
  if (R.zf || R.sf != R.of) goto L_03ef;                       // 03cf jle 0x3ef
  ASM_COST(3); SETL(R.ax, M8(SS, (u16)(R.bp + 0x8)));          // 03d1 mov al, byte ptr [bp + 8]
  SETH(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 03d4 mov ah, byte ptr [bp + 0xc]
  PUSH(0x03da); a_ad15_06b8();                                 // 03d7 call 0x6b8
  ASM_COST(4); R.ax = (u16)(SUB16(R.ax, R.dx));                // 03da sub ax, dx
  PUSH(R.dx);                                                  // 03dc push dx
  IMUL16(R.cx);                                                // 03dd imul cx
  R.cx = (u16)(0x5);                                           // 03df mov cx, 5
L_03e2:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 03e2 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 03e4 rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_03e2; }                // 03e6 loop 0x3e2
  ASM_COST(4); SETL(R.ax, (u8)(R.ax >> 8));                    // 03e8 mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 03ea mov ah, dl
  R.dx = POP();                                                // 03ec pop dx
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 03ed add dx, ax
L_03ef:   ASM_COST(2); SUB16(R.cx, 0x0);                               // 03ef cmp cx, 0
  if (R.sf == R.of) goto L_0418;                               // 03f2 jge 0x418
  ASM_COST(5); R.cx = (u16)(NEG16(R.cx));                      // 03f4 neg cx
  SETL(R.ax, M8(SS, (u16)(R.bp + 0x8)));                       // 03f6 mov al, byte ptr [bp + 8]
  SETH(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 03f9 mov ah, byte ptr [bp + 0xc]
  SETH(R.ax, NEG8((u8)(R.ax >> 8)));                           // 03fc neg ah
  PUSH(0x0401); a_ad15_06b8();                                 // 03fe call 0x6b8
  ASM_COST(5); R.ax = (u16)(SUB16(R.ax, R.dx));                // 0401 sub ax, dx
  R.ax = (u16)(NEG16(R.ax));                                   // 0403 neg ax
  PUSH(R.dx);                                                  // 0405 push dx
  IMUL16(R.cx);                                                // 0406 imul cx
  R.cx = (u16)(0x5);                                           // 0408 mov cx, 5
L_040b:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 040b sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 040d rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_040b; }                // 040f loop 0x40b
  ASM_COST(4); SETL(R.ax, (u8)(R.ax >> 8));                    // 0411 mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 0413 mov ah, dl
  R.dx = POP();                                                // 0415 pop dx
  R.dx = (u16)(SUB16(R.dx, R.ax));                             // 0416 sub dx, ax
L_0418:   ASM_COST(3); R.ax = (u16)(R.dx);                             // 0418 mov ax, dx
  R.bp = POP();                                                // 041a pop bp
  R.sp += 4; goto L_ret;                                       // 041b retf
L_ret:
  return;
}

static u16 f_ad15_002d(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_002d();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0030 FUN_1000_0030  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0030(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_0487;                                    // 0030 jmp 0x487
L_0487:   ASM_COST(2); R.ax = (u16)(0xffff);                           // 0487 mov ax, 0xffff
  R.sp += 4; goto L_ret;                                       // 048a retf
L_ret:
  return;
}

static u16 f_ad15_0030(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0030();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0033 FUN_1000_0033  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0033(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_0b4b;                                    // 0033 jmp 0xb4b
L_0b4b:   ASM_COST(4); PUSH(R.bp);                                     // 0b4b push bp
  R.bp = (u16)(R.sp);                                          // 0b4c mov bp, sp
  SUB16(M16(SS, (u16)(R.bp + 0x6)), 0x0);                      // 0b4e cmp word ptr [bp + 6], 0
  if (R.zf) goto L_0b56;                                       // 0b52 je 0xb56
  ASM_COST(2); R.bp = POP();                                   // 0b54 pop bp
  R.sp += 4; goto L_ret;                                       // 0b55 retf
L_0b56:   ASM_COST(4); PUSH(R.ds);                                     // 0b56 push ds
  PUSH(R.cs);                                                  // 0b57 push cs
  R.ds = POP();                                                // 0b58 pop ds
  PUSH(0x0b5c); a_ad15_099c();                                 // 0b59 call 0x99c
  ASM_COST(10);                                                // 0b5c cli
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0b5d xor ax, ax
  W16(DS, (u16)(0xca8), R.ax);                                 // 0b5f mov word ptr [0xca8], ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xe)));                    // 0b62 mov ax, word ptr [bp + 0xe]
  W8(DS, (u16)(0xc98), (u8)R.ax);                              // 0b65 mov byte ptr [0xc98], al
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0b68 les bx, ptr [bp + 8]
  R.ax = (u16)((u16)(R.bx + 0x32));                            // 0b6b lea ax, [bx + 0x32]
  R.cx = (u16)(R.ax);                                          // 0b6e mov cx, ax
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 0b70 cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_0b8c;                                      // 0b75 jne 0xb8c
  ASM_COST(11); PUSH(R.ax);                                    // 0b77 push ax
  PUSH(R.bx);                                                  // 0b78 push bx
  R.bx = (u16)(R.ax);                                          // 0b79 mov bx, ax
  SETL(R.ax, M8(ES, (u16)(R.bx)));                             // 0b7b mov al, byte ptr es:[bx]
  W8(DS, (u16)(0xcbb), (u8)R.ax);                              // 0b7e mov byte ptr [0xcbb], al
  W8(DS, (u16)(0xcbc), (u8)R.ax);                              // 0b81 mov byte ptr [0xcbc], al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0b84 xor al, al
  W8(DS, (u16)(0xcba), (u8)R.ax);                              // 0b86 mov byte ptr [0xcba], al
  R.bx = POP();                                                // 0b89 pop bx
  R.ax = POP();                                                // 0b8a pop ax
  R.cx = (u16)(INC16(R.cx));                                   // 0b8b inc cx
L_0b8c:   ASM_COST(7); W16(DS, (u16)(0xc8c), R.ax);                    // 0b8c mov word ptr [0xc8c], ax
  W16(DS, (u16)(0xc8e), R.es);                                 // 0b8f mov word ptr [0xc8e], es
  W16(DS, (u16)(0xc90), R.cx);                                 // 0b93 mov word ptr [0xc90], cx
  W16(DS, (u16)(0xc92), R.es);                                 // 0b97 mov word ptr [0xc92], es
  { u16 a_ = (u16)(R.bx + 0x8); R.cx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 0b9b les cx, ptr es:[bx + 8]
  SUB16(R.cx, 0x0);                                            // 0b9f cmp cx, 0
  if (!R.zf) goto L_0bae;                                      // 0ba2 jne 0xbae
  ASM_COST(6); R.ax = (u16)(0x1);                              // 0ba4 mov ax, 1
  W16(DS, (u16)(0xca8), R.ax);                                 // 0ba7 mov word ptr [0xca8], ax
  // 0baa sti 
  R.ds = POP();                                                // 0bab pop ds
  R.bp = POP();                                                // 0bac pop bp
  R.sp += 4; goto L_ret;                                       // 0bad retf
L_0bae:   ASM_COST(15); R.cx = (u16)(ADD16(R.cx, R.ax));               // 0bae add cx, ax
  R.cx = (u16)(DEC16(R.cx));                                   // 0bb0 dec cx
  W16(CS, (u16)(0xc94), R.cx);                                 // 0bb1 mov word ptr cs:[0xc94], cx
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0bb6 xor ax, ax
  R.es = (u16)(R.ax);                                          // 0bb8 mov es, ax
  R.ax = (u16)(M16(ES, (u16)(0x20)));                          // 0bba mov ax, word ptr es:[0x20]
  R.dx = (u16)(M16(ES, (u16)(0x22)));                          // 0bbe mov dx, word ptr es:[0x22]
  W16(DS, (u16)(0xc9c), R.ax);                                 // 0bc3 mov word ptr [0xc9c], ax
  W16(DS, (u16)(0xc9e), R.dx);                                 // 0bc6 mov word ptr [0xc9e], dx
  PUSH(R.es);                                                  // 0bca push es
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0bcb les bx, ptr [bp + 8]
  R.ax = (u16)(0x9bb);                                         // 0bce mov ax, 0x9bb
  R.dx = (u16)(R.cs);                                          // 0bd1 mov dx, cs
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 0bd3 cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_0bdf;                                      // 0bd8 jne 0xbdf
  ASM_COST(2); R.ax = (u16)(0xa66);                            // 0bda mov ax, 0xa66
  R.dx = (u16)(R.cs);                                          // 0bdd mov dx, cs
L_0bdf:   ASM_COST(5); R.es = POP();                                   // 0bdf pop es
  W16(ES, (u16)(0x20), R.ax);                                  // 0be0 mov word ptr es:[0x20], ax
  W16(ES, (u16)(0x22), R.dx);                                  // 0be4 mov word ptr es:[0x22], dx
  R.ax = (u16)(0x120);                                         // 0be9 mov ax, 0x120
  PUSH(0x0bef); a_ad15_078c();                                 // 0bec call 0x78c
  ASM_COST(2); R.ax = (u16)(0x2021);                           // 0bef mov ax, 0x2021
  PUSH(0x0bf5); a_ad15_078c();                                 // 0bf2 call 0x78c
  ASM_COST(2); R.ax = (u16)(0x60f0);                           // 0bf5 mov ax, 0x60f0
  PUSH(0x0bfb); a_ad15_078c();                                 // 0bf8 call 0x78c
  ASM_COST(2); R.ax = (u16)(0x80f0);                           // 0bfb mov ax, 0x80f0
  PUSH(0x0c01); a_ad15_078c();                                 // 0bfe call 0x78c
  ASM_COST(2); R.ax = (u16)(0xc001);                           // 0c01 mov ax, 0xc001
  PUSH(0x0c07); a_ad15_078c();                                 // 0c04 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xe000);                           // 0c07 mov ax, 0xe000
  PUSH(0x0c0d); a_ad15_078c();                                 // 0c0a call 0x78c
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 0c0d mov ax, 0x433f
  PUSH(0x0c13); a_ad15_078c();                                 // 0c10 call 0x78c
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 0c13 mov ax, 0xb001
  // 0c16 cli 
  R.ax = (u16)(0xa08f);                                        // 0c17 mov ax, 0xa08f
  PUSH(0x0c1d); a_ad15_078c();                                 // 0c1a call 0x78c
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 0c1d mov ax, 0xb02e
  PUSH(0x0c23); a_ad15_078c();                                 // 0c20 call 0x78c
  ASM_COST(5); SETL(R.ax, 0x36);                               // 0c23 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c25 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0c27 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c29 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c2b out 0x40, al
L_0c2d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 0c2d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c2f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c31 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 0c33 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c35 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 0c37 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 0c39 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0c2d; }      // 0c3d jg 0xc2d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 0c3f mov ax, 0xb020
  PUSH(0x0c45); a_ad15_078c();                                 // 0c42 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 0c45 mov ax, 0xa000
  PUSH(0x0c4b); a_ad15_078c();                                 // 0c48 call 0x78c
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 0c4b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c4e cmp bx, 0x64
  if (!R.cf) goto L_0c58;                                      // 0c51 jae 0xc58
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c53 mov bx, 0x64
  goto L_0c61;                                                 // 0c56 jmp 0xc61
L_0c58:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c58 cmp bx, 0x4e20
  if (R.cf) goto L_0c61;                                       // 0c5c jb 0xc61
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c5e mov bx, 0x4e20
L_0c61:   ASM_COST(20); R.dx = (u16)(0x12);                            // 0c61 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c64 mov ax, 0x34dc
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  R.bx = (u16)(R.ax);                                          // 0c69 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0xca0)));                         // 0c6b mov ax, word ptr [0xca0]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c6e xor dx, dx
  DIV16(R.bx, 0x0c70);                                         // 0c70 div bx
  W16(DS, (u16)(0xca2), R.ax);                                 // 0c72 mov word ptr [0xca2], ax
  W16(DS, (u16)(0xca4), R.ax);                                 // 0c75 mov word ptr [0xca4], ax
  W16(DS, (u16)(0xc96), R.bx);                                 // 0c78 mov word ptr [0xc96], bx
  SETL(R.ax, 0x36);                                            // 0c7c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c7e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c80 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c82 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c84 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c86 out 0x40, al
  // 0c88 sti 
  R.ds = POP();                                                // 0c89 pop ds
  R.bp = POP();                                                // 0c8a pop bp
  R.sp += 4; goto L_ret;                                       // 0c8b retf
L_ret:
  return;
}

static u16 f_ad15_0033(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4)
{
  ASM_ENTER();
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0033();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0036 FUN_1000_0036  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0036(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_042a;                                    // 0036 jmp 0x42a
L_042a:   ASM_COST(5); PUSH(R.bp);                                     // 042a push bp
  R.bp = (u16)(R.sp);                                          // 042b mov bp, sp
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 042d mov ax, word ptr [bp + 6]
  SUB16(R.ax, 0x0);                                            // 0430 cmp ax, 0
  if (R.zf) goto L_0437;                                       // 0433 je 0x437
  ASM_COST(2); R.bp = POP();                                   // 0435 pop bp
  R.sp += 4; goto L_ret;                                       // 0436 retf
L_0437:   ASM_COST(3); R.ax = (u16)(M16(CS, (u16)(0xca8)));            // 0437 mov ax, word ptr cs:[0xca8]
  R.bp = POP();                                                // 043b pop bp
  R.sp += 4; goto L_ret;                                       // 043c retf
L_ret:
  return;
}

static u16 f_ad15_0036(u16 p0)
{
  ASM_ENTER();
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0036();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0039 FUN_1000_0039  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0039(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_0487;                                    // 0039 jmp 0x487
L_0487:   ASM_COST(2); R.ax = (u16)(0xffff);                           // 0487 mov ax, 0xffff
  R.sp += 4; goto L_ret;                                       // 048a retf
L_ret:
  return;
}

static u16 f_ad15_0039(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0039();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:003C FUN_1000_003c  FIX: recompiled from the machine code (asm2c)
static void a_ad15_003c(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); goto L_0487;                                    // 003c jmp 0x487
L_0487:   ASM_COST(2); R.ax = (u16)(0xffff);                           // 0487 mov ax, 0xffff
  R.sp += 4; goto L_ret;                                       // 048a retf
L_ret:
  return;
}

static u16 f_ad15_003c(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_003c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:003F FUN_1000_003f  FIX: recompiled from the machine code (asm2c)
static void a_ad15_003f(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); R.ax = (u16)(0x0);                              // 003f mov ax, 0
L_0042:   ASM_COST(1); PUSH(0x0045); a_ad15_04e7();                    // 0042 call 0x4e7
  ASM_COST(3); R.ax = (u16)(INC16(R.ax));                      // 0045 inc ax
  SUB16(R.ax, 0x9);                                            // 0046 cmp ax, 9
  if (R.cf) { ASM_BACK(); goto L_0042; }                       // 0049 jb 0x42
  ASM_COST(1); PUSH(0x004e); a_ad15_099c();                    // 004b call 0x99c
  ASM_COST(1); R.sp += 4; goto L_ret;                          // 004e retf
L_ret:
  return;
}

static u16 f_ad15_003f(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_003f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:00B7 FUN_1000_00b7  FIX: recompiled from the machine code (asm2c)
static void a_ad15_00b7(void)
{
  R.cs = ad15_seg;
  ASM_COST(3); SETL(R.dx, M8(DS, (u16)(R.si + 0x2b)));         // 00b7 mov dl, byte ptr [si + 0x2b]
  SUB16(R.dx, 0x0);                                            // 00ba cmp dx, 0
  if (R.zf) goto L_00c6;                                       // 00bd je 0xc6
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x17)));         // 00bf mov cl, byte ptr es:[bx + 0x17]
  PUSH(0x00c6); a_ad15_068a();                                 // 00c3 call 0x68a
L_00c6:   ASM_COST(3); SETL(R.dx, M8(DS, (u16)(R.si + 0x2c)));         // 00c6 mov dl, byte ptr [si + 0x2c]
  SUB16(R.dx, 0x0);                                            // 00c9 cmp dx, 0
  if (R.zf) goto L_00d5;                                       // 00cc je 0xd5
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x18)));         // 00ce mov cl, byte ptr es:[bx + 0x18]
  PUSH(0x00d5); a_ad15_068a();                                 // 00d2 call 0x68a
L_00d5:   ASM_COST(4); R.si = POP();                                   // 00d5 pop si
  R.di = POP();                                                // 00d6 pop di
  R.bp = POP();                                                // 00d7 pop bp
  R.sp += 4; goto L_ret;                                       // 00d8 retf
L_ret:
  return;
}

static u16 f_ad15_00b7(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_00b7();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:00C6 FUN_1000_00c6  FIX: recompiled from the machine code (asm2c)
static void a_ad15_00c6(void)
{
  R.cs = ad15_seg;
  ASM_COST(3); SETL(R.dx, M8(DS, (u16)(R.si + 0x2c)));         // 00c6 mov dl, byte ptr [si + 0x2c]
  SUB16(R.dx, 0x0);                                            // 00c9 cmp dx, 0
  if (R.zf) goto L_00d5;                                       // 00cc je 0xd5
  ASM_COST(2); SETL(R.cx, M8(ES, (u16)(R.bx + 0x18)));         // 00ce mov cl, byte ptr es:[bx + 0x18]
  PUSH(0x00d5); a_ad15_068a();                                 // 00d2 call 0x68a
L_00d5:   ASM_COST(4); R.si = POP();                                   // 00d5 pop si
  R.di = POP();                                                // 00d6 pop di
  R.bp = POP();                                                // 00d7 pop bp
  R.sp += 4; goto L_ret;                                       // 00d8 retf
L_ret:
  return;
}

static u16 f_ad15_00c6(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_00c6();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0138 FUN_1000_0138  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0138(void)
{
  R.cs = ad15_seg;
  ASM_COST(5); R.sp = (u16)(ADD16(R.sp, 0xa));                 // 0138 add sp, 0xa
  R.si = POP();                                                // 013b pop si
  R.di = POP();                                                // 013c pop di
  R.bp = POP();                                                // 013d pop bp
  R.sp += 4; goto L_ret;                                       // 013e retf
L_ret:
  return;
}

static u16 f_ad15_0138(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0138();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:014E FUN_1000_014e  FIX: recompiled from the machine code (asm2c)
static void a_ad15_014e(void)
{
  R.cs = ad15_seg;
  ASM_COST(16); R.dx = (u16)(R.ax);                            // 014e mov dx, ax
  W16(DS, (u16)(R.di + 0x4), R.dx);                            // 0150 mov word ptr [di + 4], dx
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x11)));                      // 0153 mov al, byte ptr es:[bx + 0x11]
  R.ax = (u16)(i16)(i8)R.ax;                                   // 0157 cwde
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 0158 add dx, ax
  W16(DS, (u16)(R.di + 0x6), R.dx);                            // 015a mov word ptr [di + 6], dx
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0x6)));                    // 015d mov ax, word ptr [bp + 6]
  R.ax = (u16)(DEC16(R.ax));                                   // 0160 dec ax
  R.di = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 0161 mov di, word ptr [bp + 0xa]
  PUSH(R.ax);                                                  // 0164 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0165 shl ax, 1
  R.si = (u16)(R.ax);                                          // 0167 mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x81f)));                     // 0169 mov ah, byte ptr cs:[si + 0x81f]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 016e add ah, 0x40
  SETL(R.ax, 0x3f);                                            // 0171 mov al, 0x3f
  PUSH(0x0176); a_ad15_078c();                                 // 0173 call 0x78c
  ASM_COST(9); R.ax = POP();                                   // 0176 pop ax
  PUSH(R.ax);                                                  // 0177 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0178 shl ax, 1
  R.ax = (u16)(INC16(R.ax));                                   // 017a inc ax
  R.si = (u16)(R.ax);                                          // 017b mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x81f)));                     // 017d mov ah, byte ptr cs:[si + 0x81f]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 0182 add ah, 0x40
  SETL(R.ax, 0x3f);                                            // 0185 mov al, 0x3f
  PUSH(0x018a); a_ad15_078c();                                 // 0187 call 0x78c
  ASM_COST(6); R.ax = POP();                                   // 018a pop ax
  PUSH(R.ax);                                                  // 018b push ax
  SETH(R.ax, (u8)R.ax);                                        // 018c mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xa0));                     // 018e add ah, 0xa0
  SETL(R.ax, (u8)R.dx);                                        // 0191 mov al, dl
  PUSH(0x0196); a_ad15_078c();                                 // 0193 call 0x78c
  ASM_COST(7); R.ax = POP();                                   // 0196 pop ax
  PUSH(R.ax);                                                  // 0197 push ax
  SETH(R.ax, (u8)R.ax);                                        // 0198 mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xb0));                     // 019a add ah, 0xb0
  SETL(R.ax, 0x20);                                            // 019d mov al, 0x20
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 019f or al, dh
  PUSH(0x01a4); a_ad15_078c();                                 // 01a1 call 0x78c
  ASM_COST(4); R.ax = POP();                                   // 01a4 pop ax
  SETL(R.cx, 0x7f);                                            // 01a5 mov cl, 0x7f
  SUB8(M8(ES, (u16)(R.bx + 0x15)), 0x0);                       // 01a7 cmp byte ptr es:[bx + 0x15], 0
  if (R.zf) goto L_01b1;                                       // 01ac je 0x1b1
  ASM_COST(1); SETL(R.cx, M8(SS, (u16)(R.bp + 0xe)));          // 01ae mov cl, byte ptr [bp + 0xe]
L_01b1:   ASM_COST(4); R.si = (u16)(R.ax);                             // 01b1 mov si, ax
  W8(CS, (u16)(R.si + 0x927), (u8)R.cx);                       // 01b3 mov byte ptr cs:[si + 0x927], cl
  SETH(R.cx, M8(DS, (u16)(R.di + 0x28)));                      // 01b8 mov ch, byte ptr [di + 0x28]
  PUSH(0x01be); a_ad15_06f5();                                 // 01bb call 0x6f5
  ASM_COST(4); R.si = POP();                                   // 01be pop si
  R.di = POP();                                                // 01bf pop di
  R.bp = POP();                                                // 01c0 pop bp
  R.sp += 4; goto L_ret;                                       // 01c1 retf
L_ret:
  return;
}

static u16 f_ad15_014e(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4)
{
  ASM_ENTER();
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_014e();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:02D4 FUN_1000_02d4  FIX: recompiled from the machine code (asm2c)
static void a_ad15_02d4(void)
{
  R.cs = ad15_seg;
  ASM_COST(4); R.dx = (u16)(R.ax);                             // 02d4 mov dx, ax
  R.ax = POP();                                                // 02d6 pop ax
  SUB8(M8(ES, (u16)(R.bx + 0x28)), 0x90);                      // 02d7 cmp byte ptr es:[bx + 0x28], 0x90
  if (!R.zf) goto L_02e1;                                      // 02dc jne 0x2e1
  ASM_COST(1); R.dx = (u16)(ADD16(R.dx, M16(DS, (u16)(R.di + 0x1c)))); // 02de add dx, word ptr [di + 0x1c]
L_02e1:   ASM_COST(2); SUB8(M8(ES, (u16)(R.bx + 0x19)), 0x90);         // 02e1 cmp byte ptr es:[bx + 0x19], 0x90
  if (!R.zf) goto L_02eb;                                      // 02e6 jne 0x2eb
  ASM_COST(1); R.dx = (u16)(ADD16(R.dx, M16(DS, (u16)(R.di + 0x14)))); // 02e8 add dx, word ptr [di + 0x14]
L_02eb:   ASM_COST(3); R.cx = (u16)(M16(DS, (u16)(R.si + 0x26)));      // 02eb mov cx, word ptr [si + 0x26]
  SUB16(R.cx, 0x0);                                            // 02ee cmp cx, 0
  if (R.zf || R.sf != R.of) goto L_0314;                       // 02f1 jle 0x314
  ASM_COST(4); PUSH(R.ax);                                     // 02f3 push ax
  SETL(R.ax, M8(DS, (u16)(R.di + 0x3)));                       // 02f4 mov al, byte ptr [di + 3]
  SETH(R.ax, M8(ES, (u16)(R.bx + 0x12)));                      // 02f7 mov ah, byte ptr es:[bx + 0x12]
  PUSH(0x02fe); a_ad15_06b8();                                 // 02fb call 0x6b8
  ASM_COST(4); R.ax = (u16)(SUB16(R.ax, R.dx));                // 02fe sub ax, dx
  PUSH(R.dx);                                                  // 0300 push dx
  IMUL16(R.cx);                                                // 0301 imul cx
  R.cx = (u16)(0x5);                                           // 0303 mov cx, 5
L_0306:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 0306 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0308 rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_0306; }                // 030a loop 0x306
  ASM_COST(5); SETL(R.ax, (u8)(R.ax >> 8));                    // 030c mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 030e mov ah, dl
  R.dx = POP();                                                // 0310 pop dx
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 0311 add dx, ax
  R.ax = POP();                                                // 0313 pop ax
L_0314:   ASM_COST(2); SUB16(R.cx, 0x0);                               // 0314 cmp cx, 0
  if (R.sf == R.of) goto L_0340;                               // 0317 jge 0x340
  ASM_COST(6); R.cx = (u16)(NEG16(R.cx));                      // 0319 neg cx
  PUSH(R.ax);                                                  // 031b push ax
  SETL(R.ax, M8(DS, (u16)(R.di + 0x3)));                       // 031c mov al, byte ptr [di + 3]
  SETH(R.ax, M8(ES, (u16)(R.bx + 0x12)));                      // 031f mov ah, byte ptr es:[bx + 0x12]
  SETH(R.ax, NEG8((u8)(R.ax >> 8)));                           // 0323 neg ah
  PUSH(0x0328); a_ad15_06b8();                                 // 0325 call 0x6b8
  ASM_COST(5); R.ax = (u16)(SUB16(R.ax, R.dx));                // 0328 sub ax, dx
  R.ax = (u16)(NEG16(R.ax));                                   // 032a neg ax
  PUSH(R.dx);                                                  // 032c push dx
  IMUL16(R.cx);                                                // 032d imul cx
  R.cx = (u16)(0x5);                                           // 032f mov cx, 5
L_0332:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 0332 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 0334 rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_0332; }                // 0336 loop 0x332
  ASM_COST(5); SETL(R.ax, (u8)(R.ax >> 8));                    // 0338 mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 033a mov ah, dl
  R.dx = POP();                                                // 033c pop dx
  R.dx = (u16)(SUB16(R.dx, R.ax));                             // 033d sub dx, ax
  R.ax = POP();                                                // 033f pop ax
L_0340:   ASM_COST(11); PUSH(R.ax);                                    // 0340 push ax
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x11)));                      // 0341 mov al, byte ptr es:[bx + 0x11]
  R.ax = (u16)(i16)(i8)R.ax;                                   // 0345 cwde
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 0346 add dx, ax
  W16(DS, (u16)(R.di + 0x6), R.dx);                            // 0348 mov word ptr [di + 6], dx
  R.ax = POP();                                                // 034b pop ax
  PUSH(R.ax);                                                  // 034c push ax
  SETH(R.ax, (u8)R.ax);                                        // 034d mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xa0));                     // 034f add ah, 0xa0
  SETL(R.ax, (u8)R.dx);                                        // 0352 mov al, dl
  PUSH(0x0357); a_ad15_078c();                                 // 0354 call 0x78c
  ASM_COST(10); R.ax = POP();                                  // 0357 pop ax
  PUSH(R.ax);                                                  // 0358 push ax
  SETH(R.ax, (u8)R.ax);                                        // 0359 mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xb0));                     // 035b add ah, 0xb0
  SETL(R.ax, 0x2);                                             // 035e mov al, 2
  SETL(R.ax, SUB8((u8)R.ax, M8(DS, (u16)(R.di + 0x1))));       // 0360 sub al, byte ptr [di + 1]
  SETL(R.cx, 0x5);                                             // 0363 mov cl, 5
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 0365 shl al, cl
  SETL(R.ax, OR8((u8)R.ax, (u8)(R.dx >> 8)));                  // 0367 or al, dh
  PUSH(0x036c); a_ad15_078c();                                 // 0369 call 0x78c
  ASM_COST(6); R.ax = POP();                                   // 036c pop ax
  R.cx = (u16)(XOR16(R.cx, R.cx));                             // 036d xor cx, cx
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 036f xor dx, dx
  SETL(R.cx, M8(ES, (u16)(R.bx + 0x35)));                      // 0371 mov cl, byte ptr es:[bx + 0x35]
  SETL(R.dx, M8(DS, (u16)(R.di + 0x22)));                      // 0375 mov dl, byte ptr [di + 0x22]
  PUSH(0x037b); a_ad15_068a();                                 // 0378 call 0x68a
  ASM_COST(3); SETL(R.cx, M8(ES, (u16)(R.bx + 0x28)));         // 037b mov cl, byte ptr es:[bx + 0x28]
  R.dx = (u16)(M16(DS, (u16)(R.di + 0x1c)));                   // 037f mov dx, word ptr [di + 0x1c]
  PUSH(0x0385); a_ad15_068a();                                 // 0382 call 0x68a
  ASM_COST(3); SETL(R.cx, M8(ES, (u16)(R.bx + 0x19)));         // 0385 mov cl, byte ptr es:[bx + 0x19]
  R.dx = (u16)(M16(DS, (u16)(R.di + 0x14)));                   // 0389 mov dx, word ptr [di + 0x14]
  PUSH(0x038f); a_ad15_068a();                                 // 038c call 0x68a
  ASM_COST(4); R.si = POP();                                   // 038f pop si
  R.di = POP();                                                // 0390 pop di
  R.bp = POP();                                                // 0391 pop bp
  R.sp += 4; goto L_ret;                                       // 0392 retf
L_ret:
  return;
}

static u16 f_ad15_02d4(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_02d4();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:03C7 FUN_1000_03c7  FIX: recompiled from the machine code (asm2c)
static void a_ad15_03c7(void)
{
  R.cs = ad15_seg;
  ASM_COST(4); R.dx = (u16)(R.ax);                             // 03c7 mov dx, ax
  R.cx = (u16)(M16(SS, (u16)(R.bp + 0xa)));                    // 03c9 mov cx, word ptr [bp + 0xa]
  SUB16(R.cx, 0x0);                                            // 03cc cmp cx, 0
  if (R.zf || R.sf != R.of) goto L_03ef;                       // 03cf jle 0x3ef
  ASM_COST(3); SETL(R.ax, M8(SS, (u16)(R.bp + 0x8)));          // 03d1 mov al, byte ptr [bp + 8]
  SETH(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 03d4 mov ah, byte ptr [bp + 0xc]
  PUSH(0x03da); a_ad15_06b8();                                 // 03d7 call 0x6b8
  ASM_COST(4); R.ax = (u16)(SUB16(R.ax, R.dx));                // 03da sub ax, dx
  PUSH(R.dx);                                                  // 03dc push dx
  IMUL16(R.cx);                                                // 03dd imul cx
  R.cx = (u16)(0x5);                                           // 03df mov cx, 5
L_03e2:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 03e2 sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 03e4 rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_03e2; }                // 03e6 loop 0x3e2
  ASM_COST(4); SETL(R.ax, (u8)(R.ax >> 8));                    // 03e8 mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 03ea mov ah, dl
  R.dx = POP();                                                // 03ec pop dx
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 03ed add dx, ax
L_03ef:   ASM_COST(2); SUB16(R.cx, 0x0);                               // 03ef cmp cx, 0
  if (R.sf == R.of) goto L_0418;                               // 03f2 jge 0x418
  ASM_COST(5); R.cx = (u16)(NEG16(R.cx));                      // 03f4 neg cx
  SETL(R.ax, M8(SS, (u16)(R.bp + 0x8)));                       // 03f6 mov al, byte ptr [bp + 8]
  SETH(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 03f9 mov ah, byte ptr [bp + 0xc]
  SETH(R.ax, NEG8((u8)(R.ax >> 8)));                           // 03fc neg ah
  PUSH(0x0401); a_ad15_06b8();                                 // 03fe call 0x6b8
  ASM_COST(5); R.ax = (u16)(SUB16(R.ax, R.dx));                // 0401 sub ax, dx
  R.ax = (u16)(NEG16(R.ax));                                   // 0403 neg ax
  PUSH(R.dx);                                                  // 0405 push dx
  IMUL16(R.cx);                                                // 0406 imul cx
  R.cx = (u16)(0x5);                                           // 0408 mov cx, 5
L_040b:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 040b sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 040d rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_040b; }                // 040f loop 0x40b
  ASM_COST(4); SETL(R.ax, (u8)(R.ax >> 8));                    // 0411 mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 0413 mov ah, dl
  R.dx = POP();                                                // 0415 pop dx
  R.dx = (u16)(SUB16(R.dx, R.ax));                             // 0416 sub dx, ax
L_0418:   ASM_COST(3); R.ax = (u16)(R.dx);                             // 0418 mov ax, dx
  R.bp = POP();                                                // 041a pop bp
  R.sp += 4; goto L_ret;                                       // 041b retf
L_ret:
  return;
}

static u16 f_ad15_03c7(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_03c7();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:03E8 FUN_1000_03e8  FIX: recompiled from the machine code (asm2c)
static void a_ad15_03e8(void)
{
  R.cs = ad15_seg;
  ASM_COST(6); SETL(R.ax, (u8)(R.ax >> 8));                    // 03e8 mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 03ea mov ah, dl
  R.dx = POP();                                                // 03ec pop dx
  R.dx = (u16)(ADD16(R.dx, R.ax));                             // 03ed add dx, ax
  SUB16(R.cx, 0x0);                                            // 03ef cmp cx, 0
  if (R.sf == R.of) goto L_0418;                               // 03f2 jge 0x418
  ASM_COST(5); R.cx = (u16)(NEG16(R.cx));                      // 03f4 neg cx
  SETL(R.ax, M8(SS, (u16)(R.bp + 0x8)));                       // 03f6 mov al, byte ptr [bp + 8]
  SETH(R.ax, M8(SS, (u16)(R.bp + 0xc)));                       // 03f9 mov ah, byte ptr [bp + 0xc]
  SETH(R.ax, NEG8((u8)(R.ax >> 8)));                           // 03fc neg ah
  PUSH(0x0401); a_ad15_06b8();                                 // 03fe call 0x6b8
  ASM_COST(5); R.ax = (u16)(SUB16(R.ax, R.dx));                // 0401 sub ax, dx
  R.ax = (u16)(NEG16(R.ax));                                   // 0403 neg ax
  PUSH(R.dx);                                                  // 0405 push dx
  IMUL16(R.cx);                                                // 0406 imul cx
  R.cx = (u16)(0x5);                                           // 0408 mov cx, 5
L_040b:   ASM_COST(3); R.dx = (u16)(SAR16(R.dx, 0x1));                 // 040b sar dx, 1
  R.ax = (u16)(RCR16(R.ax, 0x1));                              // 040d rcr ax, 1
  if (--R.cx != 0) { ASM_BACK(); goto L_040b; }                // 040f loop 0x40b
  ASM_COST(4); SETL(R.ax, (u8)(R.ax >> 8));                    // 0411 mov al, ah
  SETH(R.ax, (u8)R.dx);                                        // 0413 mov ah, dl
  R.dx = POP();                                                // 0415 pop dx
  R.dx = (u16)(SUB16(R.dx, R.ax));                             // 0416 sub dx, ax
L_0418:   ASM_COST(3); R.ax = (u16)(R.dx);                             // 0418 mov ax, dx
  R.bp = POP();                                                // 041a pop bp
  R.sp += 4; goto L_ret;                                       // 041b retf
L_ret:
  return;
}

static u16 f_ad15_03e8(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_03e8();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:07C9 FUN_1000_07c9  FIX: recompiled from the machine code (asm2c)
static void a_ad15_07c9(void)
{
  R.cs = ad15_seg;
  ASM_COST(3); SETH(R.ax, 0x4);                                // 07c9 mov ah, 4
  SETL(R.ax, 0x60);                                            // 07cb mov al, 0x60
  PUSH(0x07d0); a_ad15_078c();                                 // 07cd call 0x78c
  ASM_COST(3); SETH(R.ax, 0x4);                                // 07d0 mov ah, 4
  SETL(R.ax, 0x80);                                            // 07d2 mov al, 0x80
  PUSH(0x07d7); a_ad15_078c();                                 // 07d4 call 0x78c
  ASM_COST(1); PUSH(0x07da); a_ad15_07b4();                    // 07d7 call 0x7b4
  ASM_COST(4); R.dx = (u16)(R.ax);                             // 07da mov dx, ax
  SETH(R.ax, 0x2);                                             // 07dc mov ah, 2
  SETL(R.ax, 0xff);                                            // 07de mov al, 0xff
  PUSH(0x07e3); a_ad15_078c();                                 // 07e0 call 0x78c
  ASM_COST(3); SETH(R.ax, 0x4);                                // 07e3 mov ah, 4
  SETL(R.ax, 0x21);                                            // 07e5 mov al, 0x21
  PUSH(0x07ea); a_ad15_078c();                                 // 07e7 call 0x78c
  ASM_COST(1); R.cx = (u16)(0x12c);                            // 07ea mov cx, 0x12c
L_07ed:   ASM_COST(1); PUSH(0x07f0); a_ad15_07b4();                    // 07ed call 0x7b4
  ASM_COST(3); SETL(R.ax, AND8((u8)R.ax, 0xe0));               // 07f0 and al, 0xe0
  SUB8((u8)R.ax, 0xc0);                                        // 07f2 cmp al, 0xc0
  if (R.zf) goto L_07f8;                                       // 07f4 je 0x7f8
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_07ed; }   // 07f6 loop 0x7ed
L_07f8:   ASM_COST(4); R.cx = (u16)(R.ax);                             // 07f8 mov cx, ax
  SETH(R.ax, 0x4);                                             // 07fa mov ah, 4
  SETL(R.ax, 0x60);                                            // 07fc mov al, 0x60
  PUSH(0x0801); a_ad15_078c();                                 // 07fe call 0x78c
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0801 mov ah, 4
  SETL(R.ax, 0x80);                                            // 0803 mov al, 0x80
  PUSH(0x0808); a_ad15_078c();                                 // 0805 call 0x78c
  ASM_COST(4); SETL(R.dx, AND8((u8)R.dx, 0xe0));               // 0808 and dl, 0xe0
  SUB8((u8)R.dx, 0x0);                                         // 080b cmp dl, 0
  R.cf = 1;                                                    // 080e stc
  if (!R.zf) goto L_081b;                                      // 080f jne 0x81b
  ASM_COST(4); SETL(R.cx, AND8((u8)R.cx, 0xe0));               // 0811 and cl, 0xe0
  SUB8((u8)R.cx, 0xc0);                                        // 0814 cmp cl, 0xc0
  R.cf = 1;                                                    // 0817 stc
  if (!R.zf) goto L_081b;                                      // 0818 jne 0x81b
  ASM_COST(1); R.cf = 0;                                       // 081a clc
L_081b:   ASM_COST(4); R.dx = POP();                                   // 081b pop dx
  R.cx = POP();                                                // 081c pop cx
  R.ax = POP();                                                // 081d pop ax
  R.sp += 2; goto L_ret;                                       // 081e ret
L_ret:
  return;
}

static u16 f_ad15_07c9(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_07c9();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:07D0 FUN_1000_07d0  FIX: recompiled from the machine code (asm2c)
static void a_ad15_07d0(void)
{
  R.cs = ad15_seg;
  ASM_COST(3); SETH(R.ax, 0x4);                                // 07d0 mov ah, 4
  SETL(R.ax, 0x80);                                            // 07d2 mov al, 0x80
  PUSH(0x07d7); a_ad15_078c();                                 // 07d4 call 0x78c
  ASM_COST(1); PUSH(0x07da); a_ad15_07b4();                    // 07d7 call 0x7b4
  ASM_COST(4); R.dx = (u16)(R.ax);                             // 07da mov dx, ax
  SETH(R.ax, 0x2);                                             // 07dc mov ah, 2
  SETL(R.ax, 0xff);                                            // 07de mov al, 0xff
  PUSH(0x07e3); a_ad15_078c();                                 // 07e0 call 0x78c
  ASM_COST(3); SETH(R.ax, 0x4);                                // 07e3 mov ah, 4
  SETL(R.ax, 0x21);                                            // 07e5 mov al, 0x21
  PUSH(0x07ea); a_ad15_078c();                                 // 07e7 call 0x78c
  ASM_COST(1); R.cx = (u16)(0x12c);                            // 07ea mov cx, 0x12c
L_07ed:   ASM_COST(1); PUSH(0x07f0); a_ad15_07b4();                    // 07ed call 0x7b4
  ASM_COST(3); SETL(R.ax, AND8((u8)R.ax, 0xe0));               // 07f0 and al, 0xe0
  SUB8((u8)R.ax, 0xc0);                                        // 07f2 cmp al, 0xc0
  if (R.zf) goto L_07f8;                                       // 07f4 je 0x7f8
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_07ed; }   // 07f6 loop 0x7ed
L_07f8:   ASM_COST(4); R.cx = (u16)(R.ax);                             // 07f8 mov cx, ax
  SETH(R.ax, 0x4);                                             // 07fa mov ah, 4
  SETL(R.ax, 0x60);                                            // 07fc mov al, 0x60
  PUSH(0x0801); a_ad15_078c();                                 // 07fe call 0x78c
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0801 mov ah, 4
  SETL(R.ax, 0x80);                                            // 0803 mov al, 0x80
  PUSH(0x0808); a_ad15_078c();                                 // 0805 call 0x78c
  ASM_COST(4); SETL(R.dx, AND8((u8)R.dx, 0xe0));               // 0808 and dl, 0xe0
  SUB8((u8)R.dx, 0x0);                                         // 080b cmp dl, 0
  R.cf = 1;                                                    // 080e stc
  if (!R.zf) goto L_081b;                                      // 080f jne 0x81b
  ASM_COST(4); SETL(R.cx, AND8((u8)R.cx, 0xe0));               // 0811 and cl, 0xe0
  SUB8((u8)R.cx, 0xc0);                                        // 0814 cmp cl, 0xc0
  R.cf = 1;                                                    // 0817 stc
  if (!R.zf) goto L_081b;                                      // 0818 jne 0x81b
  ASM_COST(1); R.cf = 0;                                       // 081a clc
L_081b:   ASM_COST(4); R.dx = POP();                                   // 081b pop dx
  R.cx = POP();                                                // 081c pop cx
  R.ax = POP();                                                // 081d pop ax
  R.sp += 2; goto L_ret;                                       // 081e ret
L_ret:
  return;
}

static u16 f_ad15_07d0(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_07d0();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:07D7 FUN_1000_07d7  FIX: recompiled from the machine code (asm2c)
static void a_ad15_07d7(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); PUSH(0x07da); a_ad15_07b4();                    // 07d7 call 0x7b4
  ASM_COST(4); R.dx = (u16)(R.ax);                             // 07da mov dx, ax
  SETH(R.ax, 0x2);                                             // 07dc mov ah, 2
  SETL(R.ax, 0xff);                                            // 07de mov al, 0xff
  PUSH(0x07e3); a_ad15_078c();                                 // 07e0 call 0x78c
  ASM_COST(3); SETH(R.ax, 0x4);                                // 07e3 mov ah, 4
  SETL(R.ax, 0x21);                                            // 07e5 mov al, 0x21
  PUSH(0x07ea); a_ad15_078c();                                 // 07e7 call 0x78c
  ASM_COST(1); R.cx = (u16)(0x12c);                            // 07ea mov cx, 0x12c
L_07ed:   ASM_COST(1); PUSH(0x07f0); a_ad15_07b4();                    // 07ed call 0x7b4
  ASM_COST(3); SETL(R.ax, AND8((u8)R.ax, 0xe0));               // 07f0 and al, 0xe0
  SUB8((u8)R.ax, 0xc0);                                        // 07f2 cmp al, 0xc0
  if (R.zf) goto L_07f8;                                       // 07f4 je 0x7f8
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_07ed; }   // 07f6 loop 0x7ed
L_07f8:   ASM_COST(4); R.cx = (u16)(R.ax);                             // 07f8 mov cx, ax
  SETH(R.ax, 0x4);                                             // 07fa mov ah, 4
  SETL(R.ax, 0x60);                                            // 07fc mov al, 0x60
  PUSH(0x0801); a_ad15_078c();                                 // 07fe call 0x78c
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0801 mov ah, 4
  SETL(R.ax, 0x80);                                            // 0803 mov al, 0x80
  PUSH(0x0808); a_ad15_078c();                                 // 0805 call 0x78c
  ASM_COST(4); SETL(R.dx, AND8((u8)R.dx, 0xe0));               // 0808 and dl, 0xe0
  SUB8((u8)R.dx, 0x0);                                         // 080b cmp dl, 0
  R.cf = 1;                                                    // 080e stc
  if (!R.zf) goto L_081b;                                      // 080f jne 0x81b
  ASM_COST(4); SETL(R.cx, AND8((u8)R.cx, 0xe0));               // 0811 and cl, 0xe0
  SUB8((u8)R.cx, 0xc0);                                        // 0814 cmp cl, 0xc0
  R.cf = 1;                                                    // 0817 stc
  if (!R.zf) goto L_081b;                                      // 0818 jne 0x81b
  ASM_COST(1); R.cf = 0;                                       // 081a clc
L_081b:   ASM_COST(4); R.dx = POP();                                   // 081b pop dx
  R.cx = POP();                                                // 081c pop cx
  R.ax = POP();                                                // 081d pop ax
  R.sp += 2; goto L_ret;                                       // 081e ret
L_ret:
  return;
}

static u16 f_ad15_07d7(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_07d7();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:07DA FUN_1000_07da  FIX: recompiled from the machine code (asm2c)
static void a_ad15_07da(void)
{
  R.cs = ad15_seg;
  ASM_COST(4); R.dx = (u16)(R.ax);                             // 07da mov dx, ax
  SETH(R.ax, 0x2);                                             // 07dc mov ah, 2
  SETL(R.ax, 0xff);                                            // 07de mov al, 0xff
  PUSH(0x07e3); a_ad15_078c();                                 // 07e0 call 0x78c
  ASM_COST(3); SETH(R.ax, 0x4);                                // 07e3 mov ah, 4
  SETL(R.ax, 0x21);                                            // 07e5 mov al, 0x21
  PUSH(0x07ea); a_ad15_078c();                                 // 07e7 call 0x78c
  ASM_COST(1); R.cx = (u16)(0x12c);                            // 07ea mov cx, 0x12c
L_07ed:   ASM_COST(1); PUSH(0x07f0); a_ad15_07b4();                    // 07ed call 0x7b4
  ASM_COST(3); SETL(R.ax, AND8((u8)R.ax, 0xe0));               // 07f0 and al, 0xe0
  SUB8((u8)R.ax, 0xc0);                                        // 07f2 cmp al, 0xc0
  if (R.zf) goto L_07f8;                                       // 07f4 je 0x7f8
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_07ed; }   // 07f6 loop 0x7ed
L_07f8:   ASM_COST(4); R.cx = (u16)(R.ax);                             // 07f8 mov cx, ax
  SETH(R.ax, 0x4);                                             // 07fa mov ah, 4
  SETL(R.ax, 0x60);                                            // 07fc mov al, 0x60
  PUSH(0x0801); a_ad15_078c();                                 // 07fe call 0x78c
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0801 mov ah, 4
  SETL(R.ax, 0x80);                                            // 0803 mov al, 0x80
  PUSH(0x0808); a_ad15_078c();                                 // 0805 call 0x78c
  ASM_COST(4); SETL(R.dx, AND8((u8)R.dx, 0xe0));               // 0808 and dl, 0xe0
  SUB8((u8)R.dx, 0x0);                                         // 080b cmp dl, 0
  R.cf = 1;                                                    // 080e stc
  if (!R.zf) goto L_081b;                                      // 080f jne 0x81b
  ASM_COST(4); SETL(R.cx, AND8((u8)R.cx, 0xe0));               // 0811 and cl, 0xe0
  SUB8((u8)R.cx, 0xc0);                                        // 0814 cmp cl, 0xc0
  R.cf = 1;                                                    // 0817 stc
  if (!R.zf) goto L_081b;                                      // 0818 jne 0x81b
  ASM_COST(1); R.cf = 0;                                       // 081a clc
L_081b:   ASM_COST(4); R.dx = POP();                                   // 081b pop dx
  R.cx = POP();                                                // 081c pop cx
  R.ax = POP();                                                // 081d pop ax
  R.sp += 2; goto L_ret;                                       // 081e ret
L_ret:
  return;
}

static u16 f_ad15_07da(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_07da();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:07E3 FUN_1000_07e3  FIX: recompiled from the machine code (asm2c)
static void a_ad15_07e3(void)
{
  R.cs = ad15_seg;
  ASM_COST(3); SETH(R.ax, 0x4);                                // 07e3 mov ah, 4
  SETL(R.ax, 0x21);                                            // 07e5 mov al, 0x21
  PUSH(0x07ea); a_ad15_078c();                                 // 07e7 call 0x78c
  ASM_COST(1); R.cx = (u16)(0x12c);                            // 07ea mov cx, 0x12c
L_07ed:   ASM_COST(1); PUSH(0x07f0); a_ad15_07b4();                    // 07ed call 0x7b4
  ASM_COST(3); SETL(R.ax, AND8((u8)R.ax, 0xe0));               // 07f0 and al, 0xe0
  SUB8((u8)R.ax, 0xc0);                                        // 07f2 cmp al, 0xc0
  if (R.zf) goto L_07f8;                                       // 07f4 je 0x7f8
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_07ed; }   // 07f6 loop 0x7ed
L_07f8:   ASM_COST(4); R.cx = (u16)(R.ax);                             // 07f8 mov cx, ax
  SETH(R.ax, 0x4);                                             // 07fa mov ah, 4
  SETL(R.ax, 0x60);                                            // 07fc mov al, 0x60
  PUSH(0x0801); a_ad15_078c();                                 // 07fe call 0x78c
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0801 mov ah, 4
  SETL(R.ax, 0x80);                                            // 0803 mov al, 0x80
  PUSH(0x0808); a_ad15_078c();                                 // 0805 call 0x78c
  ASM_COST(4); SETL(R.dx, AND8((u8)R.dx, 0xe0));               // 0808 and dl, 0xe0
  SUB8((u8)R.dx, 0x0);                                         // 080b cmp dl, 0
  R.cf = 1;                                                    // 080e stc
  if (!R.zf) goto L_081b;                                      // 080f jne 0x81b
  ASM_COST(4); SETL(R.cx, AND8((u8)R.cx, 0xe0));               // 0811 and cl, 0xe0
  SUB8((u8)R.cx, 0xc0);                                        // 0814 cmp cl, 0xc0
  R.cf = 1;                                                    // 0817 stc
  if (!R.zf) goto L_081b;                                      // 0818 jne 0x81b
  ASM_COST(1); R.cf = 0;                                       // 081a clc
L_081b:   ASM_COST(4); R.dx = POP();                                   // 081b pop dx
  R.cx = POP();                                                // 081c pop cx
  R.ax = POP();                                                // 081d pop ax
  R.sp += 2; goto L_ret;                                       // 081e ret
L_ret:
  return;
}

static u16 f_ad15_07e3(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_07e3();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0801 FUN_1000_0801  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0801(void)
{
  R.cs = ad15_seg;
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0801 mov ah, 4
  SETL(R.ax, 0x80);                                            // 0803 mov al, 0x80
  PUSH(0x0808); a_ad15_078c();                                 // 0805 call 0x78c
  ASM_COST(4); SETL(R.dx, AND8((u8)R.dx, 0xe0));               // 0808 and dl, 0xe0
  SUB8((u8)R.dx, 0x0);                                         // 080b cmp dl, 0
  R.cf = 1;                                                    // 080e stc
  if (!R.zf) goto L_081b;                                      // 080f jne 0x81b
  ASM_COST(4); SETL(R.cx, AND8((u8)R.cx, 0xe0));               // 0811 and cl, 0xe0
  SUB8((u8)R.cx, 0xc0);                                        // 0814 cmp cl, 0xc0
  R.cf = 1;                                                    // 0817 stc
  if (!R.zf) goto L_081b;                                      // 0818 jne 0x81b
  ASM_COST(1); R.cf = 0;                                       // 081a clc
L_081b:   ASM_COST(4); R.dx = POP();                                   // 081b pop dx
  R.cx = POP();                                                // 081c pop cx
  R.ax = POP();                                                // 081d pop ax
  R.sp += 2; goto L_ret;                                       // 081e ret
L_ret:
  return;
}

static u16 f_ad15_0801(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_0801();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0808 FUN_1000_0808  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0808(void)
{
  R.cs = ad15_seg;
  ASM_COST(4); SETL(R.dx, AND8((u8)R.dx, 0xe0));               // 0808 and dl, 0xe0
  SUB8((u8)R.dx, 0x0);                                         // 080b cmp dl, 0
  R.cf = 1;                                                    // 080e stc
  if (!R.zf) goto L_081b;                                      // 080f jne 0x81b
  ASM_COST(4); SETL(R.cx, AND8((u8)R.cx, 0xe0));               // 0811 and cl, 0xe0
  SUB8((u8)R.cx, 0xc0);                                        // 0814 cmp cl, 0xc0
  R.cf = 1;                                                    // 0817 stc
  if (!R.zf) goto L_081b;                                      // 0818 jne 0x81b
  ASM_COST(1); R.cf = 0;                                       // 081a clc
L_081b:   ASM_COST(4); R.dx = POP();                                   // 081b pop dx
  R.cx = POP();                                                // 081c pop cx
  R.ax = POP();                                                // 081d pop ax
  R.sp += 2; goto L_ret;                                       // 081e ret
L_ret:
  return;
}

static u16 f_ad15_0808(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_0808();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0967 FUN_1000_0967  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0967(void)
{
  R.cs = ad15_seg;
  ASM_COST(3); SETH(R.ax, 0x1);                                // 0967 mov ah, 1
  SETL(R.ax, 0x20);                                            // 0969 mov al, 0x20
  PUSH(0x096e); a_ad15_078c();                                 // 096b call 0x78c
  ASM_COST(3); SETH(R.ax, 0x8);                                // 096e mov ah, 8
  SETL(R.ax, 0x0);                                             // 0970 mov al, 0
  PUSH(0x0975); a_ad15_078c();                                 // 0972 call 0x78c
  ASM_COST(3); SETH(R.ax, 0xbd);                               // 0975 mov ah, 0xbd
  SETL(R.ax, 0x0);                                             // 0977 mov al, 0
  PUSH(0x097c); a_ad15_078c();                                 // 0979 call 0x78c
  ASM_COST(1); R.ax = (u16)(0x0);                              // 097c mov ax, 0
L_097f:   ASM_COST(1); PUSH(0x0982); a_ad15_04e7();                    // 097f call 0x4e7
  ASM_COST(3); R.ax = (u16)(INC16(R.ax));                      // 0982 inc ax
  SUB16(R.ax, 0x9);                                            // 0983 cmp ax, 9
  if (R.cf) { ASM_BACK(); goto L_097f; }                       // 0986 jb 0x97f
  ASM_COST(2); R.ax = (u16)(0xa);                              // 0988 mov ax, 0xa
  R.sp += 4; goto L_ret;                                       // 098b retf
L_ret:
  return;
}

static u16 f_ad15_0967(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0967();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:096E FUN_1000_096e  FIX: recompiled from the machine code (asm2c)
static void a_ad15_096e(void)
{
  R.cs = ad15_seg;
  ASM_COST(3); SETH(R.ax, 0x8);                                // 096e mov ah, 8
  SETL(R.ax, 0x0);                                             // 0970 mov al, 0
  PUSH(0x0975); a_ad15_078c();                                 // 0972 call 0x78c
  ASM_COST(3); SETH(R.ax, 0xbd);                               // 0975 mov ah, 0xbd
  SETL(R.ax, 0x0);                                             // 0977 mov al, 0
  PUSH(0x097c); a_ad15_078c();                                 // 0979 call 0x78c
  ASM_COST(1); R.ax = (u16)(0x0);                              // 097c mov ax, 0
L_097f:   ASM_COST(1); PUSH(0x0982); a_ad15_04e7();                    // 097f call 0x4e7
  ASM_COST(3); R.ax = (u16)(INC16(R.ax));                      // 0982 inc ax
  SUB16(R.ax, 0x9);                                            // 0983 cmp ax, 9
  if (R.cf) { ASM_BACK(); goto L_097f; }                       // 0986 jb 0x97f
  ASM_COST(2); R.ax = (u16)(0xa);                              // 0988 mov ax, 0xa
  R.sp += 4; goto L_ret;                                       // 098b retf
L_ret:
  return;
}

static u16 f_ad15_096e(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_096e();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0975 FUN_1000_0975  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0975(void)
{
  R.cs = ad15_seg;
  ASM_COST(3); SETH(R.ax, 0xbd);                               // 0975 mov ah, 0xbd
  SETL(R.ax, 0x0);                                             // 0977 mov al, 0
  PUSH(0x097c); a_ad15_078c();                                 // 0979 call 0x78c
  ASM_COST(1); R.ax = (u16)(0x0);                              // 097c mov ax, 0
L_097f:   ASM_COST(1); PUSH(0x0982); a_ad15_04e7();                    // 097f call 0x4e7
  ASM_COST(3); R.ax = (u16)(INC16(R.ax));                      // 0982 inc ax
  SUB16(R.ax, 0x9);                                            // 0983 cmp ax, 9
  if (R.cf) { ASM_BACK(); goto L_097f; }                       // 0986 jb 0x97f
  ASM_COST(2); R.ax = (u16)(0xa);                              // 0988 mov ax, 0xa
  R.sp += 4; goto L_ret;                                       // 098b retf
L_ret:
  return;
}

static u16 f_ad15_0975(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0975();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:097C FUN_1000_097c  FIX: recompiled from the machine code (asm2c)
static void a_ad15_097c(void)
{
  R.cs = ad15_seg;
  ASM_COST(1); R.ax = (u16)(0x0);                              // 097c mov ax, 0
L_097f:   ASM_COST(1); PUSH(0x0982); a_ad15_04e7();                    // 097f call 0x4e7
  ASM_COST(3); R.ax = (u16)(INC16(R.ax));                      // 0982 inc ax
  SUB16(R.ax, 0x9);                                            // 0983 cmp ax, 9
  if (R.cf) { ASM_BACK(); goto L_097f; }                       // 0986 jb 0x97f
  ASM_COST(2); R.ax = (u16)(0xa);                              // 0988 mov ax, 0xa
  R.sp += 4; goto L_ret;                                       // 098b retf
L_ret:
  return;
}

static u16 f_ad15_097c(void)
{
  ASM_ENTER();
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_097c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:09BB FUN_1000_09bb  FIX: recompiled from the machine code (asm2c)
static void a_ad15_09bb(void)
{
  R.cs = ad15_seg;
  ASM_COST(9); PUSH(R.ax);                                     // 09bb push ax
  PUSH(R.bx);                                                  // 09bc push bx
  PUSH(R.ds);                                                  // 09bd push ds
  PUSH(R.cs);                                                  // 09be push cs
  { u16 a_ = (u16)(0xc90); R.bx = (u16)(M16(CS, a_)); R.ds = M16(CS, (u16)(a_ + 2)); } // 09bf lds bx, ptr cs:[0xc90]
  SETL(R.ax, M8(DS, (u16)(R.bx)));                             // 09c4 mov al, byte ptr [bx]
  R.ds = POP();                                                // 09c6 pop ds
  SUB16(R.bx, M16(DS, (u16)(0xc94)));                          // 09c7 cmp bx, word ptr [0xc94]
  if (!R.cf) goto L_0a16;                                      // 09cb jae 0xa16
  ASM_COST(6); R.bx = (u16)(INC16(R.bx));                      // 09cd inc bx
  W16(DS, (u16)(0xc90), R.bx);                                 // 09ce mov word ptr [0xc90], bx
  R.bx = (u16)((u16)(0xcbd));                                  // 09d2 lea bx, [0xcbd]
  SETL(R.ax, M8(DS, (u16)(R.bx + (u8)R.ax)));                  // 09d6 xlatb
  SUB8((u8)R.ax, M8(DS, (u16)(0xc9a)));                        // 09d7 cmp al, byte ptr [0xc9a]
  if (R.zf) goto L_09fa;                                       // 09db je 0x9fa
  ASM_COST(8); W8(DS, (u16)(0xc9a), (u8)R.ax);                 // 09dd mov byte ptr [0xc9a], al
  SETH(R.ax, (u8)R.ax);                                        // 09e0 mov ah, al
  R.bx = (u16)(R.dx);                                          // 09e2 mov bx, dx
  SETL(R.ax, 0x40);                                            // 09e4 mov al, 0x40
  R.dx = (u16)(M16(DS, (u16)(0x921)));                         // 09e6 mov dx, word ptr [0x921]
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 09ea out dx, al
  PUSH(R.cx);                                                  // 09eb push cx
  R.cx = (u16)(M16(DS, (u16)(0x925)));                         // 09ec mov cx, word ptr [0x925]
L_09f0:   ASM_COST(2); SETL(R.ax, ASM_PORT_IN(R.dx));                  // 09f0 in al, dx
  if (--R.cx != 0) { ASM_BACK(); goto L_09f0; }                // 09f1 loop 0x9f0
  ASM_COST(5); R.cx = POP();                                   // 09f3 pop cx
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 09f4 mov al, ah
  R.dx = (u16)(INC16(R.dx));                                   // 09f6 inc dx
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 09f7 out dx, al
  R.dx = (u16)(R.bx);                                          // 09f8 mov dx, bx
L_09fa:   ASM_COST(2); W16(DS, (u16)(0xca4), DEC16(M16(DS, (u16)(0xca4)))); // 09fa dec word ptr [0xca4]
  if (R.zf) goto L_0a08;                                       // 09fe je 0xa08
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0a00 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0a02 out 0x20, al
  R.ds = POP();                                                // 0a04 pop ds
  R.bx = POP();                                                // 0a05 pop bx
  R.ax = POP();                                                // 0a06 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0a07 iret
L_0a08:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0xca2)));            // 0a08 mov ax, word ptr [0xca2]
  W16(DS, (u16)(0xca4), R.ax);                                 // 0a0b mov word ptr [0xca4], ax
  R.ds = POP();                                                // 0a0e pop ds
  R.bx = POP();                                                // 0a0f pop bx
  R.ax = POP();                                                // 0a10 pop ax
  { u16 o_ = M16(CS, (u16)(0xc9c)), s_ = M16(CS, (u16)((u16)(0xc9c) + 2)); asm_far_jump(s_, o_); } return; // 0a11 ljmp cs:[0xc9c]
L_0a16:   ASM_COST(4); R.ax = (u16)(M16(DS, (u16)(0xc8c)));            // 0a16 mov ax, word ptr [0xc8c]
  W16(DS, (u16)(0xc90), R.ax);                                 // 0a19 mov word ptr [0xc90], ax
  SUB8(M8(DS, (u16)(0xc98)), 0x0);                             // 0a1c cmp byte ptr [0xc98], 0
  if (R.zf) { ASM_BACK(); goto L_09fa; }                       // 0a21 je 0x9fa
  ASM_COST(2); W8(DS, (u16)(0xc98), DEC8(M8(DS, (u16)(0xc98)))); // 0a23 dec byte ptr [0xc98]
  if (!R.zf) { ASM_BACK(); goto L_09fa; }                      // 0a27 jne 0x9fa
  ASM_COST(18); R.ax = (u16)(0x1);                             // 0a29 mov ax, 1
  W16(DS, (u16)(0xca8), R.ax);                                 // 0a2c mov word ptr [0xca8], ax
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0a2f xor ax, ax
  PUSH(R.ds);                                                  // 0a31 push ds
  R.ds = (u16)(R.ax);                                          // 0a32 mov ds, ax
  R.ax = (u16)(M16(CS, (u16)(0xc9c)));                         // 0a34 mov ax, word ptr cs:[0xc9c]
  R.bx = (u16)(M16(CS, (u16)(0xc9e)));                         // 0a38 mov bx, word ptr cs:[0xc9e]
  W16(DS, (u16)(0x20), R.ax);                                  // 0a3d mov word ptr [0x20], ax
  W16(DS, (u16)(0x22), R.bx);                                  // 0a40 mov word ptr [0x22], bx
  R.ds = POP();                                                // 0a44 pop ds
  SETL(R.ax, 0x36);                                            // 0a45 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0a47 out 0x43, al
  SETL(R.ax, M8(DS, (u16)(0xca0)));                            // 0a49 mov al, byte ptr [0xca0]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0a4c out 0x40, al
  SETL(R.ax, M8(DS, (u16)(0xca1)));                            // 0a4e mov al, byte ptr [0xca1]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0a51 out 0x40, al
  R.ax = (u16)(0xb001);                                        // 0a53 mov ax, 0xb001
  PUSH(0x0a59); a_ad15_078c();                                 // 0a56 call 0x78c
  ASM_COST(2); R.ax = (u16)(0x4001);                           // 0a59 mov ax, 0x4001
  PUSH(0x0a5f); a_ad15_078c();                                 // 0a5c call 0x78c
  ASM_COST(2); R.ax = (u16)(XOR16(R.ax, R.ax));                // 0a5f xor ax, ax
  PUSH(0x0a64); a_ad15_078c();                                 // 0a61 call 0x78c
  ASM_COST(1); ASM_BACK(); goto L_09fa;                        // 0a64 jmp 0x9fa
L_ret:
  return;
}

static u16 f_ad15_09bb(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_09bb();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0A66 FUN_1000_0a66  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0a66(void)
{
  R.cs = ad15_seg;
  ASM_COST(6); PUSH(R.ax);                                     // 0a66 push ax
  PUSH(R.bx);                                                  // 0a67 push bx
  PUSH(R.ds);                                                  // 0a68 push ds
  PUSH(R.cs);                                                  // 0a69 push cs
  W8(CS, (u16)(0xcba), XOR8(M8(CS, (u16)(0xcba)), 0xff));      // 0a6a xor byte ptr cs:[0xcba], 0xff
  if (!R.zf) goto L_0a78;                                      // 0a70 jne 0xa78
  ASM_COST(3); R.ds = POP();                                   // 0a72 pop ds
  SETL(R.ax, M8(DS, (u16)(0xcbb)));                            // 0a73 mov al, byte ptr [0xcbb]
  goto L_0a96;                                                 // 0a76 jmp 0xa96
L_0a78:   ASM_COST(5); { u16 a_ = (u16)(0xc90); R.bx = (u16)(M16(CS, a_)); R.ds = M16(CS, (u16)(a_ + 2)); } // 0a78 lds bx, ptr cs:[0xc90]
  SETL(R.ax, M8(DS, (u16)(R.bx)));                             // 0a7d mov al, byte ptr [bx]
  R.ds = POP();                                                // 0a7f pop ds
  SUB16(R.bx, M16(DS, (u16)(0xc94)));                          // 0a80 cmp bx, word ptr [0xc94]
  if (!R.cf) goto L_0ae9;                                      // 0a84 jae 0xae9
  ASM_COST(7); R.bx = (u16)(INC16(R.bx));                      // 0a86 inc bx
  W16(DS, (u16)(0xc90), R.bx);                                 // 0a87 mov word ptr [0xc90], bx
  W8(DS, (u16)(0xcbb), (u8)R.ax);                              // 0a8b mov byte ptr [0xcbb], al
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 0a8e shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 0a90 shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 0a92 shr al, 1
  SETL(R.ax, SHR8((u8)R.ax, 0x1));                             // 0a94 shr al, 1
L_0a96:   ASM_COST(9); R.ax = (u16)(AND16(R.ax, 0xf));                 // 0a96 and ax, 0xf
  R.bx = (u16)((u16)(0xcaa));                                  // 0a99 lea bx, [0xcaa]
  SETL(R.ax, M8(DS, (u16)(R.bx + (u8)R.ax)));                  // 0a9d xlatb
  SETL(R.ax, ADD8((u8)R.ax, M8(DS, (u16)(0xcbc))));            // 0a9e add al, byte ptr [0xcbc]
  W8(DS, (u16)(0xcbc), (u8)R.ax);                              // 0aa2 mov byte ptr [0xcbc], al
  R.bx = (u16)((u16)(0xcbd));                                  // 0aa5 lea bx, [0xcbd]
  SETL(R.ax, M8(DS, (u16)(R.bx + (u8)R.ax)));                  // 0aa9 xlatb
  SUB8((u8)R.ax, M8(DS, (u16)(0xc9a)));                        // 0aaa cmp al, byte ptr [0xc9a]
  if (R.zf) goto L_0acd;                                       // 0aae je 0xacd
  ASM_COST(8); W8(DS, (u16)(0xc9a), (u8)R.ax);                 // 0ab0 mov byte ptr [0xc9a], al
  SETH(R.ax, (u8)R.ax);                                        // 0ab3 mov ah, al
  R.bx = (u16)(R.dx);                                          // 0ab5 mov bx, dx
  SETL(R.ax, 0x40);                                            // 0ab7 mov al, 0x40
  R.dx = (u16)(M16(DS, (u16)(0x921)));                         // 0ab9 mov dx, word ptr [0x921]
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0abd out dx, al
  PUSH(R.cx);                                                  // 0abe push cx
  R.cx = (u16)(M16(DS, (u16)(0x925)));                         // 0abf mov cx, word ptr [0x925]
L_0ac3:   ASM_COST(2); SETL(R.ax, ASM_PORT_IN(R.dx));                  // 0ac3 in al, dx
  if (--R.cx != 0) { ASM_BACK(); goto L_0ac3; }                // 0ac4 loop 0xac3
  ASM_COST(5); R.cx = POP();                                   // 0ac6 pop cx
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 0ac7 mov al, ah
  R.dx = (u16)(INC16(R.dx));                                   // 0ac9 inc dx
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0aca out dx, al
  R.dx = (u16)(R.bx);                                          // 0acb mov dx, bx
L_0acd:   ASM_COST(2); W16(DS, (u16)(0xca4), DEC16(M16(DS, (u16)(0xca4)))); // 0acd dec word ptr [0xca4]
  if (R.zf) goto L_0adb;                                       // 0ad1 je 0xadb
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0ad3 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0ad5 out 0x20, al
  R.ds = POP();                                                // 0ad7 pop ds
  R.bx = POP();                                                // 0ad8 pop bx
  R.ax = POP();                                                // 0ad9 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0ada iret
L_0adb:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0xca2)));            // 0adb mov ax, word ptr [0xca2]
  W16(DS, (u16)(0xca4), R.ax);                                 // 0ade mov word ptr [0xca4], ax
  R.ds = POP();                                                // 0ae1 pop ds
  R.bx = POP();                                                // 0ae2 pop bx
  R.ax = POP();                                                // 0ae3 pop ax
  { u16 o_ = M16(CS, (u16)(0xc9c)), s_ = M16(CS, (u16)((u16)(0xc9c) + 2)); asm_far_jump(s_, o_); } return; // 0ae4 ljmp cs:[0xc9c]
L_0ae9:   ASM_COST(12); { u16 a_ = (u16)(0xc8c); R.bx = (u16)(M16(DS, a_)); R.ds = M16(DS, (u16)(a_ + 2)); } // 0ae9 lds bx, ptr [0xc8c]
  SETL(R.ax, M8(DS, (u16)(R.bx)));                             // 0aed mov al, byte ptr [bx]
  PUSH(R.cs);                                                  // 0aef push cs
  R.ds = POP();                                                // 0af0 pop ds
  W8(DS, (u16)(0xcbb), (u8)R.ax);                              // 0af1 mov byte ptr [0xcbb], al
  W8(DS, (u16)(0xcbc), (u8)R.ax);                              // 0af4 mov byte ptr [0xcbc], al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0af7 xor al, al
  W8(DS, (u16)(0xcba), (u8)R.ax);                              // 0af9 mov byte ptr [0xcba], al
  R.bx = (u16)(INC16(R.bx));                                   // 0afc inc bx
  W16(DS, (u16)(0xc90), R.bx);                                 // 0afd mov word ptr [0xc90], bx
  SUB8(M8(DS, (u16)(0xc98)), 0x0);                             // 0b01 cmp byte ptr [0xc98], 0
  if (R.zf) { ASM_BACK(); goto L_0acd; }                       // 0b06 je 0xacd
  ASM_COST(2); W8(DS, (u16)(0xc98), DEC8(M8(DS, (u16)(0xc98)))); // 0b08 dec byte ptr [0xc98]
  if (!R.zf) { ASM_BACK(); goto L_0acd; }                      // 0b0c jne 0xacd
  ASM_COST(18); R.ax = (u16)(0x1);                             // 0b0e mov ax, 1
  W16(DS, (u16)(0xca8), R.ax);                                 // 0b11 mov word ptr [0xca8], ax
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0b14 xor ax, ax
  PUSH(R.ds);                                                  // 0b16 push ds
  R.ds = (u16)(R.ax);                                          // 0b17 mov ds, ax
  R.ax = (u16)(M16(CS, (u16)(0xc9c)));                         // 0b19 mov ax, word ptr cs:[0xc9c]
  R.bx = (u16)(M16(CS, (u16)(0xc9e)));                         // 0b1d mov bx, word ptr cs:[0xc9e]
  W16(DS, (u16)(0x20), R.ax);                                  // 0b22 mov word ptr [0x20], ax
  W16(DS, (u16)(0x22), R.bx);                                  // 0b25 mov word ptr [0x22], bx
  R.ds = POP();                                                // 0b29 pop ds
  SETL(R.ax, 0x36);                                            // 0b2a mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0b2c out 0x43, al
  SETL(R.ax, M8(DS, (u16)(0xca0)));                            // 0b2e mov al, byte ptr [0xca0]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0b31 out 0x40, al
  SETL(R.ax, M8(DS, (u16)(0xca1)));                            // 0b33 mov al, byte ptr [0xca1]
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0b36 out 0x40, al
  R.ax = (u16)(0xb001);                                        // 0b38 mov ax, 0xb001
  PUSH(0x0b3e); a_ad15_078c();                                 // 0b3b call 0x78c
  ASM_COST(2); R.ax = (u16)(0x4001);                           // 0b3e mov ax, 0x4001
  PUSH(0x0b44); a_ad15_078c();                                 // 0b41 call 0x78c
  ASM_COST(2); R.ax = (u16)(XOR16(R.ax, R.ax));                // 0b44 xor ax, ax
  PUSH(0x0b49); a_ad15_078c();                                 // 0b46 call 0x78c
  ASM_COST(1); ASM_BACK(); goto L_0acd;                        // 0b49 jmp 0xacd
L_ret:
  return;
}

static u16 f_ad15_0a66(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_0a66();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B5C FUN_1000_0b5c  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0b5c(void)
{
  R.cs = ad15_seg;
  ASM_COST(10);                                                // 0b5c cli
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0b5d xor ax, ax
  W16(DS, (u16)(0xca8), R.ax);                                 // 0b5f mov word ptr [0xca8], ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xe)));                    // 0b62 mov ax, word ptr [bp + 0xe]
  W8(DS, (u16)(0xc98), (u8)R.ax);                              // 0b65 mov byte ptr [0xc98], al
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0b68 les bx, ptr [bp + 8]
  R.ax = (u16)((u16)(R.bx + 0x32));                            // 0b6b lea ax, [bx + 0x32]
  R.cx = (u16)(R.ax);                                          // 0b6e mov cx, ax
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 0b70 cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_0b8c;                                      // 0b75 jne 0xb8c
  ASM_COST(11); PUSH(R.ax);                                    // 0b77 push ax
  PUSH(R.bx);                                                  // 0b78 push bx
  R.bx = (u16)(R.ax);                                          // 0b79 mov bx, ax
  SETL(R.ax, M8(ES, (u16)(R.bx)));                             // 0b7b mov al, byte ptr es:[bx]
  W8(DS, (u16)(0xcbb), (u8)R.ax);                              // 0b7e mov byte ptr [0xcbb], al
  W8(DS, (u16)(0xcbc), (u8)R.ax);                              // 0b81 mov byte ptr [0xcbc], al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0b84 xor al, al
  W8(DS, (u16)(0xcba), (u8)R.ax);                              // 0b86 mov byte ptr [0xcba], al
  R.bx = POP();                                                // 0b89 pop bx
  R.ax = POP();                                                // 0b8a pop ax
  R.cx = (u16)(INC16(R.cx));                                   // 0b8b inc cx
L_0b8c:   ASM_COST(7); W16(DS, (u16)(0xc8c), R.ax);                    // 0b8c mov word ptr [0xc8c], ax
  W16(DS, (u16)(0xc8e), R.es);                                 // 0b8f mov word ptr [0xc8e], es
  W16(DS, (u16)(0xc90), R.cx);                                 // 0b93 mov word ptr [0xc90], cx
  W16(DS, (u16)(0xc92), R.es);                                 // 0b97 mov word ptr [0xc92], es
  { u16 a_ = (u16)(R.bx + 0x8); R.cx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 0b9b les cx, ptr es:[bx + 8]
  SUB16(R.cx, 0x0);                                            // 0b9f cmp cx, 0
  if (!R.zf) goto L_0bae;                                      // 0ba2 jne 0xbae
  ASM_COST(6); R.ax = (u16)(0x1);                              // 0ba4 mov ax, 1
  W16(DS, (u16)(0xca8), R.ax);                                 // 0ba7 mov word ptr [0xca8], ax
  // 0baa sti 
  R.ds = POP();                                                // 0bab pop ds
  R.bp = POP();                                                // 0bac pop bp
  R.sp += 4; goto L_ret;                                       // 0bad retf
L_0bae:   ASM_COST(15); R.cx = (u16)(ADD16(R.cx, R.ax));               // 0bae add cx, ax
  R.cx = (u16)(DEC16(R.cx));                                   // 0bb0 dec cx
  W16(CS, (u16)(0xc94), R.cx);                                 // 0bb1 mov word ptr cs:[0xc94], cx
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0bb6 xor ax, ax
  R.es = (u16)(R.ax);                                          // 0bb8 mov es, ax
  R.ax = (u16)(M16(ES, (u16)(0x20)));                          // 0bba mov ax, word ptr es:[0x20]
  R.dx = (u16)(M16(ES, (u16)(0x22)));                          // 0bbe mov dx, word ptr es:[0x22]
  W16(DS, (u16)(0xc9c), R.ax);                                 // 0bc3 mov word ptr [0xc9c], ax
  W16(DS, (u16)(0xc9e), R.dx);                                 // 0bc6 mov word ptr [0xc9e], dx
  PUSH(R.es);                                                  // 0bca push es
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0bcb les bx, ptr [bp + 8]
  R.ax = (u16)(0x9bb);                                         // 0bce mov ax, 0x9bb
  R.dx = (u16)(R.cs);                                          // 0bd1 mov dx, cs
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 0bd3 cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_0bdf;                                      // 0bd8 jne 0xbdf
  ASM_COST(2); R.ax = (u16)(0xa66);                            // 0bda mov ax, 0xa66
  R.dx = (u16)(R.cs);                                          // 0bdd mov dx, cs
L_0bdf:   ASM_COST(5); R.es = POP();                                   // 0bdf pop es
  W16(ES, (u16)(0x20), R.ax);                                  // 0be0 mov word ptr es:[0x20], ax
  W16(ES, (u16)(0x22), R.dx);                                  // 0be4 mov word ptr es:[0x22], dx
  R.ax = (u16)(0x120);                                         // 0be9 mov ax, 0x120
  PUSH(0x0bef); a_ad15_078c();                                 // 0bec call 0x78c
  ASM_COST(2); R.ax = (u16)(0x2021);                           // 0bef mov ax, 0x2021
  PUSH(0x0bf5); a_ad15_078c();                                 // 0bf2 call 0x78c
  ASM_COST(2); R.ax = (u16)(0x60f0);                           // 0bf5 mov ax, 0x60f0
  PUSH(0x0bfb); a_ad15_078c();                                 // 0bf8 call 0x78c
  ASM_COST(2); R.ax = (u16)(0x80f0);                           // 0bfb mov ax, 0x80f0
  PUSH(0x0c01); a_ad15_078c();                                 // 0bfe call 0x78c
  ASM_COST(2); R.ax = (u16)(0xc001);                           // 0c01 mov ax, 0xc001
  PUSH(0x0c07); a_ad15_078c();                                 // 0c04 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xe000);                           // 0c07 mov ax, 0xe000
  PUSH(0x0c0d); a_ad15_078c();                                 // 0c0a call 0x78c
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 0c0d mov ax, 0x433f
  PUSH(0x0c13); a_ad15_078c();                                 // 0c10 call 0x78c
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 0c13 mov ax, 0xb001
  // 0c16 cli 
  R.ax = (u16)(0xa08f);                                        // 0c17 mov ax, 0xa08f
  PUSH(0x0c1d); a_ad15_078c();                                 // 0c1a call 0x78c
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 0c1d mov ax, 0xb02e
  PUSH(0x0c23); a_ad15_078c();                                 // 0c20 call 0x78c
  ASM_COST(5); SETL(R.ax, 0x36);                               // 0c23 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c25 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0c27 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c29 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c2b out 0x40, al
L_0c2d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 0c2d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c2f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c31 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 0c33 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c35 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 0c37 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 0c39 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0c2d; }      // 0c3d jg 0xc2d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 0c3f mov ax, 0xb020
  PUSH(0x0c45); a_ad15_078c();                                 // 0c42 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 0c45 mov ax, 0xa000
  PUSH(0x0c4b); a_ad15_078c();                                 // 0c48 call 0x78c
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 0c4b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c4e cmp bx, 0x64
  if (!R.cf) goto L_0c58;                                      // 0c51 jae 0xc58
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c53 mov bx, 0x64
  goto L_0c61;                                                 // 0c56 jmp 0xc61
L_0c58:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c58 cmp bx, 0x4e20
  if (R.cf) goto L_0c61;                                       // 0c5c jb 0xc61
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c5e mov bx, 0x4e20
L_0c61:   ASM_COST(20); R.dx = (u16)(0x12);                            // 0c61 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c64 mov ax, 0x34dc
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  R.bx = (u16)(R.ax);                                          // 0c69 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0xca0)));                         // 0c6b mov ax, word ptr [0xca0]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c6e xor dx, dx
  DIV16(R.bx, 0x0c70);                                         // 0c70 div bx
  W16(DS, (u16)(0xca2), R.ax);                                 // 0c72 mov word ptr [0xca2], ax
  W16(DS, (u16)(0xca4), R.ax);                                 // 0c75 mov word ptr [0xca4], ax
  W16(DS, (u16)(0xc96), R.bx);                                 // 0c78 mov word ptr [0xc96], bx
  SETL(R.ax, 0x36);                                            // 0c7c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c7e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c80 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c82 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c84 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c86 out 0x40, al
  // 0c88 sti 
  R.ds = POP();                                                // 0c89 pop ds
  R.bp = POP();                                                // 0c8a pop bp
  R.sp += 4; goto L_ret;                                       // 0c8b retf
L_ret:
  return;
}

static u16 f_ad15_0b5c(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4)
{
  ASM_ENTER();
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0b5c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0BEF FUN_1000_0bef  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0bef(void)
{
  R.cs = ad15_seg;
  ASM_COST(2); R.ax = (u16)(0x2021);                           // 0bef mov ax, 0x2021
  PUSH(0x0bf5); a_ad15_078c();                                 // 0bf2 call 0x78c
  ASM_COST(2); R.ax = (u16)(0x60f0);                           // 0bf5 mov ax, 0x60f0
  PUSH(0x0bfb); a_ad15_078c();                                 // 0bf8 call 0x78c
  ASM_COST(2); R.ax = (u16)(0x80f0);                           // 0bfb mov ax, 0x80f0
  PUSH(0x0c01); a_ad15_078c();                                 // 0bfe call 0x78c
  ASM_COST(2); R.ax = (u16)(0xc001);                           // 0c01 mov ax, 0xc001
  PUSH(0x0c07); a_ad15_078c();                                 // 0c04 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xe000);                           // 0c07 mov ax, 0xe000
  PUSH(0x0c0d); a_ad15_078c();                                 // 0c0a call 0x78c
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 0c0d mov ax, 0x433f
  PUSH(0x0c13); a_ad15_078c();                                 // 0c10 call 0x78c
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 0c13 mov ax, 0xb001
  // 0c16 cli 
  R.ax = (u16)(0xa08f);                                        // 0c17 mov ax, 0xa08f
  PUSH(0x0c1d); a_ad15_078c();                                 // 0c1a call 0x78c
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 0c1d mov ax, 0xb02e
  PUSH(0x0c23); a_ad15_078c();                                 // 0c20 call 0x78c
  ASM_COST(5); SETL(R.ax, 0x36);                               // 0c23 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c25 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0c27 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c29 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c2b out 0x40, al
L_0c2d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 0c2d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c2f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c31 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 0c33 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c35 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 0c37 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 0c39 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0c2d; }      // 0c3d jg 0xc2d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 0c3f mov ax, 0xb020
  PUSH(0x0c45); a_ad15_078c();                                 // 0c42 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 0c45 mov ax, 0xa000
  PUSH(0x0c4b); a_ad15_078c();                                 // 0c48 call 0x78c
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 0c4b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c4e cmp bx, 0x64
  if (!R.cf) goto L_0c58;                                      // 0c51 jae 0xc58
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c53 mov bx, 0x64
  goto L_0c61;                                                 // 0c56 jmp 0xc61
L_0c58:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c58 cmp bx, 0x4e20
  if (R.cf) goto L_0c61;                                       // 0c5c jb 0xc61
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c5e mov bx, 0x4e20
L_0c61:   ASM_COST(20); R.dx = (u16)(0x12);                            // 0c61 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c64 mov ax, 0x34dc
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  R.bx = (u16)(R.ax);                                          // 0c69 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0xca0)));                         // 0c6b mov ax, word ptr [0xca0]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c6e xor dx, dx
  DIV16(R.bx, 0x0c70);                                         // 0c70 div bx
  W16(DS, (u16)(0xca2), R.ax);                                 // 0c72 mov word ptr [0xca2], ax
  W16(DS, (u16)(0xca4), R.ax);                                 // 0c75 mov word ptr [0xca4], ax
  W16(DS, (u16)(0xc96), R.bx);                                 // 0c78 mov word ptr [0xc96], bx
  SETL(R.ax, 0x36);                                            // 0c7c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c7e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c80 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c82 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c84 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c86 out 0x40, al
  // 0c88 sti 
  R.ds = POP();                                                // 0c89 pop ds
  R.bp = POP();                                                // 0c8a pop bp
  R.sp += 4; goto L_ret;                                       // 0c8b retf
L_ret:
  return;
}

static u16 f_ad15_0bef(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0bef();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0BF5 FUN_1000_0bf5  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0bf5(void)
{
  R.cs = ad15_seg;
  ASM_COST(2); R.ax = (u16)(0x60f0);                           // 0bf5 mov ax, 0x60f0
  PUSH(0x0bfb); a_ad15_078c();                                 // 0bf8 call 0x78c
  ASM_COST(2); R.ax = (u16)(0x80f0);                           // 0bfb mov ax, 0x80f0
  PUSH(0x0c01); a_ad15_078c();                                 // 0bfe call 0x78c
  ASM_COST(2); R.ax = (u16)(0xc001);                           // 0c01 mov ax, 0xc001
  PUSH(0x0c07); a_ad15_078c();                                 // 0c04 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xe000);                           // 0c07 mov ax, 0xe000
  PUSH(0x0c0d); a_ad15_078c();                                 // 0c0a call 0x78c
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 0c0d mov ax, 0x433f
  PUSH(0x0c13); a_ad15_078c();                                 // 0c10 call 0x78c
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 0c13 mov ax, 0xb001
  // 0c16 cli 
  R.ax = (u16)(0xa08f);                                        // 0c17 mov ax, 0xa08f
  PUSH(0x0c1d); a_ad15_078c();                                 // 0c1a call 0x78c
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 0c1d mov ax, 0xb02e
  PUSH(0x0c23); a_ad15_078c();                                 // 0c20 call 0x78c
  ASM_COST(5); SETL(R.ax, 0x36);                               // 0c23 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c25 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0c27 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c29 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c2b out 0x40, al
L_0c2d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 0c2d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c2f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c31 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 0c33 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c35 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 0c37 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 0c39 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0c2d; }      // 0c3d jg 0xc2d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 0c3f mov ax, 0xb020
  PUSH(0x0c45); a_ad15_078c();                                 // 0c42 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 0c45 mov ax, 0xa000
  PUSH(0x0c4b); a_ad15_078c();                                 // 0c48 call 0x78c
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 0c4b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c4e cmp bx, 0x64
  if (!R.cf) goto L_0c58;                                      // 0c51 jae 0xc58
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c53 mov bx, 0x64
  goto L_0c61;                                                 // 0c56 jmp 0xc61
L_0c58:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c58 cmp bx, 0x4e20
  if (R.cf) goto L_0c61;                                       // 0c5c jb 0xc61
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c5e mov bx, 0x4e20
L_0c61:   ASM_COST(20); R.dx = (u16)(0x12);                            // 0c61 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c64 mov ax, 0x34dc
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  R.bx = (u16)(R.ax);                                          // 0c69 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0xca0)));                         // 0c6b mov ax, word ptr [0xca0]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c6e xor dx, dx
  DIV16(R.bx, 0x0c70);                                         // 0c70 div bx
  W16(DS, (u16)(0xca2), R.ax);                                 // 0c72 mov word ptr [0xca2], ax
  W16(DS, (u16)(0xca4), R.ax);                                 // 0c75 mov word ptr [0xca4], ax
  W16(DS, (u16)(0xc96), R.bx);                                 // 0c78 mov word ptr [0xc96], bx
  SETL(R.ax, 0x36);                                            // 0c7c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c7e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c80 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c82 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c84 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c86 out 0x40, al
  // 0c88 sti 
  R.ds = POP();                                                // 0c89 pop ds
  R.bp = POP();                                                // 0c8a pop bp
  R.sp += 4; goto L_ret;                                       // 0c8b retf
L_ret:
  return;
}

static u16 f_ad15_0bf5(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0bf5();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0BFB FUN_1000_0bfb  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0bfb(void)
{
  R.cs = ad15_seg;
  ASM_COST(2); R.ax = (u16)(0x80f0);                           // 0bfb mov ax, 0x80f0
  PUSH(0x0c01); a_ad15_078c();                                 // 0bfe call 0x78c
  ASM_COST(2); R.ax = (u16)(0xc001);                           // 0c01 mov ax, 0xc001
  PUSH(0x0c07); a_ad15_078c();                                 // 0c04 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xe000);                           // 0c07 mov ax, 0xe000
  PUSH(0x0c0d); a_ad15_078c();                                 // 0c0a call 0x78c
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 0c0d mov ax, 0x433f
  PUSH(0x0c13); a_ad15_078c();                                 // 0c10 call 0x78c
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 0c13 mov ax, 0xb001
  // 0c16 cli 
  R.ax = (u16)(0xa08f);                                        // 0c17 mov ax, 0xa08f
  PUSH(0x0c1d); a_ad15_078c();                                 // 0c1a call 0x78c
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 0c1d mov ax, 0xb02e
  PUSH(0x0c23); a_ad15_078c();                                 // 0c20 call 0x78c
  ASM_COST(5); SETL(R.ax, 0x36);                               // 0c23 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c25 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0c27 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c29 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c2b out 0x40, al
L_0c2d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 0c2d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c2f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c31 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 0c33 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c35 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 0c37 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 0c39 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0c2d; }      // 0c3d jg 0xc2d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 0c3f mov ax, 0xb020
  PUSH(0x0c45); a_ad15_078c();                                 // 0c42 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 0c45 mov ax, 0xa000
  PUSH(0x0c4b); a_ad15_078c();                                 // 0c48 call 0x78c
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 0c4b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c4e cmp bx, 0x64
  if (!R.cf) goto L_0c58;                                      // 0c51 jae 0xc58
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c53 mov bx, 0x64
  goto L_0c61;                                                 // 0c56 jmp 0xc61
L_0c58:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c58 cmp bx, 0x4e20
  if (R.cf) goto L_0c61;                                       // 0c5c jb 0xc61
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c5e mov bx, 0x4e20
L_0c61:   ASM_COST(20); R.dx = (u16)(0x12);                            // 0c61 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c64 mov ax, 0x34dc
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  R.bx = (u16)(R.ax);                                          // 0c69 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0xca0)));                         // 0c6b mov ax, word ptr [0xca0]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c6e xor dx, dx
  DIV16(R.bx, 0x0c70);                                         // 0c70 div bx
  W16(DS, (u16)(0xca2), R.ax);                                 // 0c72 mov word ptr [0xca2], ax
  W16(DS, (u16)(0xca4), R.ax);                                 // 0c75 mov word ptr [0xca4], ax
  W16(DS, (u16)(0xc96), R.bx);                                 // 0c78 mov word ptr [0xc96], bx
  SETL(R.ax, 0x36);                                            // 0c7c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c7e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c80 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c82 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c84 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c86 out 0x40, al
  // 0c88 sti 
  R.ds = POP();                                                // 0c89 pop ds
  R.bp = POP();                                                // 0c8a pop bp
  R.sp += 4; goto L_ret;                                       // 0c8b retf
L_ret:
  return;
}

static u16 f_ad15_0bfb(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0bfb();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0C01 FUN_1000_0c01  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0c01(void)
{
  R.cs = ad15_seg;
  ASM_COST(2); R.ax = (u16)(0xc001);                           // 0c01 mov ax, 0xc001
  PUSH(0x0c07); a_ad15_078c();                                 // 0c04 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xe000);                           // 0c07 mov ax, 0xe000
  PUSH(0x0c0d); a_ad15_078c();                                 // 0c0a call 0x78c
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 0c0d mov ax, 0x433f
  PUSH(0x0c13); a_ad15_078c();                                 // 0c10 call 0x78c
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 0c13 mov ax, 0xb001
  // 0c16 cli 
  R.ax = (u16)(0xa08f);                                        // 0c17 mov ax, 0xa08f
  PUSH(0x0c1d); a_ad15_078c();                                 // 0c1a call 0x78c
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 0c1d mov ax, 0xb02e
  PUSH(0x0c23); a_ad15_078c();                                 // 0c20 call 0x78c
  ASM_COST(5); SETL(R.ax, 0x36);                               // 0c23 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c25 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0c27 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c29 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c2b out 0x40, al
L_0c2d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 0c2d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c2f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c31 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 0c33 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c35 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 0c37 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 0c39 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0c2d; }      // 0c3d jg 0xc2d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 0c3f mov ax, 0xb020
  PUSH(0x0c45); a_ad15_078c();                                 // 0c42 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 0c45 mov ax, 0xa000
  PUSH(0x0c4b); a_ad15_078c();                                 // 0c48 call 0x78c
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 0c4b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c4e cmp bx, 0x64
  if (!R.cf) goto L_0c58;                                      // 0c51 jae 0xc58
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c53 mov bx, 0x64
  goto L_0c61;                                                 // 0c56 jmp 0xc61
L_0c58:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c58 cmp bx, 0x4e20
  if (R.cf) goto L_0c61;                                       // 0c5c jb 0xc61
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c5e mov bx, 0x4e20
L_0c61:   ASM_COST(20); R.dx = (u16)(0x12);                            // 0c61 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c64 mov ax, 0x34dc
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  R.bx = (u16)(R.ax);                                          // 0c69 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0xca0)));                         // 0c6b mov ax, word ptr [0xca0]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c6e xor dx, dx
  DIV16(R.bx, 0x0c70);                                         // 0c70 div bx
  W16(DS, (u16)(0xca2), R.ax);                                 // 0c72 mov word ptr [0xca2], ax
  W16(DS, (u16)(0xca4), R.ax);                                 // 0c75 mov word ptr [0xca4], ax
  W16(DS, (u16)(0xc96), R.bx);                                 // 0c78 mov word ptr [0xc96], bx
  SETL(R.ax, 0x36);                                            // 0c7c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c7e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c80 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c82 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c84 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c86 out 0x40, al
  // 0c88 sti 
  R.ds = POP();                                                // 0c89 pop ds
  R.bp = POP();                                                // 0c8a pop bp
  R.sp += 4; goto L_ret;                                       // 0c8b retf
L_ret:
  return;
}

static u16 f_ad15_0c01(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0c01();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0C07 FUN_1000_0c07  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0c07(void)
{
  R.cs = ad15_seg;
  ASM_COST(2); R.ax = (u16)(0xe000);                           // 0c07 mov ax, 0xe000
  PUSH(0x0c0d); a_ad15_078c();                                 // 0c0a call 0x78c
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 0c0d mov ax, 0x433f
  PUSH(0x0c13); a_ad15_078c();                                 // 0c10 call 0x78c
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 0c13 mov ax, 0xb001
  // 0c16 cli 
  R.ax = (u16)(0xa08f);                                        // 0c17 mov ax, 0xa08f
  PUSH(0x0c1d); a_ad15_078c();                                 // 0c1a call 0x78c
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 0c1d mov ax, 0xb02e
  PUSH(0x0c23); a_ad15_078c();                                 // 0c20 call 0x78c
  ASM_COST(5); SETL(R.ax, 0x36);                               // 0c23 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c25 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0c27 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c29 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c2b out 0x40, al
L_0c2d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 0c2d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c2f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c31 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 0c33 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c35 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 0c37 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 0c39 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0c2d; }      // 0c3d jg 0xc2d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 0c3f mov ax, 0xb020
  PUSH(0x0c45); a_ad15_078c();                                 // 0c42 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 0c45 mov ax, 0xa000
  PUSH(0x0c4b); a_ad15_078c();                                 // 0c48 call 0x78c
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 0c4b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c4e cmp bx, 0x64
  if (!R.cf) goto L_0c58;                                      // 0c51 jae 0xc58
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c53 mov bx, 0x64
  goto L_0c61;                                                 // 0c56 jmp 0xc61
L_0c58:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c58 cmp bx, 0x4e20
  if (R.cf) goto L_0c61;                                       // 0c5c jb 0xc61
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c5e mov bx, 0x4e20
L_0c61:   ASM_COST(20); R.dx = (u16)(0x12);                            // 0c61 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c64 mov ax, 0x34dc
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  R.bx = (u16)(R.ax);                                          // 0c69 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0xca0)));                         // 0c6b mov ax, word ptr [0xca0]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c6e xor dx, dx
  DIV16(R.bx, 0x0c70);                                         // 0c70 div bx
  W16(DS, (u16)(0xca2), R.ax);                                 // 0c72 mov word ptr [0xca2], ax
  W16(DS, (u16)(0xca4), R.ax);                                 // 0c75 mov word ptr [0xca4], ax
  W16(DS, (u16)(0xc96), R.bx);                                 // 0c78 mov word ptr [0xc96], bx
  SETL(R.ax, 0x36);                                            // 0c7c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c7e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c80 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c82 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c84 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c86 out 0x40, al
  // 0c88 sti 
  R.ds = POP();                                                // 0c89 pop ds
  R.bp = POP();                                                // 0c8a pop bp
  R.sp += 4; goto L_ret;                                       // 0c8b retf
L_ret:
  return;
}

static u16 f_ad15_0c07(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0c07();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0C0D FUN_1000_0c0d  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0c0d(void)
{
  R.cs = ad15_seg;
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 0c0d mov ax, 0x433f
  PUSH(0x0c13); a_ad15_078c();                                 // 0c10 call 0x78c
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 0c13 mov ax, 0xb001
  // 0c16 cli 
  R.ax = (u16)(0xa08f);                                        // 0c17 mov ax, 0xa08f
  PUSH(0x0c1d); a_ad15_078c();                                 // 0c1a call 0x78c
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 0c1d mov ax, 0xb02e
  PUSH(0x0c23); a_ad15_078c();                                 // 0c20 call 0x78c
  ASM_COST(5); SETL(R.ax, 0x36);                               // 0c23 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c25 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0c27 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c29 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c2b out 0x40, al
L_0c2d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 0c2d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c2f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c31 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 0c33 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c35 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 0c37 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 0c39 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0c2d; }      // 0c3d jg 0xc2d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 0c3f mov ax, 0xb020
  PUSH(0x0c45); a_ad15_078c();                                 // 0c42 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 0c45 mov ax, 0xa000
  PUSH(0x0c4b); a_ad15_078c();                                 // 0c48 call 0x78c
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 0c4b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c4e cmp bx, 0x64
  if (!R.cf) goto L_0c58;                                      // 0c51 jae 0xc58
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c53 mov bx, 0x64
  goto L_0c61;                                                 // 0c56 jmp 0xc61
L_0c58:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c58 cmp bx, 0x4e20
  if (R.cf) goto L_0c61;                                       // 0c5c jb 0xc61
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c5e mov bx, 0x4e20
L_0c61:   ASM_COST(20); R.dx = (u16)(0x12);                            // 0c61 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c64 mov ax, 0x34dc
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  R.bx = (u16)(R.ax);                                          // 0c69 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0xca0)));                         // 0c6b mov ax, word ptr [0xca0]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c6e xor dx, dx
  DIV16(R.bx, 0x0c70);                                         // 0c70 div bx
  W16(DS, (u16)(0xca2), R.ax);                                 // 0c72 mov word ptr [0xca2], ax
  W16(DS, (u16)(0xca4), R.ax);                                 // 0c75 mov word ptr [0xca4], ax
  W16(DS, (u16)(0xc96), R.bx);                                 // 0c78 mov word ptr [0xc96], bx
  SETL(R.ax, 0x36);                                            // 0c7c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c7e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c80 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c82 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c84 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c86 out 0x40, al
  // 0c88 sti 
  R.ds = POP();                                                // 0c89 pop ds
  R.bp = POP();                                                // 0c8a pop bp
  R.sp += 4; goto L_ret;                                       // 0c8b retf
L_ret:
  return;
}

static u16 f_ad15_0c0d(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0c0d();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0C13 FUN_1000_0c13  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0c13(void)
{
  R.cs = ad15_seg;
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 0c13 mov ax, 0xb001
  // 0c16 cli 
  R.ax = (u16)(0xa08f);                                        // 0c17 mov ax, 0xa08f
  PUSH(0x0c1d); a_ad15_078c();                                 // 0c1a call 0x78c
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 0c1d mov ax, 0xb02e
  PUSH(0x0c23); a_ad15_078c();                                 // 0c20 call 0x78c
  ASM_COST(5); SETL(R.ax, 0x36);                               // 0c23 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c25 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0c27 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c29 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c2b out 0x40, al
L_0c2d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 0c2d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c2f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c31 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 0c33 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c35 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 0c37 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 0c39 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0c2d; }      // 0c3d jg 0xc2d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 0c3f mov ax, 0xb020
  PUSH(0x0c45); a_ad15_078c();                                 // 0c42 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 0c45 mov ax, 0xa000
  PUSH(0x0c4b); a_ad15_078c();                                 // 0c48 call 0x78c
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 0c4b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c4e cmp bx, 0x64
  if (!R.cf) goto L_0c58;                                      // 0c51 jae 0xc58
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c53 mov bx, 0x64
  goto L_0c61;                                                 // 0c56 jmp 0xc61
L_0c58:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c58 cmp bx, 0x4e20
  if (R.cf) goto L_0c61;                                       // 0c5c jb 0xc61
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c5e mov bx, 0x4e20
L_0c61:   ASM_COST(20); R.dx = (u16)(0x12);                            // 0c61 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c64 mov ax, 0x34dc
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  R.bx = (u16)(R.ax);                                          // 0c69 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0xca0)));                         // 0c6b mov ax, word ptr [0xca0]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c6e xor dx, dx
  DIV16(R.bx, 0x0c70);                                         // 0c70 div bx
  W16(DS, (u16)(0xca2), R.ax);                                 // 0c72 mov word ptr [0xca2], ax
  W16(DS, (u16)(0xca4), R.ax);                                 // 0c75 mov word ptr [0xca4], ax
  W16(DS, (u16)(0xc96), R.bx);                                 // 0c78 mov word ptr [0xc96], bx
  SETL(R.ax, 0x36);                                            // 0c7c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c7e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c80 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c82 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c84 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c86 out 0x40, al
  // 0c88 sti 
  R.ds = POP();                                                // 0c89 pop ds
  R.bp = POP();                                                // 0c8a pop bp
  R.sp += 4; goto L_ret;                                       // 0c8b retf
L_ret:
  return;
}

static u16 f_ad15_0c13(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0c13();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0C1D FUN_1000_0c1d  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0c1d(void)
{
  R.cs = ad15_seg;
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 0c1d mov ax, 0xb02e
  PUSH(0x0c23); a_ad15_078c();                                 // 0c20 call 0x78c
  ASM_COST(5); SETL(R.ax, 0x36);                               // 0c23 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c25 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0c27 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c29 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c2b out 0x40, al
L_0c2d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 0c2d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c2f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c31 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 0c33 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c35 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 0c37 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 0c39 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0c2d; }      // 0c3d jg 0xc2d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 0c3f mov ax, 0xb020
  PUSH(0x0c45); a_ad15_078c();                                 // 0c42 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 0c45 mov ax, 0xa000
  PUSH(0x0c4b); a_ad15_078c();                                 // 0c48 call 0x78c
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 0c4b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c4e cmp bx, 0x64
  if (!R.cf) goto L_0c58;                                      // 0c51 jae 0xc58
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c53 mov bx, 0x64
  goto L_0c61;                                                 // 0c56 jmp 0xc61
L_0c58:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c58 cmp bx, 0x4e20
  if (R.cf) goto L_0c61;                                       // 0c5c jb 0xc61
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c5e mov bx, 0x4e20
L_0c61:   ASM_COST(20); R.dx = (u16)(0x12);                            // 0c61 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c64 mov ax, 0x34dc
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  R.bx = (u16)(R.ax);                                          // 0c69 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0xca0)));                         // 0c6b mov ax, word ptr [0xca0]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c6e xor dx, dx
  DIV16(R.bx, 0x0c70);                                         // 0c70 div bx
  W16(DS, (u16)(0xca2), R.ax);                                 // 0c72 mov word ptr [0xca2], ax
  W16(DS, (u16)(0xca4), R.ax);                                 // 0c75 mov word ptr [0xca4], ax
  W16(DS, (u16)(0xc96), R.bx);                                 // 0c78 mov word ptr [0xc96], bx
  SETL(R.ax, 0x36);                                            // 0c7c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c7e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c80 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c82 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c84 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c86 out 0x40, al
  // 0c88 sti 
  R.ds = POP();                                                // 0c89 pop ds
  R.bp = POP();                                                // 0c8a pop bp
  R.sp += 4; goto L_ret;                                       // 0c8b retf
L_ret:
  return;
}

static u16 f_ad15_0c1d(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0c1d();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0C23 FUN_1000_0c23  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0c23(void)
{
  R.cs = ad15_seg;
  ASM_COST(5); SETL(R.ax, 0x36);                               // 0c23 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c25 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0c27 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c29 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c2b out 0x40, al
L_0c2d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 0c2d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c2f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c31 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 0c33 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c35 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 0c37 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 0c39 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0c2d; }      // 0c3d jg 0xc2d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 0c3f mov ax, 0xb020
  PUSH(0x0c45); a_ad15_078c();                                 // 0c42 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 0c45 mov ax, 0xa000
  PUSH(0x0c4b); a_ad15_078c();                                 // 0c48 call 0x78c
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 0c4b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c4e cmp bx, 0x64
  if (!R.cf) goto L_0c58;                                      // 0c51 jae 0xc58
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c53 mov bx, 0x64
  goto L_0c61;                                                 // 0c56 jmp 0xc61
L_0c58:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c58 cmp bx, 0x4e20
  if (R.cf) goto L_0c61;                                       // 0c5c jb 0xc61
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c5e mov bx, 0x4e20
L_0c61:   ASM_COST(20); R.dx = (u16)(0x12);                            // 0c61 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c64 mov ax, 0x34dc
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  R.bx = (u16)(R.ax);                                          // 0c69 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0xca0)));                         // 0c6b mov ax, word ptr [0xca0]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c6e xor dx, dx
  DIV16(R.bx, 0x0c70);                                         // 0c70 div bx
  W16(DS, (u16)(0xca2), R.ax);                                 // 0c72 mov word ptr [0xca2], ax
  W16(DS, (u16)(0xca4), R.ax);                                 // 0c75 mov word ptr [0xca4], ax
  W16(DS, (u16)(0xc96), R.bx);                                 // 0c78 mov word ptr [0xc96], bx
  SETL(R.ax, 0x36);                                            // 0c7c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c7e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c80 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c82 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c84 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c86 out 0x40, al
  // 0c88 sti 
  R.ds = POP();                                                // 0c89 pop ds
  R.bp = POP();                                                // 0c8a pop bp
  R.sp += 4; goto L_ret;                                       // 0c8b retf
L_ret:
  return;
}

static u16 f_ad15_0c23(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0c23();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0C45 FUN_1000_0c45  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0c45(void)
{
  R.cs = ad15_seg;
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 0c45 mov ax, 0xa000
  PUSH(0x0c4b); a_ad15_078c();                                 // 0c48 call 0x78c
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 0c4b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c4e cmp bx, 0x64
  if (!R.cf) goto L_0c58;                                      // 0c51 jae 0xc58
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c53 mov bx, 0x64
  goto L_0c61;                                                 // 0c56 jmp 0xc61
L_0c58:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c58 cmp bx, 0x4e20
  if (R.cf) goto L_0c61;                                       // 0c5c jb 0xc61
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c5e mov bx, 0x4e20
L_0c61:   ASM_COST(20); R.dx = (u16)(0x12);                            // 0c61 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c64 mov ax, 0x34dc
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  R.bx = (u16)(R.ax);                                          // 0c69 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0xca0)));                         // 0c6b mov ax, word ptr [0xca0]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c6e xor dx, dx
  DIV16(R.bx, 0x0c70);                                         // 0c70 div bx
  W16(DS, (u16)(0xca2), R.ax);                                 // 0c72 mov word ptr [0xca2], ax
  W16(DS, (u16)(0xca4), R.ax);                                 // 0c75 mov word ptr [0xca4], ax
  W16(DS, (u16)(0xc96), R.bx);                                 // 0c78 mov word ptr [0xc96], bx
  SETL(R.ax, 0x36);                                            // 0c7c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c7e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c80 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c82 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c84 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c86 out 0x40, al
  // 0c88 sti 
  R.ds = POP();                                                // 0c89 pop ds
  R.bp = POP();                                                // 0c8a pop bp
  R.sp += 4; goto L_ret;                                       // 0c8b retf
L_ret:
  return;
}

static u16 f_ad15_0c45(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0c45();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0C4B FUN_1000_0c4b  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0c4b(void)
{
  R.cs = ad15_seg;
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 0c4b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c4e cmp bx, 0x64
  if (!R.cf) goto L_0c58;                                      // 0c51 jae 0xc58
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c53 mov bx, 0x64
  goto L_0c61;                                                 // 0c56 jmp 0xc61
L_0c58:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c58 cmp bx, 0x4e20
  if (R.cf) goto L_0c61;                                       // 0c5c jb 0xc61
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c5e mov bx, 0x4e20
L_0c61:   ASM_COST(20); R.dx = (u16)(0x12);                            // 0c61 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c64 mov ax, 0x34dc
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  R.bx = (u16)(R.ax);                                          // 0c69 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0xca0)));                         // 0c6b mov ax, word ptr [0xca0]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c6e xor dx, dx
  DIV16(R.bx, 0x0c70);                                         // 0c70 div bx
  W16(DS, (u16)(0xca2), R.ax);                                 // 0c72 mov word ptr [0xca2], ax
  W16(DS, (u16)(0xca4), R.ax);                                 // 0c75 mov word ptr [0xca4], ax
  W16(DS, (u16)(0xc96), R.bx);                                 // 0c78 mov word ptr [0xc96], bx
  SETL(R.ax, 0x36);                                            // 0c7c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c7e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c80 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c82 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c84 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c86 out 0x40, al
  // 0c88 sti 
  R.ds = POP();                                                // 0c89 pop ds
  R.bp = POP();                                                // 0c8a pop bp
  R.sp += 4; goto L_ret;                                       // 0c8b retf
L_ret:
  return;
}

static u16 f_ad15_0c4b(u16 p0, u16 p1, u16 p2, u16 p3)
{
  ASM_ENTER();
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0c4b();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0A59 FUN_1000_0a59  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0a59(void)
{
  R.cs = ad15_seg;
  goto L_0a59;
L_09fa:   ASM_COST(2); W16(DS, (u16)(0xca4), DEC16(M16(DS, (u16)(0xca4)))); // 09fa dec word ptr [0xca4]
  if (R.zf) goto L_0a08;                                       // 09fe je 0xa08
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0a00 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0a02 out 0x20, al
  R.ds = POP();                                                // 0a04 pop ds
  R.bx = POP();                                                // 0a05 pop bx
  R.ax = POP();                                                // 0a06 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0a07 iret
L_0a08:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0xca2)));            // 0a08 mov ax, word ptr [0xca2]
  W16(DS, (u16)(0xca4), R.ax);                                 // 0a0b mov word ptr [0xca4], ax
  R.ds = POP();                                                // 0a0e pop ds
  R.bx = POP();                                                // 0a0f pop bx
  R.ax = POP();                                                // 0a10 pop ax
  { u16 o_ = M16(CS, (u16)(0xc9c)), s_ = M16(CS, (u16)((u16)(0xc9c) + 2)); asm_far_jump(s_, o_); } return; // 0a11 ljmp cs:[0xc9c]
L_0a59:   ASM_COST(2); R.ax = (u16)(0x4001);                           // 0a59 mov ax, 0x4001
  PUSH(0x0a5f); a_ad15_078c();                                 // 0a5c call 0x78c
  ASM_COST(2); R.ax = (u16)(XOR16(R.ax, R.ax));                // 0a5f xor ax, ax
  PUSH(0x0a64); a_ad15_078c();                                 // 0a61 call 0x78c
  ASM_COST(1); ASM_BACK(); goto L_09fa;                        // 0a64 jmp 0x9fa
L_ret:
  return;
}

static u16 f_ad15_0a59(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_0a59();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0A5F FUN_1000_0a5f  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0a5f(void)
{
  R.cs = ad15_seg;
  goto L_0a5f;
L_09fa:   ASM_COST(2); W16(DS, (u16)(0xca4), DEC16(M16(DS, (u16)(0xca4)))); // 09fa dec word ptr [0xca4]
  if (R.zf) goto L_0a08;                                       // 09fe je 0xa08
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0a00 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0a02 out 0x20, al
  R.ds = POP();                                                // 0a04 pop ds
  R.bx = POP();                                                // 0a05 pop bx
  R.ax = POP();                                                // 0a06 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0a07 iret
L_0a08:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0xca2)));            // 0a08 mov ax, word ptr [0xca2]
  W16(DS, (u16)(0xca4), R.ax);                                 // 0a0b mov word ptr [0xca4], ax
  R.ds = POP();                                                // 0a0e pop ds
  R.bx = POP();                                                // 0a0f pop bx
  R.ax = POP();                                                // 0a10 pop ax
  { u16 o_ = M16(CS, (u16)(0xc9c)), s_ = M16(CS, (u16)((u16)(0xc9c) + 2)); asm_far_jump(s_, o_); } return; // 0a11 ljmp cs:[0xc9c]
L_0a5f:   ASM_COST(2); R.ax = (u16)(XOR16(R.ax, R.ax));                // 0a5f xor ax, ax
  PUSH(0x0a64); a_ad15_078c();                                 // 0a61 call 0x78c
  ASM_COST(1); ASM_BACK(); goto L_09fa;                        // 0a64 jmp 0x9fa
L_ret:
  return;
}

static u16 f_ad15_0a5f(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_0a5f();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0A64 FUN_1000_0a64  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0a64(void)
{
  R.cs = ad15_seg;
  goto L_0a64;
L_09fa:   ASM_COST(2); W16(DS, (u16)(0xca4), DEC16(M16(DS, (u16)(0xca4)))); // 09fa dec word ptr [0xca4]
  if (R.zf) goto L_0a08;                                       // 09fe je 0xa08
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0a00 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0a02 out 0x20, al
  R.ds = POP();                                                // 0a04 pop ds
  R.bx = POP();                                                // 0a05 pop bx
  R.ax = POP();                                                // 0a06 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0a07 iret
L_0a08:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0xca2)));            // 0a08 mov ax, word ptr [0xca2]
  W16(DS, (u16)(0xca4), R.ax);                                 // 0a0b mov word ptr [0xca4], ax
  R.ds = POP();                                                // 0a0e pop ds
  R.bx = POP();                                                // 0a0f pop bx
  R.ax = POP();                                                // 0a10 pop ax
  { u16 o_ = M16(CS, (u16)(0xc9c)), s_ = M16(CS, (u16)((u16)(0xc9c) + 2)); asm_far_jump(s_, o_); } return; // 0a11 ljmp cs:[0xc9c]
L_0a64:   ASM_COST(1); ASM_BACK(); goto L_09fa;                        // 0a64 jmp 0x9fa
L_ret:
  return;
}

static u16 f_ad15_0a64(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_0a64();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B3E FUN_1000_0b3e  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0b3e(void)
{
  R.cs = ad15_seg;
  goto L_0b3e;
L_0acd:   ASM_COST(2); W16(DS, (u16)(0xca4), DEC16(M16(DS, (u16)(0xca4)))); // 0acd dec word ptr [0xca4]
  if (R.zf) goto L_0adb;                                       // 0ad1 je 0xadb
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0ad3 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0ad5 out 0x20, al
  R.ds = POP();                                                // 0ad7 pop ds
  R.bx = POP();                                                // 0ad8 pop bx
  R.ax = POP();                                                // 0ad9 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0ada iret
L_0adb:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0xca2)));            // 0adb mov ax, word ptr [0xca2]
  W16(DS, (u16)(0xca4), R.ax);                                 // 0ade mov word ptr [0xca4], ax
  R.ds = POP();                                                // 0ae1 pop ds
  R.bx = POP();                                                // 0ae2 pop bx
  R.ax = POP();                                                // 0ae3 pop ax
  { u16 o_ = M16(CS, (u16)(0xc9c)), s_ = M16(CS, (u16)((u16)(0xc9c) + 2)); asm_far_jump(s_, o_); } return; // 0ae4 ljmp cs:[0xc9c]
L_0b3e:   ASM_COST(2); R.ax = (u16)(0x4001);                           // 0b3e mov ax, 0x4001
  PUSH(0x0b44); a_ad15_078c();                                 // 0b41 call 0x78c
  ASM_COST(2); R.ax = (u16)(XOR16(R.ax, R.ax));                // 0b44 xor ax, ax
  PUSH(0x0b49); a_ad15_078c();                                 // 0b46 call 0x78c
  ASM_COST(1); ASM_BACK(); goto L_0acd;                        // 0b49 jmp 0xacd
L_ret:
  return;
}

static u16 f_ad15_0b3e(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_0b3e();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B44 FUN_1000_0b44  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0b44(void)
{
  R.cs = ad15_seg;
  goto L_0b44;
L_0acd:   ASM_COST(2); W16(DS, (u16)(0xca4), DEC16(M16(DS, (u16)(0xca4)))); // 0acd dec word ptr [0xca4]
  if (R.zf) goto L_0adb;                                       // 0ad1 je 0xadb
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0ad3 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0ad5 out 0x20, al
  R.ds = POP();                                                // 0ad7 pop ds
  R.bx = POP();                                                // 0ad8 pop bx
  R.ax = POP();                                                // 0ad9 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0ada iret
L_0adb:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0xca2)));            // 0adb mov ax, word ptr [0xca2]
  W16(DS, (u16)(0xca4), R.ax);                                 // 0ade mov word ptr [0xca4], ax
  R.ds = POP();                                                // 0ae1 pop ds
  R.bx = POP();                                                // 0ae2 pop bx
  R.ax = POP();                                                // 0ae3 pop ax
  { u16 o_ = M16(CS, (u16)(0xc9c)), s_ = M16(CS, (u16)((u16)(0xc9c) + 2)); asm_far_jump(s_, o_); } return; // 0ae4 ljmp cs:[0xc9c]
L_0b44:   ASM_COST(2); R.ax = (u16)(XOR16(R.ax, R.ax));                // 0b44 xor ax, ax
  PUSH(0x0b49); a_ad15_078c();                                 // 0b46 call 0x78c
  ASM_COST(1); ASM_BACK(); goto L_0acd;                        // 0b49 jmp 0xacd
L_ret:
  return;
}

static u16 f_ad15_0b44(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_0b44();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B49 FUN_1000_0b49  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0b49(void)
{
  R.cs = ad15_seg;
  goto L_0b49;
L_0acd:   ASM_COST(2); W16(DS, (u16)(0xca4), DEC16(M16(DS, (u16)(0xca4)))); // 0acd dec word ptr [0xca4]
  if (R.zf) goto L_0adb;                                       // 0ad1 je 0xadb
  ASM_COST(6); SETL(R.ax, 0x20);                               // 0ad3 mov al, 0x20
  ASM_PORT_OUT(0x20, (u8)R.ax);                                // 0ad5 out 0x20, al
  R.ds = POP();                                                // 0ad7 pop ds
  R.bx = POP();                                                // 0ad8 pop bx
  R.ax = POP();                                                // 0ad9 pop ax
  SETFLAGS16(M16(SS, (u16)(R.sp + 4))); R.sp += 6; goto L_ret; // 0ada iret
L_0adb:   ASM_COST(6); R.ax = (u16)(M16(DS, (u16)(0xca2)));            // 0adb mov ax, word ptr [0xca2]
  W16(DS, (u16)(0xca4), R.ax);                                 // 0ade mov word ptr [0xca4], ax
  R.ds = POP();                                                // 0ae1 pop ds
  R.bx = POP();                                                // 0ae2 pop bx
  R.ax = POP();                                                // 0ae3 pop ax
  { u16 o_ = M16(CS, (u16)(0xc9c)), s_ = M16(CS, (u16)((u16)(0xc9c) + 2)); asm_far_jump(s_, o_); } return; // 0ae4 ljmp cs:[0xc9c]
L_0b49:   ASM_COST(1); ASM_BACK(); goto L_0acd;                        // 0b49 jmp 0xacd
L_ret:
  return;
}

static u16 f_ad15_0b49(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_0b49();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:099C FUN_1000_099c  FIX: recompiled from the machine code (asm2c)
static void a_ad15_099c(void)
{
  R.cs = ad15_seg;
  ASM_COST(8);                                                 // 099c cli
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 099d xor al, al
  W8(CS, (u16)(0xcba), (u8)R.ax);                              // 099f mov byte ptr cs:[0xcba], al
  R.ax = (u16)(0xffff);                                        // 09a3 mov ax, 0xffff
  W16(CS, (u16)(0xc90), R.ax);                                 // 09a6 mov word ptr cs:[0xc90], ax
  SETL(R.ax, 0x1);                                             // 09aa mov al, 1
  W8(CS, (u16)(0xc98), (u8)R.ax);                              // 09ac mov byte ptr cs:[0xc98], al
  // 09b0 sti 
L_09b1:   ASM_COST(3); R.ax = (u16)(M16(CS, (u16)(0xca8)));            // 09b1 mov ax, word ptr cs:[0xca8]
  SUB16(R.ax, 0x0);                                            // 09b5 cmp ax, 0
  if (R.zf) { ASM_BACK(); goto L_09b1; }                       // 09b8 je 0x9b1
  ASM_COST(1); R.sp += 2; goto L_ret;                          // 09ba ret
L_ret:
  return;
}

static u16 f_ad15_099c(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_099c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:078C FUN_1000_078c  FIX: recompiled from the machine code (asm2c)
static void a_ad15_078c(void)
{
  R.cs = ad15_seg;
  ASM_COST(9); PUSH(R.si);                                     // 078c push si
  PUSH(R.dx);                                                  // 078d push dx
  PUSH(R.cx);                                                  // 078e push cx
  PUSH(R.ax);                                                  // 078f push ax
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 0790 mov al, ah
  R.dx = (u16)(M16(CS, (u16)(0x921)));                         // 0792 mov dx, word ptr cs:[0x921]
  // 0797 cli 
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 0798 out dx, al
  R.cx = (u16)(M16(CS, (u16)(0x925)));                         // 0799 mov cx, word ptr cs:[0x925]
L_079e:   ASM_COST(2); SETL(R.ax, ASM_PORT_IN(R.dx));                  // 079e in al, dx
  if (--R.cx != 0) { ASM_BACK(); goto L_079e; }                // 079f loop 0x79e
  ASM_COST(6); R.ax = POP();                                   // 07a1 pop ax
  R.dx = (u16)(INC16(R.dx));                                   // 07a2 inc dx
  ASM_PORT_OUT(R.dx, (u8)R.ax);                                // 07a3 out dx, al
  R.dx = (u16)(DEC16(R.dx));                                   // 07a4 dec dx
  PUSH(R.ax);                                                  // 07a5 push ax
  R.cx = (u16)(M16(CS, (u16)(0x923)));                         // 07a6 mov cx, word ptr cs:[0x923]
L_07ab:   ASM_COST(2); SETL(R.ax, ASM_PORT_IN(R.dx));                  // 07ab in al, dx
  if (--R.cx != 0) { ASM_BACK(); goto L_07ab; }                // 07ac loop 0x7ab
  ASM_COST(6);                                                 // 07ae sti
  R.ax = POP();                                                // 07af pop ax
  R.cx = POP();                                                // 07b0 pop cx
  R.dx = POP();                                                // 07b1 pop dx
  R.si = POP();                                                // 07b2 pop si
  R.sp += 2; goto L_ret;                                       // 07b3 ret
L_ret:
  return;
}

static u16 f_ad15_078c(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_078c();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:06B8 FUN_1000_06b8  FIX: recompiled from the machine code (asm2c)
static void a_ad15_06b8(void)
{
  R.cs = ad15_seg;
  ASM_COST(22); PUSH(R.bx);                                    // 06b8 push bx
  PUSH(R.cx);                                                  // 06b9 push cx
  PUSH(R.dx);                                                  // 06ba push dx
  SETH(R.dx, (u8)(R.ax >> 8));                                 // 06bb mov dh, ah
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 06bd xor ah, ah
  SETL(R.cx, 0xc);                                             // 06bf mov cl, 0xc
  DIV8((u8)R.cx, 0x06c1);                                      // 06c1 div cl
  SETL(R.dx, (u8)R.ax);                                        // 06c3 mov dl, al
  SETL(R.ax, (u8)(R.ax >> 8));                                 // 06c5 mov al, ah
  SETL(R.ax, ADD8((u8)R.ax, (u8)(R.dx >> 8)));                 // 06c7 add al, dh
  R.ax = (u16)(i16)(i8)R.ax;                                   // 06c9 cwde
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 06ca shl ax, 1
  R.bx = (u16)(R.ax);                                          // 06cc mov bx, ax
  R.ax = (u16)(M16(CS, (u16)(R.bx + 0x861)));                  // 06ce mov ax, word ptr cs:[bx + 0x861]
  SETH(R.dx, XOR8((u8)(R.dx >> 8), (u8)(R.dx >> 8)));          // 06d3 xor dh, dh
  SETL(R.cx, 0xa);                                             // 06d5 mov cl, 0xa
  R.dx = (u16)(SHL16(R.dx, (u8)R.cx));                         // 06d7 shl dx, cl
  R.ax = (u16)(OR16(R.ax, R.dx));                              // 06d9 or ax, dx
  R.dx = POP();                                                // 06db pop dx
  R.cx = POP();                                                // 06dc pop cx
  R.bx = POP();                                                // 06dd pop bx
  R.sp += 2; goto L_ret;                                       // 06de ret
L_ret:
  return;
}

static u16 f_ad15_06b8(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_06b8();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:07B4 FUN_1000_07b4  FIX: recompiled from the machine code (asm2c)
static void a_ad15_07b4(void)
{
  R.cs = ad15_seg;
  ASM_COST(6); PUSH(R.dx);                                     // 07b4 push dx
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 07b5 xor ax, ax
  R.dx = (u16)(M16(CS, (u16)(0x921)));                         // 07b7 mov dx, word ptr cs:[0x921]
  SETL(R.ax, ASM_PORT_IN(R.dx));                               // 07bc in al, dx
  R.dx = POP();                                                // 07bd pop dx
  R.sp += 2; goto L_ret;                                       // 07be ret
L_ret:
  return;
}

static u16 f_ad15_07b4(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_07b4();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:068A FUN_1000_068a  FIX: recompiled from the machine code (asm2c)
static void a_ad15_068a(void)
{
  R.cs = ad15_seg;
  ASM_COST(4); PUSH(R.cx);                                     // 068a push cx
  PUSH(R.si);                                                  // 068b push si
  SUB16(R.cx, 0x81);                                           // 068c cmp cx, 0x81
  if (!R.cf) goto L_0695;                                      // 0690 jae 0x695
  ASM_COST(3); R.si = POP();                                   // 0692 pop si
  R.cx = POP();                                                // 0693 pop cx
  R.sp += 2; goto L_ret;                                       // 0694 ret
L_0695:   ASM_COST(2); SUB16(R.cx, 0x85);                              // 0695 cmp cx, 0x85
  if (R.cf || R.zf) goto L_069e;                               // 0699 jbe 0x69e
  ASM_COST(3); R.si = POP();                                   // 069b pop si
  R.cx = POP();                                                // 069c pop cx
  R.sp += 2; goto L_ret;                                       // 069d ret
L_069e:   ASM_COST(4); R.cx = (u16)(SUB16(R.cx, 0x81));                // 069e sub cx, 0x81
  R.cx = (u16)(SHL16(R.cx, 0x1));                              // 06a2 shl cx, 1
  R.si = (u16)(R.cx);                                          // 06a4 mov si, cx
  { u16 t_ = M16(CS, (u16)(R.si + 0x6ae)); PUSH(0x06ab); asm_near_call(R.cs, t_); } /* call word ptr cs:[si + 0x6ae] */ // 06a6 call word ptr cs:[si + 0x6ae]
  ASM_COST(3); R.si = POP();                                   // 06ab pop si
  R.cx = POP();                                                // 06ac pop cx
  R.sp += 2; goto L_ret;                                       // 06ad ret
L_ret:
  return;
}

static u16 f_ad15_068a(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_068a();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0544 FUN_1000_0544  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0544(void)
{
  R.cs = ad15_seg;
  ASM_COST(17); PUSH(R.cx);                                    // 0544 push cx
  PUSH(R.ax);                                                  // 0545 push ax
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x20));                     // 0546 add ah, 0x20
  SETL(R.ax, M8(ES, (u16)(R.bx + 0xa)));                       // 0549 mov al, byte ptr es:[bx + 0xa]
  SETL(R.cx, 0x1);                                             // 054d mov cl, 1
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 054f shl al, cl
  SETL(R.ax, OR8((u8)R.ax, M8(ES, (u16)(R.bx + 0x9))));        // 0551 or al, byte ptr es:[bx + 9]
  SETL(R.cx, 0x1);                                             // 0555 mov cl, 1
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 0557 shl al, cl
  SETL(R.ax, OR8((u8)R.ax, M8(ES, (u16)(R.bx + 0x8))));        // 0559 or al, byte ptr es:[bx + 8]
  SETL(R.cx, 0x1);                                             // 055d mov cl, 1
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 055f shl al, cl
  SETL(R.ax, OR8((u8)R.ax, M8(ES, (u16)(R.bx + 0x7))));        // 0561 or al, byte ptr es:[bx + 7]
  SETL(R.cx, 0x4);                                             // 0565 mov cl, 4
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 0567 shl al, cl
  SETL(R.ax, OR8((u8)R.ax, M8(ES, (u16)(R.bx + 0x6))));        // 0569 or al, byte ptr es:[bx + 6]
  PUSH(0x0570); a_ad15_078c();                                 // 056d call 0x78c
  ASM_COST(8); R.ax = POP();                                   // 0570 pop ax
  PUSH(R.ax);                                                  // 0571 push ax
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 0572 add ah, 0x40
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x5)));                       // 0575 mov al, byte ptr es:[bx + 5]
  SETL(R.cx, 0x6);                                             // 0579 mov cl, 6
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 057b shl al, cl
  SETL(R.ax, OR8((u8)R.ax, M8(ES, (u16)(R.bx + 0x4))));        // 057d or al, byte ptr es:[bx + 4]
  PUSH(0x0584); a_ad15_078c();                                 // 0581 call 0x78c
  ASM_COST(8); R.ax = POP();                                   // 0584 pop ax
  PUSH(R.ax);                                                  // 0585 push ax
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x60));                     // 0586 add ah, 0x60
  SETL(R.ax, M8(ES, (u16)(R.bx)));                             // 0589 mov al, byte ptr es:[bx]
  SETL(R.cx, 0x4);                                             // 058c mov cl, 4
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 058e shl al, cl
  SETL(R.ax, OR8((u8)R.ax, M8(ES, (u16)(R.bx + 0x1))));        // 0590 or al, byte ptr es:[bx + 1]
  PUSH(0x0597); a_ad15_078c();                                 // 0594 call 0x78c
  ASM_COST(8); R.ax = POP();                                   // 0597 pop ax
  PUSH(R.ax);                                                  // 0598 push ax
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x80));                     // 0599 add ah, 0x80
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x2)));                       // 059c mov al, byte ptr es:[bx + 2]
  SETL(R.cx, 0x4);                                             // 05a0 mov cl, 4
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 05a2 shl al, cl
  SETL(R.ax, OR8((u8)R.ax, M8(ES, (u16)(R.bx + 0x3))));        // 05a4 or al, byte ptr es:[bx + 3]
  PUSH(0x05ab); a_ad15_078c();                                 // 05a8 call 0x78c
  ASM_COST(5); R.ax = POP();                                   // 05ab pop ax
  PUSH(R.ax);                                                  // 05ac push ax
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xe0));                     // 05ad add ah, 0xe0
  SETL(R.ax, M8(ES, (u16)(R.bx + 0xb)));                       // 05b0 mov al, byte ptr es:[bx + 0xb]
  PUSH(0x05b7); a_ad15_078c();                                 // 05b4 call 0x78c
  ASM_COST(3); R.ax = POP();                                   // 05b7 pop ax
  R.cx = POP();                                                // 05b8 pop cx
  R.sp += 2; goto L_ret;                                       // 05b9 ret
L_ret:
  return;
}

static u16 f_ad15_0544(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_0544();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:04E7 FUN_1000_04e7  FIX: recompiled from the machine code (asm2c)
static void a_ad15_04e7(void)
{
  R.cs = ad15_seg;
  ASM_COST(8); PUSH(R.si);                                     // 04e7 push si
  PUSH(R.ax);                                                  // 04e8 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 04e9 shl ax, 1
  R.si = (u16)(R.ax);                                          // 04eb mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x81f)));                     // 04ed mov ah, byte ptr cs:[si + 0x81f]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 04f2 add ah, 0x40
  SETL(R.ax, 0x3f);                                            // 04f5 mov al, 0x3f
  PUSH(0x04fa); a_ad15_078c();                                 // 04f7 call 0x78c
  ASM_COST(9); R.ax = POP();                                   // 04fa pop ax
  PUSH(R.ax);                                                  // 04fb push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 04fc shl ax, 1
  R.ax = (u16)(INC16(R.ax));                                   // 04fe inc ax
  R.si = (u16)(R.ax);                                          // 04ff mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x81f)));                     // 0501 mov ah, byte ptr cs:[si + 0x81f]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 0506 add ah, 0x40
  SETL(R.ax, 0x3f);                                            // 0509 mov al, 0x3f
  PUSH(0x050e); a_ad15_078c();                                 // 050b call 0x78c
  ASM_COST(8); R.ax = POP();                                   // 050e pop ax
  PUSH(R.ax);                                                  // 050f push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0510 shl ax, 1
  R.si = (u16)(R.ax);                                          // 0512 mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x81f)));                     // 0514 mov ah, byte ptr cs:[si + 0x81f]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x80));                     // 0519 add ah, 0x80
  SETL(R.ax, 0xa);                                             // 051c mov al, 0xa
  PUSH(0x0521); a_ad15_078c();                                 // 051e call 0x78c
  ASM_COST(9); R.ax = POP();                                   // 0521 pop ax
  PUSH(R.ax);                                                  // 0522 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0523 shl ax, 1
  R.ax = (u16)(INC16(R.ax));                                   // 0525 inc ax
  R.si = (u16)(R.ax);                                          // 0526 mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x81f)));                     // 0528 mov ah, byte ptr cs:[si + 0x81f]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x80));                     // 052d add ah, 0x80
  SETL(R.ax, 0xa);                                             // 0530 mov al, 0xa
  PUSH(0x0535); a_ad15_078c();                                 // 0532 call 0x78c
  ASM_COST(6); R.ax = POP();                                   // 0535 pop ax
  PUSH(R.ax);                                                  // 0536 push ax
  SETH(R.ax, (u8)R.ax);                                        // 0537 mov ah, al
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0xb0));                     // 0539 add ah, 0xb0
  SETL(R.ax, 0x1);                                             // 053c mov al, 1
  PUSH(0x0541); a_ad15_078c();                                 // 053e call 0x78c
  ASM_COST(3); R.ax = POP();                                   // 0541 pop ax
  R.si = POP();                                                // 0542 pop si
  R.sp += 2; goto L_ret;                                       // 0543 ret
L_ret:
  return;
}

static u16 f_ad15_04e7(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_04e7();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:06F5 FUN_1000_06f5  FIX: recompiled from the machine code (asm2c)
static void a_ad15_06f5(void)
{
  R.cs = ad15_seg;
  ASM_COST(15); PUSH(R.cx);                                    // 06f5 push cx
  PUSH(R.dx);                                                  // 06f6 push dx
  PUSH(R.si);                                                  // 06f7 push si
  R.dx = (u16)(R.cx);                                          // 06f8 mov dx, cx
  PUSH(R.ax);                                                  // 06fa push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 06fb shl ax, 1
  R.si = (u16)(R.ax);                                          // 06fd mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x81f)));                     // 06ff mov ah, byte ptr cs:[si + 0x81f]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 0704 add ah, 0x40
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x4b)));                      // 0707 mov al, byte ptr es:[bx + 0x4b]
  SETL(R.cx, 0x6);                                             // 070b mov cl, 6
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 070d shl al, cl
  SETL(R.cx, M8(ES, (u16)(R.bx + 0x4a)));                      // 070f mov cl, byte ptr es:[bx + 0x4a]
  SUB8(M8(ES, (u16)(R.bx + 0x44)), 0x1);                       // 0713 cmp byte ptr es:[bx + 0x44], 1
  if (!R.zf) goto L_0740;                                      // 0718 jne 0x740
  ASM_COST(19); PUSH(R.ax);                                    // 071a push ax
  SETL(R.ax, (u8)(R.dx >> 8));                                 // 071b mov al, dh
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 071d xor ah, ah
  MUL8((u8)R.dx);                                              // 071f mul dl
  SETL(R.cx, 0x6);                                             // 0721 mov cl, 6
  R.ax = (u16)(SHR16(R.ax, (u8)R.cx));                         // 0723 shr ax, cl
  R.ax = (u16)(INC16(R.ax));                                   // 0725 inc ax
  R.ax = (u16)(SHR16(R.ax, 0x1));                              // 0726 shr ax, 1
  SETL(R.cx, 0x3f);                                            // 0728 mov cl, 0x3f
  SETL(R.cx, SUB8((u8)R.cx, M8(ES, (u16)(R.bx + 0x4a))));      // 072a sub cl, byte ptr es:[bx + 0x4a]
  MUL8((u8)R.cx);                                              // 072e mul cl
  SETL(R.cx, 0x6);                                             // 0730 mov cl, 6
  R.ax = (u16)(SHR16(R.ax, (u8)R.cx));                         // 0732 shr ax, cl
  R.ax = (u16)(INC16(R.ax));                                   // 0734 inc ax
  R.ax = (u16)(SHR16(R.ax, 0x1));                              // 0735 shr ax, 1
  R.ax = (u16)(AND16(R.ax, 0x3f));                             // 0737 and ax, 0x3f
  R.cx = (u16)(0x3f);                                          // 073a mov cx, 0x3f
  R.cx = (u16)(SUB16(R.cx, R.ax));                             // 073d sub cx, ax
  R.ax = POP();                                                // 073f pop ax
L_0740:   ASM_COST(2); SETL(R.ax, OR8((u8)R.ax, (u8)R.cx));            // 0740 or al, cl
  PUSH(0x0745); a_ad15_078c();                                 // 0742 call 0x78c
  ASM_COST(31); R.ax = POP();                                  // 0745 pop ax
  PUSH(R.ax);                                                  // 0746 push ax
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 0747 shl ax, 1
  R.ax = (u16)(INC16(R.ax));                                   // 0749 inc ax
  R.si = (u16)(R.ax);                                          // 074a mov si, ax
  SETH(R.ax, M8(CS, (u16)(R.si + 0x81f)));                     // 074c mov ah, byte ptr cs:[si + 0x81f]
  SETH(R.ax, ADD8((u8)(R.ax >> 8), 0x40));                     // 0751 add ah, 0x40
  SETL(R.ax, M8(ES, (u16)(R.bx + 0x57)));                      // 0754 mov al, byte ptr es:[bx + 0x57]
  SETL(R.cx, 0x6);                                             // 0758 mov cl, 6
  SETL(R.ax, SHL8((u8)R.ax, (u8)R.cx));                        // 075a shl al, cl
  PUSH(R.ax);                                                  // 075c push ax
  SETL(R.ax, (u8)(R.dx >> 8));                                 // 075d mov al, dh
  SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8)));          // 075f xor ah, ah
  MUL8((u8)R.dx);                                              // 0761 mul dl
  SETL(R.cx, 0x6);                                             // 0763 mov cl, 6
  R.ax = (u16)(SHR16(R.ax, (u8)R.cx));                         // 0765 shr ax, cl
  R.ax = (u16)(INC16(R.ax));                                   // 0767 inc ax
  R.ax = (u16)(SHR16(R.ax, 0x1));                              // 0768 shr ax, 1
  SETL(R.cx, 0x3f);                                            // 076a mov cl, 0x3f
  SETL(R.cx, SUB8((u8)R.cx, M8(ES, (u16)(R.bx + 0x56))));      // 076c sub cl, byte ptr es:[bx + 0x56]
  MUL8((u8)R.cx);                                              // 0770 mul cl
  SETL(R.cx, 0x6);                                             // 0772 mov cl, 6
  R.ax = (u16)(SHR16(R.ax, (u8)R.cx));                         // 0774 shr ax, cl
  R.ax = (u16)(INC16(R.ax));                                   // 0776 inc ax
  R.ax = (u16)(SHR16(R.ax, 0x1));                              // 0777 shr ax, 1
  R.ax = (u16)(AND16(R.ax, 0x3f));                             // 0779 and ax, 0x3f
  R.cx = (u16)(0x3f);                                          // 077c mov cx, 0x3f
  R.cx = (u16)(SUB16(R.cx, R.ax));                             // 077f sub cx, ax
  R.ax = POP();                                                // 0781 pop ax
  SETL(R.ax, OR8((u8)R.ax, (u8)R.cx));                         // 0782 or al, cl
  PUSH(0x0787); a_ad15_078c();                                 // 0784 call 0x78c
  ASM_COST(5); R.ax = POP();                                   // 0787 pop ax
  R.si = POP();                                                // 0788 pop si
  R.dx = POP();                                                // 0789 pop dx
  R.cx = POP();                                                // 078a pop cx
  R.sp += 2; goto L_ret;                                       // 078b ret
L_ret:
  return;
}

static u16 f_ad15_06f5(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_06f5();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:06DF FUN_1000_06df  FIX: recompiled from the machine code (asm2c)
static void a_ad15_06df(void)
{
  R.cs = ad15_seg;
  ASM_COST(4); PUSH(R.ax);                                     // 06df push ax
  PUSH(R.si);                                                  // 06e0 push si
  SUB8((u8)R.ax, 0x3c);                                        // 06e1 cmp al, 0x3c
  if (R.cf) goto L_06e7;                                       // 06e3 jb 0x6e7
  ASM_COST(1); SETL(R.ax, 0x3b);                               // 06e5 mov al, 0x3b
L_06e7:   ASM_COST(7); SETH(R.ax, XOR8((u8)(R.ax >> 8), (u8)(R.ax >> 8))); // 06e7 xor ah, ah
  R.ax = (u16)(SHL16(R.ax, 0x1));                              // 06e9 shl ax, 1
  R.si = (u16)(R.ax);                                          // 06eb mov si, ax
  R.cx = (u16)(M16(CS, (u16)(R.si + 0x8a9)));                  // 06ed mov cx, word ptr cs:[si + 0x8a9]
  R.si = POP();                                                // 06f2 pop si
  R.ax = POP();                                                // 06f3 pop ax
  R.sp += 2; goto L_ret;                                       // 06f4 ret
L_ret:
  return;
}

static u16 f_ad15_06df(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_06df();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:0B4B FUN_1000_0b4b  FIX: recompiled from the machine code (asm2c)
static void a_ad15_0b4b(void)
{
  R.cs = ad15_seg;
  ASM_COST(4); PUSH(R.bp);                                     // 0b4b push bp
  R.bp = (u16)(R.sp);                                          // 0b4c mov bp, sp
  SUB16(M16(SS, (u16)(R.bp + 0x6)), 0x0);                      // 0b4e cmp word ptr [bp + 6], 0
  if (R.zf) goto L_0b56;                                       // 0b52 je 0xb56
  ASM_COST(2); R.bp = POP();                                   // 0b54 pop bp
  R.sp += 4; goto L_ret;                                       // 0b55 retf
L_0b56:   ASM_COST(4); PUSH(R.ds);                                     // 0b56 push ds
  PUSH(R.cs);                                                  // 0b57 push cs
  R.ds = POP();                                                // 0b58 pop ds
  PUSH(0x0b5c); a_ad15_099c();                                 // 0b59 call 0x99c
  ASM_COST(10);                                                // 0b5c cli
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0b5d xor ax, ax
  W16(DS, (u16)(0xca8), R.ax);                                 // 0b5f mov word ptr [0xca8], ax
  R.ax = (u16)(M16(SS, (u16)(R.bp + 0xe)));                    // 0b62 mov ax, word ptr [bp + 0xe]
  W8(DS, (u16)(0xc98), (u8)R.ax);                              // 0b65 mov byte ptr [0xc98], al
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0b68 les bx, ptr [bp + 8]
  R.ax = (u16)((u16)(R.bx + 0x32));                            // 0b6b lea ax, [bx + 0x32]
  R.cx = (u16)(R.ax);                                          // 0b6e mov cx, ax
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 0b70 cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_0b8c;                                      // 0b75 jne 0xb8c
  ASM_COST(11); PUSH(R.ax);                                    // 0b77 push ax
  PUSH(R.bx);                                                  // 0b78 push bx
  R.bx = (u16)(R.ax);                                          // 0b79 mov bx, ax
  SETL(R.ax, M8(ES, (u16)(R.bx)));                             // 0b7b mov al, byte ptr es:[bx]
  W8(DS, (u16)(0xcbb), (u8)R.ax);                              // 0b7e mov byte ptr [0xcbb], al
  W8(DS, (u16)(0xcbc), (u8)R.ax);                              // 0b81 mov byte ptr [0xcbc], al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0b84 xor al, al
  W8(DS, (u16)(0xcba), (u8)R.ax);                              // 0b86 mov byte ptr [0xcba], al
  R.bx = POP();                                                // 0b89 pop bx
  R.ax = POP();                                                // 0b8a pop ax
  R.cx = (u16)(INC16(R.cx));                                   // 0b8b inc cx
L_0b8c:   ASM_COST(7); W16(DS, (u16)(0xc8c), R.ax);                    // 0b8c mov word ptr [0xc8c], ax
  W16(DS, (u16)(0xc8e), R.es);                                 // 0b8f mov word ptr [0xc8e], es
  W16(DS, (u16)(0xc90), R.cx);                                 // 0b93 mov word ptr [0xc90], cx
  W16(DS, (u16)(0xc92), R.es);                                 // 0b97 mov word ptr [0xc92], es
  { u16 a_ = (u16)(R.bx + 0x8); R.cx = (u16)(M16(ES, a_)); R.es = M16(ES, (u16)(a_ + 2)); } // 0b9b les cx, ptr es:[bx + 8]
  SUB16(R.cx, 0x0);                                            // 0b9f cmp cx, 0
  if (!R.zf) goto L_0bae;                                      // 0ba2 jne 0xbae
  ASM_COST(6); R.ax = (u16)(0x1);                              // 0ba4 mov ax, 1
  W16(DS, (u16)(0xca8), R.ax);                                 // 0ba7 mov word ptr [0xca8], ax
  // 0baa sti 
  R.ds = POP();                                                // 0bab pop ds
  R.bp = POP();                                                // 0bac pop bp
  R.sp += 4; goto L_ret;                                       // 0bad retf
L_0bae:   ASM_COST(15); R.cx = (u16)(ADD16(R.cx, R.ax));               // 0bae add cx, ax
  R.cx = (u16)(DEC16(R.cx));                                   // 0bb0 dec cx
  W16(CS, (u16)(0xc94), R.cx);                                 // 0bb1 mov word ptr cs:[0xc94], cx
  R.ax = (u16)(XOR16(R.ax, R.ax));                             // 0bb6 xor ax, ax
  R.es = (u16)(R.ax);                                          // 0bb8 mov es, ax
  R.ax = (u16)(M16(ES, (u16)(0x20)));                          // 0bba mov ax, word ptr es:[0x20]
  R.dx = (u16)(M16(ES, (u16)(0x22)));                          // 0bbe mov dx, word ptr es:[0x22]
  W16(DS, (u16)(0xc9c), R.ax);                                 // 0bc3 mov word ptr [0xc9c], ax
  W16(DS, (u16)(0xc9e), R.dx);                                 // 0bc6 mov word ptr [0xc9e], dx
  PUSH(R.es);                                                  // 0bca push es
  { u16 a_ = (u16)(R.bp + 0x8); R.bx = (u16)(M16(SS, a_)); R.es = M16(SS, (u16)(a_ + 2)); } // 0bcb les bx, ptr [bp + 8]
  R.ax = (u16)(0x9bb);                                         // 0bce mov ax, 0x9bb
  R.dx = (u16)(R.cs);                                          // 0bd1 mov dx, cs
  SUB8(M8(ES, (u16)(R.bx + 0x4)), 0x6);                        // 0bd3 cmp byte ptr es:[bx + 4], 6
  if (!R.zf) goto L_0bdf;                                      // 0bd8 jne 0xbdf
  ASM_COST(2); R.ax = (u16)(0xa66);                            // 0bda mov ax, 0xa66
  R.dx = (u16)(R.cs);                                          // 0bdd mov dx, cs
L_0bdf:   ASM_COST(5); R.es = POP();                                   // 0bdf pop es
  W16(ES, (u16)(0x20), R.ax);                                  // 0be0 mov word ptr es:[0x20], ax
  W16(ES, (u16)(0x22), R.dx);                                  // 0be4 mov word ptr es:[0x22], dx
  R.ax = (u16)(0x120);                                         // 0be9 mov ax, 0x120
  PUSH(0x0bef); a_ad15_078c();                                 // 0bec call 0x78c
  ASM_COST(2); R.ax = (u16)(0x2021);                           // 0bef mov ax, 0x2021
  PUSH(0x0bf5); a_ad15_078c();                                 // 0bf2 call 0x78c
  ASM_COST(2); R.ax = (u16)(0x60f0);                           // 0bf5 mov ax, 0x60f0
  PUSH(0x0bfb); a_ad15_078c();                                 // 0bf8 call 0x78c
  ASM_COST(2); R.ax = (u16)(0x80f0);                           // 0bfb mov ax, 0x80f0
  PUSH(0x0c01); a_ad15_078c();                                 // 0bfe call 0x78c
  ASM_COST(2); R.ax = (u16)(0xc001);                           // 0c01 mov ax, 0xc001
  PUSH(0x0c07); a_ad15_078c();                                 // 0c04 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xe000);                           // 0c07 mov ax, 0xe000
  PUSH(0x0c0d); a_ad15_078c();                                 // 0c0a call 0x78c
  ASM_COST(2); R.ax = (u16)(0x433f);                           // 0c0d mov ax, 0x433f
  PUSH(0x0c13); a_ad15_078c();                                 // 0c10 call 0x78c
  ASM_COST(4); R.ax = (u16)(0xb001);                           // 0c13 mov ax, 0xb001
  // 0c16 cli 
  R.ax = (u16)(0xa08f);                                        // 0c17 mov ax, 0xa08f
  PUSH(0x0c1d); a_ad15_078c();                                 // 0c1a call 0x78c
  ASM_COST(2); R.ax = (u16)(0xb02e);                           // 0c1d mov ax, 0xb02e
  PUSH(0x0c23); a_ad15_078c();                                 // 0c20 call 0x78c
  ASM_COST(5); SETL(R.ax, 0x36);                               // 0c23 mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c25 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0c27 xor al, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c29 out 0x40, al
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c2b out 0x40, al
L_0c2d:   ASM_COST(8); SETL(R.ax, 0x6);                                // 0c2d mov al, 6
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c2f out 0x43, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c31 in al, 0x40
  SETL(R.cx, (u8)R.ax);                                        // 0c33 mov cl, al
  SETL(R.ax, ASM_PORT_IN(0x40));                               // 0c35 in al, 0x40
  SETH(R.cx, (u8)R.ax);                                        // 0c37 mov ch, al
  SUB16(R.cx, 0xf6ad);                                         // 0c39 cmp cx, 0xf6ad
  if (!R.zf && R.sf == R.of) { ASM_BACK(); goto L_0c2d; }      // 0c3d jg 0xc2d
  ASM_COST(2); R.ax = (u16)(0xb020);                           // 0c3f mov ax, 0xb020
  PUSH(0x0c45); a_ad15_078c();                                 // 0c42 call 0x78c
  ASM_COST(2); R.ax = (u16)(0xa000);                           // 0c45 mov ax, 0xa000
  PUSH(0x0c4b); a_ad15_078c();                                 // 0c48 call 0x78c
  ASM_COST(3); R.bx = (u16)(M16(SS, (u16)(R.bp + 0xc)));       // 0c4b mov bx, word ptr [bp + 0xc]
  SUB16(R.bx, 0x64);                                           // 0c4e cmp bx, 0x64
  if (!R.cf) goto L_0c58;                                      // 0c51 jae 0xc58
  ASM_COST(2); R.bx = (u16)(0x64);                             // 0c53 mov bx, 0x64
  goto L_0c61;                                                 // 0c56 jmp 0xc61
L_0c58:   ASM_COST(2); SUB16(R.bx, 0x4e20);                            // 0c58 cmp bx, 0x4e20
  if (R.cf) goto L_0c61;                                       // 0c5c jb 0xc61
  ASM_COST(1); R.bx = (u16)(0x4e20);                           // 0c5e mov bx, 0x4e20
L_0c61:   ASM_COST(20); R.dx = (u16)(0x12);                            // 0c61 mov dx, 0x12
  R.ax = (u16)(0x34dc);                                        // 0c64 mov ax, 0x34dc
  DIV16(R.bx, 0x0c67);                                         // 0c67 div bx
  R.bx = (u16)(R.ax);                                          // 0c69 mov bx, ax
  R.ax = (u16)(M16(DS, (u16)(0xca0)));                         // 0c6b mov ax, word ptr [0xca0]
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 0c6e xor dx, dx
  DIV16(R.bx, 0x0c70);                                         // 0c70 div bx
  W16(DS, (u16)(0xca2), R.ax);                                 // 0c72 mov word ptr [0xca2], ax
  W16(DS, (u16)(0xca4), R.ax);                                 // 0c75 mov word ptr [0xca4], ax
  W16(DS, (u16)(0xc96), R.bx);                                 // 0c78 mov word ptr [0xc96], bx
  SETL(R.ax, 0x36);                                            // 0c7c mov al, 0x36
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0c7e out 0x43, al
  SETL(R.ax, (u8)R.bx);                                        // 0c80 mov al, bl
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c82 out 0x40, al
  SETL(R.ax, (u8)(R.bx >> 8));                                 // 0c84 mov al, bh
  ASM_PORT_OUT(0x40, (u8)R.ax);                                // 0c86 out 0x40, al
  // 0c88 sti 
  R.ds = POP();                                                // 0c89 pop ds
  R.bp = POP();                                                // 0c8a pop bp
  R.sp += 4; goto L_ret;                                       // 0c8b retf
L_ret:
  return;
}

static u16 f_ad15_0b4b(u16 p0, u16 p1, u16 p2, u16 p3, u16 p4)
{
  ASM_ENTER();
  PUSH((u16)p4);
  PUSH((u16)p3);
  PUSH((u16)p2);
  PUSH((u16)p1);
  PUSH((u16)p0);
  PUSH(0x1000); PUSH(0);  // the return address (far)
  a_ad15_0b4b();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:07BF FUN_1000_07bf  FIX: recompiled from the machine code (asm2c)
static void a_ad15_07bf(void)
{
  R.cs = ad15_seg;
  ASM_COST(6); PUSH(R.ax);                                     // 07bf push ax
  PUSH(R.cx);                                                  // 07c0 push cx
  PUSH(R.dx);                                                  // 07c1 push dx
  SETH(R.ax, 0x1);                                             // 07c2 mov ah, 1
  SETL(R.ax, 0x0);                                             // 07c4 mov al, 0
  PUSH(0x07c9); a_ad15_078c();                                 // 07c6 call 0x78c
  ASM_COST(3); SETH(R.ax, 0x4);                                // 07c9 mov ah, 4
  SETL(R.ax, 0x60);                                            // 07cb mov al, 0x60
  PUSH(0x07d0); a_ad15_078c();                                 // 07cd call 0x78c
  ASM_COST(3); SETH(R.ax, 0x4);                                // 07d0 mov ah, 4
  SETL(R.ax, 0x80);                                            // 07d2 mov al, 0x80
  PUSH(0x07d7); a_ad15_078c();                                 // 07d4 call 0x78c
  ASM_COST(1); PUSH(0x07da); a_ad15_07b4();                    // 07d7 call 0x7b4
  ASM_COST(4); R.dx = (u16)(R.ax);                             // 07da mov dx, ax
  SETH(R.ax, 0x2);                                             // 07dc mov ah, 2
  SETL(R.ax, 0xff);                                            // 07de mov al, 0xff
  PUSH(0x07e3); a_ad15_078c();                                 // 07e0 call 0x78c
  ASM_COST(3); SETH(R.ax, 0x4);                                // 07e3 mov ah, 4
  SETL(R.ax, 0x21);                                            // 07e5 mov al, 0x21
  PUSH(0x07ea); a_ad15_078c();                                 // 07e7 call 0x78c
  ASM_COST(1); R.cx = (u16)(0x12c);                            // 07ea mov cx, 0x12c
L_07ed:   ASM_COST(1); PUSH(0x07f0); a_ad15_07b4();                    // 07ed call 0x7b4
  ASM_COST(3); SETL(R.ax, AND8((u8)R.ax, 0xe0));               // 07f0 and al, 0xe0
  SUB8((u8)R.ax, 0xc0);                                        // 07f2 cmp al, 0xc0
  if (R.zf) goto L_07f8;                                       // 07f4 je 0x7f8
  ASM_COST(1); if (--R.cx != 0) { ASM_BACK(); goto L_07ed; }   // 07f6 loop 0x7ed
L_07f8:   ASM_COST(4); R.cx = (u16)(R.ax);                             // 07f8 mov cx, ax
  SETH(R.ax, 0x4);                                             // 07fa mov ah, 4
  SETL(R.ax, 0x60);                                            // 07fc mov al, 0x60
  PUSH(0x0801); a_ad15_078c();                                 // 07fe call 0x78c
  ASM_COST(3); SETH(R.ax, 0x4);                                // 0801 mov ah, 4
  SETL(R.ax, 0x80);                                            // 0803 mov al, 0x80
  PUSH(0x0808); a_ad15_078c();                                 // 0805 call 0x78c
  ASM_COST(4); SETL(R.dx, AND8((u8)R.dx, 0xe0));               // 0808 and dl, 0xe0
  SUB8((u8)R.dx, 0x0);                                         // 080b cmp dl, 0
  R.cf = 1;                                                    // 080e stc
  if (!R.zf) goto L_081b;                                      // 080f jne 0x81b
  ASM_COST(4); SETL(R.cx, AND8((u8)R.cx, 0xe0));               // 0811 and cl, 0xe0
  SUB8((u8)R.cx, 0xc0);                                        // 0814 cmp cl, 0xc0
  R.cf = 1;                                                    // 0817 stc
  if (!R.zf) goto L_081b;                                      // 0818 jne 0x81b
  ASM_COST(1); R.cf = 0;                                       // 081a clc
L_081b:   ASM_COST(4); R.dx = POP();                                   // 081b pop dx
  R.cx = POP();                                                // 081c pop cx
  R.ax = POP();                                                // 081d pop ax
  R.sp += 2; goto L_ret;                                       // 081e ret
L_ret:
  return;
}

static u16 f_ad15_07bf(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_07bf();
  ASM_LEAVE(); return (u16)R.ax;
}

// 1000:048B FUN_1000_048b  FIX: recompiled from the machine code (asm2c)
static void a_ad15_048b(void)
{
  R.cs = ad15_seg;
  ASM_COST(15); PUSH(R.ax);                                    // 048b push ax
  PUSH(R.cx);                                                  // 048c push cx
  PUSH(R.dx);                                                  // 048d push dx
  SETL(R.ax, ASM_PORT_IN(0x61));                               // 048e in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfe));                            // 0490 and al, 0xfe
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 0492 out 0x61, al
  SETL(R.ax, 0xb0);                                            // 0494 mov al, 0xb0
  ASM_PORT_OUT(0x43, (u8)R.ax);                                // 0496 out 0x43, al
  SETL(R.ax, XOR8((u8)R.ax, (u8)R.ax));                        // 0498 xor al, al
  ASM_PORT_OUT(0x42, (u8)R.ax);                                // 049a out 0x42, al
  ASM_PORT_OUT(0x42, (u8)R.ax);                                // 049c out 0x42, al
  SETL(R.ax, ASM_PORT_IN(0x61));                               // 049e in al, 0x61
  SETL(R.ax, OR8((u8)R.ax, 0x1));                              // 04a0 or al, 1
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 04a2 out 0x61, al
  R.cx = (u16)(0x3e8);                                         // 04a4 mov cx, 0x3e8
L_04a7:   ASM_COST(2); SETL(R.ax, ASM_PORT_IN(0x61));                  // 04a7 in al, 0x61
  if (--R.cx != 0) { ASM_BACK(); goto L_04a7; }                // 04a9 loop 0x4a7
  ASM_COST(14); SETL(R.ax, ASM_PORT_IN(0x61));                 // 04ab in al, 0x61
  SETL(R.ax, AND8((u8)R.ax, 0xfe));                            // 04ad and al, 0xfe
  ASM_PORT_OUT(0x61, (u8)R.ax);                                // 04af out 0x61, al
  SETL(R.ax, ASM_PORT_IN(0x42));                               // 04b1 in al, 0x42
  { u16 t_ = (u8)(R.ax >> 8); SETH(R.ax, (u8)R.ax); SETL(R.ax, t_); } // 04b3 xchg ah, al
  SETL(R.ax, ASM_PORT_IN(0x42));                               // 04b5 in al, 0x42
  { u16 t_ = (u8)(R.ax >> 8); SETH(R.ax, (u8)R.ax); SETL(R.ax, t_); } // 04b7 xchg ah, al
  R.ax = (u16)(NEG16(R.ax));                                   // 04b9 neg ax
  R.cx = (u16)(R.ax);                                          // 04bb mov cx, ax
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 04bd xor dx, dx
  R.ax = (u16)(0x6d60);                                        // 04bf mov ax, 0x6d60
  DIV16(R.cx, 0x04c2);                                         // 04c2 div cx
  SUB16(R.ax, 0x0);                                            // 04c4 cmp ax, 0
  if (!R.zf) goto L_04cc;                                      // 04c7 jne 0x4cc
  ASM_COST(1); R.ax = (u16)(0x1);                              // 04c9 mov ax, 1
L_04cc:   ASM_COST(6); W16(CS, (u16)(0x923), R.ax);                    // 04cc mov word ptr cs:[0x923], ax
  R.dx = (u16)(XOR16(R.dx, R.dx));                             // 04d0 xor dx, dx
  R.ax = (u16)(0xfa0);                                         // 04d2 mov ax, 0xfa0
  DIV16(R.cx, 0x04d5);                                         // 04d5 div cx
  SUB16(R.ax, 0x0);                                            // 04d7 cmp ax, 0
  if (!R.zf) goto L_04df;                                      // 04da jne 0x4df
  ASM_COST(1); R.ax = (u16)(0x1);                              // 04dc mov ax, 1
L_04df:   ASM_COST(5); W16(CS, (u16)(0x925), R.ax);                    // 04df mov word ptr cs:[0x925], ax
  R.dx = POP();                                                // 04e3 pop dx
  R.cx = POP();                                                // 04e4 pop cx
  R.ax = POP();                                                // 04e5 pop ax
  R.sp += 2; goto L_ret;                                       // 04e6 ret
L_ret:
  return;
}

static u16 f_ad15_048b(void)
{
  ASM_ENTER();
  PUSH(0);  // the return address (near)
  a_ad15_048b();
  ASM_LEAVE(); return (u16)R.ax;
}

// the driver's slots: slot 0 + k runs the k-th entry, with the caller's return address on the stack
void ad15_slot(int slot)
{
  switch (slot)
  {
  case 0: a_ad15_0000(); return;
  case 1: a_ad15_0003(); return;
  case 2: a_ad15_0006(); return;
  case 3: a_ad15_0009(); return;
  case 4: a_ad15_000c(); return;
  case 5: a_ad15_000f(); return;
  case 6: a_ad15_0012(); return;
  case 7: a_ad15_0015(); return;
  case 8: a_ad15_0018(); return;
  case 9: a_ad15_001b(); return;
  case 10: a_ad15_001e(); return;
  case 11: a_ad15_0021(); return;
  case 12: a_ad15_0024(); return;
  case 13: a_ad15_0027(); return;
  case 14: a_ad15_002a(); return;
  case 15: a_ad15_002d(); return;
  case 16: a_ad15_0030(); return;
  case 17: a_ad15_0033(); return;
  case 18: a_ad15_0036(); return;
  case 19: a_ad15_0039(); return;
  case 20: a_ad15_003c(); return;
  default: R.sp += 4; return;  // a slot that is only retf
  }
}

// any routine of the module by its offset (the callbacks it registers with the program)
bool ad15_run(u16 off)
{
  switch (off)
  {
  case 0x0000: a_ad15_0000(); return true;
  case 0x0003: a_ad15_0003(); return true;
  case 0x0006: a_ad15_0006(); return true;
  case 0x0009: a_ad15_0009(); return true;
  case 0x000c: a_ad15_000c(); return true;
  case 0x000f: a_ad15_000f(); return true;
  case 0x0012: a_ad15_0012(); return true;
  case 0x0015: a_ad15_0015(); return true;
  case 0x0018: a_ad15_0018(); return true;
  case 0x001b: a_ad15_001b(); return true;
  case 0x001e: a_ad15_001e(); return true;
  case 0x0021: a_ad15_0021(); return true;
  case 0x0024: a_ad15_0024(); return true;
  case 0x0027: a_ad15_0027(); return true;
  case 0x002a: a_ad15_002a(); return true;
  case 0x002d: a_ad15_002d(); return true;
  case 0x0030: a_ad15_0030(); return true;
  case 0x0033: a_ad15_0033(); return true;
  case 0x0036: a_ad15_0036(); return true;
  case 0x0039: a_ad15_0039(); return true;
  case 0x003c: a_ad15_003c(); return true;
  case 0x003f: a_ad15_003f(); return true;
  case 0x00b7: a_ad15_00b7(); return true;
  case 0x00c6: a_ad15_00c6(); return true;
  case 0x0138: a_ad15_0138(); return true;
  case 0x014e: a_ad15_014e(); return true;
  case 0x02d4: a_ad15_02d4(); return true;
  case 0x03c7: a_ad15_03c7(); return true;
  case 0x03e8: a_ad15_03e8(); return true;
  case 0x048b: a_ad15_048b(); return true;
  case 0x04e7: a_ad15_04e7(); return true;
  case 0x0544: a_ad15_0544(); return true;
  case 0x068a: a_ad15_068a(); return true;
  case 0x06b8: a_ad15_06b8(); return true;
  case 0x06df: a_ad15_06df(); return true;
  case 0x06f5: a_ad15_06f5(); return true;
  case 0x078c: a_ad15_078c(); return true;
  case 0x07b4: a_ad15_07b4(); return true;
  case 0x07bf: a_ad15_07bf(); return true;
  case 0x07c9: a_ad15_07c9(); return true;
  case 0x07d0: a_ad15_07d0(); return true;
  case 0x07d7: a_ad15_07d7(); return true;
  case 0x07da: a_ad15_07da(); return true;
  case 0x07e3: a_ad15_07e3(); return true;
  case 0x0801: a_ad15_0801(); return true;
  case 0x0808: a_ad15_0808(); return true;
  case 0x0967: a_ad15_0967(); return true;
  case 0x096e: a_ad15_096e(); return true;
  case 0x0975: a_ad15_0975(); return true;
  case 0x097c: a_ad15_097c(); return true;
  case 0x099c: a_ad15_099c(); return true;
  case 0x09bb: a_ad15_09bb(); return true;
  case 0x0a59: a_ad15_0a59(); return true;
  case 0x0a5f: a_ad15_0a5f(); return true;
  case 0x0a64: a_ad15_0a64(); return true;
  case 0x0a66: a_ad15_0a66(); return true;
  case 0x0b3e: a_ad15_0b3e(); return true;
  case 0x0b44: a_ad15_0b44(); return true;
  case 0x0b49: a_ad15_0b49(); return true;
  case 0x0b4b: a_ad15_0b4b(); return true;
  case 0x0b5c: a_ad15_0b5c(); return true;
  case 0x0bef: a_ad15_0bef(); return true;
  case 0x0bf5: a_ad15_0bf5(); return true;
  case 0x0bfb: a_ad15_0bfb(); return true;
  case 0x0c01: a_ad15_0c01(); return true;
  case 0x0c07: a_ad15_0c07(); return true;
  case 0x0c0d: a_ad15_0c0d(); return true;
  case 0x0c13: a_ad15_0c13(); return true;
  case 0x0c1d: a_ad15_0c1d(); return true;
  case 0x0c23: a_ad15_0c23(); return true;
  case 0x0c45: a_ad15_0c45(); return true;
  case 0x0c4b: a_ad15_0c4b(); return true;
  default: return false;
  }
}
