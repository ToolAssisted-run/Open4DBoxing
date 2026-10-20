// Cheats (the frontend's menu sets them; cheats.c applies them through the function-entry hook). Each acts on the
// game's data at a known place and changes nothing while it is off. None of them touches the copy protection (the
// manual's question).
#ifndef OPEN4DBOXING_CHEATS_H
#define OPEN4DBOXING_CHEATS_H
#include <stdint.h>

typedef struct
{
  int invulnerable;   // no punch floors the player's boxer (the blue corner's, DS:BA12): its health and stamina are
                      // full when a punch lands on it
  int oneBlowKills;   // any punch of the player's that lands floors the opponent (DS:BB06)
} GameCheats;

extern GameCheats game_cheats;

// the function-entry hook (asm_fn_hook): the cheats act when a punch lands (the damage's multiply in the punch
// resolver 1eb6:19fa). OPEN4DBOXING_CHEATDBG set in the environment logs each landed punch to stderr.
void cheats_fn(uint32_t addr);
#endif
