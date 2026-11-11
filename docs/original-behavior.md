# Original behaviour: evidence

What is known about the original program and title, and how it is known. Three kinds of statement, kept apart:

- **Code/data (confirmed)**: read in the decompilation or the parsed data. Paths are under `original-game-decompiled/`.
- **Observed in the recompiled original code**: the original x86 code, translated to Wasm, did this in this port. This is evidence about the original code's behaviour given the Windows services this port provides; it is not an observation of the game on real Windows 95.
- **Unresolved**: not established.

No reference run of the original on Windows (real, Wine or an emulator) was made for this project. Nothing below claims parity with such a run.

## Program structure

| Fact | Status | Evidence |
|---|---|---|
| `Maisy.exe` is the stock mTropolis 2.0 Windows player (`mTplay32.exe`), an MFC MDI application | Confirmed | version resource; string table (`decompiled/game__Maisy.exe/resources/STRING`); `CMultiDocTemplate` with classes `CMFDoc`, `CMFPlatformWindow`, `CMFRootPlatformPane` in `InitInstance` at 0x0040F1A0 |
| Launch command is `Maisy.exe "Data.mfx"` from the install folder | Confirmed | Install script strings (`extracted/wise-scripts/Install.WiseScript.strings.txt`: shortcut target `%MAINDIR%\Maisy.exe`, argument `"Data.mfx"`) |
| The installer copies `Maisy.exe`, `Data.mfx`, the six plug-ins and the help file; `data2.mxx` stays on the CD | Confirmed | same script; `data2.mxx` has no install record |
| Only one instance runs: `FindWindowA(NULL, "mPlayer - mTropolis Windows Player…")` at start | Confirmed | 0x0040F1A0 |
| Start-up writes `[DrawDib]` settings in `win.ini` | Confirmed | 0x0040F1A0 (`GetPrivateProfileStringA`/`WritePrivateProfileStringA` on `win.ini`) |
| All files in `mPlugins\` are loaded with `LoadLibraryA`; exports are enumerated by ordinal | Confirmed | 0x00435A30; observed order: Basic.x32 first (by name, 0x0041F040), then `*.R32`, then `*.C32` |
| The frame window is placed so that its borders, caption and the MDI child's 1-pixel border lie outside the screen: x = -1 - SM_CXFRAME - SM_CXEDGE, width = SM_CXSCREEN + 2 + 2·(SM_CXEDGE + SM_CXFRAME), same vertically plus caption | Confirmed | 0x0040F1A0, the `CWnd::MoveWindow` call after `ShowWindow` |
| Message loop: MFC `Run` with a pump override that calls a player pre-dispatch (0x004710F0) and skips message 0x36A | Confirmed | 0x0040FA90 |
| File position ("tell") is computed from `mmioGetInfo` as `lBufOffset + (pchNext - pchBuffer)` | Confirmed | 0x00411AE0 |
| The player reads project files through `mmioOpenA`/`mmioRead`/`mmioSeek`, two handles per segment file | Observed | `node tools/run-headless.mjs --trace files` |
| Segment 2 is found as `D:\DATA2.MXX` on the CD-ROM drive (volume label `MAISY_CD` in this port) | Observed; how the drive is chosen is in 0x0043EF4E-0x0043F4DE (`GetDriveTypeA`, `GetVolumeInformationA`, `DeviceIoControl`), not analysed in detail | trace |
| The player probes `QTIM32.DLL` and sends one `MCI_OPEN` at start-up and continues when both fail | Observed | trace: `LoadLibrary QTIM32.DLL -> not available`, `mciSendCommandA msg=803` |
| No thread is created | Observed in the checked path; statically no caller of `AfxBeginThread` found | `scripts/callers.py Maisy.exe 004a72d9` |

## Display

| Fact | Status | Evidence |
|---|---|---|
| Stage is 640×480 at 8 bits per pixel | Confirmed | PresentationSettings in `data.mfx` (`authored-content/FORMAT_NOTES.md`) |
| "Runs best in 640x480, 256-color video mode" | Confirmed (publisher's statement) | `docs/original-documentation/MaisyPH.hlp.txt`, General Troubleshooting |
| The player composes into an offscreen DIB section of the project depth and `BitBlt`s it to its window; for 8-bit it builds the DIB colour table from `GetSystemPaletteEntries` or its own palette manager | Confirmed | 0x0047A250 (`CreateCompatibleDC`, colour-table fill, `CreateDIBSection` at 0x0047A581/0x0047A605) |
| No `StretchDIBits`/`SetDIBitsToDevice` in the player's imports | Confirmed | `decompiled/game__Maisy.exe/imports.csv` |
| Palette changes go through `CreatePalette`/`SelectPalette`/`RealizePalette`/`AnimatePalette`/`SetSystemPaletteUse` | Confirmed imports; which are used for this title's transitions is unresolved | imports.csv |
| Scenes select the PC colour table `PCMAISYFINAL.ACT` (asset 37) when `SysInfo.architecture` is `80x86` | Confirmed (authored) | `authored-content/CONTENT_OVERVIEW.md`, "Std Maisy CLUT" |
| Cursors come from `CURSORS.C32` resources by id (10005 hand, 10010, 10011 arrow, 10013) and from mToon elements that follow the pointer | Confirmed (authored ids); the id-to-resource pairing is inferred | CONTENT_OVERVIEW.md, Cursor usage |

## Sound

| Fact | Status | Evidence |
|---|---|---|
| All sound assets are uncompressed mono PCM, 22,050 Hz 8-bit (one 44,100 Hz 16-bit) | Confirmed | `authored-content/inventory/assets.csv` |
| Output is one `waveOut` device at 22,050 Hz, 8-bit, mono | Observed | `waveOutOpen 22050 Hz 8-bit 1 ch` |
| The player mixes itself and keeps four 16,384-byte buffers (743 ms each) queued, about 2.2-3.0 s ahead | Observed | `--trace audio` |
| When the mix changes (a sound starts or stops) it calls `waveOutReset` and writes fresh buffers; the device is closed and reopened at some scene changes | Observed | `--trace audio`: resets at clicks and scene changes |
| No MIDI and no movie in the content | Confirmed | CONTENT_OVERVIEW.md |

## Title flow and activities

From the authored data unless marked observed. Scene names are the authors'.

- Start-up: `PC Font Size` → `Go to Main Section Scene` → `Intro Scene 0` (sends `Restore Game`) → three logo scenes and the title, 3 s each or click → `House Exterior Scene` → click the door → `PLA Foyer`. **Observed** in this order, with the splash at about 11 s and the house at about 17 s after start.
- Foyer: three doors (bedroom, bathroom, kitchen; each load scene picks one of three room variants), Easel button (activity menu), Panda button (levels 1-3, help, quit). **Observed**: Easel popup with seven activity buttons; Panda popup with `?`, `quit`, `level 1/2/3`; quit asks yes/no.
- Activities and levels as described by the publisher's help file (`MaisyPH.hlp.txt`): Messy Room (levels 1-2 click to clean up, level 3 put away properly), Painting Pictures (odd one out), Dressing Up, Coloring (print button; levels 2-3 use the paintbrush), Gingerbread (puzzle, decorate, print button), Train Station (match animals / sounds / numbers), Hide and Seek. In the data these are MES, DRA, WIN, OUT, GIN, TRA and HID (21 + 12 scenes). The pairing of scene prefixes with help-file names is by content, e.g. the `Printer` groups exist only in GIN and OUT.
- Level routing: activity load scenes send `Go` to `childmod[gameLevel + 1]`; `gameLevel` starts at 1 unless restored.
- Messy Room, level 1, playroom (`MES Messy Room LV1 PR Scene`), **observed**: an introduction animation with Maisy and friends, then the room with six toys, a toy box, a shelf and a hamper; clicks are ignored until the introduction's narration has finished (a click 37 s after entry had no effect, one at 45 s did); clicking the horse removes it, clicking the guitar moves it onto the shelf. The House button returns to the Foyer.
- Quit: Panda → quit → yes → Credits scene (sends `Save Game`) → Exit scene → `Close Project`. **Observed**: `MAISY1.SAV` (50 bytes) is written in the install folder at that moment, the credits run about 22 s, and the player process exits with code 0.
- Save data: the project variable `gameLevel` only (authored). The file read at start and written at quit is `MAISY1.SAV` in the player's folder (**observed**). Whether a restored level is applied correctly on the next start was not checked.
- Printing: `hlCaptureBitmap` + `hlPrintBitmap` (Bitmap.r32) on the author message `Print` in the Gingerbread and Coloring scenes (authored). Not exercised.

## Timing

- The player takes all timing from `timeGetTime` (59 call sites) and never calls `SetTimer` (not imported). Confirmed from imports.
- Authored timers: 3 s per intro splash, 0.5 s load scenes, 0.01 s start-up hop (data).
- Animation cadence is per-mToon frame rate in the data and is paced by the player against `timeGetTime`. The port does not alter the clock, so cadence is whatever the original code computes. Not measured against a reference.

## Unresolved

- Behaviour on real Windows 95 for anything above marked "observed".
- Exact palette-transition and scene-transition appearance (two RandomDissolve transitions in the intro).
- The Bitmap plug-in's capture rectangle and print layout.
- Whether any path raises a C++ exception or uses a dialog (`CreateDialogIndirectParamA`) in normal play.
