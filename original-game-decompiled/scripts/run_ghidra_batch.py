#!/usr/bin/env python3
"""Run Ghidra headless over every module in inventory/modules.json. Target binaries are never executed.
Usage: run_ghidra_batch.py <root> [--only substr] [--jobs N] [--force]
Per module: decompiled/<id>/ (exports) and analysis-projects/<id>/ (reusable Ghidra project). Resumable via summary.json.
Each job runs in a systemd scope with a memory ceiling so a runaway native decompiler cannot take the desktop down."""
import argparse, json, os, shutil, subprocess, sys, time
from concurrent.futures import ThreadPoolExecutor
ap = argparse.ArgumentParser(); ap.add_argument('root'); ap.add_argument('--only', default=''); ap.add_argument('--jobs', type=int, default=4); ap.add_argument('--force', action='store_true')
a = ap.parse_args(); ROOT = os.path.abspath(a.root)
GH = os.path.expanduser('~/.local/bin/ghidra-headless'); LOGD = os.path.join(ROOT, 'logs/ghidra'); os.makedirs(LOGD, exist_ok=True)
def job(m):
    mid = m['id']; dst = os.path.join(ROOT, 'decompiled', mid); final = os.path.join(ROOT, 'analysis-projects', mid)
    # Ghidra rejects project paths containing an apostrophe ("Maisy's"): analyse in a neutral work dir, then move the project here
    proj = os.path.join(os.path.expanduser('~/Documents/Rebuilds/maisy-ghidra-work'), mid)
    if os.path.exists(os.path.join(dst, 'summary.json')) and not a.force: return mid, 'skip'
    shutil.rmtree(proj, ignore_errors=True); os.makedirs(proj); os.makedirs(dst, exist_ok=True); shutil.rmtree(os.path.join(dst, 'functions'), ignore_errors=True)
    big = m['size'] > 800000
    cmd = [GH, proj, 'analysis', '-import', os.path.join(ROOT, m['primary_location']), '-overwrite', '-scriptPath', os.path.join(ROOT, 'scripts/ghidra'),
           '-preScript', 'ConfigureAnalysis.java', 'deep' if m['group'] in ('game', 'plugin') else 'standard', '-max-cpu', '4', '-analysisTimeoutPerFile', '7200',
           '-postScript', 'RecoverGaps.java', dst, '1', '-postScript', 'ExportModule.java', dst, '1', '4' if big else '2']
    heap = 6 if big else 2
    full = (['distrobox-host-exec'] if shutil.which('distrobox-host-exec') else []) + ['systemd-run', '--user', '--scope', '-q', '-p', 'MemoryMax=%dG' % (heap + 6), '-p', 'MemorySwapMax=0', 'env', 'GHIDRA_HEADLESS_MAXMEM=%dG' % heap] + cmd
    t = time.time()
    with open(os.path.join(LOGD, mid + '.console.log'), 'w') as lf: rc = subprocess.call(full, stdout=lf, stderr=subprocess.STDOUT)
    ok = os.path.exists(os.path.join(dst, 'summary.json'))
    if ok:
        shutil.rmtree(final, ignore_errors=True); shutil.move(proj, final)
    rec = dict(id=mid, input=m['primary_location'], sha256=m['sha256'], rc=rc, seconds=round(time.time() - t, 1), command=cmd)
    if ok: rec['summary'] = json.load(open(os.path.join(dst, 'summary.json')))
    json.dump(rec, open(os.path.join(LOGD, mid + '.job.json'), 'w'), indent=1)
    return mid, ('ok %s' % json.dumps(rec['summary'])[:300]) if ok else 'FAILED rc=%s' % rc
mods = [m for m in json.load(open(os.path.join(ROOT, 'inventory/modules.json'))) if a.only in m['id']]
mods.sort(key=lambda m: -m['size'])
bad = 0
with ThreadPoolExecutor(a.jobs) as ex:
    for mid, res in ex.map(job, mods):
        print(time.strftime('%H:%M:%S'), mid, res, flush=True); bad += res.startswith('FAILED')
sys.exit(1 if bad else 0)
