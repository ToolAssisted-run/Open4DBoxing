#!/bin/sh
# oracletest.sh BOXRUN MKSCRIPT GAMEDIR PLAN ORACLEDIR: the game run headless on the plan's inputs, its screenshots
# compared with the oracle's (DOSBox-X's, in ORACLEDIR, the same names); 0 if every one is identical
set -e
boxrun=$1; mk=$2; game=$3; plan=$4; oracle=$5
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
