// Cheats (the frontend's menu sets them, game.c applies them at each video frame). Each acts on the game's data at a
// known place and changes nothing while it is off. None of them touches the copy protection (the manual's question).
#ifndef OPEN4DBOXING_CHEATS_H
#define OPEN4DBOXING_CHEATS_H
#include <stdint.h>

typedef struct
{
  int invulnerable;   // the player's boxer (the blue corner's, DS:BA12) keeps full power, defence and health, and stays up
  int oneBlowKills;   // the opponent's boxer (DS:BB06) is held at the brink: any landed punch floors it
} GameCheats;

extern GameCheats game_cheats;

// the function-entry hook (asm_fn_hook): at the fight's own routines (the boxers' AI, 2645:0632) the cheats act on
// the boxers' structures
void cheats_fn(uint32_t addr);
#endif
