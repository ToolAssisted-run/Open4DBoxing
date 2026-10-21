#!/usr/bin/env python3
"""coverage.py CORE.c MAP.bin...: the instructions of a recompiled program or driver (CORE.c, asm2c's) that ran in
the replays whose maps are given (boxreplay's OPEN4DBOXING_COVERAGE: a byte for each address CS * 16 + IP, 1 where
an instruction ran), joined: the totals, then the functions none of whose instructions ran (the largest first) and
those that ran in part (the most left first), COVERAGE_TOP of each (40); COVERAGE_SHOW=SEG:OFF,... those functions' first. A function's instructions are placed with
the segment it sets (R.cs = ...); a driver's (R.cs = NAME_seg) with the segment its map's .drv file has, map by map
(a map without that driver loaded counts nothing for it)."""
import os
import re
import sys

core, maps = sys.argv[1], sys.argv[2:]
top = int(os.environ.get('COVERAGE_TOP', '40'))
funcs, cur, what = [], None, ''
for line in open(core, encoding='utf-8', errors='replace'):
    m = re.match(r'^// ([0-9a-fA-F]{4}:[0-9a-fA-F]{4}) (\S+)', line)
    if m:
        what = f'{m.group(1)} {m.group(2)}'
        continue
    m = re.match(r'^(?:static )?void (a_\w+)\(void\)\s*$', line)
    if m:
        cur = {'name': m.group(1), 'what': what or m.group(1), 'seg': None, 'offs': []}
        funcs.append(cur)
        what = ''
        continue
    if cur is None:
        continue
    if cur['seg'] is None:
        m = re.search(r'R\.cs = (0x[0-9a-fA-F]+|\w+_seg);', line)
        if m:
            cur['seg'] = m.group(1)
    cur['offs'] += [int(x, 16) for x in re.findall(r'ASM_I\(0x([0-9a-fA-F]+)\)', line)]
loaded = []
for path in maps:
    data = open(path, 'rb').read()
    segs = {}
    if os.path.exists(path + '.drv'):
        for l in open(path + '.drv'):
            p = l.split()
            if len(p) == 2:
                segs[p[0].split('.')[0].lower() + '_seg'] = int(p[1], 16)
    loaded.append((data, segs))
total = ran = 0
full, part, none = [], [], []
for f in funcs:
    if not f['offs'] or f['seg'] is None:
        continue
    hit = [False] * len(f['offs'])
    for data, segs in loaded:
        seg = int(f['seg'], 16) if f['seg'].startswith('0x') else segs.get(f['seg'])
        if seg is None:
            continue
        base = seg << 4
        for i, o in enumerate(f['offs']):
            if not hit[i] and data[base + o]:
                hit[i] = True
    n, k = len(hit), sum(hit)
    total += n
    ran += k
    (full if k == n else none if k == 0 else part).append((f, n, k))
show = [a.strip().lower() for a in os.environ.get('COVERAGE_SHOW', '').split(',') if a.strip()]
for f, n, k in full + part + none:
    if any(f['what'].lower().startswith(a) for a in show):
        print(f'  ({f["what"]}: {k} of {n})')
print(f'{os.path.basename(core)}: {ran} of {total} instructions ran ({100.0 * ran / max(total, 1):.1f} %) in '
      f'{len(maps)} replays; functions: {len(full)} entirely, {len(part)} in part, {len(none)} not at all')
none.sort(key=lambda t: -t[1])
print(f'not run ({sum(t[1] for t in none)} instructions), the largest:')
for f, n, k in none[:top]:
    print(f'  {f["what"]}: {n}')
part.sort(key=lambda t: -(t[1] - t[2]))
print(f'run in part ({sum(t[1] - t[2] for t in part)} instructions left), the most left:')
for f, n, k in part[:top]:
    print(f'  {f["what"]}: {k} of {n}')
