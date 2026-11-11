# Feature parity

Implementation and verification are separate columns on purpose.

- **Implemented** means: the original player code that runs this content is in `maisy.wasm`, the original data is served unmodified, and the Windows services that code needs are present in the host. Because the game logic is the original runtime interpreting the original data, every scene is "implemented" in the same way; nothing was re-created by hand.
- **Verified** means: someone (here: the scripted checks in `docs/validation.md`) actually ran it in this port and looked. By the project's instructions only one activity was checked. Everything else is **unverified**, which means untested, not broken and not working.

No comparison against the original running on Windows was made anywhere.

## Runtime features

| Feature | Implemented | Verified |
|---|---|---|
| Original player `Maisy.exe` (mTropolis 2.0) | recompiled, 9,850 functions | boots, runs the title |
| Plug-ins BASIC, EXTRAS, EXPRMNTL, Bitmap, CURSORS, NETWORK | recompiled; loaded through `LoadLibraryA`, `DllMain` run | all six load at start; BASIC/EXTRAS/EXPRMNTL modifiers are exercised by every scene; Bitmap and NETWORK code paths unverified |
| Project loading from `data.mfx` and `data2.mxx` (bounded range reads) | yes | yes |
| 640×480 8-bit display, palettes, DIB blits, clipping, raster operations | software GDI (`source/host/gdi32.js`) | scenes of the checked path render; palette animation, hatch/pattern brushes, regions, StretchBlt unverified |
| Text output (GDI fonts mapped to browser fonts) | yes | unverified (no text element appeared in the checked path) |
| Sound: PCM through waveOut to Web Audio | yes | PCM is produced and scheduled (183 buffers in the desktop check); **not listened to by a person** |
| Mouse: move, press, release, double-click, capture, cursor shapes | yes | clicks verified; drag, double-click, cursor shapes unverified |
| Keyboard: key down/up, characters, accelerators | yes | unverified |
| Touch: tap, drag, cancel, hover mode | yes | taps verified in mobile emulation; drag and hover mode unverified |
| Controller: virtual pointer (stick/d-pad, A = click, B = Space) | yes | unverified |
| Save data (`MAISY1.SAV`) persisted in browser storage | yes | file written at quit (headless); restore on the next start unverified |
| Printing (Gingerbread, Coloring) through the browser print dialog | yes (`PrintDlgA` returns a 2400×3150 page DC; `EndPage` hands the page to the browser) | unverified |
| Quit: credits, then the player exits; the page offers "Play again" | yes | exit verified headless; the page's "Play again" unverified |
| Pause when the tab is hidden; resume without backlog | yes (game thread and its clock stop; audio context suspended) | unverified |
| Resolution: Auto, 640/1280/1920 presets, render scale 25-200 %, sharp or smooth | yes | Auto at 100 % verified (desktop 1024×768; mobile emulation 800×360 DPR 2 gives a 1600×720 canvas with a 960×720 scene); presets and other scales unverified |
| Help: the title's WinHelp text in a panel | yes (text extracted from `MaisyPH.hlp`) | unverified |
| MIDI, MCI, QuickTime, Video for Windows, Winsock | reported as not installed | not needed by the authored content (no such objects); unverified beyond start-up |
| Modal dialogs created by the player (`CreateDialogIndirectParamA`) | **not implemented** (returns failure, logged) | none requested in the checked path |
| C++ exception unwinding | **not implemented** (stops with the exception's type name) | none raised in the checked path |
| Worker threads | **not implemented** (`CreateThread` stops with a message) | none requested in the checked path |

## Content: every scene in the data

65 scenes (`original-game-decompiled/authored-content/inventory/scenes.csv`). Implemented column omitted: identical for all rows (original runtime + original data).

| Section / subsection | Scene | Elements | Verified |
|---|---|---|---|
| StartUp Section / Subsection | Shared Scene | 0 | loaded with its subsection |
| StartUp Section / Subsection | PC Font Size | 4 | passed through |
| StartUp Section / Subsection | Go to Main Section Scene | 0 | passed through |
| Main Section / Control Subsection | Shared Scene | 60 | loaded with its subsection |
| Main Section / Control Subsection | Intro Scene 0 | 2 | passed through |
| Main Section / Control Subsection | Intro Scene 1 | 3 | passed through |
| Main Section / Control Subsection | Intro Scene 2 | 3 | passed through |
| Main Section / Control Subsection | Intro Scene 3 | 3 | splash seen (Simon & Schuster logo) |
| Main Section / Control Subsection | Intro Scene 4 Title | 3 | title seen |
| Main Section / Control Subsection | House Exterior Scene | 5 | seen; door click works |
| Main Section / Control Subsection | PLA Foyer Load Scene | 0 | passed through |
| Main Section / Control Subsection | PLA Foyer | 21 | seen; Easel, Panda and House-button return work |
| Main Section / Control Subsection | PLA Bathroom Load Scene | 0 | unverified |
| Main Section / Control Subsection | PLA Bathroom1 Scene | 54 | unverified |
| Main Section / Control Subsection | PLA Bathroom2 Scene | 39 | unverified |
| Main Section / Control Subsection | PLA Bathroom3 Scene | 51 | unverified |
| Main Section / Control Subsection | PLA Bedroom Load Scene | 0 | unverified |
| Main Section / Control Subsection | PLA Bedroom1 Scene | 34 | unverified |
| Main Section / Control Subsection | PLA Bedroom2 Scene | 39 | unverified |
| Main Section / Control Subsection | PLA Bedroom3 Scene | 39 | unverified |
| Main Section / Control Subsection | PLA Kitchen Load Scene | 0 | unverified |
| Main Section / Control Subsection | PLA Kitchen1 Scene | 45 | unverified |
| Main Section / Control Subsection | PLA Kitchen2 Scene | 50 | unverified |
| Main Section / Control Subsection | PLA Kitchen3 Scene | 51 | unverified |
| Main Section / Control Subsection | Credits Scene | 6 | ran to the end (headless) |
| Main Section / Control Subsection | Exit Scene | 0 | player exited with code 0 (headless) |
| Main Section / Activity Load Scenes Subsection | Shared Scene | 4 | loaded with its subsection |
| Main Section / Activity Load Scenes Subsection | DRA Painting Choice Load Scene | 1 | unverified |
| Main Section / Activity Load Scenes Subsection | GIN Gingerbread Load Scene | 1 | unverified |
| Main Section / Activity Load Scenes Subsection | MES Messy Room Load Scene | 1 | passed through |
| Main Section / Activity Load Scenes Subsection | HID Hide & Seek Load Scene | 1 | unverified |
| Main Section / Activity Load Scenes Subsection | WIN Window Game Load Scene | 1 | unverified |
| Main Section / Activity Load Scenes Subsection | OUT Outside Activity Load Scene | 1 | unverified |
| Main Section / Activity Load Scenes Subsection | TRA Train Sequence Load Scene | 1 | unverified |
| Main Section / Activities Subsection | Shared Scene | 44 | loaded with its subsection |
| Main Section / Activities Subsection | DRA Painting Choice LV1 Scene | 293 | unverified |
| Main Section / Activities Subsection | DRA Painting Choice LV2 Scene | 424 | unverified |
| Main Section / Activities Subsection | DRA Painting Choice LV3 Scene | 387 | unverified |
| Main Section / Activities Subsection | GIN Gingerbread LV1 Scene | 292 | unverified |
| Main Section / Activities Subsection | GIN Gingerbread LV2 Scene | 389 | unverified |
| Main Section / Activities Subsection | GIN Gingerbread LV3 Scene | 578 | unverified |
| Main Section / Activities Subsection | MES Messy Room LV1 PR Scene | 59 | **the checked activity**: intro animation, two item clicks, leave via House button |
| Main Section / Activities Subsection | MES Messy Room LV1 BR Scene | 60 | unverified |
| Main Section / Activities Subsection | MES Messy Room LV1 K Scene | 60 | unverified |
| Main Section / Activities Subsection | MES Messy Room LV1 S Scene | 60 | unverified |
| Main Section / Activities Subsection | MES Messy Room LV2 PR Scene | 74 | unverified |
| Main Section / Activities Subsection | MES Messy Room LV2 BR Scene | 72 | unverified |
| Main Section / Activities Subsection | MES Messy Room LV2 K Scene | 74 | unverified |
| Main Section / Activities Subsection | MES Messy Room LV2 S Scene | 74 | unverified |
| Main Section / Activities Subsection | MES Messy Room LV3 PR Scene | 77 | unverified |
| Main Section / Activities Subsection | MES Messy Room LV3 BR Scene | 72 | unverified |
| Main Section / Activities Subsection | MES Messy Room LV3 K Scene | 84 | unverified |
| Main Section / Activities Subsection | MES Messy Room LV3 S Scene | 84 | unverified |
| Main Section / Activities Subsection | HID Hide & Seek LV1 Scene | 346 | unverified |
| Main Section / Activities Subsection | HID Hide & Seek LV2 Scene | 265 | unverified |
| Main Section / Activities Subsection | HID Hide & Seek LV3 Scene | 270 | unverified |
| Main Section / Activities Subsection | WIN Window Game LV1 Scene | 187 | unverified |
| Main Section / Activities Subsection | WIN Window Game LV2 Scene | 232 | unverified |
| Main Section / Activities Subsection | WIN Window Game LV3 Scene | 214 | unverified |
| Main Section / Activities Subsection | OUT Outside Activity LV1 Scene | 124 | unverified |
| Main Section / Activities Subsection | OUT Outside Activity LV2 Scene | 194 | unverified |
| Main Section / Activities Subsection | OUT Outside Activity LV3 Scene | 181 | unverified |
| Main Section / Activities Subsection | TRA Train Sequence LV1 Scene | 285 | unverified |
| Main Section / Activities Subsection | TRA Train Sequence LV2 Scene | 285 | unverified |
| Main Section / Activities Subsection | TRA Train Sequence LV3 Scene | 396 | unverified |

Activities by the publisher's names (`MaisyPH.hlp`): Maisy's House rooms (PLA, 9 room scenes), Messy Room (MES, 12 scenes), Painting Pictures (DRA), Dressing Up (WIN), Coloring (OUT), Gingerbread (GIN), Train Station (TRA), Hide and Seek (HID); three levels each. Checked: Messy Room level 1, playroom variant only.

## Disc material that is not the game

| Item | Status |
|---|---|
| `Autorun.EXE` (Wise autorun menu: Play / Install / Catalog / Exit) | preserved and decompiled; not part of the port (the page's Play button takes its place) |
| `Install.exe` (Wise installer) | preserved and decompiled; not part of the port (the virtual `C:\MAISY1` folder reproduces what it installs) |
| `CATALOG/` (promotional product catalogue, HTML/GIF) | preserved in the extracted disc; not served |
| `MaisyPH.hlp` | text shown in the Help panel |
