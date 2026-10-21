<p align="center">
	<a href="https://github.com/ToolAssisted-run/Open4DBoxing/actions/workflows/ci.yml"><img src="https://github.com/ToolAssisted-run/Open4DBoxing/actions/workflows/ci.yml/badge.svg" alt="CI"></a>
	<a href="https://github.com/ToolAssisted-run/Open4DBoxing/actions/workflows/release.yml"><img src="https://github.com/ToolAssisted-run/Open4DBoxing/actions/workflows/release.yml/badge.svg" alt="Release"></a>
	<a href="https://github.com/ToolAssisted-run/Open4DBoxing/releases/tag/dev"><img src="https://img.shields.io/github/v/release/ToolAssisted-run/Open4DBoxing?include_prereleases&sort=date&label=download&color=2DB3A6" alt="Latest development build"></a>
	<a href="https://github.com/ToolAssisted-run/Open4DBoxing/releases"><img src="https://img.shields.io/github/downloads/ToolAssisted-run/Open4DBoxing/total?label=downloads&color=8A63E8" alt="Downloads"></a>
</p>

# Open4DBoxing

Open4DBoxing is an unofficial reconstruction of *4D Sports Boxing* (Distinctive Software, DOS, 1991).

It is written in C and rebuilt from the original program, the way [SDLPoP2](https://github.com/ToolAssisted-run/SDLPoP2) was for Prince of Persia 2 and [OpenSamurai](https://github.com/ToolAssisted-run/OpenSamurai) for Sword of the Samurai. It plays the original game's data files, so you need your own copy of the game.

## State

All four programs of the game (`4DBMCGA.EXE` for the MCGA/VGA, `4DBEGA.EXE`, `4DBCGA.EXE` and `4DBTDY.EXE` for the
EGA, the CGA and the Tandy 1000) and its five sound drivers are recompiled whole from their machine code into C, on a
runtime that gives them the machine they expect: DOS, the BIOS, the timer chip, the video cards (the VGA's 256
colours, the EGA's planes and latches, the CGA with its wait states, the Tandy's 16 colours) with their timing, the
sound cards, the mouse driver, the game port. The MCGA build is the default; the others are a setting. Checked
against the real game running in DOSBox-X as each machine: the intros and the titles are pixel-identical (a few
frames of a dissolve apart on the EGA and the Tandy), and so is the MCGA build's path through the boxer selection and
the manual's question to the ring (the boxers' animation in the fight differs by its phase, which is being looked at).

F4 opens the in-game menu of the sister projects (settings, cheats, quit); its settings are kept in
`Open4DBoxing.cfg` next to the program, the defaults in `Open4DBoxing.ini`.

See [docs/FINDINGS.md](docs/FINDINGS.md) for what is known about the original program.

## How to play

1. Download the build for your system from the [**latest development build**](https://github.com/ToolAssisted-run/Open4DBoxing/releases/tag/dev): `open4dboxing-windows-x86_64-….zip` or `open4dboxing-linux-x86_64-….tar.gz`, and unpack it into a folder of its own.
2. Put the images of the game's two floppies, `disk1.img` and `disk2.img`, in its `roms` folder (or next to the program). See [Getting the game](#getting-the-game).
3. Start `open4dboxing.exe` (Windows) or `./open4dboxing` (Linux).

The game's files are read from the images, which are never written: what the game saves (the boxers made in the Gym,
the Hall of Fame, a Main Event saved from the system panel, the panel's defaults) goes to the `save` folder next to
the program. From a terminal:

```
open4dboxing [GAMEDIR [ARGS]]
```

`GAMEDIR` is a folder with `disk1.img` and `disk2.img`, or with the floppies' files copied out of them (the game then
saves there, as the original did). `ARGS` are the game's own, as `BOX.BAT` passes them: `n pc15.drv d` (the default: the PC speaker). The sound driver
can be `pc15.drv` (PC speaker), `ad15.drv` (AdLib), `sb15.drv` (Sound Blaster: FM music and the digitised announcer
and crowd), `td15.drv` (Tandy) or `mt15.drv` (Roland MT-32, emulated by Munt; it needs the MT-32's ROMs, see below). Alt+Enter
toggles full screen.

The game asks the manual's question (a boxer's name for a face) before a fight, as the original does; keep the manual
at hand.

