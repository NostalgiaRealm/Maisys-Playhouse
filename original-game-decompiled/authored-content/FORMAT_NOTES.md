# Maisy's Playhouse (1999, Windows) — data format notes

Scope: the two mTropolis project files of the Windows English release.

| file | size | role |
|---|---|---|
| `original/disc/z_data/data.mfx` | 4,588,716 | segment 1 "Startup Segment": file preamble, project header, catalog, boot stream, 3 small scene streams |
| `original/disc/data2.mxx` | 294,743,286 | segment 2 "Main Segment": 62 scene streams with all media |

Everything here was produced by static parsing with the Python tools in `scripts/formats/`.
No game binary was executed. The inputs were only read (mmap, read-only).

Format reference: ScummVM `engines/mtropolis` (`data.cpp`, `data.h`, `runtime.cpp`, `miniscript.cpp`,
`assets.cpp`, `plugin/*_data.cpp`). Field names in the dumps are ScummVM's; a field called `unk…`/`unknown…`
is unknown there too. Where this title differs from what ScummVM reads, it is listed under
"Differences from ScummVM's reader" and marked as observed.

---

## 1. What the files contain

- **Project format**: first u16 of `data.mfx` = 8 → cross-platform ("neutral") project. Magic `0xAA55A5A5`,
  `hdr1 = 0x02000000` (the value ScummVM treats as an mTropolis 2.0 project header), `hdr2 = 14`.
- **Catalog** (object type `0x3E8`, revision 3, at offset 34, ends at 2981): 2 segments, 68 stream descriptors.
  Catalog data is little-endian.
- **Every stream exists twice**, once per platform (catalog rev 3 stores `macPos/macSize/winPos/winSize`):
  - the "mac" copy is big-endian and holds structure + asset *headers* only (9,041,673 bytes in total);
  - the "win" copy is little-endian and holds the same structure + asset headers **plus** the media
    (`AssetDataChunk`) (290,287,348 bytes in total).
  - Asset headers in both copies point at the same absolute file offsets inside the win copy's data chunk.
- **Streams**: #1 and #2 `assetstream` (both empty, size 0), #3 `bootstream` (named `builtObjects`),
  #4–#68 `scenestream` (one per scene; the stream header carries the first 16 characters of the scene name).
  See `catalog.json`.
- **Boot stream** (stream 3, in `data.mfx`), in order: StreamHeader, PresentationSettings, plug-in modifier
  table (type `0x2B`), AssetCatalog (2321 entries), type `0x19`, GlobalObjectInfo (509 global modifiers),
  the 509 global modifiers with their nested children, ProjectLabelMap, the Project definition with its
  modifiers, one ColorTableAsset, then sections → subsections → scene elements (scene elements only; their
  contents are in the scene streams).
- **Scene streams**: StreamHeader, then the scene's modifiers and child elements (depth-first, nesting given
  by flags), then asset headers (ColorTableAsset, MToonAsset, AudioAsset, TextAsset), then one
  `AssetDataChunk` (win copy only) containing all media bytes for that stream.
- **Presentation**: 640 × 480, 8 bits per pixel (PresentationSettings rev 3).

### Layout of a data object (as observed)

```
u32 type   u16 revision   then type-specific fields
```
Most objects continue with `u32 flags, u32 sizeIncludingTag` (size counts from the type field), which is
what the tool uses to cross-check every parser and to skip anything it cannot parse.
Structural nesting: elements carry `structuralFlags` (`0x1` has modifiers, `0x4` has children, `0x8` no more
siblings); modifier lists end at the modifier whose `modifierFlags & 0x2` is set; Behavior and Compound
Variable modifiers are followed by `numChildren` child modifiers; the global modifier table is a counted
list (`GlobalObjectInfo.numGlobalModifiers`). A scene element's `streamLocator & 0xFFFF` is the 1-based
index of its scene stream. This is ScummVM's loader logic, re-implemented in `mtropolis_dump.py`
(`TreeBuilder`); it consumed all 66 non-empty streams without a leftover or misplaced object.

### Object types present (Windows copy, counts are data objects, not unique things)

