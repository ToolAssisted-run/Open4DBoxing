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
source/exe.c unpacks them the same way as it loads them from the floppies' images (the memory, the registers and the
memory wanted identical to loading unpklite.py's files), so the reconstruction starts as the unpacked builds do.

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
and the endurance, 0x4000 when fresh; word 6 (+0C) is set while the boxer is down. 1eb6:2ee2 regenerates them each
step (health below 0x1000 puts the boxer in state 3, wobbling). A punch is resolved by 1eb6:19fa (the attacker's
structure as its first argument, the punch record as the second): a miss returns 0; a hit scales the damage by
2afc:0c44(damage, 0x2200) — a fixed-point multiply (x × y >> 14) — subtracts it from the target's word 8 and, with
the target left below 1, floors it (2afc:4e2c, the knockdown counted by 1eb6:15f0, the referee's count by
1eb6:128c, which needs word 6 clear); then 1eb6:1928 charges the attacker's stamina (word 7) and endurance and counts
the punch in the round statistics (DS:A488 thrown, A48A landed, the opponent's at +0x74).

The three bars under each boxer's name (1000:0494 draws them, smoothed in DS:873E-874A) are D, the health (word 8,
through DS:CF90/CF92), P, the stamina (word 7, through C5E6/C5E8), and O, the endurance against the boxer's own
maximum (1b1d:0036 of word 9 and the boxer record's +14h, through D200/D202). 1eb6:2ee2's step regenerates the
stamina by the health and the health by the endurance, both capped the lower the more endurance is missing, and
drains the endurance the faster the more health is missing (and gives it back 2 a step up to its maximum): a hit
lowers all three in time, and a boxer's own punches (10 endurance each) lower its maximum health a little.

The resolver in full: its first test answers 0 at once while DS:9754 or DS:CF0E is set; 1eb6:1fd8 calls it each
step while a punch reaches out, and it answers 0 while the punch has not arrived (a punch that never arrives costs
its thrower nothing). A blocked punch (2) takes 2afc:0c44(0x700, damage) from the blocker's stamina (1eb6:1e84); one
absorbed by the target's guard answers 1 without damage (1e5c); a landed one takes its damage from the health,
sounds (1000:0efa) and makes the target react (1eb6:087c), or floors it when it leaves the health below 1.
1eb6:0192 adds a quarter of the damage to the round's tallies (DS:CF18, CF1E).

The cheats act through the function-entry hook (cheats.c). *Invulnerable* zeroes the damage's multiply (return
address 1eb6:1cf6, the resolver's frame still in BP, so its first argument tells the attacker) and the block's
(1e90) when the opponent attacks; *untouchable* sets DS:CF0E while the resolver looks at the opponent's punch, so
the punch never arrives; *inexhaustible* puts the player's stamina and endurance back after 1eb6:1928 charged them;
*one-punch knockouts* sets the opponent's health to 0 before the subtraction. What lasts until a function returns
is put back at the first function entry whose stack pointer is above that function's (an interrupt inside it enters
deeper). Measured on the cheats' fight (tests/cheats.plan), the player's three bars through the round: without
cheats D falls below 0 (floored), P to 37% and O to 76%; Invulnerable or Untouchable with Inexhaustible keep all three
at their maximum.

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
  heap end (DS:7928) is 9FFF there and was A000 here: the arena ends at 9FFF now (dosboot_mem_end(): the Tandy's at
  9C00, its video memory above). And a resize (INT 21h/4A) that
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

## The EGA, CGA and Tandy builds (2026-10-20)

