// The stack the program runs on (fiber.c): game_run runs the DOS program on a stack of its own, which hands control
// back at each video frame, so that the host's frame callback runs outside it and the program's whole state (its
// globals and that stack) can be kept and given back between two frames (camera.c's shadow machine)
#ifndef OPEN4DBOXING_FIBER_H
#define OPEN4DBOXING_FIBER_H
#include <stddef.h>

typedef struct Fiber Fiber;
// fn runs at the first resume; when it returns, the fiber yields for ever
Fiber *fiber_create(void (*fn)(void), size_t stackSize);
void fiber_resume(Fiber *f);  // run f until it yields
void fiber_yield(Fiber *f);   // inside f: back to its resumer
void fiber_destroy(Fiber *f);
// A suspended fiber's stack: where it resumes (everything it holds is from there to the top) and the top
void *fiber_sp(const Fiber *f);
void fiber_set_sp(Fiber *f, void *sp);
void *fiber_top(const Fiber *f);
#endif
