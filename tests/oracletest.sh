#!/bin/sh
# oracletest.sh BOXRUN MKSCRIPT GAMEDIR PLAN ORACLEDIR [PROGRAM]: the game run headless on the plan's inputs, its
# screenshots compared with the oracle's (DOSBox-X's, in ORACLEDIR, the same names); 0 if every one is identical.
# PROGRAM (4DBEGA.EXE, 4DBCGA.EXE, 4DBTDY.EXE) picks a build other than the MCGA one.
set -e
boxrun=$1; mk=$2; game=$3; plan=$4; oracle=$5
[ -n "$6" ] && export OPEN4DBOXING_PROGRAM=$6
# a "# bootframes N" line in the plan: the oracle's game starts N frames after its boot (OPEN4DBOXING_BOOTFRAMES)
boot=$(sed -n 's/^# *bootframes *//p' "$plan" | head -1)
[ -n "$boot" ] && export OPEN4DBOXING_BOOTFRAMES=$boot
out=$(mktemp -d)
python3 "$mk" ours "$out" < "$plan" > "$out/s.script"
"$boxrun" "$game" "$out/s.script" > "$out/log.txt" 2>&1 || { echo "the run failed:"; tail -3 "$out/log.txt"; exit 1; }
bad=0
for shot in $(grep '^shot' "$plan" | awk '{print $3}'); do
  if cmp -s "$out/$shot.tga" "$oracle/$shot.tga"; then echo "$shot: identical"
  else
    n=$(python3 -c "
a=open('$out/$shot.tga','rb').read()[18:]; b=open('$oracle/$shot.tga','rb').read()[18:]
print(sum(1 for k in range(0,len(a),3) if a[k:k+3]!=b[k:k+3]))" 2>/dev/null || echo "?")
    echo "$shot: $n pixels differ"; bad=1
  fi
done
rm -rf "$out"
exit $bad