The three other programs are the same game with the engine's drawing code for each card; Ghidra (the same scripts) lists
967, 941 and 950 functions in them. Their layout (Ghidra's segments, the image at 1000:0000):

| Build | main | engine | C runtime (crt0) | DGROUP | rand() state | INT 8 / 9 / 16h / 23h handlers | fatal exit |
|---|---|---|---|---|---|---|---|
| 4DBMCGA | 1000-2717 | 2afc | 3337:0012 | 3950 | DS:8472 | 2afc:0ec9 / 193a / 1a48 / 1ab0 | 2afc:00c2 |
| 4DBEGA | 1000-2717 | 2af7 | 38a2:001a | 3e7b | DS:88DE | 2af7:0f33 / 19a4 / 1ab2 / 1b1a | 2af7:00be |
| 4DBCGA | 1000-2717 | 2adc | 34fa:001a | 3ae5 | DS:8B10 | 2adc:0ef3 / 1964 / 1a72 / 1ada | 2adc:00c8 |
| 4DBTDY | 1000-2717 | 2aec | 34a4:001a | 3a8c | DS:8A4C | 2aec:0f37 / 19a8 / 1ab6 / 1b1e | 2aec:00c2 |

(work/find_entries.py finds a build's equivalents of the MCGA build's special entries by the first instructions'
shape; work/core_gen.sh NAME recompiles a build into source/NAME_core.c with its own dispatcher, NAME_dispatch,
the runtime picking one by the program's file.) The EGA engine's blitters (2af7:3c71.., 55aa..) jump through
tables held in locals (`jmp cs:[bx]`): asm2c takes the tables explicitly (ASM2C_TABLES "SEG:OFF=BASE:N+..."); the
engine's fatal exit never returns and the code after a call to it is not walked (ASM2C_NORETURN).

The machines, as DOSBox-X runs them: the EGA (in its 200-line mode 0Dh), the CGA and the Tandy show 262 lines of 57
characters at 894886 characters a second: 59.92 frames a second (19912 PIT ticks), against the VGA's 70.086; the
status register's blanking bit from character 40 and line 200 (the EGA: characters 45-55, its BIOS's CRTC values), the
retrace lines 224-239 (the EGA: 225-228). The CGA machine charges 2.8 us (cycles / 365 = 60 of the 22000 a
millisecond) for every byte read or written in its memory at B800 (VGA_Slow_CGA_Handler) unless fewer than three
times that many cycles are left in the processor's slice, which there ends at every scan line (the card is drawn a
line at a time): the title's dissolve took half the oracle's time without the wait states, twice with them whole,
and matches within a few frames with the free window. The EGA and the Tandy charge nothing. DOSBox's game starts
62.9 frames (1.05 s, the DOS boot) after its frame 0 on these machines (`# bootframes` in the plans). The EGA's
registers read back as FFh on DOSBox-X's EGA (only the VGA's are readable); the game reads 3CEh once.

The video emulation: OpenSamurai's planar VGA (vga.c: write modes 0-2, the bit mask, set/reset, the function, the
latches, read modes 0-1, the sequencer's map mask, the attribute palette) for the EGA, the memory at A000 routed
through it in a planar mode; the CGA's 320x200 modes from B800 (3D8h/3D9h, INT 10h 0Bh) and the Tandy's mode 9
(four banks of 2000h, two pixels a byte, the video array's palette at 3DAh/3DEh) rendered to the same 320x200
indexes with the 16 RGBI colours in the DAC. Oracle captures per machine in the workspace: oracle/w_boot_ega,
w_boot_cga, w_boot_tandy (the intro's frames 200-4000), w_lapse_* (every 100 frames), w_diss*_cga (the title's
dissolve every 5-10 frames), w_rng1000_* (the memory at 150 and 1000).

## The copy protection's tenth question (2026-10-21)

The manual's question picks its boxer with random(9) (1916:0074): rand() / 2 through 2afc:0c44, the fixed-point
multiply, which rounds (bit 13 of the product is added). So the pick is 9 about once in eighteen, one past the
question's two tables of nine (DS:0F90, the answers' pointers; DS:0FA2, the faces' records). The face shown is then
record 0's (the table's next byte is 0: The Champ), and the answer expected is the string at the tenth pointer, the
faces' table's first two bytes read as an address, DS:022F: the end of "Stan Chow" in the credits, "ow". The original
game does this on every build. The EGA build's career meets it in its scenario, which answers "ow".

## Lockstep against the oracle (2026-10-21)

