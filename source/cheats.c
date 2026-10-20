// The cheats (cheats.h), on the fight's two boxer structures: the player's at DS:BA12, the opponent's at DS:BB06
// (0xF4 bytes each; word 7 the stamina a punch costs its thrower, word 8 the health a landed punch takes from its
// target, 0x4000 each when fresh; word 6 set while the boxer is down).
//
// A punch is resolved by 1eb6:19fa (the attacker's structure its first argument): the damage is scaled by
// 2afc:0c44(damage, 0x2200), a fixed-point multiply, and subtracted from the target's word 8; a target left below 1
// is floored. The hook catches that one multiply (its return address is 1eb6:1cf6, the caller's frame still in BP)
// and sets the target's health just before the subtraction: full for an invulnerable player (no single punch takes
// 0x4000), nothing for an opponent the player knocks out in one blow.
#include "cheats.h"

#include <stdio.h>
#include <stdlib.h>

#include "asm2c.h"
#include "game.h"
#include "types.h"

GameCheats game_cheats;

#define PLAYER 0xBA12
#define OPPONENT 0xBB06
#define HEALTH 0x10   // word 8
#define STAMINA 0x0E  // word 7
#define FULL 0x4000

void cheats_fn(uint32_t addr)
{
  if (addr != 0x2AFC0C44 || game_program_index() != 0) return;  // (the MCGA build's addresses)
  if (!game_cheats.invulnerable && !game_cheats.oneBlowKills) return;
  if (M16(SS, R.sp) != 0x1cf6 || M16(SS, R.sp + 2) != (u16)(0x1eb6 - 0x1000 + GAME_LOAD_SEG)) return;
  u16 attacker = M16(SS, R.bp + 6);
  if (attacker == OPPONENT && game_cheats.invulnerable)
  {
    *P16(PLAYER + HEALTH) = FULL;
    *P16(PLAYER + STAMINA) = FULL;
  }
  if (attacker == PLAYER && game_cheats.oneBlowKills) *P16(OPPONENT + HEALTH) = 0;
  if (getenv("OPEN4DBOXING_CHEATDBG"))
    fprintf(stderr, "cheats: frame %llu: punch by %s lands (target health %d)\n", (unsigned long long)(game_now() / 17025),
            attacker == PLAYER ? "player" : "opponent",
            (i16)*P16((attacker == PLAYER ? OPPONENT : PLAYER) + HEALTH));
}
