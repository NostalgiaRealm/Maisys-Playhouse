#!/usr/bin/env bash
# Exploratory run of every activity at every level and of the three rooms, headless, with pseudo-random
# clicks and drags. Finds crashes and stops; it does not judge whether an activity plays correctly.
#   tools/play-all.sh [seconds] [seed]      results: tools/out/play/<name>.log and screenshots
cd "$(dirname "$0")/.." || exit 1
secs="${1:-420}"; seed="${2:-7}"
out=tools/out/play; mkdir -p "$out"
declare -A ACT=( [GIN]="225,160" [WIN]="415,160" [HID]="225,245" [MES]="320,245" [TRA]="415,245" [DRA]="225,330" [OUT]="415,330" )
declare -A LV=( [1]=163 [2]=247 [3]=332 )
run() { # name clicks
  node tools/run-headless.mjs --quiet --fresh x --out "$out" --prefix "$1" --seconds "$secs" --clicks "$2" \
    --monkey "100000,$((secs*1000-2000)),1500,$seed" --shots "95,$((secs/2)),$((secs-1))" > "$out/$1.log" 2>&1
}
for a in "${!ACT[@]}"; do for l in 1 2 3; do
  run "$a-LV$l" "22000,320,330;33000,592,45;47000,383,${LV[$l]};56000,45,45;64000,${ACT[$a]}" &
done; done
for d in "bedroom:110,250" "bathroom:320,250" "kitchen:530,250"; do
  run "PLA-${d%%:*}" "22000,320,330;33000,${d##*:}" &
done
wait
for f in "$out"/*.log; do
  n=$(basename "$f" .log)
  if grep -q "^ERROR" "$f"; then echo "$n: $(grep -m1 '^ERROR' "$f" | cut -c1-150)"; grep -m3 "    at " "$f" | cut -c1-110
  elif grep -q "game exited" "$f"; then echo "$n: exited early ($(grep -m1 'game exited' "$f"))"
  else echo "$n: ok $(grep -o 'heap in use [0-9.]* MB' "$f") $(grep -c MessageBox "$f") msgbox"; fi
done