The screenshot comparisons above can only say that a frame looks the same. The lockstep check says the program ran
the same, instruction for instruction. The oracle (DOSBox-X's oracle-run with `--replay LOG --prog 0823 A000`)
counts the program's own instructions (CS in its memory, 0823-9FFF; a repeated string instruction once however
often an interrupt restarts it) and logs, at those counts, everything the program gets from outside: the machine's
memory and registers at its first instruction, every hardware interrupt with all the registers where it found the
program, every port read (runs of the same read coded with their first and last counts), every BIOS and DOS call
with the registers going out and coming back, and the frame ends. The replay variant of the reconstruction
(`-Dreplay=true`, tests/boxreplay) counts its own instructions the same way (asm2c's ASM_I before every instruction),
takes the oracle's start, delivers the oracle's interrupts at the same counts, answers the port reads with the
oracle's values and adopts the registers the oracle's BIOS and DOS answered. Then the two run the same instructions
on the same data, and any difference shows where it starts: an interrupt finding the program at another instruction
or with another register, a port read at another count, a call with other registers, a service answering
otherwise (counted apart), and, at the plan's frames, the 640 KB of memory and the video card's memory, DAC and
palette registers (tools/ramcmp.py, tools/vramcmp.py). The pictures are compared too but only counted: DOSBox-X's
is the frame as its card scanned it out, ours the memory at the frame's end, so a frame the program redraws while
the card shows it differs.

tests/replaycheck.sh runs a scenario (a plan of tests/replay) in both and compares; the plans drive the menus with
the mouse placed in the program's own coordinates (oracle-run's `mpos`) and fight with tools/fightinput.py's
pseudo-random players; a plan may change both machines' memory alike at a frame's end (`pokeboth`: a boxer's health
held at 0, to floor him). Every scenario below is in lockstep from the program's start to its end, with the memory
and the video memory identical at every compared frame, and (tests/callcheck.sh) the memory identical right after
every BIOS and DOS call as well. The 34 scenarios together: 427 billion instructions, 112,237 memory comparisons
(110,643 of them at the calls' ends) and 1,594 of the video memory, none different.

| Scenario | Build | What it covers | Instructions |
|---|---|---|---|
| intro | MCGA | the intro, the title | 1.2 G |
| demo | MCGA | DEMO: ten rounds, the camera views, the round statistics, a unanimous decision, the credits, the next demo fight | 21.8 G |
| fight-human | MCGA | options (3 rounds of 1 minute), the boxers browsed, the manual's question, a human on the keypad against the computer, DECISION, the verdict, the newspaper | 9.4 G |
| fight-2p | MCGA | two humans (keyboard 1 and keyboard 2), the same course | 9.3 G |
| panels | MCGA | the round's CONTROLS: the master panel's point of view (both boxers' eyes, the TV camera), view options (camera placing, the nine-camera view), rendering details, statistics, the system panel (defaults saved, loaded, reset; effects and music), Esc in the round, Ctrl+P | 8.9 G |
| options | MCGA | every option's every value (rounds, length, lbs/kg, simulation, the devices), VER, then a computer-against-computer exhibition under them | 10.4 G |
| gym | MCGA | a boxer created (name, every slider, the hand), exported to A: and B: (no such drives), import, the Hall of Fame cleared, deleting (declined, done), a duplicate name refused | 5.0 G |
| career | MCGA | a boxer created in the Gym, the Main Event: the select screen, the challenge board, a challenge, the training amounts, the question, two Main Event fights of 3-minute rounds and the panels between their rounds (view options, camera placing, the instant replay, the system panel's save, load and reset, point of view, rendering) | 45.3 G |
| copy-wrong | MCGA | the manual's question answered wrong three times: the program ends | 2.4 G |
| exit | MCGA | Ctrl+X and Ctrl+Q declined, EXIT accepted: the program ends | 1.8 G |
| joystick | MCGA | the joystick plugged in and chosen for the blue boxer, its calibration (two corners, the centre, a button), an exhibition fought on the stick (punches on its second button) to the newspaper | 7.2 G |
| machine-ega / -cga / -tandy | EGA, CGA, Tandy | each build on its DOSBox-X machine: the intro, the title, the DEMO fight | 13.1 G, 12.0 G, 13.3 G |
| driver-adlib / -soundblaster / -mt32 | MCGA | the intro and the DEMO fight with each sound driver (AdLib, Sound Blaster, MPU-401) | 10.7 G, 10.8 G, 10.9 G |
| knockdowns | MCGA | fight-human's exhibition with health pokes: the human floored in round 1 and counted, the computer's boxer at the end of round 2 (saved by the bell) | 9.3 G |
| tko | MCGA | the DEMO with the red boxer's health held at 0 through round 1: floored again and again, the fight stopped (TKO at 0:53 in the 1st round), the TKO newspaper, the credits, the next DEMO | 6.6 G |
| ega- / cga- / tandy-fight-human | EGA, CGA, Tandy | fight-human on each build (tools/planfor.py: the frames scaled to their 59.92 Hz, the manual's question answered as each build asks it) | 9.7 G, 9.2 G, 9.9 G |
| ega- / cga- / tandy-gym | EGA, CGA, Tandy | the Gym's course on each build | 5.4 G, 4.9 G, 5.4 G |
| ega- / cga- / tandy-panels | EGA, CGA, Tandy | the round's panels on each build | 9.4 G, 8.5 G, 9.4 G |
| ega- / cga- / tandy-options | EGA, CGA, Tandy | every option, then a computer exhibition, on each build | 11.2 G, 10.3 G, 12.0 G |
| ega- / cga- / tandy-career | EGA, CGA, Tandy | the Main Event on each build (the CGA's takes another course after its first fight: the Hall of Fame with the new boxer, a fight against The Champ, then GAME OPTIONS at the joystick's calibration) | 44.1 G, 21.3 G, 47.3 G |

What the check found and what was changed:

- The recompiler merged `push cs` with the near call after it into one far call that pushed both words at the call:
  an interrupt between the two found the stack two bytes higher than on the machine (the DEMO's sound driver did it
  every few seconds; the stack's old contents then differed and, once, a return went to 0000:0000). The push now
  happens at its own instruction (about 1000 such pairs in each build and a few in each driver).
- The EGA engine's third blitter table (2af7:5be6) has 32 entries, not 24: the eight more were never recompiled (an
  index out of range in the DEMO at 1.48 G instructions); with them about 7000 more lines of the EGA program run.
- The BIOS's hardware interrupt handlers, when the program chains to one (the MT-32 driver: pushf, cli, a far call
  to the IRQ's old vector), return the flags the program pushed, as their iret does; ours' emulation kept the flags
  of the call (interrupts off), so the driver ran on with them otherwise.
- DOSBox-X's FAT drive (the oracle's C:, a disk image) dates a file from inside DOS: when it creates a new file and
  when it closes one written to, it asks its own DOS for the date and the time (INT 21h 2Ah and 2Ch, and for the
  time the BIOS's INT 1Ah) with real int instructions on the caller's stack, below the handler's frame. Their
  frames, the registers DOS saves for each call, and the push of 2Ch's delay loop stay below the stack pointer, and
  the PSP's pointer to the saved registers (PSP:2Eh) ends 24 bytes below the handler's stack pointer instead of 18.
  The career showed it: after the system panel's save the pointer stayed different through a whole fight. Ours now
  leaves the same 24 bytes and pointer (dos.c's fat_date_stamp), on every machine: the int instructions DOSBox-X
  runs are at F000:DA00 on all four.
- INT 21h 44h (device information) on a console handle: DOSBox-X's console asks the BIOS whether a key waits (INT
  16h 11h, 01h on the CGA and the Tandy) from inside the call, and that int's frame stays below the handler's: its
  return F000:DA86 and the caller's flags, interrupts on, ZF set when no key waits. INT 21h 4Ah that cannot grow a
  block so far still grows it as far as it can (the free block after it joined: the program's block became the
  last one), then answers that size. INT 10h 0Bh changes the colour select's copy in the BIOS's data (0040:0066) as
  DOSBox-X's BIOS does (the background its low five bits, the palette bit 5), and the card's registers from it.
- Jump tables the recompiler had too short, found when the other builds ran the Gym and the career: the EGA
  blitter's third family of entry points (2af7:7730 to 77d0, six of them) jumps through a table at 2af7:77f0 of 16
  routines the recompiler did not know (the Gym's boxer drew through it: an index out of range at 2af7:5939); the CGA
  and Tandy blitters' table after 2adc:8b97 and 2aec:854f has 8 entries, of which 4 and 2 were recompiled (the career
  reached the others). A check of every computed jump's table in the four programs (its words up to the first that is
  not an address in its code) found one more: the C library's raise() (3337:16b1 and its copies) has 6 entries, the
  signals' default actions, of which 2 were recompiled. All are declared in the workspace's work/core_gen.sh now.
- Two pointer-called routines of the MCGA build were missing: the exit handler that restores the interrupt
  controller (2afc:18e5, every exit to DOS) and the critical error handler (2afc:0940). The other builds had them.
- Flags: DOSBox-X's undefined flags are now ours' (AND/OR/XOR/TEST clear AF, shifts set it, rotates set OF, MUL and
  IMUL set ZF/SF/PF as DOSBox-X does, division sets its own ZF/CF/PF), so a flags word pushed by an interrupt or a
  BIOS call is the same.
- Services: INT 10h 0Fh answers the mode's columns; INT 16h 01h leaves AX alone without a key and sets IF (as
  DOSBox-X's), INT 1Ah sets IF; INT 15h C201 (the PS/2 mouse's reset) answers as DOSBox-X's BIOS (the game then uses
  INT 33h, which reports three buttons); INT 21h 3Eh answers the handle's count of users in AL. DOS's files: a drive
  that is not there is "path not found" (3), a find that matches nothing "no more files" (18), the attributes of a
  missing file "file not found"; and the handles are DOSBox-X's: the PSP's table of 20 (PSP:18h) into a file table
  whose first entries are AUX, CON and PRN shared with the shell (CON's count 6), so that a close of handle 0 (the
  Gym's export does it) answers 6, a second close fails, and the next file opened gets handle 0.
- Memory: DOS's memory control blocks are written as DOSBox-X writes them (the program's name in a block split for
  it), the environment's block and the upper memory's link block (9FFF) as at its start; a mode set writes the
  BIOS's video data (0040:0049-0066, 0084-008A) as DOSBox-X's BIOS does on each machine; a BIOS or DOS call leaves
  its interrupt frame below the stack pointer, with the flags the service returned in it, and DOS's INT 21h saves
  the caller's registers below it and their address in the PSP (DOSBox-X's DOS_21Handler); the BIOS's timer
  handler's pushes and its call of INT 1Ch, the PS/2 mouse handler's (IRQ 12) pushes and the floppy motor's
  countdown (0040:0040) are DOSBox-X's; the entry address stays below the stack as EXEC leaves it.
