// The cosmetic camera (camera.c): the ring's cameras (the function keys F1-F10) shown without touching the game. The
// game runs as ever, its keys and its own camera untouched; a second machine, the shadow, a copy of it, runs each
// frame after it, given the fight's state the game had at the frame's start and the same keys, plus the cameras'
// keys the host gives it alone, unheard; its picture is the one shown. A movie made without the cameras plays the
// same with them (the MCGA build: the fight's state is its data's).
#ifndef OPEN4DBOXING_CAMERA_H
#define OPEN4DBOXING_CAMERA_H
#include <stdbool.h>
#include <stdint.h>

#include "fiber.h"

// The host's: the cosmetic camera on or off (off by default); a camera's key (0-9: F1-F10) pressed or released, for
// the shadow alone (the host keeps it from the game)
void camera_set(bool on);
bool camera_get(void);
void camera_key(int n, bool pressed);

// game.c's: the run's start (the program's stack, its end's flag, the keyboard's queue); each frame's start and its
// end (the shadow's frame after the game's); a key's byte the host gave the game; the picture to show (NULL: the
// game's own)
void camera_start(Fiber *program, bool *programDone, void (*keyByte)(uint8_t b));
void camera_before_frame(void);
void camera_after_frame(void);
void camera_log_key(uint8_t b);
const uint8_t *camera_screen(void);
const uint8_t (*camera_palette(void))[3];
#endif
