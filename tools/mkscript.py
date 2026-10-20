#!/usr/bin/env python3
"""mkscript.py ours|oracle OUTDIR < plan: a script for boxrun (ours) or oracle-run (oracle) from a plan:
  key F NAME          a key tapped at F (held 12 frames)
  type F TEXT...      the text typed from F on, a key every 24 frames (capitals with the left shift), then Enter
  mouse F X Y         the cursor at X,Y (320x200; the oracle's mapping as calibrated on the select screen)
  click F             a left click at F
  shot F NAME         a screenshot OUTDIR/NAME.tga
  poke F SEG:OFF HEX  (ours only) bytes into memory
  ram F PATH          the memory dumped to PATH
  end F"""
import sys
mode, out = sys.argv[1], sys.argv[2]
SHIFT = {"ours": "lshift", "oracle": "leftshift"}[mode]
def key(f, name, down): return f"key {f} {name} {down}"
for line in sys.stdin:
    p = line.split()
    if not p or p[0].startswith('#'): continue
    f = int(p[1]) if len(p) > 1 else 0
    if p[0] == "key": print(key(f, p[2], 1)); print(key(f + 12, p[2], 0))
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
        else: print(f"mouse {f} {int(65 + (x - 135) / 0.26 * 0.26 * 3.85)} {int(y * 600 / 199)}")  # (see NOTES: 0.26 px a unit)
    elif p[0] == "click":
        if mode == "ours": print(f"click {f} left 1"); print(f"click {f + 30} left 0")
        else: print(f"button {f} left 1"); print(f"button {f + 30} left 0")
    elif p[0] == "shot": print(f"shot {f} {out}/{p[2]}.tga")
    elif p[0] == "poke":
        if mode == "ours": print(f"poke {f} {p[2]} {p[3]}")
    elif p[0] == "ram": print(f"ram {f} {p[2]}")   # (the oracle's and ours take the same line)
    elif p[0] == "joy": print(f"joy {f} {p[2]} {p[3]} {p[4] if len(p) > 4 else 0}" if mode == "ours" else f"# joy {f} (ours only)")
    elif p[0] == "end": print(f"end {f}")