- The machines: DOSBox-X's vectors, BIOS data and memory end differ by machine (its BIOS's handlers are elsewhere
  on each, the Tandy has 624 KB); dosboot_machines.h has each machine's, generated from the oracle's start
  (the workspace's work/gen_bootstate.py), so a chained BIOS handler is recognised on every build. The Tandy's video
  memory is its own RAM: the processor's window at B800 is the 16 KB bank its page register (3DFh) picks at 80000h +
  bank × 16 KB (32 KB at 98000h in mode 9, as the BIOS's mode set programs it), and the screen is drawn from the
  display bank there.

Memory at instruction counts: oracle-run's `ramat POS PATH` (chimera-core-dosbox-x's tracer) and the replay take the
640 KB after POS of the program's instructions, at the same point on both (after the excursion of the last of
them; at an interrupt taken there, before it; never where DOSBox-X's core broke a string instruction to resume it
later, a point the replay does not know). The frame dumps miss what the program overwrites before the next one, most
of the stack below SP; tests/callcheck.sh dumps both machines after every BIOS and DOS call of a scenario (of the
mouse driver's and the BIOS timer chain's, which are millions, about a thousand each, spread evenly). That check found
the date stamp's bytes, the console's INT 16h frame, the failed resize's block and the colour select's copy above,
and a dump at a single count shows any difference down to the instruction that made it.

