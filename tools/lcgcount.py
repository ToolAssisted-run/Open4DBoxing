#!/usr/bin/env python3
"""lcgcount.py STATES_A STATES_B: two files of "frame hexstate" lines (the MS C rand() state DS:8472, little-endian
bytes as od prints them); for each frame the number of rand() calls since the previous frame in each (the LCG stepped
until the next state matches; ? beyond 200000), and where they differ"""
import sys
def rd(p):
    out=[]
    for l in open(p):
        f,h=l.split(); b=bytes.fromhex(h); out.append((int(f), int.from_bytes(b,'little')))
    return out
def steps(a,b):
    x=a
    for n in range(200001):
        if x==b: return n
        x=(x*0x343FD+0x269EC3)&0xFFFFFFFF
    return None
A=rd(sys.argv[1]); B=rd(sys.argv[2])
for k in range(1,min(len(A),len(B))):
    na=steps(A[k-1][1],A[k][1]); nb=steps(B[k-1][1],B[k][1])
    same = 'same' if A[k][1]==B[k][1] else 'DIFFERENT'
    print(f"{A[k-1][0]}-{A[k][0]}: A {na} draws, B {nb} draws  (state {same})")