| type id | name (ScummVM) | revision | count |
|---|---|---|---|
| `0x2` | ProjectStructuralDef | 2 | 1 |
| `0x3` | SectionStructuralDef | 1 | 2 |
| `0x21` | SubsectionStructuralDef | 0 | 4 |
| `0x8` | GraphicElement | 1 | 2138 |
| `0x6` | MToonElement | 3 | 2475 |
| `0xa` | SoundElement | 3 | 2172 |
| `0x15` | TextLabelElement | 0 | 39 |
| `0xd` | AssetCatalog | 4 | 1 |
| `0xf` | MToonAsset | 1 | 1679 |
| `0x11` | AudioAsset | 2 | 1539 |
| `0x1e` | ColorTableAsset | 0 | 117 |
| `0x1f` | TextAsset | 3 | 39 |
| `0xffff` | AssetDataChunk | 0 | 55 |
| `0x17` | GlobalObjectInfo | 1 | 1 |
| `0x19` | Unknown19 | 0 | 1 |
| `0x22` | ProjectLabelMap | 0 | 1 |
| `0x2b` | Unknown2B (plug-in modifier table, see below) | 1 | 1 |
| `0x3e9` | StreamHeader | 0 | 66 |
| `0x3ec` | PresentationSettings | 3 | 1 |
| `0x27` | AliasModifier | 4 | 6598 |
| `0x136` | ChangeSceneModifier | 2001 | 53 |
| `0x1a4` | SoundEffectModifier | 2000 | 3 |
| `0x208` | DragMotionModifier | 2000 | 15 |
| `0x21b` | PathMotionModifierV2 | 2001 | 4 |
| `0x226` | VectorMotionModifier | 2001 | 2 |
| `0x26c` | SceneTransitionModifier | 2001 | 2 |
| `0x2bc` | IfMessengerModifier | 2002 | 230 |
| `0x2c6` | BehaviorModifier | 2 | 3150 |
| `0x2c7` | CompoundVariableModifier | 2 | 171 |
| `0x2da` | MessengerModifier | 2002 | 3354 |
| `0x2df` | SetModifier | 2000 | 156 |
| `0x2e4` | TimerMessengerModifier | 2002 | 115 |
| `0x2ee` | CollisionDetectionMessengerModifier | 2002 | 3 |
| `0x302` | KeyboardMessengerModifier | 2003 | 20 |
| `0x321` | BooleanVariableModifier | 2000 | 208 |
| `0x322` | IntegerVariableModifier | 2000 | 1990 |
| `0x324` | IntegerRangeVariableModifier | 2000 | 21 |
| `0x326` | PointVariableModifier | 2000 | 352 |
| `0x327` | VectorVariableModifier | 2000 | 16 |
| `0x329` | StringVariableModifier | 2000 | 418 |
| `0x32a` | TextStyleModifier | 2000 | 1 |
| `0x334` | GraphicModifier | 2001 | 151 |
| `0x384` | ImageEffectModifier | 2000 | 24 |
| `0x3c0` | MiniscriptModifier | 2003 | 4277 |
| `0x4c4` | ColorTableModifier | 2001 | 4 |
| `0x4e2` | *not in ScummVM* — second save/restore modifier (layout inferred) | 2000 | 2 |
| `0xffffffff` | PlugInModifier `ObjRefP` (plug-in rev 3) | 2001 | 722 |
| `0xffffffff` | PlugInModifier `CursorMod` (rev 2) | 2001 | 199 |
| `0xffffffff` | PlugInModifier `ListMod` (rev 5) | 2001 | 177 |
| `0xffffffff` | PlugInModifier `MediaCue` (rev 2) | 2001 | 130 |
| `0xffffffff` | PlugInModifier `SysInfo` (rev 1) | 2001 | 7 |
| `0xffffffff` | PlugInModifier `hlBitmapVariable` (rev 1) | 2001 | 6 |
| `0xffffffff` | PlugInModifier `hlCaptureBitmap` (rev 1) | 2001 | 6 |
| `0xffffffff` | PlugInModifier `hlPrintBitmap` (rev 1) | 2001 | 6 |

