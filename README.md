# Open4DBoxing

Open4DBoxing is an unofficial reconstruction of *4D Sports Boxing* (Distinctive Software, DOS, 1991).

It is written in C and rebuilt from the original program, the way [SDLPoP2](https://github.com/ToolAssisted-run/SDLPoP2) was for Prince of Persia 2 and [OpenSamurai](https://github.com/ToolAssisted-run/OpenSamurai) for Sword of the Samurai. It plays the original game's data files, so you need your own copy of the game.

## State

The MCGA/VGA program (`4DBMCGA.EXE`) is recompiled whole from its machine code into C, with the PC speaker sound
driver, on a runtime that gives it the machine it expects: DOS, the BIOS, the timer chip, the VGA's timing, the mouse
driver. It plays in a window (SDL2) with the keyboard, the mouse and the PC speaker. Checked against the real game
running in DOSBox-X: the intro and the title are pixel-identical, and so is the path through the boxer selection and the
manual's question to the ring (the boxers' animation in the fight differs by a few pixels, which is being looked at).

Not there yet: the AdLib, Sound Blaster, Tandy and MT-32 sound drivers; the EGA, CGA and Tandy video programs; the in-game
menu, settings and cheats of the sister projects; Windows builds and releases. See [docs/FINDINGS.md](docs/FINDINGS.md)
for what is known about the original program.

## How to play

```
open4dboxing GAMEDIR
```

`GAMEDIR` holds the game's files (both floppies' contents in one folder). The game's own arguments can follow
(`BOX.BAT`'s are `n pc15.drv d`: no intro skip, the PC speaker driver, and `d`). Alt+Enter toggles full screen.

## Building

```
meson setup build
meson compile -C build
meson test -C build
```

The frontend needs SDL2 (the system's, or built in from `extern/sdl2.wrap`). The tests that compare the game with
DOSBox-X's captures are registered with `-DgameDir=... -DoracleDir=...` (the captures are made with the oracle in the
workspace, outside this repository).

## Where things are

| Path | What |
|---|---|
| `source/box_core.c` | the game, recompiled from `4DBMCGA.EXE`'s machine code (generated; the recompiler lives in the analysis workspace) |
| `source/drv_pc15.c` | the PC speaker driver, recompiled from `PC15.DRV` |
| `source/asm2c.h`, `asm2c.c` | the emulated 8086 the recompiled code runs on: registers, flags, memory, interrupts, ports |
| `source/game.c` | the game as DOS runs it: the program loaded at its original segments, the clock, the keys, the frames |
| `source/dos.c`, `dosmem.c`, `exe.c`, `pit.c` | DOS's files and memory, the executable loader, the timer chip |
| `frontend/main.c` | the SDL2 window: screen, keyboard, mouse, sound |
| `tests/boxrun.c` | the game headless on a script of inputs and screenshots (the oracle's formats) |
| `tests/oracle/*.plan`, `tests/oracletest.sh` | the scenarios compared with DOSBox-X's captures |
| `tools/unpklite.py` | unpacks the PKLITE-compressed original executables (for analysis; the game does not need it) |
| `tools/mkscript.py` | a scenario plan into the runner's or the oracle's script |
| `docs/FINDINGS.md` | everything found about the original program |

## License

Open4DBoxing is free software under the GPL-3.0-or-later (see [LICENSE](LICENSE)). It is an unofficial project, not affiliated with Distinctive Software, Mindscape or Electronic Arts. It contains no game data: you need your own copy of 4D Sports Boxing.
