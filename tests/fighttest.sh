#!/bin/sh
# fighttest.sh BOXRUN MKSCRIPT GAMEDIR PLAN CHEATS EVENT WANT: the fight of PLAN run with the cheats on and
# OPEN4DBOXING_CHEATDBG logging what they do (cheats.c); passes when the log has at least one line with EVENT
# ("punch by opponent lands", ...) and each of them has WANT as well ("takes 0)", ...; any: whatever)
set -e
boxrun=$1; mk=$2; game=$3; plan=$4; cheats=$5; event=$6; want=$7
out=$(mktemp -d)
python3 "$mk" ours "$out" < "$plan" > "$out/s.script"
OPEN4DBOXING_CHEATDBG=1 OPEN4DBOXING_CHEATS=$cheats "$boxrun" "$game" "$out/s.script" > "$out/log.txt" 2>&1 \
  || { echo "the run failed:"; tail -3 "$out/log.txt"; rm -rf "$out"; exit 1; }
n=$(grep -c "$event" "$out/log.txt" || true)
if [ "$want" = any ]; then wrong=0
else wrong=$(grep "$event" "$out/log.txt" | grep -vcF "$want" || true); fi
rm -rf "$out"
if [ "$n" -gt 0 ] && [ "$wrong" -eq 0 ]; then echo "$n times \"$event\", each as wanted"; exit 0; fi
echo "$n times \"$event\", $wrong not as wanted"; exit 1