Types that do **not** occur anywhere in either file: MovieElement `0x5`, AVIMovieElement `0x25`,
MovieAsset `0x10`, AVIMovieAsset `0x24`, ImageElement `0x7`, ImageAsset `0xe`, and no plug-in modifier named
`MIDIModf`. Because 100 % of both files is accounted for by parsed objects (section 4), this absence is a
checked fact, not a sampling result.

### Differences from ScummVM's reader (observed in this title)

ScummVM lists the title as unimplemented; these are the places where its data reader would stop:

1. **PlugInModifier revision 2001** has an extra `u32` after `lengthOfName` (same position as the extra
   field of the 2xxx "typical modifier header"). Header is 56 bytes + name; `codedSize` = whole object.
2. **Plug-in payloads start with a `u16` repeating `plugInRevision`** (when the payload is not empty). After
   that prefix the ScummVM field sequences fit exactly for `CursorMod`, `MediaCue`, `ObjRefP`, `ListMod`,
   `hlCaptureBitmap`, `hlPrintBitmap`. `SysInfo` and `hlBitmapVariable` have no payload at all.
   The plug-in revisions are higher than ScummVM accepts (`ListMod` 5, `ObjRefP` 3, `MediaCue` 2,
   `SysInfo` 1, `hl*` 1).
3. **CompoundVariableModifier revision 2** has an extra `u32` before the name.
4. **StringVariableModifier revision 2000**: the string length does not include a NUL terminator.
5. **Type `0x4E2`** (2 objects, names "Save Game ,Restore Game" / "Save and Restore Modifier") is unknown to
   ScummVM. Parsed here as: typical 2xxx header, 4 unknown bytes, `saveWhen` event, `restoreWhen` event, two
   46-byte tagged values (variable to save, variable holding the path), 4 unknown bytes, five length bytes,
   1 unknown byte (`0x65`), then the strings (variable name, path-variable name, file name `save.dat`).
   Sizes match the declared object size for both instances; the *meaning* of the fields is inferred.
6. **Miniscript opcodes not in ScummVM's table**: `0x138` (38 uses), `0x3EA` (56 uses), `0x908` (1 use).
   See section 3.
7. **mToon RLE frame header version is `0x81000001`** for every frame (ScummVM accepts `0x01000001`). The
   pixel stream itself is the documented 8-bit scheme.
8. **Type `0x2B`** is skipped by ScummVM. Here it decodes as a table of the plug-in modifiers the project
   uses: `u16 count` then 84-byte records `{u8, char name[17], u16 revision, char displayName[32],
   char kit[16], char vendor[16]}` (layout inferred; all 8 records are fully populated and their revisions
   equal the `plugInRevision` of the corresponding modifiers). Decoded in
   `structure/plugin_modifier_table.txt`.

---

## 2. How authored objects connect to the native runtime

Sources for this table: the plug-in table inside the project (type `0x2B`, confirmed data), the PE export
lists already collected in `inventory/modules.json` (export *names* only), and ScummVM for what each object
type does. The pairing "object type → BASIC.X32 export" is by name similarity and is **inferred**; nobody
has traced the loader yet.

