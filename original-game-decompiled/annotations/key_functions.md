# Maisy.exe: key functions (analyst notes)

Addresses are original VAs (image base 0x00400000). "Confirmed" = read in the pseudocode/disassembly here; "Inferred" = deduced from callers, strings or imports; nothing was observed at run time.

| Address | What | Status | Evidence |
|---|---|---|---|
| 0x00491820 | PE entry: MSVC CRT startup (`WinMainCRTStartup`) | Confirmed | PE header entry; Ghidra library match |
| 0x0040FA90 | Message pump override: `GetMessageA` -> `FUN_004710f0` (player pre-dispatch) -> virtual PreTranslate (vtable+0x5c) -> `TranslateMessage`/`DispatchMessageA`. Skips message 0x36A. | Confirmed | functions/0040fa90 |
| 0x004A78BD | MFC `CWinThread::PumpMessage` `GetMessageA` site | Inferred (MFC library layout) | imports.csv refs |
| 0x0043C730 | Mouse-position poll: `PeekMessageA(WM_MOUSEMOVE, PM_REMOVE)`, converts to stage window coordinates, caches in 0x004DB500 | Confirmed | functions/0043c730 |
| 0x00435A30 | Plug-in load: `_makepath` + `LoadLibraryA`, then counts exports with `GetProcAddress(h, ordinal 1..n)` | Confirmed | functions/00435a30 |
| 0x0043F550 | Builds `<player dir>\mPlugins` | Confirmed | string 0x004DB58C |
| 0x0041F040 | Refers to `mPlugins\Basic.x32` by name (explicit Basic Kit dependency) | Confirmed string ref | strings.csv |
| 0x00443420 | Audio submit: `waveOutPrepareHeader` + `waveOutWrite` | Confirmed | imports.csv refs 0x00443487/0x0044349D |
| 0x00442CBB | `waveOutOpen` site | Confirmed | imports.csv |
| 0x0047B210, 0x0047AD50, 0x0045FDE8, 0x00460210 | `BitBlt` sites (offscreen DIB section -> window) | Confirmed call sites; roles inferred | imports.csv |
| 0x0047A581, 0x0047A605, 0x0044C3D2 | `CreateDIBSection` sites (offscreen surfaces) | Confirmed | imports.csv |
| 0x0045FB4D, 0x004600BC | `AnimatePalette` sites (palette transitions on 8-bit displays) | Confirmed call sites | imports.csv |
| 0x0040FD30 | Loads `MSVFW32.DLL` dynamically and resolves 9 functions (Video for Windows) | Confirmed | string 0x004D9AB0, GetProcAddress refs 0x0040FDB1.. |
| 0x0048CB10, 0x0048CB80 | Load `QTIM32.DLL` / `CMGR32.DLL` (QuickTime for Windows 2.x image/component manager) dynamically | Confirmed string refs; whether the title needs them: see authored-content/CONTENT_OVERVIEW.md | strings.csv |
| 0x0043EF4E..0x0043F4DE | CD/volume probing: `CreateFileA`, `DeviceIoControl`, `GetDriveTypeA`, `GetVolumeInformationA` (locating the disc that holds further segments) | Confirmed imports at these sites; purpose inferred | imports.csv |
| 0x004A705B, 0x004A7103, 0x004A725A | MFC `CWinThread::CreateThread`/`AfxBeginThread` (the only path to `CreateThread`); no caller outside MFC found statically | Inferred: the player does not start worker threads | scripts/callers.py |
| 0x004B0DD4 | `StartDocA` (MFC printing path) | Confirmed site | imports.csv |

Plug-in modifier exports (e.g. BASIC.X32 `miniscriptmod` 0x11004010) all share one shape: `uint __cdecl mod(Block *b)`, a dispatcher on the selector at `b+4` (0 = describe/size, 1 = construct, 4/5 = load/copy, 0x1C.. = runtime messages); arguments at `b+0x16` (instance data) and `b+0x1A` (parameter pointer). Confirmed for `miniscriptmod`; inferred for the rest from identical prologues.
