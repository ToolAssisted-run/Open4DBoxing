#!/usr/bin/env python3
"""ramcmp.py ORACLE.bin OURS.bin [DS]: two 640 KB memory images (the oracle's and the reconstruction's at the same
frame) compared: the differing bytes counted by region (the interrupt vectors, the BIOS's data, DOS's own memory
below the program's PSP, the program's memory) and the program's differing ranges listed (physical, and as DS:offset
when DS, hex, is given and the range is in that segment's 64 KB)."""
import sys

REGIONS = [("vectors", 0x0000, 0x0400), ("bios data", 0x0400, 0x0500), ("dos", 0x0500, 0x8130), ("program", 0x8130, 0xA0000)]


def main():
    a = open(sys.argv[1], "rb").read()
    b = open(sys.argv[2], "rb").read()
    ds = int(sys.argv[3], 16) if len(sys.argv) > 3 else None
    n = min(len(a), len(b))
    diff = [k for k in range(n) if a[k] != b[k]]
    for name, lo, hi in REGIONS:
        print(f"{name}: {sum(1 for k in diff if lo <= k < hi)} bytes differ")
    ranges = []
    for k in diff:
        if ranges and k <= ranges[-1][1] + 4:
            ranges[-1][1] = k
        else:
            ranges.append([k, k])
    for lo, hi in ranges[:60]:
        where = f"{lo:05X}-{hi:05X}"
        if ds is not None and ds * 16 <= lo < ds * 16 + 0x10000:
            where += f" (DS:{lo - ds * 16:04X})"
        print(f"  {where}: oracle {a[lo:min(hi + 1, lo + 16)].hex()} ours {b[lo:min(hi + 1, lo + 16)].hex()}")
    if len(ranges) > 60:
        print(f"  ... {len(ranges) - 60} more ranges")
    return 1 if diff else 0


if __name__ == "__main__":
    sys.exit(main())