What the scenarios ran (tools/coverage.py over the replays' maps of the instructions that ran, OPEN4DBOXING_COVERAGE):

| Program | Instructions run | Of |
|---|---|---|
| 4DBMCGA.EXE (16 scenarios) | 54,639 (79.8 %) | 68,492 |
| 4DBEGA.EXE (6) | 78,348 (55.4 %) | 141,356 |
| 4DBCGA.EXE (6) | 53,835 (71.1 %) | 75,750 |
| 4DBTDY.EXE (6) | 56,992 (75.9 %) | 75,049 |
| PC15, AD15, SB15, MT15, TD15.DRV | 75 %, 86 %, 87 %, 70 %, 86 % | 962, 2621, 3913, 1620, 1060 |

What did not run: in the EGA program mostly its blitter, whose every entry point (2af7:3c9a, 3cda, 5673, 7790 and
the others) is recompiled as a function holding the whole shared body (about 3170 instructions, some 1100 of which
the scenarios' masks and modes run); in all the programs the C library's unused parts (raise()'s default actions
among them), windows reached only through pointers that no plan opens (3522:000a and 331f:0000 have no direct
caller), and error paths. A knockout by the count of ten did not happen: the floored boxer always rose before ten
(the pictures every 250 frames show counts up to 7), even with his health and stamina held at 0, and the repeated
knockdowns stopped the fight first (the technical knockout).

Not covered by the check: the joystick's in-between positions (the oracle's stick is DOSBox-X's digital one: full
deflections and the centre); ours' device models (the replay answers
the port reads with the oracle's values, so the program is checked, not ours' VGA status, timer or keyboard
models: the summary counts how often they would have answered otherwise); the sound itself (the drivers' port writes
are the same, the synthesis is not compared); the pictures' timing (above); a knockout by the count; a career's
later seasons (aging and retirement need many fights).