### The MT-32's ROMs

The Roland MT-32 needs its two ROMs, a control ROM and a PCM ROM. They are Roland's and not included, so you provide
your own. Put the two files (any names: they are recognized by their contents) in one of these folders, looked at in
this order:

1. the folder named by the `OPEN4DBOXING_MT32ROMS` environment variable;
2. the folder `mt32_roms` in `Open4DBoxing.ini` names;
3. the `roms` folder next to the program (where the game's disks go too);
4. the program's folder.

An original MT-32's ROMs (versions 1.04 to 1.07) are the sound the game was made for; a later MT-32's or a CM-32L's
work too. Without them the sound setting `mt32` plays the Sound Blaster's sound and says where it looked.

## Screenshots

<p>
<img src="docs/screenshots/intro.png" width="32%" alt="The intro">
<img src="docs/screenshots/title.png" width="32%" alt="The title">
<img src="docs/screenshots/select.png" width="32%" alt="Choosing the boxers">
<img src="docs/screenshots/ring.png" width="32%" alt="The ring">
<img src="docs/screenshots/fight.png" width="32%" alt="A fight">
</p>

## Keys

The original game's: the menus take the mouse (and Enter on the title's EXHIBITION). In the ring, any key starts the
round; the blue boxer's control device is set in the game's GAME OPTIONS panel (reached from the ring's CONTROLS
panel). The default is the keyboard's second set: the numeric keypad moves (8 forward, 2 back, 4 and 6 sideways, the
corners diagonally), Enter and the right Shift are the two punch buttons, a button with a direction a punch of that
kind. The first set is the same on Q W E / A D / Z X C with Tab and the left Shift.

A joystick or game controller plugged in is the game's first joystick: choose it for a boxer in GAME OPTIONS (the
title's OPTIONS) and calibrate it there, as the original asks. The game punches with the joystick's second button
and uses the first for the other action; a controller's left stick or D-pad moves, its A punches and its B is the
first button.

