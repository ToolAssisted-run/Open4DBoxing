#!/bin/sh
# fighttest.sh BOXRUN MKSCRIPT GAMEDIR PLAN CHEAT WHO HEALTH: the fight of PLAN run with the cheat on and
# OPEN4DBOXING_CHEATDBG logging each landed punch with the target's health as the cheat left it; passes when WHO
# (player or opponent) lands at least one punch and every one of them finds the target's health at HEALTH (or any,
# with HEALTH = any)
set -e
boxrun=$1; mk=$2; game=$3; plan=$4; cheat=$5; who=$6; health=$7
out=$(mktemp -d)
python3 "$mk" ours "$out" < "$plan" > "$out/s.script"
OPEN4DBOXING_CHEATDBG=1 OPEN4DBOXING_CHEATS=$cheat "$boxrun" "$game" "$out/s.script" > "$out/log.txt" 2>&1 \
  || { echo "the run failed:"; tail -3 "$out/log.txt"; rm -rf "$out"; exit 1; }
n=$(grep -c "punch by $who lands" "$out/log.txt" || true)
if [ "$health" = any ]; then wrong=0
else wrong=$(grep "punch by $who lands" "$out/log.txt" | grep -vc "target health $health)" || true); fi
rm -rf "$out"
if [ "$n" -gt 0 ] && [ "$wrong" -eq 0 ]; then echo "$n punches by the $who landed, each as wanted"; exit 0; fi
echo "$n punches by the $who landed, $wrong not as wanted"; exit 1