| authored object | runtime side | basis |
|---|---|---|
| Elements (Graphic `0x8`, mToon `0x6`, Sound `0xa`, Text `0x15`), sections, scenes, assets | player executable `Maisy.exe` (no exports) | inferred: no plug-in exports element types |
| Behavior `0x2c6` | BASIC.X32 `behavmod` | inferred (name) |
| Miniscript `0x3c0` | BASIC.X32 `miniscriptmod` | inferred (name) |
| Messenger `0x2da` / If Messenger `0x2bc` / Timer `0x2e4` / Keyboard `0x302` / Collision `0x2ee` | BASIC.X32 `messengermod` / `ifmsgmod` / `timemsgmod` / `kbdmod` / `collisionmod` | inferred (name) |
| Set `0x2df`, Change Scene `0x136`, Scene Transition `0x26c` | BASIC.X32 `setmod`, (unclear), `transmod` | inferred (name); Change Scene export not identified |
| Drag Motion `0x208`, Path Motion `0x21b`, Vector Motion `0x226` | BASIC.X32 `dragmod`, `patmotmod`, `vectormotionmod` | inferred (name) |
| Graphic `0x334`, Image Effect `0x384`, Text Style `0x32a`, Color Table `0x4c4`, Sound Effect `0x1a4` | BASIC.X32 `graphmod`, `imagefxmod`, `textmod`, `ctabmod`, `soundmod` | inferred (name) |
| Variables: Compound `0x2c7`, Boolean `0x321`, Integer `0x322`, Range `0x324`, Point `0x326`, Vector `0x327`, String `0x329` | BASIC.X32 `compmod`, `boolmod`, `integermod`, `rangemod`, `pointmod`, `vectormod`, `stringmod` | inferred (name) |
| type `0x4e2` (save/restore) | BASIC.X32 `newsaverestoremod` (the older `saverestoremod` would be type `0x4d8`, which does not occur) | inferred |
| Alias `0x27` | global modifier table in the boot stream | confirmed (index resolves for all 6598 aliases) |
| `CursorMod`, `MediaCue`, `ListMod`, `ObjRefP` | "Extras" kit, vendor mFactory → `EXTRAS.R32` (exports with exactly these names) | kit name confirmed from project data; file by export name |
| `SysInfo` | "Experimental" kit, vendor mFactory → `EXPRMNTL.R32` (export `SysInfo`) | same |
| `hlBitmapVariable`, `hlCaptureBitmap`, `hlPrintBitmap` | "Bitmap" kit, vendor Hoo Logic, Inc. → `Bitmap.r32` (exports with these names) | same |
| cursor IDs 10005 / 10010 / 10011 / 10013 used by `CursorMod` | cursor resources; `CURSORS.C32` exports only `_WEP` (a resource-only module) | inferred; the IDs were not looked up in the resource file |
| — | `NETWORK.R32` (`nMessenger`, `OpenURL`, …): **no modifier of this kit exists in the project** | confirmed absence (plug-in table has no Network entry; no such modifier object) |
| — | `Bitmap.r32` `hlDisplayBitmap`, `hlImportBitmap`, `hlSaveBitmap`, `hlScaleBitmap`: not used | confirmed absence |
| — | `EXTRAS.R32` `MIDIModf`, `MidiAst`, `QTVR*`, `Navigate`, `OpenTitle`, `Print`, `openApp`, `fade`, `panning`, `FileMod`, `TrackController`, `PointMotion`: not used | confirmed absence |

Media codecs the runtime needs for this title:

- **mToon**: 1670 asset objects use codec ID `0x2E524C45` (".RLE"), 8 bpp; 9 are 1×1 uncompressed 1-bpp
  placeholders. No mToon uses a QuickTime codec.
- **Audio**: all 1539 asset objects are uncompressed PCM, mono (22,050 Hz 8-bit unsigned; one unique sound
  is 44,100 Hz 16-bit little-endian). No MACE, no ADPCM.
- **Movies**: none. **QuickTime is not needed by the authored content** (no QuickTime/AVI movie objects, no
  QuickTime-coded mToons; the "QuickTime Ranges" label group is empty). Whether `Maisy.exe` still tries to
  load QuickTime at startup is a question about the executable, not answered here.
- **MIDI**: none.
- **Palette**: 3 colour tables; every mToon header embeds the same 256-entry palette, identical to asset 36.

---

## 3. Miniscript

4507 programs: 4277 Miniscript modifiers + 230 If-Messenger conditions; 33,630 instructions.
Instruction encoding (ScummVM): `u16 opcode, u16 flags, u16 size, operands`. Numbers are stored as doubles.
Jump offsets are relative to the jump instruction and can be negative (loops); the tool reads them signed.

Opcodes not known to ScummVM, named by inference from usage:

| opcode | tool name | operands | inferred meaning | evidence |
|---|---|---|---|---|
| `0x3EA` | `CallFunction?` | u32 attribute-name index, u32 argc | call the named function with argc arguments | names are `insertstring`, `stringlength`, …; argc always equals the number of values prepared |
| `0x138` | `ArgListJoin?` | none | join the two top stack values into an argument list | appears exactly argc−1 times before each multi-argument `0x3EA` |
| `0x908` | `UnknownStmt_0x908` | 4 bytes `00000001` | unknown statement | single use, in "Tick; Hide" of the scene-transition mouse stopper |

