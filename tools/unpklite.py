#!/usr/bin/env python3
"""Unpack a PKLITE 1.12 compressed MZ executable into a plain MZ file (header, relocations, image).

Bit decoding follows the OpenTESArena PKLITE specification (as implemented in refkeen/depklite);
header reconstruction follows moddingwiki.shikadi.net/wiki/PKLite.
"""
import struct, sys

def main(src, dst):
    d = open(src, "rb").read()
    h = struct.unpack_from("<14H", d, 0)
    hdrpar = h[4]
    ver = struct.unpack_from("<H", d, 0x1C)[0]
    extra, large = bool(ver & 0x1000), bool(ver & 0x2000)
    print(f"{src}: PKLITE {(ver >> 8) & 0xF}.{ver & 0xFF:02d} extra={extra} large={large}")
    stub = hdrpar * 16
    # the stub: mov ax,.. ; mov dx,.. ; add ax,0 ; cmp ax,[2] ; jae ; sub ; cli ; mov ss,ax ; sti ; sub ; mov es,ax ; push ax ;
    # mov cx,N ; xor di,di ; push di ; mov si,S ; cld ; rep movsw ; retf   -> copies N words from image offset S-0x100
    s = d[stub:stub + 0x60]
    i = s.find(b"\xb9"); cx = struct.unpack_from("<H", s, i + 1)[0]
    j = s.find(b"\xbe", i); si = struct.unpack_from("<H", s, j + 1)[0]
    assert s[j + 3:j + 6] == b"\xfc\xf3\xa5", "unexpected decompressor stub"
    data = (stub + (si - 0x100) + cx * 2 + 15) & ~15   # paragraph aligned
    print(f"  compressed data at file offset {data:#x}")

    pos = [data]
    def byte():
        b = d[pos[0]]; pos[0] += 1; return b
    bits = [struct.unpack_from("<H", d, data)[0], 0]; pos[0] += 2
    def bit():
        v = (bits[0] >> bits[1]) & 1; bits[1] += 1
        if bits[1] == 16:
            bits[1] = 0; lo = byte(); hi = byte(); bits[0] = lo | (hi << 8)
        return v
    # prefix-code tables as (code string -> value); from depklite's bit trees (left=0, right=1)
    def tree_to_codes(tree):
        codes = {}
        def walk(idx, prefix):
            l, r, v = tree[idx]
            if l == 0 and r == 0: codes[prefix] = v; return
            walk(idx + l, prefix + "0"); walk(idx + r, prefix + "1")
        walk(0, "")
        return codes
    ST = lambda l, r: (l, r, -1); LF = lambda v: (0, 0, v)
    t1 = [ST(4,1), ST(1,2), LF(2), LF(3), ST(1,6), ST(1,2), LF(4), ST(1,2), LF(5), LF(6), ST(1,6), ST(1,2), LF(7), ST(1,2), LF(8), LF(9),
          ST(1,6), ST(1,2), LF(10), ST(1,2), LF(11), LF(12), ST(1,6), ST(1,2), LF(25), ST(1,2), LF(13), LF(14), ST(1,6), ST(1,2), LF(15),
          ST(1,2), LF(16), LF(17), ST(1,6), ST(1,2), LF(18), ST(1,2), LF(19), LF(20), ST(1,4), ST(1,2), LF(21), LF(22), ST(1,2), LF(23), LF(24)]
    t2 = [ST(2,1), LF(0), ST(1,12), ST(1,4), ST(1,2), LF(1), LF(2), ST(1,4), ST(1,2), LF(3), LF(4), ST(1,2), LF(5), LF(6), ST(1,18), ST(1,8),
          ST(1,4), ST(1,2), LF(7), LF(8), ST(1,2), LF(9), LF(10), ST(1,4), ST(1,2), LF(11), LF(12), ST(1,2), LF(13), ST(1,2), LF(14), LF(15),
          ST(1,16), ST(1,8), ST(1,4), ST(1,2), LF(16), LF(17), ST(1,2), LF(18), LF(19), ST(1,4), ST(1,2), LF(20), LF(21), ST(1,2), LF(22), LF(23),
          ST(1,8), ST(1,4), ST(1,2), LF(24), LF(25), ST(1,2), LF(26), LF(27), ST(1,4), ST(1,2), LF(28), LF(29), ST(1,2), LF(30), LF(31)]
    c1, c2 = tree_to_codes(t1), tree_to_codes(t2)
    if not large:
        c1 = {"00": 3, "010": 2, "011": 25, "100": 4, "101": 5, "1100": 6, "1101": 7, "1110": 8, "1111": 9}
    def code(codes):
        p = ""
        while p not in codes: p += "1" if bit() else "0"
        return codes[p]

    out = bytearray()
    while True:
        if bit():
            n = code(c1)
            if n == 25:
                b = byte()
                if b == 0xFE: continue
                if b == 0xFF: break
                n = b + (25 if large else 10)
            hi = 0 if n == 2 else code(c2)
            off = byte() | (hi << 8)
            start = len(out) - off
            for k in range(n): out.append(out[start + k])
        else:                      # literal; with the "extra" flag it is XORed with the unread-bit count
            b = byte()
            if extra: b ^= (16 - bits[1]) & 0xFF
            out.append(b)
    print(f"  image: {len(out)} bytes ({len(out):#x}); stream ended at {pos[0]:#x} of {len(d):#x}")

    # relocation table
    relocs = []
    if extra:                      # long mode: 16-bit counts per segment, segments advance by 0x0FFF
        seg = 0
        while True:
            cnt = struct.unpack_from("<H", d, pos[0])[0]; pos[0] += 2
            if cnt == 0xFFFF: break
            for _ in range(cnt):
                off = struct.unpack_from("<H", d, pos[0])[0]; pos[0] += 2
                relocs.append((off, seg))
            seg = (seg + 0x0FFF) & 0xFFFF
    else:                          # short mode
        while True:
            cnt = byte()
            if cnt == 0: break
            seg = struct.unpack_from("<H", d, pos[0])[0]; pos[0] += 2
            for _ in range(cnt):
                off = struct.unpack_from("<H", d, pos[0])[0]; pos[0] += 2
                relocs.append((off, seg))
    ss, sp, cs, ip = struct.unpack_from("<4H", d, pos[0]); pos[0] += 8
    print(f"  {len(relocs)} relocations; footer SS={ss:#x} SP={sp:#x} CS={cs:#x} IP={ip:#x}; {len(d) - pos[0]} bytes trail")

    # with the "extra" flag the original header is not kept: the registers come from the footer, the memory
    # requirement from the packed header (compressed image + its minalloc), maxalloc = all memory
    comp_paras = (len(d) - stub + 15) // 16
    minalloc = max(0, comp_paras + h[5] - (len(out) + 15) // 16)
    maxalloc = 0xFFFF
    rel_bytes = b"".join(struct.pack("<HH", o, s) for o, s in relocs)
    hdr_size = (0x1C + len(rel_bytes) + 15) // 16 * 16
    total = hdr_size + len(out)
    pages = (total + 511) // 512
    lastpage = total % 512
    hdr = struct.pack("<14H", 0x5A4D, lastpage, pages, len(relocs), hdr_size // 16, minalloc, maxalloc, ss, sp, 0, ip, cs, 0x1C, 0)
    exe = hdr + rel_bytes
    exe += b"\0" * (hdr_size - len(exe)) + out
    open(dst, "wb").write(exe)
    print(f"  minalloc={minalloc:#x}; wrote {dst} ({len(exe)} bytes)")

if __name__ == "__main__":
    main(sys.argv[1], sys.argv[2])
