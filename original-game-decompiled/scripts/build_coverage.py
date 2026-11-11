#!/usr/bin/env python3
"""Reconcile inventory/modules.json with decompiled/<id>/ exports. Writes inventory/coverage.csv, COVERAGE_REPORT.md (native part),
decompiled/<id>/MODULE.md and decompiled/<id>/INPUT.sha256. Usage: build_coverage.py <root>
The authored-content coverage section is appended from authored-content/inventory if present."""
import csv, json, os, sys, hashlib, collections
ROOT = sys.argv[1]
mods = json.load(open(os.path.join(ROOT, 'inventory/modules.json')))
rows, failed_all, md = [], [], []
def sha(p):
    h = hashlib.sha256(); h.update(open(p, 'rb').read()); return h.hexdigest()
for m in sorted(mods, key=lambda m: ({'game': 0, 'plugin': 1, 'autorun': 2, 'installer': 3}.get(m['group'], 9), m['id'])):
    d = os.path.join(ROOT, 'decompiled', m['id'])
    ok = os.path.exists(os.path.join(d, 'summary.json'))
    s = json.load(open(os.path.join(d, 'summary.json'))) if ok else {}
    now = sha(os.path.join(ROOT, m['primary_location']))
    fr = list(csv.DictReader(open(os.path.join(d, 'functions.csv')))) if ok else []
    c = collections.Counter()
    for r in fr:
        n = r['name']
        c['int3_padding' if n == '__break' else 'thunk' if r['is_thunk'] == 'true' else 'named' if not n.startswith(('FUN_', 'thunk_FUN_')) else 'unnamed'] += 1
    rec = collections.Counter(l.split('\t')[1] for l in open(os.path.join(d, 'recovered_functions.tsv')).read().splitlines()[1:]) if ok else {}
    failed = list(csv.DictReader(open(os.path.join(d, 'failed_functions.csv')))) if ok else []
    for f in failed: failed_all.append(dict(module=m['id'], **f))
    perfn = len(os.listdir(os.path.join(d, 'functions'))) if os.path.isdir(os.path.join(d, 'functions')) else 0
    row = dict(id=m['id'], group=m['group'], size=m['size'], sha256=m['sha256'], sha256_matches_now=now == m['sha256'], analysed=ok,
               language=s.get('language', ''), functions_total=s.get('functions', 0), int3_padding_entries=c['int3_padding'], real_functions=s.get('functions', 0) - c['int3_padding'],
               thunks=c['thunk'], named=c['named'], unnamed=c['unnamed'], decompiled=s.get('decompiled', 0), assembly_only=s.get('assembly_only', 0),
               per_function_files=perfn, instructions=s.get('instructions', 0), executable_bytes=s.get('executable_bytes', 0),
               gap_padding_bytes=s.get('gap_padding_bytes', 0), gap_defined_data_bytes=s.get('gap_defined_data_bytes', 0), gap_ambiguous_bytes=s.get('gap_ambiguous_bytes', 0),
               instruction_bytes_outside_functions=s.get('instruction_bytes_outside_functions', 0), recovered_orphan=rec.get('orphan-instructions', 0),
               recovered_prologue=rec.get('prologue-in-gap', 0), recovered_fragment=rec.get('clean-gap-fragment', 0), strings=s.get('strings', 0),
               exports=len(m['exports']), imports=m['n_imports'], analysis_project=os.path.isdir(os.path.join(ROOT, 'analysis-projects', m['id'])))
    rows.append(row)
    if ok:
        open(os.path.join(d, 'INPUT.sha256'), 'w').write('%s  %s\n' % (m['sha256'], m['primary_location']))
        with open(os.path.join(d, 'MODULE.md'), 'w') as f:
            f.write('# %s\n\n' % m['id'])
            f.write('- Role: %s\n- Group: %s (%s)\n' % (m['role'], m['group'], 'gameplay runtime' if m['group'] in ('game', 'plugin') else 'not gameplay'))
            f.write('- Input: `%s` (%d bytes)\n- SHA-256: `%s`\n' % (m['primary_location'], m['size'], m['sha256']))
            if len(m['locations']) > 1: f.write('- Byte-identical copies: %s\n' % ', '.join('`%s`' % l for l in m['locations'][1:]))
            f.write('- Format: %s, image base %s, entry %s, DLL: %s\n' % (m['format'], m['image_base'], m['entry'], m['is_dll']))
            if m['version']: f.write('- Version resource: %s\n' % '; '.join('%s=%s' % kv for kv in sorted(m['version'].items())))
            if m['exports']: f.write('- Exports (%d): %s\n' % (len(m['exports']), ', '.join(m['exports'])))
            if m.get('imports'): f.write('- Imports: %s\n' % ', '.join('%s %d' % kv for kv in m['imports'].items()))
            f.write('\n## Analysis (Ghidra %s, %s)\n\n' % (s.get('ghidra_version'), s.get('language')))
            f.write('- Function entries: %d, of which %d are one-byte `__break` int3 padding entries created by signature matching (not functions), %d thunks, %d named by Ghidra/library signatures, %d unnamed `FUN_`.\n' % (row['functions_total'], row['int3_padding_entries'], row['thunks'], row['named'], row['unnamed']))
            f.write('- Decompiled to pseudocode: %d; assembly-only: %d (see failed_functions.csv).\n' % (row['decompiled'], row['assembly_only']))
            f.write('- Second-pass recovery (recovered_functions.tsv): %d from orphan instructions, %d from prologues in gaps, %d clean gap fragments (heuristic; SEH funclets, switch-case blocks and incremental-link thunks land here).\n' % (row['recovered_orphan'], row['recovered_prologue'], row['recovered_fragment']))
            f.write('- Executable bytes %d; without instructions: padding %d, defined data %d, ambiguous %d (code_gaps.csv). Instruction bytes outside any function: %d.\n' % (row['executable_bytes'], row['gap_padding_bytes'], row['gap_defined_data_bytes'], row['gap_ambiguous_bytes'], row['instruction_bytes_outside_functions']))
            f.write('\nAll C in `decompiled.c` and `functions/` is tool-generated pseudocode, not original source. Names starting with `FUN_`, `DAT_`, `param_`, `local_` are Ghidra placeholders.\n')
            f.write('\nFiles: decompiled.c, functions/ (one file per function), functions.csv, disassembly.asm, calls.csv, data_refs.csv, strings.csv, strings_raw.csv, symbols.csv, imports.csv, exports.csv, sections.csv, code_gaps.csv, recovered_functions.tsv, failed_functions.csv, noreturn_functions.csv, analysis_errors.csv, resources/ + resources.csv, summary.json. Reusable project: `analysis-projects/%s/analysis.gpr`.\n' % m['id'])
