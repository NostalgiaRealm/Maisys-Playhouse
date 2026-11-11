# Extracted assets (generated — these are ASSETS, not source)

Produced by `scripts/formats/mtropolis_assets.py` from `original/disc/z_data/data.mfx` and
`original/disc/data2.mxx` (read-only inputs). Regenerate with the command in `../FORMAT_NOTES.md` §5.
Per-object log: `../inventory/asset_extraction.csv`; totals: `../inventory/asset_extraction_summary.json`;
machine-readable list: `index.json`.

| kind | asset objects in the streams | unique, extracted | original encoding | output |
|---|---|---|---|---|
| mToon animation | 1679 | 1232 (27,478 frames) | 1229 × codec `0x2E524C45` ".RLE": mTropolis 8-bit run-length, rows bottom-up, 501 of them delta-coded; 3 × uncompressed 1-bpp 1×1 placeholders (9 objects) | `mtoon/<id>_<name>.png` sprite sheet + `.json` |
| sound | 1539 | 935 (54.9 min) | uncompressed PCM, mono: 934 × 22,050 Hz 8-bit unsigned, 1 × 44,100 Hz 16-bit signed little-endian | `audio/<id>_<name>.wav` (RIFF header added, sample bytes unchanged) |
| colour table | 117 | 3 | 256 RGB entries | `palettes/*.json` |
| text | 39 | 39 | plain text (no bitmap text) | `text/text_assets.json` |
| movie (QuickTime / AVI) | 0 | — | none exist in the title | — |
| still image | 0 | — | none exist in the title | — |
| MIDI | 0 | — | none exist in the title | — |

Decoding status: every frame of every mToon decoded (28,651 frames over 1282 distinct byte streams, 0
failures; 50 byte streams were pixel-identical re-encodings of an already extracted asset). Nothing was left
undecoded. No codec in this title requires QuickTime.

Notes

- The same asset ID is stored in every scene stream that uses it; duplicates were verified identical
  (SHA-1 of the sound data / of the decoded mToon pixels) and extracted once.
- mToon PNGs are 8-bit paletted. The palette is the 256-entry table embedded in the asset header, which is
  the same for all mToons and equal to colour table asset 36 (`MAISYFINAL.act`). At runtime the authored
  ColorTable modifier selects asset 37 (`PCMAISYFINAL.ACT`) on `80x86`; the two tables differ slightly, so
  on-screen colours on Windows may differ from these PNGs.
- Sheet layout: cell *i* (0-based) is at column `i % columns`, row `i // columns`; every cell has the full
  mToon size; frames with a smaller rectangle are placed at their offset inside the cell. See each `.json`
  (`frames[].rect`, `frames[].sheetCell`, `frameRanges`, `registrationPoint`).
- For delta-coded mToons each cell shows the accumulated picture (delta applied to the previous frame).
- Transparency is not baked in: which palette index is transparent is decided at runtime by the element's
  Graphic modifier (ink mode / back colour, typically `BackgroundTransparent` or `BackgroundMatte` with
  back colour `#00ff00`).
- Sound cue points (used by Media Cue messengers) are in `index.json` → `audio[].cuePoints`
  (`position` is the value stored in the asset; it looks like a sample-frame index — e.g. 459398 in a 459399-sample sound — but that is inferred).
- File names are `<asset id>_<catalog name>`; the catalog names are the authors' (`…​.mt`, `.aif`, `.act`).
