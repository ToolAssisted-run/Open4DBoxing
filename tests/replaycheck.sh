#!/bin/bash
# replaycheck.sh ORACLE_RUN HDD BOXREPLAY GAMEDIR MKSCRIPT PLAN OUTDIR: a scenario checked against the oracle in lockstep.
# The oracle (DOSBox-X's oracle-run of the workspace's chimera-core-dosbox-x, HDD its disk with the game in C:\BOXU)
# plays the plan's inputs and writes the replay log (every hardware interrupt, port read, BIOS and DOS call and frame
# end at the program's instruction count, and the machine at the program's start); the replay variant of the
# reconstruction (BOXREPLAY) runs the same program on that log; every screenshot and memory dump the plan asks for
# is taken by both at the same frame end and compared: the memory (the 640 KB), the video card's memory, DAC and
# palette registers (as the mode shows them), and the pictures (these may differ where the program drew while the
# oracle's card was showing the frame: DOSBox-X's picture is the frame as scanned out, ours' the memory at its end;
# counted, not failed). The plan is mkscript.py's, with these header lines:
#   # build 4DBMCGA|4DBEGA|4DBCGA|4DBTDY   the program (the oracle's machine: VGA, EGA, CGA, Tandy)
#   # args n pc15.drv d                   its command line (the sound driver)
#   # every N                             a screenshot and the memory and video dumps every N frames as well
#   # setting NAME=VALUE                  a machine setting of the oracle's (joystick1Enabled=true)
# The oracle's run is kept in OUTDIR/o (redone when the plan is newer); ours in OUTDIR/q, with the map of the
# instructions that ran (q/coverage.bin, tools/coverage.py's). 0 when all is the same.
set -u
oracle=$1; hdd=$2; replay=$3; game=$4; mk=$5; plan=$6; out=$7
build=$(sed -n 's/^# *build *//p' "$plan" | head -1); build=${build:-4DBMCGA}
args=$(sed -n 's/^# *args *//p' "$plan" | head -1); args=${args:-n pc15.drv d}
every=$(sed -n 's/^# *every *//p' "$plan" | head -1); every=${every:-0}
# "# setting NAME=VALUE" lines: the oracle's machine settings (joystick1Enabled=true for a joystick)
settings=$(sed -n 's/^# *setting *\(.*\)$/--setting \1/p' "$plan" | tr '\n' ' ')
case $build in
  4DBMCGA) setting="" ;;
  4DBEGA) setting="--setting videoCardType=ega" ;;
  4DBCGA) setting="--setting videoCardType=cga" ;;
  4DBTDY) setting="--setting videoCardType=tandy" ;;
  *) echo "unknown build $build"; exit 2 ;;
esac
end=$(awk '$1 == "end" { print $2 }' "$plan" | tail -1)
[ -n "$end" ] || { echo "the plan has no end"; exit 2; }
mkdir -p "$out/o" "$out/q"
# the extra shots and dumps, then both scripts
extra=$(mktemp)
if [ "$every" -gt 0 ]; then
  for ((f = every; f < end; f += every)); do echo "shot $f e$f"; echo "ram $f @e$f.bin"; echo "vram $f @v$f.bin"; done > "$extra"
fi
cat "$plan" "$extra" | python3 "$mk" oracle "$out/o" | sed "s#^\(v*ram\|ramat\) \([0-9]*\) @#\1 \2 $out/o/#" > "$out/o/f.script.new"
cat "$plan" "$extra" | python3 "$mk" ours "$out/q" | sed "s#^\(v*ram\|ramat\) \([0-9]*\) @#\1 \2 $out/q/#" > "$out/q/s.script"
rm -f "$extra"
if [ ! -s "$out/o/replay.log.zst" ] || ! cmp -s "$out/o/f.script.new" "$out/o/f.script" || [ "$plan" -nt "$out/o/replay.log.zst" ]; then
  mv "$out/o/f.script.new" "$out/o/f.script"
  rm -f "$out/o/replay.log.zst"
  start=$(date +%s)
  (cd "$out/o" && "$oracle" --workdir "$out/o" --rom "$hdd" $setting $settings --autoexec c: --autoexec "cd BOXU" \
     --autoexec "$build $args" --script "$out/o/f.script" --events "$out/o/ev.txt" --replay "$out/o/replay.log.zst" \
     --prog 0823 A000 > "$out/o/log.txt" 2>&1)
  rm -f "$out/o/rom"
  echo "oracle: $(( $(date +%s) - start )) s"
else
  rm -f "$out/o/f.script.new"
