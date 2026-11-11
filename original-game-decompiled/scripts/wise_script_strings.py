#!/usr/bin/env python3
"""Offset-annotated string listing of a WiseScript stream (the compiled install script inside a Wise STUB32 overlay).
Usage: wise_script_strings.py <script.bin> <out.txt>
This is NOT a decompilation of the script opcodes: only the embedded NUL-terminated strings in file order, which carry the
variable names, registry keys, source/destination paths, dialog texts and executed commands. Opcode framing is unresolved."""
import re, sys
b = open(sys.argv[1], 'rb').read()
with open(sys.argv[2], 'w', encoding='utf-8') as f:
    f.write('; strings (>=3 chars) of %s, %d bytes; offset<TAB>text. Opcode structure not decoded.\n' % (sys.argv[1], len(b)))
    for m in re.finditer(rb'[\x09\x20-\x7e\xa0-\xff]{3,}', b):
        f.write('0x%05x\t%s\n' % (m.start(), m.group().decode('cp1252', 'replace')))
