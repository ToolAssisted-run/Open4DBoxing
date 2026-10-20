#!/bin/sh
# cheatstest.sh BOXRUN MKSCRIPT GAMEDIR PLAN: the fight of PLAN run twice with OPEN4DBOXING_CHEATDBG logging each
# landed punch and the target's health as the cheat left it: with one_blow_kills every punch of the player's that lands
# finds the opponent's health at 0; with invulnerable every punch of the opponent's finds the player's at 0x4000
set -e
boxrun=$1; mk=$2; game=$3; plan=$4
out=$(mktemp -d)
python3 "$mk" ours "$out" < "$plan" > "$out/s.script"
bad=0
for cheat in one_blow_kills invulnerable; do
  OPEN4DBOXING_CHEATDBG=1 OPEN4DBOXING_CHEATS=$cheat "$boxrun" "$game" "$out/s.script" > "$out/$cheat.log" 2>&1 \
    || { echo "the run failed:"; tail -3 "$out/$cheat.log"; exit 1; }
  if [ $cheat = one_blow_kills ]; then who=player; health=0; else who=opponent; health=16384; fi
  n=$(grep -c "punch by $who lands" "$out/$cheat.log" || true)
  wrong=$(grep "punch by $who lands" "$out/$cheat.log" | grep -vc "target health $health)" || true)
  if [ "$n" -gt 0 ] && [ "$wrong" -eq 0 ]; then echo "$cheat: $n punches by the $who landed, each as the cheat wants"
  else echo "$cheat: $n punches by the $who landed, $wrong not as the cheat wants"; bad=1; fi
done
rm -rf "$out"
exit $bad