All 4507 programs disassemble completely, and the generated pseudocode pass succeeds for all of them
(structured `if/else`, `while`). The pseudocode is generated; it is not the authored source.

---

## 4. Coverage (reconciled)

Run of `mtropolis_dump.py`; details per stream in `inventory/coverage.csv` / `coverage.json`.

| | Windows copies | Mac copies |
|---|---|---|
| streams with data | 66 (of 68; 2 asset streams are empty) | 66 |
| stream bytes | 290,287,348 | 9,041,673 |
| bytes consumed by parsed objects | 290,287,348 (100 %) | 9,041,673 (100 %) |
| data objects | 32,925 | 32,870 (= 32,925 − 55 AssetDataChunk) |
| parsed, declared size == consumed size | 29,705 | 29,650 |
| parsed, type has no usable declared size (AssetCatalog, LabelMap, MToonAsset, AudioAsset) | 3,220 | 3,220 |
| partial / opaque payload / unknown / fatal | 0 / 0 / 0 / 0 | 0 / 0 / 0 / 0 |

- File level: preamble + catalog (2,981 bytes) + all stream copies = 4,588,716 bytes of `data.mfx` and
  294,743,286 bytes of `data2.mxx`: every byte of both files lies in exactly one parsed region, no gaps, no
  overlaps.
- Media: the 3,218 mToon/audio data ranges tile the 55 `AssetDataChunk` payloads exactly
  (282,378,316 bytes, no gap, no overlap, all inside the owning stream).
- Mac vs Windows copies: for all 66 streams the sequence of (type, GUID, name, asset ID) is identical once
  `AssetDataChunk` is left out.
- Tree: 509 global modifiers, 1 project, 2 sections, 4 subsections, 65 scenes; the loader stack ends clean for
  every stream; all 6598 alias indexes are in range.
- Plug-in modifiers: 1253 objects, all payloads consumed exactly by a field layout (0 opaque).
- Scripts: 4507 / 4507 disassembled; 4507 / 4507 pseudocode reconstructions.
- Assets: 1232 unique mToons (27,478 frames; 28,651 frames decoded across 1282 distinct byte streams, 0
  failures), 935 unique sounds (54.9 minutes), 3 palettes, 39 text assets. See `assets/README.md`.

"Parsed" means the bytes are assigned to named fields and the sizes add up. It does not mean every field's
meaning is known (see Unresolved).

---

## 5. Reproduce

```sh
cd "/home/rick/Documents/Rebuilds/Maisy's Playhouse (1999)/original-game-decompiled"

# catalog.json, structure/, scripts/, inventory/   (about 3 s)
python3 -I scripts/formats/mtropolis_dump.py \
    original/disc/z_data/data.mfx original/disc/data2.mxx \
    --out authored-content --json

# assets/ + inventory/asset_extraction*.{csv,json}   (needs Pillow; about 5 s on 32 cores)
python3 -I scripts/formats/mtropolis_assets.py \
    original/disc/z_data/data.mfx original/disc/data2.mxx \
    --out authored-content
```

Tools (`scripts/formats/`):

- `mtropolis_format.py` — reader, catalog, one parser per object type, `read_object()` never raises: on a
  parser failure or an unknown type it records type id, offset, declared size and a hex preview and resyncs
  on the object's `sizeIncludingTag`; only an object with no usable size stops a stream (status `fatal`).
- `mtropolis_miniscript.py` — disassembler and pseudocode generator.
- `mtropolis_dump.py` — catalog, tree, scripts, inventories, coverage.
- `mtropolis_assets.py` — mToon → PNG sheet + JSON, audio → WAV, palettes/text → JSON.

Failure handling was exercised on a scratch copy of `data.mfx` with three deliberate corruptions (unknown
type id, broken plug-in payload, unterminated name): the run completed, still consumed 100 % of the bytes,
and reported the three objects as `unknown` / `opaque-payload` with offset, size and hex preview.

Output map: `catalog.json`; `structure/project_tree.txt`, `global_modifiers.txt`, `scene_NN_*.txt`,
`scene_summaries.txt`, `label_map.txt`, `plugin_modifier_table.txt`, `json/*.json` (machine-readable tree);
`scripts/INDEX.txt` + one file per scene + `global_modifiers.txt`; `inventory/*.csv`; `assets/`.

