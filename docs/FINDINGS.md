# 4D Sports Boxing (Distinctive Software, DOS 1991) — findings

What is known about the original program. (The analysis workspace, oracle captures and game data stay outside the
repository.)

## Game files

Source: gameFiles/002300_4d_sports_boxing.7z = two 720 KB floppies (disk1.img, disk2.img), extracted to
gameFiles/extracted/disk{1,2}. 124 distinct files; the files present on both disks are identical.
`game/` = merged install (as SETUP would produce); `gameU/` = same with the unpacked executables.

| File | What |
|---|---|
| 4DBMCGA.EXE, 4DBEGA.EXE, 4DBCGA.EXE, 4DBTDY.EXE | the game, one build per video mode (MCGA/VGA, EGA, CGA, Tandy). BOX.BAT runs `4dbmcga.exe n pc15.drv d` |
| SETUP.EXE | installer ("4D Boxing Setup Program Version 2.0", default c:\boxing) |
| 4DBEGA.BAT | disk-2 prompt loop for the EGA build |
| PC15/AD15/SB15/TD15/MT15.DRV | sound drivers: PC speaker, AdLib, Sound Blaster, Tandy, MT-32 (MT32.PLB = patch bank) |
| *BOXMS.VCE / *BOXFX.VCE / .DVC / .DSF / .SFX | per-driver music voices / effects |
| GE*.PKM, PC*.KMS | music (GE = general/AdLib-class, PC = speaker): THEME, HEART, HALL, TRAIN |
| GE*/SB*/MT*CROWD.*, GEBOXANN/GEBOXNEW/PCBOXNEW/GECOUNT/GEYEROUT/GEBFIGHT.SLB | digitised speech / crowd samples (SLB) |
| *.XVS, *.PES, *.SPV | graphics (XVS: pictures/screens; PES/SPV pairs: rings DSIRING, LASVEGAS, NEWYORK, PUBLRING, DECIDE) |
| MOVE/PUNCH/SPEC/TRAIN/COMP.PDA | animation / motion data (3D boxer poses?) |
| HEAD1-14.DAT, DICK.DAT, HARRY.DAT, BOXER.DAT, BCDATA1/2.DAT, CHALLENG.DAT | boxer heads, commentators, boxer records |
| *.PFN | fonts; CONFIG1-3.DAT settings; SEVEN20.DAT = "Hello World! HE HE HE HE" (720 KB disk marker) |

## Executables

All five are PKLITE 1.12 with the "extra" flag (the four game builds also "large"). Unpacked by
tools/unpklite.py into unpacked/ (own unpacker; the stream is consumed to the last byte, relocations
rebuilt from the long-mode table, SS/SP/CS/IP from the footer). The unpacked MCGA build boots and plays
the intro identically to the packed one in the oracle (screens byte-identical at frames 200-2000 and 4000;
frame 3000 is a text dissolve one frame apart because the unpacked build skips the decompression time).

Compiler: Microsoft C 5.1 (MS Run-Time Library 1988, same as Sword of the Samurai), crt0 entry
`mov ah,30h / int 21h / cmp al,2`. A second library: "Copyright (C) Unlimited Software Inc. 1989,1990"
(sound/driver library, to confirm).

| Build | image | entry CS:IP | SS:SP | DGROUP (crt0 `mov di,`) | relocs |
|---|---|---|---|---|---|
| 4DBMCGA | 0x31C33 | 2337:0012 | 3672:1388 | 2950 | 3271 |
| 4DBEGA | 0x3734F | 28A2:001A | 3BE3:1388 | 2E7B | 3308 |
| 4DBCGA | 0x33C21 | 24FA:001A | 3870:1388 | 2AE5 | 3312 |
| 4DBTDY | 0x335CD | 24A4:001A | 380B:1388 | 2A8C | 3317 |
| SETUP | 0x390D | 0000:2408 | 0CCE:1F40 | small model | 2 |

## Oracle

~/chimera-oracle/chimera-core-dosbox-x/build/meson-native/oracle-run with oracle/box.hdd
(pop_seed.hdd + fat16put.py game=BOX gameU=BOXU). Boot: `--autoexec 'c:' --autoexec 'cd BOXU'
--autoexec '4dbmcga n pc15.drv d'`. Intro: DSI logo/credits from ~frame 1000, title menu (EXHIBITION,
THE GYM, MAIN EVENT, OPTIONS, DEMO, EXIT) by frame 4000.