Open4DBoxing adds F4 (the menu: the sound driver and its volume, the video card's build, the window, the cheats) and
Alt+Enter (full screen).

The cheats: *Invulnerable* (no punch floors your boxer) and *One-punch knockouts* (any punch of yours that lands
floors the opponent). They change nothing while off, none of them answers the manual's question for you, and they
act on the MCGA build only.

## Building

Open4DBoxing builds with [meson](https://mesonbuild.com). The MT-32 is [Munt](https://github.com/munt/munt)'s
libmt32emu, a git submodule built with CMake (`git submodule update --init`; without it, or with `-Dmt32=disabled`,
the program is built without the MT-32):

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
| `source/dos.c`, `dosmem.c`, `exe.c`, `pit.c` | DOS's files and memory, the executable loader (it unpacks EXEPACK's and PKLITE's), the timer chip |
| `source/disks.c` | the game's two floppies' images: their FAT12 file systems read into memory for DOS |
| `frontend/main.c` | the SDL2 window: screen, keyboard, mouse, sound |
| `tests/boxrun.c` | the game headless on a script of inputs and screenshots (the oracle's formats) |
| `tests/oracle/*.plan`, `tests/oracletest.sh` | the scenarios compared with DOSBox-X's captures |
| `tools/unpklite.py` | unpacks the PKLITE-compressed original executables into files (for analysis; `source/exe.c` unpacks them the same way as it loads them) |
| `tools/mkscript.py` | a scenario plan into the runner's or the oracle's script |
| `tests/replay/*.plan`, `tests/replaycheck.sh`, `source/replay.c` | the lockstep scenarios, their runner, the replay of the oracle's log |
| `tools/ramcmp.py`, `tools/vramcmp.py`, `tools/fightinput.py` | the memory and video comparisons, the scenarios' pseudo-random fighters |
| `tests/callcheck.sh` | a lockstep scenario with the memory compared after every BIOS and DOS call as well |
| `tools/planfor.py`, `tools/coverage.py` | a scenario for the EGA, CGA or Tandy build; how much of each program the replays ran |
| `docs/FINDINGS.md` | everything found about the original program |

## Tests

`meson test -C build` runs the unit tests. With `-DgameDir=DIR -DoracleDir=DIR` (`DIR` the game's: its two floppies'
images, or their files) the scenarios in `tests/oracle` run
the game headless and compare every screenshot with DOSBox-X's capture of the real game at the same frame
(`tests/oracletest.sh`); both scenarios there (the intro, and the way to a fight through the boxer selection and the
manual's question) are identical pixel for pixel.

The lockstep check goes further: with `-Dreplay=true -DgameDir=DIR -DoracleRun=PATH -DoracleHdd=PATH` (DOSBox-X's
oracle-run from [chimera-core-dosbox-x](https://github.com/ToolAssisted-run/chimera-core-dosbox-x) and a disk with
the game in `C:\BOXU`), each scenario of `tests/replay` (`tests/replaycheck.sh`) is played by the oracle, which logs
every interrupt, port read, BIOS and DOS call and frame end at the program's instruction count, and replayed by
`tests/boxreplay` on that log: the reconstruction runs the same instructions, and its memory and video memory are
compared with the real game's at every checked frame; `tests/callcheck.sh` compares the memory right after every
BIOS and DOS call as well. The 34 scenarios (the DEMO's ten rounds, human fights with one and two players and the
joystick, knockdowns and a technical knockout, the fight's panels, every option, the Gym, the Main Event, the copy
protection's wrong answers, the ways out; the EGA, CGA and Tandy builds through the DEMO, a human fight, the panels,
the options, the Gym and the Main Event; the AdLib, Sound Blaster and MT-32 drivers) run in lockstep to their ends,
427 billion instructions, with the memory and the video memory identical at all 113,831 comparisons;
[docs/FINDINGS.md](docs/FINDINGS.md) lists what the checks found and how much of each program they ran.

## License

Open4DBoxing is free software under the GPL-3.0-or-later (see [LICENSE](LICENSE)). It is an unofficial project, not affiliated with Distinctive Software, Mindscape or Electronic Arts. It contains no game data: you need your own copy of 4D Sports Boxing. The copy protection (the manual's question) is kept as it was.

## Credits

- 4D Sports Boxing: Distinctive Software Inc. (Jay MacDonald, Chris Taylor, Rick Friesen and the rest of the team the credits name), published by Mindscape and Electronic Arts.
- The method and the runtime's pieces come from [OpenSamurai](https://github.com/ToolAssisted-run/OpenSamurai) and [SDLPoP2](https://github.com/ToolAssisted-run/SDLPoP2).
- [Munt](https://github.com/munt/munt), by the Munt team (LGPL-2.1-or-later), emulates the Roland MT-32.
- The game's data formats are those of Stunts / 4D Sports Driving, documented by the Stunts community ([wiki.stunts.hu](https://wiki.stunts.hu/wiki/Resource_file_format)); dstien's [stunpack](https://github.com/dstien/stunpack) unpacks them.
- The real game ran in [DOSBox-X](https://dosbox-x.com/) for every comparison.

## Getting the game

4D Sports Boxing is not sold any more; it came on two 720 KB floppies. Open4DBoxing reads the floppies' images,
`disk1.img` and `disk2.img`, and was checked with these:

| File | Size | SHA1 |
|---|---|---|
| `disk1.img` | 737,280 bytes | `5b324abec67baa90a44c04bb9cc82ba50f4fb962` |
| `disk2.img` | 737,280 bytes | `c63aa4787b3a7860ec07b171ad3b47da1a41e58e` |

`sha1sum disk1.img disk2.img` (Linux) or `certutil -hashfile disk1.img SHA1` (Windows) shows an image's SHA1. The
game's programs on the floppies are PKLITE-packed; Open4DBoxing unpacks them as it loads them, as their own start-up
code would.