Reading the dumps: `@seg1:0x…` = absolute offset in `data.mfx`, `@seg2:0x…` = in `data2.mxx`.
`alias->X` is an AliasModifier pointing at global modifier X. Names followed by `<0x…>` are GUID lookups.

---

## 6. Confirmed / Inferred / Unresolved

### Confirmed (parsed and cross-checked)

- Cross-platform project, catalog rev 3, 2 segments, 68 streams, dual Mac/Windows stream copies; 100 % byte
  coverage of both files; every object's consumed size equals its declared size where one exists.
- Stage 640×480 at 8 bpp.
- Object-type inventory above, including the complete absence of movie, image and MIDI objects.
- Nesting rules (structural flags, last-modifier flag, counted children, alias table, `streamLocator`).
- Plug-in modifier set = the 8 names in the project's own plug-in table; kit and vendor strings from that
  table; no Network-kit modifier.
- mToon: 8-bit RLE, bottom-up rows, palette embedded in each asset header; decoded pictures look right
  (spot-checked: splash screens, a 4-state button, a delta-coded character animation); row and byte
  consumption exact for all frames.
- `MToonAsset.encodingFlags` bit `0x80000000` marks delta-coded mToons: it is set on exactly the 501 unique
  mToons that contain delta frames and on none of the other 731 (ScummVM lists `0x80` for this; `0x20000000`
  = has named frame ranges, as in ScummVM).
- Audio is raw PCM; coded durations match size / rate within 0.01 s.
- The same asset ID is stored in several streams (1679 mToon objects → 1232 unique, 1539 audio → 935
  unique). 50 mToon byte streams differ from their twin only by equivalent RLE encodings (decoded pixels
  identical).

### Inferred (fits the data, not proven)

- Layout and meaning of type `0x4E2`; its pairing with `newsaverestoremod`.
- Layout of the type `0x2B` plug-in table.
- Meaning of Miniscript opcodes `0x3EA` and `0x138`.
- Pairing of built-in modifier types with BASIC.X32 export names; `CURSORS.C32` as the source of cursor IDs
  10005/10010/10011/10013.
- Event id 1 = "None" and event id 505 = "Do": names taken from the project's own label tree
  (`structure/label_map.txt`, groups "Send Messages"/"Detect Messages"), not from ScummVM.
- mToon delta frames: pixels skipped by a non-key frame keep the previous frame's value (ScummVM behaviour;
  result looks coherent).
- Strings are decoded as Windows-1252.
- `MToonAsset.unk2` = size of the mToon header + frame table (`0x78 + 0x38 × (frames − 1)` in all assets).

### Unresolved

- Field semantics that ScummVM also leaves unnamed: `hlCaptureBitmap` / `hlPrintBitmap` payload fields
  (event, bitmap-variable reference, 2 booleans, 2 integers, 2 nulls), `ListMod.unknown1/unknown2`,
  `ObjRefP.unknown1`, `MediaCue.unknown1/unknown2`, and all `unk…` fields in the JSON tree.
- Miniscript opcode `0x908`.
- Bit 31 of the mToon RLE version word (`0x81000001`).
- Type `0x19` (16 bytes) — content not interpreted.
- 9 variable references whose GUID matches no object (they also carry the variable's name; ScummVM resolves
  such references by name).
- GUIDs are not unique: 488 GUIDs recur in other streams (scene copies), 164 objects reuse a GUID already
  present in the same stream. The dump resolves a reference inside its own stream first; a few name
  annotations next to GUIDs can therefore point at the wrong namesake. Listed in `inventory/unresolved.csv`.
- Which file name the `0x4E2` modifier really writes (path variable says `<startup segment folder>:Maisy1.sav`,
  the modifier's own string says `save.dat`).
- 112 asset-catalog entries have no asset object in any stream (87 flagged deleted, 25 text entries not
  flagged); listed in `inventory/assets.csv` as `catalog-only`.
- Runtime behaviour of anything: nothing was executed, so timing, draw order, cursor shapes and plug-in
  behaviour are not established by this work.
