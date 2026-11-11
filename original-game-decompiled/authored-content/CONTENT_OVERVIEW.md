# Maisy's Playhouse (1999, Windows) — the game as authored

Derived from the parsed project data only (`structure/`, `scripts/`, `inventory/`). Nothing was executed.
Statements about what happens at runtime describe the authored modifiers and scripts; they are not observed
behaviour. Scene/element/modifier names are the authors' own.

Project name in the data: `data`. Project-level string variable `version` = `"Maisy1 -- Jul 15 1999 -- 4:03 PM"`.

## Stage and global setup

- **Logical stage**: 640 × 480, **8 bits per pixel** (PresentationSettings). All scene elements are 640×480
  at (0,0).
- **Palette**: every scene aliases the global behavior `Std Maisy CLUT`. Its script reads
  `sysinfo.architecture` (SysInfo plug-in modifier) and sends author message `PC` or `Mac` to itself;
  two ColorTable modifiers react: `PC` → colour table asset 37 `PCMAISYFINAL.ACT`, `Mac` → asset 36
  `MAISYFINAL.act`. All mToons carry an embedded palette identical to asset 36.
- **Project modifiers** (`structure/project_tree.txt`): variables `playerName`, `playerID`, `gameLevel`
  (initial 2, set to 1 by a Set modifier on Project Started), `initialMonitorBits`, `pcLargeFont`, compound
  `gNav` (`previous`, `currentRoom`, `routerScene` object references + `fromActivity`); behavior
  `project setup` (resets visit/play counters on Project Started; on non-`80x86` architecture switches the
  monitor to 8-bit) and `project shutdown`.
- **Global modifier table**: 509 top-level entries; 3643 of the 4277 Miniscript modifiers are inside this
  table. Scenes are assembled almost entirely from **aliases** to these shared behaviors (6598 alias
  modifiers). 86 global entries are not referenced by any alias (unused library items).
- **Author messages**: 412 named messages (in 9 groups) in the label map; 60 named mToon ranges ("up", "rollover", "down",
  "disabled", …); 23 sound markers (`cue1`…).

## Sections, subsections, scenes

65 scenes. "Shared Scene" = first scene of a subsection. Columns: stream number, elements / modifiers /
mToon elements / sound elements. Per-scene detail: `structure/scene_NN_*.txt`, summary:
`structure/scene_summaries.txt`, numbers: `inventory/scenes.csv`.

### Section "StartUp Section" → "Subsection" (segment 1, `data.mfx`)

| stream | scene | el/mod/mToon/snd | contents |
|---|---|---|---|
| 4 | Shared Scene | 0/1/0/0 | empty, one Graphic modifier |
| 5 | **PC Font Size** (startup scene) | 4/26/0/0 | text label `font_sizer` (Courier New 18) with resize handle and a `GO` text button, covered by a full-screen black `Black_Cover` element that sends `Go` on Scene Started; scripts set `pcLargeFont`; `Go` → timer → Change Scene (next scene) |
| 6 | Go to Main Section Scene | 0/3/0/0 | Scene Started → timer 0.01 s → Change Scene to Main Section / Control Subsection / Intro Scene 0 |

### Section "Main Section" → "Control Subsection" (segment 2)

