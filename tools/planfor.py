#!/usr/bin/env python3
"""planfor.py BUILD PLAN [F=TEXT...] > OUT: an MCGA scenario plan (tests/replay) for another build of the game: BUILD 4DBEGA,
4DBCGA or 4DBTDY (the Tandy's own sound driver). Those machines' frames are the CGA-type cards' 59.92 Hz, not the
VGA's 70.09 Hz, so every frame number after the title's first (4000: the title is up by then on every build, as the
machine plans have it) is scaled by their ratio: the inputs come at the same times of the game's clock after it (the
menus wait for them; the fights' rounds and the typing are timed). The frame dumps stay every N frames. F=TEXT
replaces the text the plan types at its frame F (the manual's question: the build asks for another boxer)."""
import sys

build, path = sys.argv[1], sys.argv[2]
answers = dict(a.split('=', 1) for a in sys.argv[3:])
scale = (14318180.0 / 238944.0) / (25175000.0 / 359200.0)  # 59.92 Hz / 70.09 Hz
ANCHOR = 4000
lines = open(path).read().splitlines()
out, header = [], True
for l in lines:
    p = l.split()
    if header and l.startswith('#'):
        if p[1:2] in (['build'], ['args']):
            continue
        out.append(l)
        continue
    if header:
        out.append(f'# build {build}')
        if build == '4DBTDY':
            out.append('# args n td15.drv d')
        header = False
    if p and p[0] == 'type' and p[1] in answers:
        p = p[:2] + answers[p[1]].split()
    if p and not p[0].startswith('#') and len(p) > 1 and p[1].isdigit():
        f = int(p[1])
        p[1] = str(f if f <= ANCHOR else ANCHOR + round((f - ANCHOR) * scale))
        l = ' '.join(p)
    out.append(l)
first = out[0] if out else ''
print(f'# (tools/planfor.py {build} {path.split("/")[-1]}' + ''.join(f' "{k}={v}"' for k, v in answers.items()) + f': the frames scaled to the {build} machine\'s)')
print('\n'.join(out))
