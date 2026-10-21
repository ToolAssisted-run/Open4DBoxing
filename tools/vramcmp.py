#!/usr/bin/env python3
"""vramcmp.py ORACLE OURS MODE: two video dumps (the oracle's and the reconstruction's `vram` at the same frame: u32 size,
the card's memory as DOSBox-X keeps it, the DAC, the attribute palette) compared as the mode MODE (hex, the BIOS data's
0040:0049) shows them: mode 13h the 64 KB the processor sees at A000 (chain-4: linear[(x & ~3) * 4 + x % 4]), the
EGA's planar modes all four planes, the CGA's modes its 16 KB; then the DAC's 256 colours and the 16 palette
registers. Prints what differs; 0 if nothing."""
import sys


def load(path):
    d = open(path, "rb").read()
    n = int.from_bytes(d[:4], "little")
    return d[4:4 + n], d[4 + n:4 + n + 768], d[4 + n + 768:4 + n + 784]


def view(mem, mode):
    if mode == 0x13:
        return bytes(mem[((x & ~3) << 2) + (x & 3)] for x in range(0x10000))
    if mode in (0x0D, 0x0E, 0x10, 0x12):
        return mem[:0x40000]
    return mem[:0x4000]


def main():
    mode = int(sys.argv[3], 16)
    (ma, da, pa), (mb, db, pb) = load(sys.argv[1]), load(sys.argv[2])
    bad = 0
    if mode == 0x09:  # (the Tandy's video memory is the machine's own RAM: the memory dumps compare it)
        va = vb = b""
    else:
        va, vb = view(ma, mode), view(mb, mode)
    diff = [k for k in range(min(len(va), len(vb))) if va[k] != vb[k]]
    if diff:
        bad = 1
        print(f"video memory: {len(diff)} bytes differ (the first at {diff[0]:05X}: oracle {va[diff[0]]:02X} ours {vb[diff[0]]:02X})")
    dd = [k for k in range(256) if da[3 * k:3 * k + 3] != db[3 * k:3 * k + 3]]
    if dd:
        bad = 1
        k = dd[0]
        print(f"DAC: {len(dd)} colours differ (the first {k}: oracle {da[3 * k:3 * k + 3].hex()} ours {db[3 * k:3 * k + 3].hex()})")
    if mode not in (0x04, 0x05, 0x06, 0x13) and pa != pb:  # (the CGA has none; mode 13h does not use them)
        bad = 1
        print(f"palette registers differ: oracle {pa.hex()} ours {pb.hex()}")
    return bad


if __name__ == "__main__":
    sys.exit(main())