fi
start=$(date +%s)
rm -f "$out"/q/*.tga "$out"/q/*.bin   # (no dumps of an earlier run compared)
OPEN4DBOXING_PROGRAM=$build.EXE OPEN4DBOXING_ARGS="$args" OPEN4DBOXING_REPLAY="$out/o/replay.log.zst" OPEN4DBOXING_COVERAGE="$out/q/coverage.bin" \
  "$replay" "$game" "$out/q/s.script" > "$out/q/log.txt" 2>&1
status=$?
echo "ours: $(( $(date +%s) - start )) s"
grep '^replay:' "$out/q/log.txt" | head -60
bad=$status
tools=$(dirname "$mk")
# the program's own end (exit to DOS): the oracle's dumps after it are of DOS's prompt, not compared
code=$(sed -n 's/^boxrun: done, exit //p' "$out/q/log.txt" | head -1)
last=$(sed -n 's/^boxrun: the last frame //p' "$out/q/log.txt" | head -1)
if [ -n "$code" ] && [ "$code" -ge 0 ] && [ -n "$last" ]; then echo "the program ended (exit $code) at frame $last"; [ "$status" -eq 1 ] && grep -q 'diverged 0, service answers 0, other [0-9]* ' "$out/q/log.txt" && bad=0; else last=999999999; fi
after() { local f; f=$(echo "$1" | tr -dc 0-9); [ -n "$f" ] && [ "$f" -gt "$last" ]; }
nshot=0; nshotbad=0; nram=0; nrambad=0; nvram=0; nvrambad=0
for f in $(awk '$1 == "shot" { print $3 }' "$out/o/f.script"); do
  b=$(basename "$f")
  after "$(awk -v p="$f" '$1 == "shot" && $3 == p { print $2 }' "$out/o/f.script")" && continue
  nshot=$((nshot + 1))
  if ! cmp -s "$out/o/$b" "$out/q/$b"; then
    nshotbad=$((nshotbad + 1))
    echo "picture $b: $(cmp -l "$out/o/$b" "$out/q/$b" 2>/dev/null | wc -l) bytes differ"
  fi
done
for f in $(awk '$1 == "vram" { print $3 }' "$out/o/f.script"); do
  b=$(basename "$f")
  after "$(awk -v p="$f" '$1 == "vram" && $3 == p { print $2 }' "$out/o/f.script")" && continue
  nvram=$((nvram + 1))
  # the mode as the BIOS's data has it at that frame (the memory dump of the same frame)
  r=$(dirname "$f")/$(echo "$b" | sed 's/^v/e/')
  mode=$(python3 -c "import sys; print('%02X' % open(sys.argv[1], 'rb').read()[0x449])" "$r" 2>/dev/null || echo 13)
  if [ ! -s "$out/q/$b" ]; then nvrambad=$((nvrambad + 1)); bad=1; echo "video $b: ours has none (the run ended before)"; continue; fi
  v=$(python3 "$tools/vramcmp.py" "$out/o/$b" "$out/q/$b" "$mode" 2>&1)
  if [ -n "$v" ]; then nvrambad=$((nvrambad + 1)); bad=1; echo "video $b (mode $mode) differs:"; echo "$v"; fi
done
for f in $(awk '$1 == "ram" { print $3 }' "$out/o/f.script"); do
  b=$(basename "$f")
  after "$(awk -v p="$f" '$1 == "ram" && $3 == p { print $2 }' "$out/o/f.script")" && continue
  nram=$((nram + 1))
  if [ ! -s "$out/q/$b" ]; then nrambad=$((nrambad + 1)); bad=1; echo "memory $b: ours has none (the run ended before)"; continue; fi
  cmp -s "$out/o/$b" "$out/q/$b" && continue
  r=$(python3 "$tools/ramcmp.py" "$out/o/$b" "$out/q/$b" 2>&1)
  if [ -n "$(echo "$r" | grep -E '^(vectors|bios data|program): [1-9]')" ]; then
    nrambad=$((nrambad + 1)); bad=1; echo "memory $b differs:"; echo "$r" | head -12
  elif [ -n "$(echo "$r" | grep -E '^dos: [1-9]')" ]; then
    echo "memory $b: $(echo "$r" | grep '^dos:') (DOS's own)"
  fi
done
# the dumps at instruction counts (ramat): the memory after that many of the program's instructions
for f in $(awk '$1 == "ramat" { print $3 }' "$out/o/f.script"); do
  b=$(basename "$f")
  nram=$((nram + 1))
  if [ ! -s "$out/q/$b" ]; then nrambad=$((nrambad + 1)); bad=1; echo "memory $b: ours has none"; continue; fi
  cmp -s "$out/o/$b" "$out/q/$b" && continue
  r=$(python3 "$tools/ramcmp.py" "$out/o/$b" "$out/q/$b" 2>&1)
  if [ -n "$(echo "$r" | grep -E '^(vectors|bios data|program): [1-9]')" ]; then
    nrambad=$((nrambad + 1)); bad=1; echo "memory $b differs:"; echo "$r" | head -12
  elif [ -n "$(echo "$r" | grep -E '^dos: [1-9]')" ]; then
    echo "memory $b: $(echo "$r" | grep '^dos:') (DOS's own)"
  fi
done
echo "memory: $nram compared, $nrambad differ; video: $nvram compared, $nvrambad differ; pictures: $nshot compared, $nshotbad differ"
exit $bad