with open(os.path.join(ROOT, 'inventory/coverage.csv'), 'w', newline='') as f:
    w = csv.DictWriter(f, list(rows[0].keys())); w.writeheader(); w.writerows(rows)
with open(os.path.join(ROOT, 'inventory/failed_functions_all.csv'), 'w', newline='') as f:
    w = csv.DictWriter(f, ['module', 'address', 'name', 'body_bytes', 'error', 'fallback']); w.writeheader(); w.writerows(failed_all)
L = ['# Coverage report', '', 'Generated by `scripts/build_coverage.py`. Native-code numbers come from each module\'s `summary.json`/`functions.csv`; nothing here is a runtime verification.', '',
     '## Native modules', '', '%d unique code-bearing files (by SHA-256) were found on the disc and inside the two Wise self-extractors; %d were analysed.' % (len(mods), sum(r['analysed'] for r in rows)), '',
     '| Module | Group | Bytes | Real functions | Decompiled | Assembly-only | int3 pad entries | Ambiguous gap bytes | Project | SHA-256 unchanged |', '|---|---|---|---|---|---|---|---|---|---|']
for r in rows:
    L.append('| %s | %s | %d | %d | %d | %d | %d | %d | %s | %s |' % (r['id'], r['group'], r['size'], r['real_functions'], r['decompiled'] - r['int3_padding_entries'], r['assembly_only'], r['int3_padding_entries'], r['gap_ambiguous_bytes'], 'yes' if r['analysis_project'] else 'NO', 'yes' if r['sha256_matches_now'] else 'NO'))
L += ['', 'Totals: %d function entries, %d real functions, %d decompiled to pseudocode, %d assembly-only.' % (sum(r['functions_total'] for r in rows), sum(r['real_functions'] for r in rows), sum(r['decompiled'] - r['int3_padding_entries'] for r in rows), sum(r['assembly_only'] for r in rows)), '',
      '"Real functions" excludes the one-byte `__break` entries: Ghidra\'s signature matcher labels each int3 (0xCC) padding byte between functions as a function. They are kept in the exports for traceability and counted separately.', '',
      '## Assembly-only functions (decompiler failed; disassembly kept in decompiled.c)', '']
if failed_all:
    L += ['| Module | Address | Bytes | Error |', '|---|---|---|---|'] + ['| %s | %s | %s | %s |' % (f['module'], f['address'], f['body_bytes'], f['error']) for f in failed_all]
    L += ['', 'Both are fragments recovered by the second pass (not call targets found by auto-analysis): they have full disassembly but no pseudocode. They are recorded as unresolved for pseudocode, resolved for disassembly.']
else: L.append('None.')
L += ['', '## Unresolved native bytes', '', 'Per module, `code_gaps.csv` lists every executable range without instructions, classified as padding, defined data, or ambiguous. Ambiguous totals are in the table above (mostly jump-table tails and alignment after tables). `analysis_errors.csv` lists Ghidra error bookmarks ("conflicting data" entries are in-.text switch tables met by linear flow).', '']
open(os.path.join(ROOT, "COVERAGE_REPORT.native.md"), 'w').write('\n'.join(L) + '\n')
print('\n'.join(L[8:30]))
