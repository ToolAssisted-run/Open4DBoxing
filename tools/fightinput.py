#!/usr/bin/env python3
"""fightinput.py START END SEED SET: plan lines (mkscript.py's press/release) of a boxer driven by a pseudo-random
player from frame START to END. The game throws a punch when the input changes with the punch button held (the
direction then picks the punch) and a defensive move with the other button; directions alone move. So the player:
punches (the punch button held, one to three directions tapped under it), defends (the other button held, a
direction or none), moves (a direction held), waits. SET is the control set: kp (the keypad, Enter, the right Shift:
the game's keyboard 2), kp1 (the same without the right Shift) or qwe (Q W E / A D / Z X C, Tab, the left Shift:
keyboard 1), or joy (the first joystick: joy lines). The same SEED gives the same lines."""
import random
import sys

SETS = {
    "kp": (["kp8", "kp2", "kp4", "kp6", "kp7", "kp9", "kp1", "kp3"], "enter", "rshift"),
    "qwe": (["w", "x", "a", "d", "q", "e", "z", "c"], "tab", "lshift"),
    # (the keypad without its second button: the right Shift also picks the item of a panel the round's start shows)
    "kp1": (["kp8", "kp2", "kp4", "kp6", "kp7", "kp9", "kp1", "kp3"], "enter", None),
}


def events(start, end, seed, name):
    dirs, punch, other = SETS[name]
    r = random.Random(seed)
    t = start
    out = []
    while t < end - 120:
        a = r.random()
        if a < 0.5:  # a punch or a combination: the button held, directions tapped under it (or none: a straight one)
            out.append((t, "press", punch))
            u = t + r.randint(2, 6)
            for _ in range(r.randint(0, 3)):
                d = r.choice(dirs)
                out.append((u, "press", d)); out.append((u + r.randint(4, 10), "release", d))
                u += r.randint(12, 24)
            out.append((u, "release", punch))
            n = u - t
        elif a < 0.65 and other:  # a defence: the other button held, a direction or none
            d = r.choice(dirs) if r.random() < 0.6 else None
            n = r.randint(15, 40)
            out.append((t, "press", other))
            if d: out.append((t + 3, "press", d)); out.append((t + n - 2, "release", d))
            out.append((t + n, "release", other))
        elif a < 0.9:  # a move
            d = r.choice(dirs)
            n = r.randint(15, 70)
            out.append((t, "press", d)); out.append((t + n, "release", d))
        else:  # nothing
            n = r.randint(20, 60)
        t += n + r.randint(4, 16)
    return out


def joystick(start, end, seed):
    """the first joystick (mkscript.py's joy lines: the stick's X and Y 0-255, 128 the centre, and its buttons): the
    game punches on the port's second button (bit 1) with the stick's direction, defends on the first"""
    r = random.Random(seed)
    dirs = [(128, 0), (128, 255), (0, 128), (255, 128), (0, 0), (255, 0), (0, 255), (255, 255)]
    t, out = start, []
    while t < end - 120:
        a = r.random()
        if a < 0.5:  # punches: the second button held, directions changed under it
            out.append((t, 128, 128, 2))
            u = t + r.randint(2, 6)
            for _ in range(r.randint(0, 3)):
                x, y = r.choice(dirs)
                out.append((u, x, y, 2)); out.append((u + r.randint(4, 10), 128, 128, 2))
                u += r.randint(12, 24)
            out.append((u, 128, 128, 0))
            n = u - t
        elif a < 0.65:  # a defence: the first button, a direction or none
            x, y = r.choice(dirs) if r.random() < 0.6 else (128, 128)
            n = r.randint(15, 40)
            out.append((t, x, y, 1)); out.append((t + n, 128, 128, 0))
        elif a < 0.9:  # a move
            x, y = r.choice(dirs)
            n = r.randint(15, 70)
            out.append((t, x, y, 0)); out.append((t + n, 128, 128, 0))
        else:
            n = r.randint(20, 60)
        t += n + r.randint(4, 16)
    for f, x, y, b in out:
        print(f"joy {f} {x} {y} {b}")


def main():
    start, end, seed, name = int(sys.argv[1]), int(sys.argv[2]), int(sys.argv[3]), sys.argv[4]
    if name == "joy":
        joystick(start, end, seed)
        return
    for f, k, key in sorted(events(start, end, seed, name), key=lambda e: (e[0], e[1] == "press")):
        print(f"{k} {f} {key}")


if __name__ == "__main__":
    main()
