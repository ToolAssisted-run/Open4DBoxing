# 4D Sports Boxing (Distinctive Software, DOS 1991) — findings

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

## Data formats: DSI's Stunts engine

4D Boxing is built on the same in-house engine as Stunts / 4D Sports Driving (1990): the data files are the
Stunts formats documented at https://wiki.stunts.hu/wiki/Resource_file_format and
https://wiki.stunts.hu/wiki/Compression, and dstien's **stunpack** (GPL-2, https://github.com/dstien/stunpack,
copy in tools/stunpack) unpacks every packed file here (work/unp/). The engine library in the EXE is the
"Copyright (C) Unlimited Software Inc. 1989,1990" one (memory manager with named blocks, locateshape/locatesound,
window manager "MCGA WINDOW", timer interrupt routine list, keyboard tables, "%s NOT PACKED FILE").

- Packing: header byte (bit 7 = multi-pass, low bits = pass count; else 1 = RLE, 2 = Huffman) + 24-bit size.
  Packed: all .XVS, .PES, .PKM, .PDA (except COMP.PDA). Not packed: .SPV, .KMS, .SLB, .VCE/.DVC/.DSF/.SFX,
  .DRV, .DAT, .PFN, .PLB.
- Resource container: u32 fileLength, u16 count, count x 4-char id, count x u32 offset (from the data start),
  data. tools/reslist.py lists them.
