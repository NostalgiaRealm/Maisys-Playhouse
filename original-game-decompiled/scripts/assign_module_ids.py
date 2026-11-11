#!/usr/bin/env python3
"""modules_raw.json -> modules.json / modules.csv with stable ids, groups and roles. Usage: assign_module_ids.py <root>"""
import json, os, sys, csv
ROOT = sys.argv[1]
mods = json.load(open(os.path.join(ROOT, 'inventory/modules_raw.json')))
ROLES = {
 'MTPLAY32.EXE': ('game', 'Maisy.exe', 'mTropolis 2.0 32-bit Windows Player (mTplay32.exe): the runtime that loads data.mfx/data2.mxx and the mPlugins; all gameplay runs through it'),
 'BASICKIT.X32': ('plugin', 'BASIC.X32', 'mTropolis Basic Kit: standard modifiers (miniscript, drag, collision, messengers, variables, save/restore ...)'),
 'Bitmap.r32': ('plugin', 'Bitmap.r32', 'third-party "hl" bitmap kit: bitmap variable, capture, display, print, save, scale, import modifiers'),
 'cursors.c32': ('plugin', 'CURSORS.C32', 'mCursors: cursor resource container loaded by the player (cursor graphics)'),
 'EXPRMNTL.R32': ('plugin', 'EXPRMNTL.R32', 'mTropolis Experimental Kit modifiers'),
 'EXTRAS.R32': ('plugin', 'EXTRAS.R32', 'mTropolis Extras Kit modifiers'),
 'Network.R32': ('plugin', 'NETWORK.R32', 'mTropolis Network Kit modifiers (Winsock/URL); a byte-identical second copy is in Install.exe'),
 'WISE0132.dll': ('installer', 'WISE0132.dll', 'Wise Installation System script-engine DLL carried in both Wise stubs; not gameplay'),
 'WIZWIN32.dll': ('installer', 'WIZWIN32.dll', 'Wise wizard-dialog helper DLL; not gameplay'),
 'REBOOTNT.EXE': ('installer', 'REBOOTNT.EXE', 'Wise reboot helper; not gameplay'),
 'CTL3D32.dll': ('installer', 'CTL3D32.dll', 'Microsoft Ctl3D 3D-controls redistributable (two builds); not gameplay'),
 'W32INST.DLL': ('installer', 'W32INST.DLL', 'Wise helper DLL; not gameplay'),
 'UNWISE32.EXE': ('installer', 'UNWISE32.EXE', 'Wise uninstaller placed in the install folder; not gameplay'),
}
seen = {}
for m in mods:
    key = m.get('export_dll_name', '')
    if m['primary_location'].endswith('Autorun.EXE'): g, n, role = 'autorun', 'Autorun.EXE', 'Wise STUB32 self-extractor used as the disc autorun menu (script + bitmaps/font in overlay); not gameplay'
    elif m['primary_location'].endswith('Install.exe'): g, n, role = 'installer', 'Install.exe', 'Wise STUB32 self-extractor that installs the plug-ins, help file and shortcuts; not gameplay'
    elif key in ROLES: g, n, role = ROLES[key]
    elif m['format'].startswith('MZ ('): g, n, role = 'installer', 'dos_stub_%d.exe' % m['size'], '16-bit MZ program carried by the Wise installer (not PE); not gameplay'
    else: g, n, role = 'other', os.path.basename(m['primary_location']), 'unidentified'
    mid = '%s__%s' % (g, n)
    c = seen.get(mid, 0); seen[mid] = c + 1
    if c: mid += '__build%d' % (c + 1)
    m.update(id=mid, group=g, name=n, role=role, analysis_scope='decompile', toolchain='ghidra')
json.dump(mods, open(os.path.join(ROOT, 'inventory/modules.json'), 'w'), indent=1)
with open(os.path.join(ROOT, 'inventory/modules.csv'), 'w', newline='') as f:
    w = csv.writer(f); w.writerow(['id', 'group', 'size', 'sha256', 'format', 'image_base', 'entry', 'exports', 'imports', 'role', 'locations'])
    for m in mods: w.writerow([m['id'], m['group'], m['size'], m['sha256'], m['format'], m['image_base'], m['entry'], len(m['exports']), m['n_imports'], m['role'], ' ; '.join(m['locations'])])
for m in mods: print(m['id'], m['size'])
