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

## Dropped by the owner

- Measuring and optimising to 30 FPS under mobile emulation (cancelled 2026-11-11: "it won't need optimization"). No performance figures exist.

## Blocked

- **Website: publishing to games.nostalgiarealm.com/maisysplayhouse/** (requested 2026-11-11). `ssh Debian` fails: the SSH agent refuses to sign ("agent refused operation"), so nothing could be uploaded or inspected. The first publication also needs one root step on the server (new web folder and Nginx location). Everything is prepared: `docs/hosting.md`, `tools/deploy-website.sh`, `tools/server-setup-website.sh`. Note: `www.games.nostalgiarealm.com` does not resolve; the site is `games.nostalgiarealm.com`.

## Not verified (see `docs/feature-parity.md`)

All activities except Messy Room level 1 (playroom); the room scenes; levels 2-3; text; dragging; keyboard; controller; hover mode; printing; pause/resume; save restore; presets and render scales; audio by ear; any real phone or non-Chromium browser.

## Known gaps in the host

- No C++ exception unwinding, no worker threads, no player-created dialogs: each stops or fails loudly if reached. None was reached in the checked path.
- Fonts are browser approximations.

## Next actions

1. Unlock SSH and publish (`docs/hosting.md`).
2. Play each activity once at each level; fix what stops. Start with Gingerbread and Coloring (Bitmap plug-in capture/print) and anything with text or dragging.
3. Listen to the audio; compare timing and look with the original under Windows 95 (86Box or the Win98 VM) to turn "observed in the port" into verified behaviour.
4. If wanted after all: measure with `tools/browser-check.mjs --throttle 8` and `window.__perf`.
