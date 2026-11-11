#!/usr/bin/env python3
"""Print the caller tree of the function containing an address (direct calls + thunks + data refs). Usage: callers.py <module> <hex addr> [depth]"""
import csv, glob, os, sys, bisect
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
d = [p for p in glob.glob(os.path.join(ROOT, 'decompiled/*')) if sys.argv[1] in os.path.basename(p)][0]
fn = [r for r in csv.DictReader(open(os.path.join(d, 'functions.csv'))) if r['name'] != '__break']
rngs = sorted((int(x.split('-')[0], 16), int(x.split('-')[1], 16), r) for r in fn for x in r['body_ranges'].split(';'))
los = [x[0] for x in rngs]
def containing(a):
    k = bisect.bisect_right(los, a) - 1
    return rngs[k][2] if k >= 0 and a <= rngs[k][1] else None
by = {}
for c in csv.DictReader(open(os.path.join(d, 'calls.csv'))):
    try: by.setdefault(int(c['target'], 16), []).append(int(c['call_site'], 16))
    except ValueError: pass
for c in csv.DictReader(open(os.path.join(d, 'data_refs.csv'))):
    try: by.setdefault(int(c['to_address'], 16), []).append(int(c['from_address'], 16))
    except ValueError: pass
maxd = int(sys.argv[3]) if len(sys.argv) > 3 else 3
seen = set()
def walk(addr, depth):
    for site in by.get(addr, []):
        f = containing(site)
        print('  ' * depth + '%08x in %s %s' % (site, f['address'] if f else '(data)', f['name'] if f else ''))
        if f and depth < maxd and f['address'] not in seen:
            seen.add(f['address']); walk(int(f['address'], 16), depth + 1)
f = containing(int(sys.argv[2], 16)); print(f['address'], f['name']); walk(int(f['address'], 16), 0)