| stream | scene | el/mod/mToon/snd | contents |
|---|---|---|---|
| 7 | Shared Scene | 60/93/19/23 | `Debug_Message_Display`, `Background Audio Group`, `mouseShield`, `PandaPopup` (level 1/2/3, quit, help buttons), `EaselPopup` (7 activity buttons), `AYSYWTQ Popup` (quit confirmation), `MOAK Mem Error Warning`; 7 Change Scene modifiers `Navigate ->> … load`; alias of `Save&Restore Game` |
| 8 | Intro Scene 0 | 2/12/0/0 | sends `Restore Game` to the shared scene on Scene Started, starts background audio, then next scene; RandomDissolve scene transition on Scene Ended |
| 9–11 | Intro Scene 1, 2, 3 | 3/6/1/0 each | mToon `INT_Spash.mt` (4 cels: Universal, Sound Source Interactive, Simon & Schuster Interactive, Maisy's Playhouse title); `INT splash` sets `cel` to the scene's `SEQ_ID` variable (1, 2, 3); behavior `master`: 3 s timer after `Scene Activated` → next scene, click → title scene |
| 12 | Intro Scene 4  Title | 3/6/1/0 | same mToon, `SEQ_ID` = 4 (title cel); timer → next scene, click → House Exterior |
| 13 | House Exterior Scene | 5/25/2/1 | 2 mToons, 1 sound, a 2-state button: `Do Button` → `Go` → Change Scene to PLA Foyer Load Scene; audio broadcaster/receiver behaviors |
| 14 | PLA Foyer Load Scene | 0/7/0/0 | load/router scene (alias `PLA Load Scene`): 0.5 s timer → `Next Scene` → next scene; starts background audio |
| 15 | PLA Foyer | 21/109/6/3 | `narrator`, `Doors` (3 × `PLA foyer door` with Change Scene to bathroom / bedroom / kitchen load scenes), `buttons` (Panda button, Easel button), `interrupters`, help VO; Space key → `Go` |
| 16, 20, 24 | PLA Bathroom / Bedroom / Kitchen Load Scene | 0/13/0/0 each | router scenes: variable `curScene` (`random(N_SCENES) + 1` when 0, afterwards +1 with wrap-around) selects one of three Change Scene modifiers `Go ->>` |
| 17–19 | PLA Bathroom1/2/3 Scene | 54/88/19/17, 39/75/13/11, 51/89/20/16 | room background, `fun clicks` (click hotspots: `PLA fun click` + audio), `maisy animations`, `door` button, Panda/Easel buttons, narrator, interrupters, mouse shield |
| 21–23 | PLA Bedroom1/2/3 Scene | 34/69/11/9, 39/74/13/11, 39/74/14/11 | same construction |
| 25–27 | PLA Kitchen1/2/3 Scene | 45/81/16/14, 50/85/19/15, 51/84/19/16 | same construction |
| 28 | Credits Scene | 6/38/2/0 | scrolling credits mToon (timer-driven mover, vertical Drag Motion), sends `Save Game` to the shared scene on Scene Started, `Done` → Exit Scene |
| 29 | Exit Scene | 0/4/0/0 | Scene Started → timer → `Close Project` to the project |

### "Activity Load Scenes Subsection" (segment 2)

| stream | scene | el/mod | contents |
|---|---|---|---|
| 30 | Shared Scene | 4/15 | debug display, mouse shield |
| 31–37 | DRA / GIN / MES / HID / WIN / OUT / TRA … Load Scene | 1/8 each | one mToon (loading picture), alias `Activity Load Scene`, script `Next Scene; Go >nav mod` = `send Go to modifier.parent.childmod[project.gamelevel + 1]`, three Change Scene modifiers `Go ->> LV 1/2/3` |

### "Activities Subsection" (segment 2)

| stream | scene | el/mod/mToon/snd | contents |
|---|---|---|---|
| 38 | Shared Scene | 44/65/11/19 | background audio group (one track per activity), Panda popup, quit popup, memory warning, debug display |
| 39–41 | DRA Painting Choice LV1/2/3 | 293/353/78/187, 424/487/108/287, 387/447/102/251 | `Maisy Group`, `Characters Group`, `Spots Group`, `Items Group` (`DRA item` + rollover VO/SFX), `Demo Items Group`, `Narrator Collection`, `Next Set Button`, `Answers Button`; mostly voice-over sounds |
| 42–44 | GIN Gingerbread LV1/2/3 | 292/490/119/13, 389/656/164/13, 578/919/257/14 | `backgrounds`, `animations` (oven, counter), `cookie puzzle pieces`, `fixins` (decorations, click-and-stick), `SFX`, `Printer` (bitmap capture + print) |
| 45–56 | MES Messy Room LV1/2/3 × PR/BR/K/S (12 scenes) | 59–84 el, 96–134 mod, 17–30 mToon, 14–18 snd | `backgrounds`, `animations` (Maisy/Eddie setup, closeup, reward), `Narrator`, `items` (click-and-stick), `containers` (collision targets), `SFX`, `Next Set Button` |
| 57–59 | HID Hide & Seek LV1/2/3 | 346/531/120/196, 265/418/88/148, 270/438/90/151 | `backgrounds`, `peripheral animations`, `characters` (`HID Hiding Character` + stencil + hiding/reveal/ambient audio), `Narrator`; 62–78 scene-local scripts |
| 60–62 | WIN Window Game LV1/2/3 | 187/251/84/44, 232/297/117/44, 214/279/106/44 | `enter animations`, `reward animations`, `naked Maisy`, `clothes` (items on bar/floor), `wardrobe`, `barspots`, `floorspots`, `Narrator` |
| 63–65 | OUT Outside Activity LV1/2/3 | 124/210/38/37, 194/284/83/46, 181/267/81/41 | `paintbrush`, `regions` (`OUT region` click-to-colour areas + audio), `Narrator`, `Printer` (bitmap capture + print), own `cursor layer` |
| 66–68 | TRA Train Sequence LV1/2/3 | 285/391/89/91, 285/391/89/91, 396/511/193/98 | `closeup train`, `Load Train`, `RR Yard`, `Loaded Stable`, `FreeRangeChicken Stable`, `FAR Train`, `SFX`, Vector Motion (train movement), `Stop Scene Button` |

The abbreviations PR/BR/K/S and DRA/GIN/MES/HID/WIN/OUT/TRA are the authors' prefixes; they are also the
asset-name prefixes (`MES_…`, `HiD_…`, …). Their expansions are not stated in the data beyond the scene names.

## Startup and scene navigation, as authored

**Startup scene**: the project's first section/subsection is `StartUp Section / Subsection`; its first scene
is the shared scene and its second scene, **`PC Font Size`**, is the first regular scene. (That the runtime
starts there is mTropolis convention as implemented by ScummVM, not something stored as an explicit field.)

Mechanisms that change scenes — all of them in the data:

1. **Change Scene modifiers** (53 objects; list: `grep ChangeSceneModifier structure/*.txt`), triggered by
   author messages:
   - `Tick` / `Go` / `Next Scene` / `Do Fn` with flag *NextScene* (intro sequence, load scenes, PC Font Size);
   - `Tick` → specific scene `Intro Scene 0` (from the startup section);
   - `Do Fn` → `Intro Scene 4 Title` / `House Exterior Scene` (intro `master` behavior);
   - `Go` → `PLA Foyer Load Scene` (House Exterior), → bathroom/bedroom/kitchen load scenes (Foyer doors),
     → one of three room variants (room load scenes), → `LV 1/2/3` of an activity (activity load scenes);
   - `Navigate` → the seven activity load scenes (attached to the Easel popup buttons in the Control shared
     scene; the button behavior `Easel Activity bt` sends `Do Button` → `Play Click` → `Click Done` → `Navigate`);
   - `Do Button` → `PLA Foyer Load Scene` (behavior `PLA Door button`, aliased in the 9 room scenes);
   - `Click Done` → `Credits Scene`; `Done` → `Exit Scene`.
2. **Miniscript writes to the world manager** (16 statements):
   `set element.worldmanager.currentscene to gNav.currentroom.object` (14×: in the activities'
   `… House Button` behaviors and in `master/Main/Activity Done` and `Next_Room`), `… to gNav.routerscene.object` (behavior `ACTIVITY Next Scene`, on `Next Level`),
   `set element.wm.currentscene to gNav.previous.object` (1×).
   The `gNav` object-reference variables are maintained by `Std Scene`, `Std Load Scene`, `PLA Load Scene`
   and `Activity Load Scene` on Scene Started / Scene Ended.
3. **Level routing**: activity load scenes send `Go` to `childmod[project.gamelevel + 1]`. `gameLevel` is set
   from the Panda popup level buttons (`GLO Panda level 1/2/3 bt`), which then send `Next Level` to the active
   scene.
4. **Scene transition**: two Scene Transition modifiers (RandomDissolve on Scene Ended) in the intro.
5. **Quit**: `Close Project` is sent to the project by the Exit Scene (reached via quit popup → Credits Scene →
   `Done`), by a hidden text element `Stop Scene Button` in the three TRA scenes, and by a debug behavior
   (`Trigger Debug; Close Project`).
6. There is no Return modifier and no Shared Scene modifier object; one script sets
   `wm.clearreturnlist = true`.

Authored flow from startup:

```
PC Font Size ──(Scene Started → Go → timer → next scene)──► Go to Main Section Scene
  ──(timer → Change Scene)──► Intro Scene 0 ──► Intro Scene 1 ► 2 ► 3 ► 4 Title   (3 s timer each, or click)
  ──► House Exterior Scene ──(click button: Do Button → Go)──► PLA Foyer Load Scene ──(0.5 s)──► PLA Foyer
PLA Foyer ──(door)──► PLA <Room> Load Scene ──► PLA <Room>1|2|3 Scene ──(door)──► back to Foyer
any room/Foyer ──(Easel button → EaselPopup → activity button: Navigate)──► <ACT> Load Scene
  ──(Go to childmod[gameLevel+1])──► <ACT> LV1|LV2|LV3 Scene ──(House button / Next Level)──► via gNav
Panda button → PandaPopup: level 1/2/3, Help, Quit → "are you sure" popup → Credits Scene → Exit Scene
```

## Plug-in modifiers actually used

The project's own plug-in table lists exactly 8 plug-in modifier types; all 1253 plug-in objects are of
these types (`inventory/modifier_types.csv`).

| modifier | kit (from project data) | objects | where / what for |
|---|---|---|---|
| `ObjRefP` Object Reference Variable | Extras | 722 | everywhere: `gNav.*`, per-scene registries (`P.narrator`, `P.buttons`, …), `caller` references; 158 in the global table |
| `CursorMod` Cursor Modifier | Extras | 199 | button behaviors and one per interactive scene (see Cursor) |
| `ListMod` List Variable | Extras | 177 | order/shuffle lists (`aSetOrder`, `aCookieOrder`, `aViewOrder`, `aDayOrder`, …) |
| `MediaCue` Media Cue Messenger | Extras | 130 | all inside global behaviors: at sound markers `cue1…cueN` send `Go` with the cue number to the parent (lip-sync/animation cues on voice-over) |
| `SysInfo` | Experimental | 7 | platform test only: scripts read `sysinfo.architecture` and compare with `"80x86"` (6 statements). Monitor depth, free memory, date/time are read from `element.system.*`, not from this modifier |
| `hlBitmapVariable` | Bitmap (Hoo Logic) | 6 | one per GIN LV1–3 and OUT LV1–3 scene, variable `image` |
| `hlCaptureBitmap` | Bitmap | 6 | same 6 scenes, `Print; set image`: on author message `Print`, captures into `image` |
| `hlPrintBitmap` | Bitmap | 6 | same 6 scenes, `Print; image -> printer`: on `Print`, prints `image` |

- **Bitmap capture/print: yes, used by two activities** — Gingerbread (GIN) and Outside (OUT), all three
  levels each, in the scene's `Printer` element group, driven by the `GIN Print Button` / `OUT Print Button`
  behaviors. Sequence authored in the `Printer` group: `Print` → position/show printer element → capture →
  print → (OUT: hide) → `Print Done`. What exactly is captured (which rectangle) is inside the plug-in payload
  fields whose meaning is unknown.
  `hlDisplayBitmap`, `hlSaveBitmap`, `hlScaleBitmap`, `hlImportBitmap` are **not** used.
- **Network kit: not used.** No Network modifier object exists and the plug-in table has no Network entry.
  (The label map contains the editor's standard "Net Messaging"/"Net Operation" message names; no modifier
  or script uses those event IDs.)
- **Save/restore: used, minimally.** Object type `0x4E2` (a save/restore modifier, layout inferred), inside
  global behavior `Save&Restore Game`, aliased once in the Control shared scene: on author message
  `Restore Game` (sent by Intro Scene 0 on Scene Started) and `Save Game` (sent by the Credits Scene on Scene
  Started) it restores/saves the project variable **`gameLevel`**; path variable
  `"<startup segment folder>:Maisy1.sav"`, file-name string `save.dat`. A second instance in global behavior
  `Save Game, Restore Game` (paths `babePA.sav`, player name/ticket lists) is not referenced by any alias.
- **Movies / QuickTime: not used.** No movie element, no movie asset, no AVI, no QuickTime-coded mToon.
  Global behaviors named "Movie Player", "Movie Audio Player", "Done Reporter, Movie" exist in the library;
  most are unreferenced and none is attached to a movie element.
- **MIDI: not used.**
- **Sound**: 2172 sound elements; background music is handled by `Background Audio Group` elements in the
  shared scenes (author messages `Start Background Audio` / `Stop Background Audio`). 3 Sound Effect
  modifiers exist, all with no asset (system beep) in debug behaviors.

## Cursor usage

- 199 `CursorMod` objects with cursor IDs **10005** ("Hand Up", on Mouse Over of buttons), **10011**
  ("System Arrow": on Mouse Outside, on `Scene Activated` in `Std Scene`, one `MOver; Arrow` per scene on
  the `Cursor Layer` element), **10010** (on Mouse Down, 8 objects, in `Click&Stick cursors` behaviors), **10013**
  ("Happy Face", on Scene Started in `Std Load Scene`). The quoted names are the modifiers' names; the IDs
  were not looked up in `CURSORS.C32`.
- Element-as-cursor: click-and-stick behaviors and the OUT paintbrush set
  `element.worldmanager.cursorelement` / `cursorhotspot` (18 + 9 script statements) so that an mToon element
  follows the pointer. Scenes contain a `Cursor Layer` / `cursor layer` element for this.

## Interaction patterns found in the library

- **Buttons**: `button mouser` (Mouse Over/Outside/Down/Up Inside → `Rollover`/`Rolloff`/`Press`/`Release`/
  `Do Button`) + `static button cels` (sets the mToon `cel` attribute 1–4) or `dynamic button ranges` (plays
  named ranges "up/rollover/down/disabled").
- **Click-and-stick** (library behaviors `Click&Stick graphic/mouser/cursors`; used by `GIN … unstick` and
  `MES item` behaviors): Mouse Up Inside → `Stick` (element becomes the cursor element), next click →
  `unStick`. In `MES item`, a Collision Detection messenger (3 objects in total, all in MES item variants)
  then sends `Ping` to the colliding element and `Snap Back` runs when nothing matched.
- **Drag Motion** modifiers: 15 objects (font sizer handle, credits scroll, PLA Foyer, DRA scenes, TRA scenes,
  3 in the library).
- **Keyboard**: 20 Keyboard messengers — Space → `Go`, arrow keys/`x`/`v` debug controls in GIN
  LV1/LV2, Cmd-Up/Down enable/disable the debug manager, a debug "Keyboard Interpreter".
- **Voice-over/animation sync**: Media Cue messengers on sound markers.
- **Debug layer**: `Debug_Message_Display`, `debugManager`, "Debug Print" behaviors are present in every shared
  scene (`debugEnabled` initial value true).

## Recommended representative activity

**`MES Messy Room LV1 PR Scene`** (stream 45, `structure/scene_45_MES_Messy_Room_LV1_PR_Scene.txt`).

Why: it is the smallest full activity (59 elements, 96 modifiers, 17 mToon elements, 17 sound elements,
8 scene-local scripts; stream 3.0 MB) and still exercises what is typical: mToon character animations
(Maisy/Eddie setup, closeup, reward), narrator voice-over, SFX, mToon buttons, click-and-stick items with
collision detection against containers and snap-back, the shared-scene popups and background audio, and
level routing. It contains no Bitmap plug-in modifier. Its behaviors come almost entirely from the global
table (56 aliases), so reproducing it also covers a large part of the shared library.

Navigation path in authored terms (levels are routed by `gameLevel`, which is 1 after `project setup`
unless `Restore Game` loads another value):

1. `StartUp Section / Subsection / PC Font Size` — no input needed (`Black_Cover`: Scene Started → `Go` →
   next scene).
2. `Go to Main Section Scene` — no input (timer → `Intro Scene 0`).
3. `Intro Scene 0` → `Intro Scene 1` → `2` → `3` → `Intro Scene 4 Title` — no input (3 s timers); a click on
   a splash sends `User Selected` and jumps to the title scene.
4. Title → `House Exterior Scene` (timer, or click).
5. `House Exterior Scene`: click the button mToon (`Do Button` → `Go` → `PLA Foyer Load Scene` → `PLA Foyer`).
6. `PLA Foyer`: click the **Easel button** (`PLA Easel Button`: `Do Button` → `Play Click` → `Click Done` →
   `Enter` to `sharedScene.EaselPopup`).
7. `EaselPopup` (Control shared scene): click the Messy Room button (`Easel Activity bt` →
   `Navigate` → Change Scene `Navigate ->>MES load`).
8. `MES Messy Room Load Scene`: no input (0.5 s timer → `Next Scene` → `Go` to `childmod[gameLevel+1]` →
   `Go ->> LV 1` → **`MES Messy Room LV1 PR Scene`**).

Three clicks from startup. A simpler alternative with click-only interaction (no click-and-stick) is
**`PLA Bathroom1 Scene`** (stream 17; 54 elements, 12 `PLA fun click` hotspots with mToon animation and
sound): steps 1–5, then click the bathroom door in the Foyer; the load scene picks Bathroom1/2/3 by
`curScene` (random on first visit), so the exact variant is not fixed.

## Where to look

| question | file |
|---|---|
| what is in scene X | `structure/scene_NN_*.txt` (tree), `structure/json/scene_NN.json` (all fields) |
| what does shared behavior Y do | `structure/global_modifiers.txt` (search the name), `scripts/global_modifiers.txt` |
| a script's logic | `scripts/*.txt` — disassembly + generated pseudocode |
| which message names exist | `structure/label_map.txt`, `inventory/messages_events.csv` |
| asset by ID/name | `inventory/assets.csv`, `assets/index.json` |
| anything uncertain | `inventory/unresolved.csv`, FORMAT_NOTES.md §6 |
