// The stack the program runs on (fiber.h). Nothing is threaded: a switch keeps exactly what the platform's calling
// convention says a callee must preserve on the stack being left, and stores that stack's pointer; everything the
// suspended program holds is on its own stack, from that pointer to the top. (The switch of the Chimera core's
// coro.c, and of the SDLPoP2 core's before it; on Windows the Win64 convention's registers too, and the thread's
// stack bounds, which its unwinder checks a longjmp's target against.)
#include <stdint.h>
#include <stdlib.h>

#include "fiber.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <sys/mman.h>
#ifndef MAP_STACK
#define MAP_STACK 0x20000
#endif
#endif

struct Fiber
{
  void *sp;        // where the fiber resumes
  void *callerSp;  // where its resumer resumes
  void (*fn)(void);
  void *base;
  size_t size;
};

#ifdef _WIN32
// rbp rbx rdi rsi r12-r15, the thread's stack bounds (its base, its limit, its allocation), then xmm6-xmm15 and the
// control words in 176 bytes
__asm__(
    ".text\n"
    ".globl o4b_fiber_switch\n"
    "o4b_fiber_switch:\n"  // void o4b_fiber_switch(void **saveSp, void *loadSp)
    "  pushq %rbp\n"
    "  pushq %rbx\n"
    "  pushq %rdi\n"
    "  pushq %rsi\n"
    "  pushq %r12\n"
    "  pushq %r13\n"
    "  pushq %r14\n"
    "  pushq %r15\n"
    "  pushq %gs:0x1478\n"
    "  pushq %gs:0x10\n"
    "  pushq %gs:0x08\n"
    "  subq $176, %rsp\n"
    "  movaps %xmm6, 0(%rsp)\n"
    "  movaps %xmm7, 16(%rsp)\n"
    "  movaps %xmm8, 32(%rsp)\n"
    "  movaps %xmm9, 48(%rsp)\n"
    "  movaps %xmm10, 64(%rsp)\n"
    "  movaps %xmm11, 80(%rsp)\n"
    "  movaps %xmm12, 96(%rsp)\n"
    "  movaps %xmm13, 112(%rsp)\n"
    "  movaps %xmm14, 128(%rsp)\n"
    "  movaps %xmm15, 144(%rsp)\n"
    "  stmxcsr 160(%rsp)\n"
    "  fnstcw 164(%rsp)\n"
    "  movq %rsp, (%rcx)\n"
    "  movq %rdx, %rsp\n"
    "  movaps 0(%rsp), %xmm6\n"
    "  movaps 16(%rsp), %xmm7\n"
    "  movaps 32(%rsp), %xmm8\n"
    "  movaps 48(%rsp), %xmm9\n"
    "  movaps 64(%rsp), %xmm10\n"
    "  movaps 80(%rsp), %xmm11\n"
    "  movaps 96(%rsp), %xmm12\n"
    "  movaps 112(%rsp), %xmm13\n"
    "  movaps 128(%rsp), %xmm14\n"
    "  movaps 144(%rsp), %xmm15\n"
    "  ldmxcsr 160(%rsp)\n"
    "  fldcw 164(%rsp)\n"
    "  addq $176, %rsp\n"
    "  popq %gs:0x08\n"
    "  popq %gs:0x10\n"
    "  popq %gs:0x1478\n"
    "  popq %r15\n"
    "  popq %r14\n"
    "  popq %r13\n"
    "  popq %r12\n"
    "  popq %rsi\n"
    "  popq %rdi\n"
    "  popq %rbx\n"
    "  popq %rbp\n"
    "  ret\n"
    "\n"
    ".globl o4b_fiber_boot\n"
    "o4b_fiber_boot:\n"  // the first switch into a new stack returns here
    "  andq $-16, %rsp\n"
    "  subq $32, %rsp\n"
    "  call o4b_fiber_entry\n"
    "  ud2\n");
