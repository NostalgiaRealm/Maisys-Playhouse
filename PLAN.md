# Plan and status

Updated 2026-11-11.

## Done

1. **Decompilation phase** (`original-game-decompiled/`): 17 unique code-bearing files inventoried; all analysed with Ghidra (15,140 real functions, 15,138 with pseudocode, 2 heuristic fragments assembly-only and explained); `data.mfx` and `data2.mxx` parsed byte for byte (32,925 objects, 4,507 Miniscript programs disassembled, all media extracted); README, LLM_GUIDE, COVERAGE_REPORT written. Completed before any port work.
2. **Recompiler** (`tools/recomp/`): A2's recompiler adapted to seven modules in one relocated address space; 9,850 of 9,938 functions lifted, the rest unreachable CRT math internals.
3. **Host layer** (`source/host/`): KERNEL32, USER32 (windows, MDI, hooks, messages, input), GDI32 (8-bit palette display, DIB blits, regions, text), WINMM (waveOut, mmio), profile/registry, virtual drives with range reads. All 486 imports bound.
4. **Viability proof**, in the Messy Room activity: original data loaded through the recompiled player, plug-ins initialised, scene shown, real clicks processed by original logic, PCM sound produced, worker yields and resumes in Chromium.
5. **Browser page** (`source/web/`): worker game thread, canvas presenter, pointer/touch/keyboard/controller input, Web Audio, settings (resolution, render scale, smoothing, volume, hover mode), pause on hidden tab, persistence, print hand-off, service-worker isolation fallback.
6. **Documentation**: this file, README, `docs/*`.
7. **Source published** (2026-11-11, commit `57b2f13`): <https://github.com/NostalgiaRealm/Maisys-Playhouse> and <https://gitlab.com/Nostalgia_Realm/Maisys-Playhouse>, both public, same commit verified on each host. `data2.mxx` is stored in three pieces (`large-files/`).
8. **Website published** (2026-11-11): <https://games.nostalgiarealm.com/maisysplayhouse/>, verified live (`docs/hosting.md`). Updates: `tools/deploy-website.sh`.

## Dropped by the owner

- Measuring and optimising to 30 FPS under mobile emulation (cancelled 2026-11-11: "it won't need optimization"). No performance figures exist.

## Second pass (2026-11-11): parity gaps and play-through

- **C++ exceptions**: implemented with the original frames, tables and funclets (`docs/recompiler.md`); tested with a real MFC throw.
- **Dialogs**: implemented (real windows, page overlay); tested with the original "insert the disk" prompt.
- **Printing**: was broken (the Bitmap plug-in needs the default printer's DEVMODE from `PrintDlgA`); fixed; a printed page was produced from Gingerbread and from Coloring.
- **Threads**: nothing to fix; no code path creates one (evidence in `docs/recompiler.md`).
- **Fonts**: no text is visible in normal play (the only non-debug text labels hide themselves on Scene Started; 4 text calls in a whole session, all in the black-covered start-up scene). Left as browser-font approximations.
- **Play-through**: all 7 activities at all 3 levels and the three rooms, two seeds, 5-7 minutes each of scripted random clicks and drags (`tools/play-all.sh`), plus targeted runs: Gingerbread puzzle completed to the decorating stage and printed, Coloring printed, level change, quit with save, restore of level 3 on the next start. No crash, stop or unimplemented call.

## Not verified

Completing every activity to its reward at every level (only Gingerbread's puzzle, Dressing Up level 1 and several Hide and Seek rounds were seen through); audio by ear; text appearance; controller; hover mode; any real phone or non-Chromium browser; comparison with the original on Windows.

## Known gaps in the host

- Structured exceptions (SEH) and worker threads are not supported; neither is used.
- Fonts are browser approximations.
- Edit/list/combo controls in dialogs are not shown.

## Next actions

1. Listen to the audio; compare timing and look with the original under Windows 95 (86Box or the Win98 VM).
2. Play each activity to its end by hand at each level.
3. If wanted after all: measure with `tools/browser-check.mjs --throttle 8` and `window.__perf`.