- Bitmaps (.XVS = VGA shapes, like Stunts' VSH): u16 width, height, centreX, centreY, posX, posY, u8 planar[4],
  then width*height palette indices (planar[2] bit 5 = column-major). tools/xvs2png.py renders them (verified:
  INTRO wrd1 "-FIGHT-" 320x200, PUBLTITL simu "BOXING" logo, BOXER box1 sprites, LOCKERS hed0-9 heads,
  HALLFAME hall). `!cg0`/`!eg0` resources = colour maps for CGA/EGA; .PES = EGA planar shapes.
- Palette: PALETTE.XVS `!pal` and `!pl2`: a 768x1 "bitmap" (16-byte header) of 256 RGB 6-bit triplets.
- Music: .PKM (GE = AdLib/general) and .KMS (PC speaker) = one resource (`thme`, `pcth`...) starting with "HDR1",
  then named tracks `t0s0`... (Stunts' KMS format, undocumented on the wiki).
- Speech/samples .SLB: resources SNAR/ORCH/FIGH... = raw 8-bit samples (crowd, announcer).
- .SPV (ring, not packed): `ring` resource 42286 bytes for DSIRING: the 3D ring scene? .PDA: MOVE/PUNCH/SPEC/
  TRAIN/COMP = int16 triples (motion-capture-style boxer poses: 4D Boxing's "rotoscoped" animation). HEAD*.DAT,
  DICK.DAT, HARRY.DAT, BOXER.DAT = int16 triples too (3D vertex lists; HEAD1 = 720 bytes = 120 triples).
  To be read from the code.

## Reconstruction method (2026-10-20): whole-program recompilation

As OpenSamurai: work/asm2c.py (capstone) recompiles every function of 4DBMCGA.EXE into C over an emulated 8086
(~/Open4DBoxing/source/box_core.c, generated by work/box_gen.sh) and PC15.DRV as a module (work/drv_gen.sh ->
drv_pc15.c). The runtime: asm2c.c (interrupts through the program's own vector table, the BIOS's services at
F000:FE00+n, the C library's int86 trick, the mouse), dos.c, dosmem.c (DOS's arena so that every segment is
DOSBox-X's: PSP 0813, load 0823, DS 3173, the engine's blocks from 4174), pit.c, game.c (time passes at the
program's backward jumps: ticksPerBack PIT ticks each; the timer's interrupts, the keys and the frames come from
that clock). tests/boxrun.c runs it headless with the oracle's script format and writes the oracle's TGA format.
First result: with ticksPerBack 1-2 the intro's frames 600 and 1200 are pixel-identical to the oracle, the title
screen at 4000 differs by 492 pixels.

The engine's memory manager: DS:7e1e table of 0x12-byte slots (name[12], u16 paragraphs, u16 segment, u16 flags:
2 = low block, 1 = high block, 0 = freed), 7e20 current, 7e22 end, 7e24 limit, 792c high water; blocks from the
DOS block it takes at start (4174-9FFF). tools/memslots.py dumps it from a 640 KB RAM image.

## Timing and randomness (2026-10-20)

- The oracle's DOSBox-X: cputype 486, cycles fixed 22000 (waterbox/dosbox-driver.h defaults), the sandbox clock
  2017-05-27 12:44:28 UTC (14:44:28 local: the BIOS tick count at the game's start is about 966180).
- The reconstruction counts instructions (ASM_COST per basic block, a repetition per string op) and converts them at
  the same 22000 a millisecond; the VGA status port's retrace follows the frame (449 lines, vsync at 412-413).
- The C library's rand(): x = x * 0x343FD + 0x269EC3 at DS:8472 (u32), initial 1, never seeded (no srand call);
  the game's randomness comes from how many times rand() ran: the sound-card check (FUN_1916_0002) polls the retrace
  bit of port 3DA until it changes and then calls the beep routine (1916:0074, one rand() each) that many times, so
  the count depends on the VGA phase at start-up (the oracle: 8592 draws by frame 150). Tests align the state with
  `poke FRAME 3173:8472 HEX` in the runner's script.
- The mouse cursor on the title screen sits at a different place than the oracle's (open).

## Verified path (2026-10-20 evening)

work/plan_fight1.txt through work/mkscript.py (ours: boxrun; the oracle: oracle-run): title Enter -> EXHIBITION,
click DONE (blue), click DONE (red), the manual's question answered ("Glump Fistwhistle" for boxer index 3, the
oracle's random state poked into ours at frame 1000), the ring introduction. Frames 15600 and 17000 (the announcer)
are pixel-identical between the reconstruction and DOSBox-X; 19000-26000 (the boxers moving) differ by 2-4K
pixels: the boxers' animation phase (open). The copy-protection table: index -> boxer record (0x88 bytes, from
CHALLENG.DAT: 47 Lars Lugnut, 2 Hammer McGee, 29 Blam Blam, 31 Glump Fistwhistle, 28 Lefty Enright, 19 Weegie
Wonka, 35 Clinch Roberts, 16 Mac the ouch, 43 Butch McKenna); the check is strcmp (case matters), three tries.

## The fight's data and controls (2026-10-20, for the cheats)

The two boxers' structures: the blue corner's (the player's) at DS:BA12, the red corner's at DS:BB06, 0xF4 bytes
each (the game indexes BA12 + boxer × 0xF4). Words 7, 8 and 9 (bytes +0E, +10, +12) are the stamina, the health
and a fatigue, 0x4000 when fresh; word 6 (+0C) is set while the boxer is down. 1eb6:2ee2 regenerates them each
step (health below 0x1000 puts the boxer in state 3, wobbling). A punch is resolved by 1eb6:19fa (the attacker's
structure as its first argument, the punch record as the second): a miss returns 0; a hit scales the damage by
2afc:0c44(damage, 0x2200) — a fixed-point multiply (x × y >> 14) — subtracts it from the target's word 8 and, with
the target left below 1, floors it (2afc:4e2c, the knockdown counted by 1eb6:15f0, the referee's count by
1eb6:128c, which needs word 6 clear); then 1eb6:1928 charges the attacker's stamina (word 7) and fatigue and counts
the punch in the round statistics (DS:A488 thrown, A48A landed, the opponent's at +0x74). The records at DS:873C
(player) and 8744 (opponent), 8 bytes {state, D, P, O}, are only the HUD's smoothed bars.

The cheats hook the multiply at its one call from the resolver (return address 1eb6:1cf6, the resolver's frame
still in BP, so its first argument tells the attacker): the player's health (and stamina) set full before the
subtraction for *invulnerable* (no single punch takes 0x4000), the opponent's health set to 0 for *one-punch
knockouts* when the player's punch lands.

Control devices (25bb:0202 reads them each step into the per-boxer input byte DS:8A40/8A41 through 25bb:0196;
the AI writes a computer boxer's byte in 25bb:0346 through 234a:0012): DS:08D6 is the blue boxer's device, 08D8 the
red's: 1 and 2 the joysticks (2afc:14ca, the game port), 3 the keyboard's first set (2afc:0008: Q W E / A D / Z X C
the eight directions, Tab the button 0x20, left Shift the button 0x10), 4 the second set (2afc:0065: the numeric
keypad 7 8 9 / 4 6 / 1 2 3, Enter 0x20, right Shift 0x10) — the default for the human boxer — and 5 the computer
(25bb:00d6 sets the "computer" flags DS:D20A/D20C from device == 5 at the fight's start). The input byte: bits 1 up,
2 down, 4 right, 8 left (diagonals combined), 0x20 and 0x10 the two buttons. 1eb6:298c turns it into moves and
punches: a button on a change of the byte (a tap, not a hold) and only when the boxer is free starts a punch of the
kind the direction gives. The library's INT 9 handler keeps a key-state table at DS:6D08 indexed by scan code (the
readers above index it); 2afc:1134 reads a second table at DS:6BCE (the same keys) for the camera and the panels.
The GAME OPTIONS panel (113b:319c; icons per boxer: human, joystick 1, joystick 2, keyboard set 1, set 2,
computer; LBS/KG, the simulation's level, rounds, length) is where the devices are chosen; the SYSTEM PANEL's
SAVE DEFAULT writes them. At the ring's CONTROLS panel any key starts the round.

The hit routine's first argument is the attacker's structure; 1eb6:19fa returns 1 for a hit, 2 for a blocked punch
(the block costs the blocker's stamina) and 0 for a miss.

## The game port (2026-10-20, for the joystick)

The joysticks are read at port 201h by 2afc:14ca: a write starts the four axes' one-shots, then the routine polls the
port up to 4000 times counting the iterations until each axis bit (0-3) drops, and takes the counts as the positions
(bits 4-7, low while pressed, are the buttons; 2afc:17bd/17db enable joystick 1/2, 32af:00e4/32bd:000a disable
them). It calibrates itself: the minimum and maximum counts seen (DS:6C40/6C42 for the first axis, 6C4C/6C4E, 6C1C/
6C1E, 6C28/6C2A for the others) give a scale (0x4000 / the range) and the centre band, and the GAME OPTIONS panel's
calibration (113b:3686: "Move joystick to calibrate", "Press button when done") shows the stick in a 3x3 box until a
button is pressed. The reconstruction emulates the port in time: an axis bit stays high for 24.2 us plus 11 ns an ohm
of a 0-100 kOhm potentiometer (29 to 1341 PIT ticks) after the write, the position mapped on that range; without a
joystick the bits stay high and the buttons read released. The title's OPTIONS opens GAME OPTIONS (the panel at
113b:319c): the blue boxer's device icons at 320x200 (102,57) joystick 1, (145,57) joystick 2, (187,57) keyboard set
1, (230,57) set 2, (267,57) computer; the red boxer's row at y 82; DONE at (267,109); the title's EXHIBITION at
(47,181), OPTIONS at (47,195). The joystick's buttons in the input byte: the port's first button (bit 4 low)
gives 0x10, the second (bit 5) 0x20 — and 0x20 is the punch (the keyboard sets' Enter and Tab), 0x10 the other
action (their Shifts): a scripted fight on the port's second button threw 75 punches and landed 63, on the first
none.

## Timing against the oracle, second pass (2026-10-20 evening)

What was found comparing the reconstruction's memory with DOSBox-X's frame by frame (tools/lcgcount.py counts the
random draws between two sampled states; the workspace's dsdiff.py lists the data segment's differences):

- DOSBox-X charges time for every port access (its ISA bus model: an 8-bit transfer 8.5 cycles of the 8.33 MHz
  bus, 1020 ns; 16-bit 660 ns; a write three quarters of a read). The runtime now adds the same (asm_ioCost*,
  from the machine's speed: 22 instructions a byte read at 22000 a millisecond).
- The interrupt flag was not modelled (cli and sti were no-ops) and every elapsed timer period produced an
  interrupt, even inside a handler. Now cli/sti set the flag, an interrupt's entry clears it, iret/popf restore
  it, and a small 8259 keeps requests and in-service bits: a request raised while the last is still waiting is
  lost, as on the machine; a handler is not re-entered before its end-of-interrupt (port 20h, or the BIOS's
  timer and keyboard handlers the game chains to).
- A VGA frame is 449 lines of 800 dots at 25.175 MHz = 17024.6 PIT ticks, not 17025; the frames are now timed
  exactly (frame_tick(n)), the rounding drifted a timer tick in half an hour.
- The oracle's game starts about 73.6 frames after DOSBox boots (DOS loads it): the program's PSP appears
  between frames 68 and 72, its 100 Hz counter (DS:CF4A, the timer handler's) starts at ~84, and its phase
  against the frames, fitted from the counter sampled every frame, puts the start at 73.6. OPEN4DBOXING_BOOTFRAMES
  takes a fraction now (the machine idles that long before the program starts); with 73.6 the counter and the
  BIOS tick count match the oracle's at every sampled frame, and the counter's phase pattern frame by frame too.
- DOSBox's DOS arena ends at paragraph 9FFF (the last paragraph of the 640 KB is not given out); the game's
  heap end (DS:7928) is 9FFF there and was A000 here: GAME_MEM_END is 9FFF now. And a resize (INT 21h/4A) that
  cannot be answers with the most the block could grow to (its own size plus the free block after it), not the
  largest free block: the game asks for one paragraph too many, fails, and takes the answer. Now the memory
  layout is identical (the block table at DS:7D9C.., the heap limits).
- With all that, the random state and the game's clocks agree through the title and into the boxer selection
  (frames 1000-8000 with the oracle's state poked at 1000), but the selection screen's shadow-boxing boxers
  take a different decision somewhere in 8025-8050 (the state differs from 8050 on, the AI's draws differ: 12
  against 5 in those 25 frames) and the boxers' poses in the ring afterwards differ by their animation phase
  (3500-6000 pixels at 19000, 1300-2200 at 22000 and 26000; the announcer's frames identical). The input the
  decision depends on is not found: not the clock, not the cursor's position (the oracle's cursor sits at
  134,59 on that screen, ours at 135,65; made equal, nothing changes), not the memory layout. Open.