#else
// rbp rbx r12-r15, then the control words
__asm__(
    ".text\n"
    ".globl o4b_fiber_switch\n"
    ".type o4b_fiber_switch,@function\n"
    "o4b_fiber_switch:\n"  // void o4b_fiber_switch(void **saveSp, void *loadSp)
    "  pushq %rbp\n"
    "  pushq %rbx\n"
    "  pushq %r12\n"
    "  pushq %r13\n"
    "  pushq %r14\n"
    "  pushq %r15\n"
    "  subq $8, %rsp\n"
    "  stmxcsr (%rsp)\n"
    "  fnstcw 4(%rsp)\n"
    "  movq %rsp, (%rdi)\n"
    "  movq %rsi, %rsp\n"
    "  ldmxcsr (%rsp)\n"
    "  fldcw 4(%rsp)\n"
    "  addq $8, %rsp\n"
    "  popq %r15\n"
    "  popq %r14\n"
    "  popq %r13\n"
    "  popq %r12\n"
    "  popq %rbx\n"
    "  popq %rbp\n"
    "  ret\n"
    ".size o4b_fiber_switch, .-o4b_fiber_switch\n"
    "\n"
    ".globl o4b_fiber_boot\n"
    ".type o4b_fiber_boot,@function\n"
    "o4b_fiber_boot:\n"  // the first switch into a new stack returns here
    "  andq $-16, %rsp\n"
    "  call o4b_fiber_entry\n"
    "  ud2\n"
    ".size o4b_fiber_boot, .-o4b_fiber_boot\n");
#endif
void o4b_fiber_switch(void **saveSp, void *loadSp);
void o4b_fiber_boot(void);

// the fiber being started: the first switch into a stack carries no argument
static Fiber *starting;
void o4b_fiber_entry(void)
{
  Fiber *f = starting;
  f->fn();
  for (;;) fiber_yield(f);  // a finished fiber yields for ever
}

Fiber *fiber_create(void (*fn)(void), size_t stackSize)
{
  Fiber *f = calloc(1, sizeof *f);
  if (!f) return NULL;
  const size_t size = (stackSize + 4095) & ~(size_t)4095;
#ifdef _WIN32
  void *base = VirtualAlloc(NULL, size, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
  if (!base)
#else
  void *base = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_STACK, -1, 0);
  if (base == MAP_FAILED)
#endif
  {
    free(f);
    return NULL;
  }
  f->fn = fn;
  f->base = base;
  f->size = size;
  // a frame the switch can "return" through into o4b_fiber_boot: the saved registers zeroed, the control words the
  // thread's now
  uint64_t *sp = (uint64_t *)((uint8_t *)base + size);
  uint32_t mxcsr = __builtin_ia32_stmxcsr();
  uint16_t fpucw;
  __asm__ volatile("fnstcw %0" : "=m"(fpucw));
#ifdef _WIN32
  *--sp = (uint64_t)(uintptr_t)o4b_fiber_boot;
  for (int k = 0; k < 8; k++) *--sp = 0;
  *--sp = (uint64_t)(uintptr_t)base;                   // the allocation
  *--sp = (uint64_t)(uintptr_t)base;                   // the limit
  *--sp = (uint64_t)(uintptr_t)((uint8_t *)base + size);  // the base (the top)
  sp -= 176 / 8;
  for (int k = 0; k < 176 / 8; k++) sp[k] = 0;
  sp[160 / 8] = (uint64_t)mxcsr | ((uint64_t)fpucw << 32);
#else
  *--sp = 0;
  *--sp = (uint64_t)(uintptr_t)o4b_fiber_boot;
  for (int k = 0; k < 6; k++) *--sp = 0;
  *--sp = (uint64_t)mxcsr | ((uint64_t)fpucw << 32);
#endif
  f->sp = sp;
  return f;
}

void fiber_resume(Fiber *f)
{
  starting = f;
  o4b_fiber_switch(&f->callerSp, f->sp);
}

void fiber_yield(Fiber *f) { o4b_fiber_switch(&f->sp, f->callerSp); }

void fiber_destroy(Fiber *f)
{
  if (!f) return;
#ifdef _WIN32
  VirtualFree(f->base, 0, MEM_RELEASE);
#else
  munmap(f->base, f->size);
#endif
  free(f);
}

void *fiber_sp(const Fiber *f) { return f->sp; }
void fiber_set_sp(Fiber *f, void *sp) { f->sp = sp; }
void *fiber_top(const Fiber *f) { return (uint8_t *)f->base + f->size; }
