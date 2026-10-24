// The machine's state, file by file: each file's visitor calls v(data, size, ctx) for each of its variables that a
// running machine changes (the rest are the run's configuration, set alike for every machine, or the sound's
// rendering, which runs between frames). game_state_visit (game.c) visits them all, the megabyte first: the shadow
// machine of the cosmetic camera (camera.c) keeps a machine's whole state with it, its stack aside (fiber.h).
#ifndef OPEN4DBOXING_STATE_H
#define OPEN4DBOXING_STATE_H
#include <stddef.h>

typedef void (*StateVisit)(void *data, size_t size, void *ctx);
void game_state_visit(StateVisit v, void *ctx);
void asm2c_state_visit(StateVisit v, void *ctx);
void dos_state_visit(StateVisit v, void *ctx);
void dosmem_state_visit(StateVisit v, void *ctx);
void pit_state_visit(StateVisit v, void *ctx);
void vga_state_visit(StateVisit v, void *ctx);
void opl_state_visit(StateVisit v, void *ctx);
void sb_state_visit(StateVisit v, void *ctx);
void tandy_state_visit(StateVisit v, void *ctx);
void mpu_state_visit(StateVisit v, void *ctx);
void cheats_state_visit(StateVisit v, void *ctx);
// a machine running unheard (game.c): its sound's events not queued, its MIDI not sent (the cosmetic camera's shadow)
#include <stdbool.h>
extern bool game_quiet;
#define STATE_VISIT(x) v((void *)&(x), sizeof(x), ctx)
#endif
