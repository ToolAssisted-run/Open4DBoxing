#!/usr/bin/env python3
"""mkscript.py ours|oracle OUTDIR < plan: a script for boxrun (ours) or oracle-run (oracle) from a plan:
  key F NAME          a key tapped at F (held 12 frames)
  press F NAME, release F NAME, hold F NAME N   a key pressed, released, held N frames (ours' names: lshift,
                      rshift, lctrl, lalt, kp0-kp9, a-z, f1-f10, enter, esc, tab, space, ...)
  type F TEXT...      the text typed from F on, a key every 24 frames (capitals with the left shift), then Enter
  mouse F X Y         the cursor at X,Y (320x200; the oracle's mouse driver put at 2X,Y, its virtual coordinates)
  click F             a left click at F
  shot F NAME         a screenshot OUTDIR/NAME.tga
  poke F SEG:OFF HEX  (ours only) bytes into memory
  pokeboth F SEG:OFF HEX   the bytes into both machines' memory at frame F's end (the oracle's poke: the address
                      physical), the same change to both (a replay applies it where the oracle's frame F ended)
  ram F PATH          the memory dumped to PATH
  vram F PATH         the video memory, DAC and attribute palette dumped to PATH
  ramat POS PATH      (a replay) the memory dumped to PATH at the program's instruction count POS
  end F"""
import sys
mode, out = sys.argv[1], sys.argv[2]
SHIFT = {"ours": "lshift", "oracle": "leftshift"}[mode]
# the oracle's names (DOSBox-X's keys) for ours' that differ
ORACLE_KEYS = {"lshift": "leftshift", "rshift": "rightshift", "lctrl": "leftctrl", "lalt": "leftalt"}
def key(f, name, down): return f"key {f} {ORACLE_KEYS.get(name, name) if mode == 'oracle' else name} {down}"
for line in sys.stdin:
    p = line.split()
    if not p or p[0].startswith('#'): continue
    f = int(p[1]) if len(p) > 1 else 0
    if p[0] == "key": print(key(f, p[2], 1)); print(key(f + 12, p[2], 0))
    elif p[0] == "press": print(key(f, p[2], 1))
    elif p[0] == "release": print(key(f, p[2], 0))
    elif p[0] == "hold": print(key(f, p[2], 1)); print(key(f + int(p[3]), p[2], 0))
    elif p[0] == "type":
        t = f
        for ch in " ".join(p[2:]):
            if ch == " ": name = "space"
            elif ch.isupper(): name = ch.lower()
            else: name = ch
            if ch.isupper(): print(key(t, SHIFT, 1))
            print(key(t + 2, name, 1)); print(key(t + 12, name, 0))
            if ch.isupper(): print(key(t + 14, SHIFT, 0))
            t += 24
        print(key(t, "enter", 1)); print(key(t + 12, "enter", 0))
    elif p[0] == "mouse":
        x, y = int(p[2]), int(p[3])
        if mode == "ours": print(f"mouse {f} {x} {y}")
        else: print(f"mpos {f} {2 * x} {y}")  # (the driver's cursor put there: its virtual 640x200 coordinates)
    elif p[0] == "click":
        if mode == "ours": print(f"click {f} left 1"); print(f"click {f + 30} left 0")
        else: print(f"button {f} left 1"); print(f"button {f + 30} left 0")
    elif p[0] == "shot": print(f"shot {f} {out}/{p[2]}.tga")
    elif p[0] == "poke":
        if mode == "ours": print(f"poke {f} {p[2]} {p[3]}")
    elif p[0] == "pokeboth":
        seg, off = (int(x, 16) for x in p[2].split(":"))
        print(f"poke {f} {p[2]} {p[3]}" if mode == "ours" else f"poke {f} {(seg << 4) + off:X} {p[3]}")
    elif p[0] == "ram": print(f"ram {f} {p[2]}")   # (the oracle's and ours take the same line)
    elif p[0] == "vram": print(f"vram {f} {p[2]}")
    elif p[0] == "ramat": print(f"ramat {f} {p[2]}")
    elif p[0] == "joy":
        x, y, b = int(p[2]), int(p[3]), int(p[4]) if len(p) > 4 else 0
        if mode == "ours": print(f"joy {f} {x} {y} {b}")
        else:  # (the oracle's stick is digital: DOSBox-X's -1, 0, 1 an axis)
            d = lambda v: -1 if v < 64 else 1 if v > 192 else 0
            print(f"joy {f} 1 {d(x)} {d(y)} {b}")
    elif p[0] == "end": print(f"end {f}")
