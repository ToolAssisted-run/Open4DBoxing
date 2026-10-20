// The game as DOS runs it: 4DBMCGA.EXE loaded at its original segment, started through its C runtime, with the
// host giving the screen, the clock, the keyboard and the sound (game.c)
#ifndef OPEN4DBOXING_GAME_H
#define OPEN4DBOXING_GAME_H
#include <stdbool.h>
#include <stdint.h>

typedef struct
{
  const char *gameDir;   // the game's files (4DBMCGA.EXE, *.XVS, ...)
  const char *cmdline;   // the command tail (BOX.BAT's: "n pc15.drv d")
  // a video frame has passed (70.086 a second): show the screen (game_screen, game_palette); false ends the game
  bool (*frame)(void *ctx, uint64_t frame);
  // the MT-32's MIDI (the MT15 driver), a byte at a time, with its time in PIT ticks (NULL: not wanted)
  void (*midi)(void *ctx, uint8_t byte, uint64_t t);
  void *ctx;
  uint32_t cycles;  // the machine's speed as DOSBox's cycles: instructions a millisecond (the oracle's 486: 22000)
  // the clock when the game starts: seconds since 1970 in local time (the BIOS's tick count since midnight and DOS's
  // date and time come from it, and run on with the game's own clock)
  int64_t startTime;
  int64_t startTicks;  // and the PIT ticks already gone since that second (the game started mid-second)
  uint64_t idleTicks;  // PIT ticks the machine idles before the program starts (its frames shown; the clocks run)
  const char *writeDir;  // where the game's writes go instead of its folder (NULL: its folder; dos.h)
} GameHost;

// The screen: mode 13h's 320x200 pixels at A000, and the DAC (6-bit components)
const uint8_t *game_screen(void);
const uint8_t (*game_palette(void))[3];
// A key pressed or released: the PC's scan code (set 1; extended: the grey keys, E0-prefixed), as the program's INT 9
// handler reads it from the keyboard port
void game_key(uint8_t scan, bool extended, bool pressed);
// The game's clock: PIT ticks (1193182 a second) so far
uint64_t game_now(void);
// Runs the game; returns its exit code (or -1 when the host's frame callback ended it)
int game_run(const GameHost *host);

enum
{
  GAME_ENV_SEG = 0x07CA,   // the program's environment
  GAME_PSP_SEG = 0x0813,   // its program segment prefix
  GAME_LOAD_SEG = 0x0823,  // its image
  GAME_DS_SEG = 0x3173,    // its data segment (DGROUP)
  GAME_MEM_END = 0x9FFF,   // the DOS memory's end (640 KB) (DOSBox leaves the last paragraph of the 640 KB out: the arena ends at 9FFF)
};
#endif
