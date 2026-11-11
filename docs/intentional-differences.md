# Intentional differences from the original

Everything here is a deliberate browser or mobile adaptation. Game logic, data, timing sources and media are the original's.

## Platform

| Original | This port | Why |
|---|---|---|
| Native x86 `Maisy.exe` + six DLL plug-ins on Windows 95 | The same machine code translated to one WebAssembly module, running in a Web Worker | browsers cannot run x86 |
| Windows 95 USER/GDI/KERNEL/WINMM | A host layer in JavaScript (`source/host/`) that implements the calls the modules import | see `docs/recompiler.md` |
| Autorun menu and installer | A start card with a Play button; the virtual drive `C:\MAISY1` holds what the installer would have copied, `D:` is the CD (label `MAISY_CD`) | nothing to install; the Play click also unlocks browser audio |
| Reported system | Windows 95 (4.0.950), one Pentium-class CPU, 64 MB RAM, 640×480 256-colour display with a palette | the mode the help file recommends; fixed regardless of the device |

## Window and display

- **No window chrome.** Windows have no caption, frame, menu bar or client edge (their system metrics are 0). The MDI child keeps its 1-pixel border because the player positions its frame to push exactly that border off-screen (Maisy.exe 0x0040F1A0); the stage therefore sits at (0,0) and fills the 640×480 screen, as on a 640×480 desktop. The player's menu (File/Edit/Help of the stock mTropolis player) is not shown and cannot be opened; its accelerators still work.
- **Presentation.** The 640×480 indexed frame is converted with the current system palette and scaled to the page: aspect preserved, letter- or pillar-boxed in black, sharp pixels by default or smooth filtering by choice. Auto resolution renders at the window's size × device pixel ratio × render scale; explicit presets (640, 1280, 1920 wide) ignore the device pixel ratio. A larger canvas adds no detail to the 640×480 artwork.
- **Fonts.** GDI font requests are mapped to browser fonts (Arial, Courier New, Times New Roman or the requested face if installed) and drawn without anti-aliasing (a pixel is set where glyph coverage is at least 50 %). Glyph shapes and metrics can differ from Windows 95's. The checked path showed no text.
- **Cursor.** Cursor resources become CSS cursor images, scaled 1-3× with the scene (browsers refuse images above 128 px). Inverting cursor pixels are drawn black. With a controller the pointer is drawn by the page.
- **Wait cursor / busy states** follow whatever cursor the player sets; nothing is added.

## Input

- **Touch.** A tap sends pointer-move, press, release at the touched point. A drag keeps the button held. A second finger is ignored while one is down. A cancelled touch or a lost window focus releases held buttons and keys (as `WM_LBUTTONUP`/`WM_KEYUP`) so nothing stays stuck. Page scrolling and zooming are disabled on the scene.
- **Hover on touch.** The ☝ button (or the setting) makes touches move the pointer without clicking, for roll-over feedback such as the activity names on the Easel menu.
- **Controller.** Left stick or d-pad moves a virtual pointer; A is the left mouse button; B is the Space key (the title's own skip key); Start opens the settings.
- **Keyboard.** Browser shortcuts (F11, F12, Ctrl+R/L/T/W, the Command key) are left to the browser. Alt+F4 inside the game maps to the player's close command only if the browser delivers it.
- **Right and middle buttons** are forwarded; the browser's context menu is suppressed on the scene.

## Timing and scheduling

- The game thread's clock is the browser's monotonic clock. `timeGetTime`, `GetTickCount` and `QueryPerformanceCounter` all read it. It stops while the tab is hidden or a message box is open, and resumes where it was, so no time "passes" for the game during a pause and no backlog is replayed.
- An idle `PeekMessageA` waits up to 1 ms (or until input arrives) instead of spinning. On Windows the player polls continuously; the game's own timing comes from the clock, not from the number of polls.
- Presentation runs on `requestAnimationFrame`, independent of the game thread; it never changes animation cadence.
- Finished wave buffers (`WOM_DONE`) and multimedia timer callbacks are delivered at the game thread's next wait or clock read rather than from a second thread.

## Sound

- waveOut PCM buffers are handed to Web Audio and scheduled back to back; `waveOutReset` stops the queued buffers. The browser resamples 22,050 Hz to the device rate. The first buffer is delayed about 20 ms.
- A volume slider and mute act after the game's own mix. `waveOutSetVolume` is honoured as the average of both channels.
- No MIDI or MCI device exists (none is used by the content).

## Files and persistence

- `data.mfx` is downloaded whole (4.6 MB); `data2.mxx` (295 MB) is read in 256 KiB byte ranges on demand through a 16 MB cache, never held whole.
- `Maisy.exe` and the plug-in files appear in the virtual folder by name and size only; their code is in the Wasm module and their resources in its memory image.
- Files the game writes on `C:` (the save `MAISY1.SAV`), profile strings and registry values are kept in the browser's local storage for this site. "Erase saved game" in the settings clears them.

## Printing

No Windows print dialog is shown. `PrintDlgA` answers as a system with one default printer ("Browser printer", A4, 300 dpi, 2400×3150 printable pixels, landscape on request through `ResetDCA`); the Bitmap plug-in then lays out and draws its page exactly as it does for a real printer, and the finished page is opened in the browser's own print dialog (or downloaded as PNG if printing is blocked).

## Dialogs

The player's own dialogs (the reachable one is "Please insert the disk : 'Maisy_CD'") are created as real windows with real controls, so the original dialog code runs, but they are not drawn in Windows 95 style: the page shows the dialog's title, texts and buttons as an overlay and sends a button press back as the control's `WM_COMMAND`. `MessageBoxA` is shown the same way and blocks the game until answered.

## Not provided

- File pickers (`GetOpenFileNameA`/`GetSaveFileNameA`) return "cancelled".
- Edit, list and combo controls inside dialogs are not shown (no reachable dialog has one).
- QuickTime, Video for Windows, MIDI, MCI, Winsock, CTL3D: reported as not installed.
- Structured exceptions (SEH) and worker threads: see `docs/recompiler.md`.
