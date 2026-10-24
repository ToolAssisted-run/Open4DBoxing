#!/bin/sh
# cameratest.sh BOXRUN MKSCRIPT GAMEDIR PLAN: the cosmetic camera (camera.h) leaves the game alone. The fight of PLAN
# run twice: as it is, and with the cosmetic camera on from frame 29500 and the cameras' keys (F2, F5, F9) pressed
# from 32000. Passes when the game's memory is the same in both at every check, the pictures the same before the
# keys (the shadow's picture is the game's when their cameras agree) and different after them.
set -e
boxrun=$1; mk=$2; game=$3; plan=$4
out=$(mktemp -d)
python3 "$mk" ours "$out" < "$plan" | grep -v '^end' > "$out/base.script"
checks="31000 33000 35990"
for f in $checks; do echo "ram $f R$f.bin"; echo "shot $f S$f.tga"; done >> "$out/base.script"
mkdir "$out/plain" "$out/camera"
{ cat "$out/base.script"; echo "end 36000"; } > "$out/plain.script"
{ cat "$out/base.script"; printf 'camera 29500 on\ncamkey 32000 f2 1\ncamkey 32005 f2 0\ncamkey 33500 f5 1\ncamkey 33503 f5 0\n'
  printf 'camkey 35000 f9 1\ncamkey 35004 f9 0\nend 36000\n'; } > "$out/camera.script"
for run in plain camera; do
  ( cd "$out/$run" && "$boxrun" "$game" "../$run.script" > log.txt 2>&1 ) || { echo "the $run run failed:"; tail -3 "$out/$run/log.txt"; rm -rf "$out"; exit 1; }
done
bad=0
for f in $checks; do
  cmp -s "$out/plain/R$f.bin" "$out/camera/R$f.bin" || { echo "frame $f: the game's memory differs"; bad=1; }
done
cmp -s "$out/plain/S31000.tga" "$out/camera/S31000.tga" || { echo "frame 31000: the picture differs (no camera key yet)"; bad=1; }
for f in 33000 35990; do
  cmp -s "$out/plain/S$f.tga" "$out/camera/S$f.tga" && { echo "frame $f: the picture is the game's (a camera chosen)"; bad=1; }
done
rm -rf "$out"
[ $bad -eq 0 ] && echo "the game the same, the cameras shown" && exit 0
exit 1
