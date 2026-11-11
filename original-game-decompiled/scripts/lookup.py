#!/usr/bin/env python3
"""Find the function containing an address and print its pseudocode. Usage: lookup.py <module-id-substring> <hex address> [max_lines]"""
import csv, glob, os, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
d = [p for p in glob.glob(os.path.join(ROOT, 'decompiled/*')) if sys.argv[1] in os.path.basename(p)][0]
a = int(sys.argv[2], 16); n = int(sys.argv[3]) if len(sys.argv) > 3 else 400
for r in csv.DictReader(open(os.path.join(d, 'functions.csv'))):
    for rng in r['body_ranges'].split(';'):
        lo, hi = [int(x, 16) for x in rng.split('-')]
        if lo <= a <= hi and r['name'] != '__break':
            print('// %s %s callers=%s file=%s' % (r['address'], r['name'], r['caller_count'], r['per_function_file']))
            print(''.join(open(os.path.join(d, r['per_function_file'])).readlines()[:n])); sys.exit(0)
print('no function contains', sys.argv[2])
