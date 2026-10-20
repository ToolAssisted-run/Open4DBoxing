// The cheats (cheats.h), on the fight's live records of the two boxers (the boxer structures at DS:BA12 and BB06, 0xF4
// bytes each, hold copies of them).
#include "cheats.h"

#include "types.h"

GameCheats game_cheats;

// the fight's live records (the structures at BA12/BB06 are copies of them): 8 bytes each, the player's at DS:873C,
// the opponent's at DS:8744: +0 a state, +2 the defence (what punches take away first, the HUD's D), +4 and +6 the
// power and the health (the HUD's P and O), 0x4000 each at a round's start
#define PLAYER 0x873C
#define OPPONENT 0x8744
#define FULL 0x4000

void cheats_fn(uint32_t addr)
{
  if (addr != 0x26450632) return;  // the boxers' AI: a fight is on
  if (game_cheats.invulnerable)
  {
    *P16(PLAYER + 2) = FULL;
    *P16(PLAYER + 4) = FULL;
    *P16(PLAYER + 6) = FULL;
  }
  if (game_cheats.oneBlowKills)
  {
    if (*P16(OPPONENT + 2) > 64) *P16(OPPONENT + 2) = 64;
    if (*P16(OPPONENT + 4) > 64) *P16(OPPONENT + 4) = 64;
    if (*P16(OPPONENT + 6) > 64) *P16(OPPONENT + 6) = 64;
  }
}
