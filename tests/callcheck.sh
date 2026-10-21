#!/bin/bash
# callcheck.sh ORACLE_RUN HDD BOXREPLAY GAMEDIR MKSCRIPT PLAN OUTDIR: a scenario checked as replaycheck.sh checks it,
# with the memory compared also right after every BIOS and DOS call the program makes. The frame dumps miss what the
# program overwrites before the next one (most of the stack below SP: an interrupt's frame, a service's saves); a
# dump at the instruction count where each call returned (oracle-run's ramat, the replay's) does not. The counts
# come from the oracle's log of the plan (replaycheck.sh's run into OUTDIR/plain, made first when there is none);
# of the mouse driver's calls and the BIOS's timer chain (millions) about a thousand each, evenly spread. The plan
# with a ramat at each is run into OUTDIR/calls; its dumps at counts are removed after. 0 when all is the same.
set -u
oracle=$1; hdd=$2; replay=$3; game=$4; mk=$5; plan=$6; out=$7
here=$(dirname "$0")
mkdir -p "$out"
log=$out/plain/o/replay.log.zst
if [ ! -s "$log" ] || [ "$plan" -nt "$log" ]; then
  "$here/replaycheck.sh" "$oracle" "$hdd" "$replay" "$game" "$mk" "$plan" "$out/plain" > "$out/plain.txt" 2>&1
fi
[ -s "$log" ] || { echo "no oracle log in $out/plain"; exit 2; }
calls=$out/calls.plan
grep -v '^end ' "$plan" > "$calls"
# the end of each excursion out of the program (X ... R, nested as the log has them): the count where it returned
mouse=$(zstdcat "$log" | awk '$1 == "X" && $3 ~ /^C[0-9A-F]02:0010$/ { n++ } END { print n + 0 }')
timer=$(zstdcat "$log" | awk '$1 == "X" && $3 == "F000:FEA5" { n++ } END { print n + 0 }')
zstdcat "$log" | awk -v em=$(( mouse / 1000 + 1 )) -v et=$(( timer / 1000 + 1 )) '
  $1 == "X" { st[++d] = $3 }
  $1 == "R" && d > 0 {
    t = st[d--]
    if (t ~ /^C[0-9A-F]02:0010$/) { if (im++ % em) next }
    else if (t == "F000:FEA5") { if (it++ % et) next }
    if ($2 != last) print "ramat " $2 " @x" $2 ".bin"
    last = $2
  }' >> "$calls"
grep '^end ' "$plan" | tail -1 >> "$calls"
echo "calls: $(grep -c '^ramat' "$calls") dumps at counts"
"$here/replaycheck.sh" "$oracle" "$hdd" "$replay" "$game" "$mk" "$calls" "$out/calls"
status=$?
rm -f "$out"/calls/o/x*.bin "$out"/calls/q/x*.bin
exit $status
