#!/usr/bin/env python3
"""Miniscript bytecode disassembler + pseudocode generator for mTropolis projects.

Opcode numbers, operand layouts and stack semantics are taken from ScummVM's
engines/mtropolis/miniscript.cpp (used as a format reference).

The "pseudocode" is GENERATED from the bytecode by symbolic stack evaluation.
It is not the original authored Miniscript source text (which is not stored in
the title's data files).
"""
import struct

OPCODES = {
    0x834: 'Set', 0x898: 'Send', 0xc9: 'Add', 0xca: 'Sub', 0xcb: 'Mul', 0xcc: 'Div', 0xcd: 'Pow',
    0xce: 'And', 0xcf: 'Or', 0xd0: 'Neg', 0xd1: 'Not', 0xd2: 'CmpEqual', 0xd3: 'CmpNotEqual',
    0xd4: 'CmpLessOrEqual', 0xd5: 'CmpLess', 0xd6: 'CmpGreaterOrEqual', 0xd7: 'CmpGreater',
    0xd8: 'BuiltinFunc', 0xd9: 'DivInt', 0xda: 'Modulo', 0xdb: 'StrConcat',
    0x12f: 'PointCreate', 0x130: 'RangeCreate', 0x131: 'VectorCreate', 0x135: 'GetChild',
    0x136: 'ListAppend', 0x137: 'ListCreate', 0x191: 'PushValue', 0x192: 'PushGlobal',
    0x193: 'PushString', 0x7d3: 'Jump',
    # The following three are NOT in ScummVM's opcode table.  Names/semantics are INFERRED
    # from how they are used in this title (mTropolis 2.0 function-call syntax):
    #   0x138: joins the two top stack values into a function argument list (like ListCreate/ListAppend)
    #   0x3ea: operands (u32 attribute-name index, u32 argument count): calls the named function
    #   0x908: statement-level opcode with a 4-byte operand, seen once; meaning unknown
    0x138: 'ArgListJoin?', 0x3ea: 'CallFunction?', 0x908: 'UnknownStmt_0x908',
}
BINOPS = {'Add': '+', 'Sub': '-', 'Mul': '*', 'Div': '/', 'Pow': '^', 'And': 'and', 'Or': 'or',
          'CmpEqual': '=', 'CmpNotEqual': '<>', 'CmpLessOrEqual': '<=', 'CmpLess': '<',
          'CmpGreaterOrEqual': '>=', 'CmpGreater': '>', 'DivInt': 'div', 'Modulo': 'mod',
          'StrConcat': '&'}
BUILTINS = {1: 'sin', 2: 'cos', 3: 'random', 4: 'sqrt', 5: 'tan', 6: 'abs', 7: 'sign', 8: 'arctangent',
            9: 'exp', 10: 'ln', 11: 'log', 12: 'cosh', 13: 'sinh', 14: 'tanh', 15: 'rect2polar',
            16: 'polar2rect', 17: 'trunc', 18: 'round', 19: 'num2str', 20: 'str2num'}
GLOBALS = {1: 'element', 2: 'modifier', 3: 'source', 4: 'incomingData', 5: 'mouse', 6: 'ticks',
           7: 'scene', 8: 'sharedScene', 9: 'section', 10: 'project', 11: 'activeScene'}


def _fmt_num(d):
    if d == int(d) and abs(d) < 1e15:
        return str(int(d))
    return repr(d)


def decode(program, fmt, ctx):
    """Return list of instruction dicts.  ctx provides name lookups:
       ctx.event_name(id, info), ctx.guid_name(guid), ctx.label_name(sg, id)."""
    e = '<' if fmt == 'win' else '>'
    bc = program['bytecode']
    pos = 0
    out = []
    attrs = program['attributes']
    locs = program['localRefs']
    for i in range(program['numInstructions']):
        ins = {'index': i, 'offset': pos}
        if pos + 6 > len(bc):
            ins.update(op='<truncated>', opcode=None, flags=0, text='<bytecode truncated>', raw='')
            out.append(ins)
            break
        opcode, flags, size = struct.unpack_from(e + 'HHH', bc, pos)
        body = bc[pos + 6:pos + size]
        ins['opcode'] = opcode
        ins['flags'] = flags
        ins['raw'] = body.hex()
        name = OPCODES.get(opcode, 'Unknown_0x%x' % opcode)
        ins['op'] = name
        operand = ''
        try:
            if name == 'Send':
                eid, einfo = struct.unpack_from(e + 'II', body, 0)
                ins['event'] = (eid, einfo)
                fl = []
                if flags & 0x04: fl.append('not-immediate')
                if flags & 0x08: fl.append('no-cascade')
                if flags & 0x10: fl.append('no-relay')
                ins['sendFlags'] = fl
                operand = '%s%s' % (ctx.event_name(eid, einfo), (' [' + ','.join(fl) + ']') if fl else '')
            elif name == 'BuiltinFunc':
                fid = struct.unpack_from(e + 'I', body, 0)[0]
                ins['func'] = BUILTINS.get(fid, 'func_%d' % fid)
                operand = ins['func']
            elif name == 'GetChild':
                a = struct.unpack_from(e + 'I', body, 0)[0]
                ins['attr'] = attrs[a]['name'] if a < len(attrs) else '<attr#%d?>' % a
                ins['lvalue'] = bool(flags & 1)
                ins['indexed'] = bool(flags & 32)
                operand = '"%s"%s%s' % (ins['attr'], ' indexed' if ins['indexed'] else '',
                                        ' lvalue' if ins['lvalue'] else '')
            elif name == 'PushGlobal':
                g = struct.unpack_from(e + 'I', body, 0)[0]
                ins['global'] = GLOBALS.get(g, 'global_%d' % g)
                ins['lvalue'] = bool(flags & 1)
                operand = ins['global'] + (' lvalue' if ins['lvalue'] else '')
            elif name == 'CallFunction?':
                a, argc = struct.unpack_from(e + 'II', body, 0)
                ins['func'] = attrs[a]['name'] if a < len(attrs) else '<attr#%d?>' % a
                ins['argc'] = argc
                operand = '"%s" argc=%d   (opcode not in ScummVM; meaning inferred)' % (ins['func'], argc)
            elif name == 'ArgListJoin?':
                operand = '(opcode not in ScummVM; meaning inferred)'
            elif name == 'UnknownStmt_0x908':
                operand = 'raw=%s   (opcode not in ScummVM; meaning unknown)' % body.hex()
            elif name == 'Jump':
                jf, unk, off = struct.unpack_from(e + 'IIi', body, 0)
                ins['conditional'] = (jf == 2)
                ins['jumpFlags'] = jf
                ins['target'] = i + off
                operand = '%s -> @%d' % ('if-false' if jf == 2 else ('always' if jf == 1 else 'jumpFlags=%d' % jf),
                                         i + off)
            elif name == 'PushValue':
                dt = struct.unpack_from(e + 'H', body, 0)[0]
                ins['dataType'] = dt
                if dt == 0:
                    ins['expr'] = 'null'
                elif dt == 0x15:
                    if fmt == 'win':
                        d = struct.unpack_from('<d', body, 2)[0]
                    else:
                        se, mant = struct.unpack_from('>HQ', body, 2)
                        d = 0.0 if (se & 0x7fff) == 0 and mant == 0 else \
                            (-1.0 if se & 0x8000 else 1.0) * mant * 2.0 ** ((se & 0x7fff) - 16383 - 63)
                    ins['expr'] = _fmt_num(d)
                elif dt == 0x1a:
                    ins['expr'] = 'true' if body[2] else 'false'
                elif dt == 0x1f9:
                    idx = struct.unpack_from(e + 'I', body, 2)[0]
                    if idx < len(locs):
                        lr = locs[idx]
                        ins['expr'] = lr['name'] or ctx.guid_name(lr['guid'])
                        ins['refGuid'] = lr['guid']
                    else:
                        ins['expr'] = '<localRef#%d?>' % idx
                elif dt == 0x1fa:
                    g = struct.unpack_from(e + 'I', body, 2)[0]
                    ins['refGuid'] = g
                    ins['expr'] = ctx.guid_name(g)
                elif dt == 0x1d:
                    sg, lid = struct.unpack_from(e + 'II', body, 2)
                    ins['expr'] = ctx.label_name(sg, lid)
                else:
                    ins['expr'] = '<value type 0x%x raw %s>' % (dt, body[2:].hex())
                    ins['bad'] = True
                ins['lvalue'] = bool(flags & 1)
                kind = {0: 'null', 0x15: 'float', 0x1a: 'bool', 0x1f9: 'localRef', 0x1fa: 'globalRef',
                        0x1d: 'label'}.get(dt, 'type0x%x' % dt)
                operand = '%s%s%s' % (kind, '' if dt == 0 else ' ' + ins['expr'], ' lvalue' if ins['lvalue'] else '')
            elif name == 'PushString':
                ln = struct.unpack_from(e + 'H', body, 0)[0]
                s = body[2:2 + ln]
                try:
                    s = s.decode('cp1252')
                except UnicodeDecodeError:
                    s = s.decode('latin-1')
                ins['expr'] = '"' + s.replace('\\', '\\\\').replace('"', '\\"').replace('\r', '\\r').replace('\n', '\\n') + '"'
                operand = ins['expr']
            elif body:
                operand = 'raw=' + body.hex()
        except (struct.error, IndexError):
            operand = '<operand decode failed> raw=' + body.hex()
            ins['bad'] = True
        ins['operand'] = operand
        ins['text'] = '%-18s %s' % (name, operand)
        out.append(ins)
        pos += size
    return out


def disassemble(instrs):
    lines = []
    targets = {i['target'] for i in instrs if 'target' in i}
    for ins in instrs:
        mark = '>' if ins['index'] in targets else ' '
        lines.append('  %s@%-4d %04x  op=0x%03x fl=0x%02x  %s' % (
            mark, ins['index'], ins['offset'], ins['opcode'] or 0, ins['flags'], ins['text'].rstrip()))
    return lines


class _Fail(Exception):
    pass


def _paren(x):
    return x if x.get('atom') else {'s': '(' + x['s'] + ')', 'atom': True}


def _eval_range(instrs, lo, hi, stack, out, indent):
    """Symbolically execute instrs[lo:hi], appending statements to out."""
    pad = '    ' * indent
    i = lo
    stmt_start = lo
    while i < hi:
        ins = instrs[i]
        op = ins['op']
        if not stack:
            stmt_start = i
        if ins.get('bad') or op.startswith('Unknown_0x') or op.startswith('<'):
            raise _Fail('undecodable instruction @%d' % i)
        if op == 'UnknownStmt_0x908':
            if stack: raise _Fail('unknown statement opcode with non-empty stack @%d' % i)
            out.append('%s<unknown statement opcode 0x908 raw=%s>' % (pad, ins['raw']))
        elif op == 'ArgListJoin?':
            if len(stack) < 2: raise _Fail('stack underflow @%d' % i)
            b = stack.pop(); a = stack.pop()
            items = (a.get('args') or [a['s']]) + [b['s']]
            stack.append({'s': ', '.join(items), 'args': items})
        elif op == 'CallFunction?':
            if len(stack) < 1: raise _Fail('stack underflow @%d' % i)
            a = stack.pop()
            items = a.get('args') or [a['s']]
            if len(items) != ins['argc']: raise _Fail('call argument count mismatch @%d' % i)
            stack.append({'s': '%s(%s)' % (ins['func'], ', '.join(items)), 'atom': True})
        elif op in ('PushValue', 'PushString'):
            stack.append({'s': ins['expr'], 'atom': True})
        elif op == 'PushGlobal':
            stack.append({'s': ins['global'], 'atom': True})
        elif op == 'GetChild':
            if ins['indexed']:
                if len(stack) < 2: raise _Fail('stack underflow @%d' % i)
                idx = stack.pop(); obj = stack.pop()
                stack.append({'s': '%s.%s[%s]' % (_paren(obj)['s'], ins['attr'], idx['s']), 'atom': True})
            else:
                if len(stack) < 1: raise _Fail('stack underflow @%d' % i)
                obj = stack.pop()
                stack.append({'s': '%s.%s' % (_paren(obj)['s'], ins['attr']), 'atom': True})
        elif op in BINOPS:
            if len(stack) < 2: raise _Fail('stack underflow @%d' % i)
            b = stack.pop(); a = stack.pop()
            stack.append({'s': '%s %s %s' % (_paren(a)['s'], BINOPS[op], _paren(b)['s'])})
        elif op == 'Neg':
            if not stack: raise _Fail('stack underflow @%d' % i)
            a = stack.pop(); stack.append({'s': '-' + _paren(a)['s']})
        elif op == 'Not':
            if not stack: raise _Fail('stack underflow @%d' % i)
            a = stack.pop(); stack.append({'s': 'not ' + _paren(a)['s']})
        elif op == 'BuiltinFunc':
            if not stack: raise _Fail('stack underflow @%d' % i)
            a = stack.pop(); stack.append({'s': '%s(%s)' % (ins['func'], a['s']), 'atom': True})
        elif op == 'PointCreate':
            if len(stack) < 2: raise _Fail('stack underflow @%d' % i)
            b = stack.pop(); a = stack.pop()
            stack.append({'s': '(%s, %s)' % (a['s'], b['s']), 'atom': True})
        elif op == 'RangeCreate':
            if len(stack) < 2: raise _Fail('stack underflow @%d' % i)
            b = stack.pop(); a = stack.pop()
            stack.append({'s': '%s thru %s' % (_paren(a)['s'], _paren(b)['s'])})
        elif op == 'VectorCreate':
            if len(stack) < 2: raise _Fail('stack underflow @%d' % i)
            b = stack.pop(); a = stack.pop()
            stack.append({'s': 'vector(%s, %s)' % (a['s'], b['s']), 'atom': True})
        elif op == 'ListCreate':
            if len(stack) < 2: raise _Fail('stack underflow @%d' % i)
            b = stack.pop(); a = stack.pop()
            stack.append({'s': '{%s, %s}' % (a['s'], b['s']), 'atom': True, 'list': [a['s'], b['s']]})
        elif op == 'ListAppend':
            if len(stack) < 2: raise _Fail('stack underflow @%d' % i)
            b = stack.pop(); a = stack.pop()
            items = (a.get('list') or [a['s']]) + [b['s']]
            stack.append({'s': '{' + ', '.join(items) + '}', 'atom': True, 'list': items})
        elif op == 'Set':
            if len(stack) != 2: raise _Fail('Set with stack depth %d @%d' % (len(stack), i))
            v = stack.pop(); t = stack.pop()
            out.append('%sset %s to %s' % (pad, t['s'], v['s']))
        elif op == 'Send':
            if len(stack) != 2: raise _Fail('Send with stack depth %d @%d' % (len(stack), i))
            t = stack.pop(); p = stack.pop()
            fl = (' [' + ', '.join(ins['sendFlags']) + ']') if ins['sendFlags'] else ''
            w = '' if p['s'] == 'null' else ' with %s' % p['s']
            out.append('%ssend %s to %s%s%s' % (pad, ins['operand'].split(' [')[0], t['s'], w, fl))
        elif op == 'Jump':
            tgt = ins['target']
            if not ins['conditional']:
                raise _Fail('unstructured unconditional jump @%d' % i)
            if not stack: raise _Fail('stack underflow @%d' % i)
            if len(stack) != 1: raise _Fail('conditional jump with stack depth %d @%d' % (len(stack), i))
            if tgt <= i or tgt > hi: raise _Fail('jump target out of range @%d' % i)
            cond = stack.pop()
            last = instrs[tgt - 1] if tgt - 1 > i else None
            if last is not None and last['op'] == 'Jump' and not last['conditional'] and \
                    last['target'] == stmt_start:
                # backward jump to the start of the condition: loop
                out.append('%swhile %s do' % (pad, cond['s']))
                _eval_range(instrs, i + 1, tgt - 1, stack, out, indent + 1)
                if stack: raise _Fail('non-empty stack at end of loop body @%d' % i)
                out.append('%send while' % pad)
                i = tgt
                continue
            if last is not None and last['op'] == 'Jump' and not last['conditional'] and \
                    tgt <= last['target'] <= hi:
                end = last['target']
                out.append('%sif %s then' % (pad, cond['s']))
                _eval_range(instrs, i + 1, tgt - 1, stack, out, indent + 1)
                if stack: raise _Fail('non-empty stack at end of then-branch @%d' % i)
                if end > tgt:
                    out.append('%selse' % pad)
                    _eval_range(instrs, tgt, end, stack, out, indent + 1)
                    if stack: raise _Fail('non-empty stack at end of else-branch @%d' % i)
                out.append('%send if' % pad)
                i = end
                continue
            out.append('%sif %s then' % (pad, cond['s']))
            _eval_range(instrs, i + 1, tgt, stack, out, indent + 1)
            if stack: raise _Fail('non-empty stack at end of then-branch @%d' % i)
            out.append('%send if' % pad)
            i = tgt
            continue
        else:
            raise _Fail('unhandled op %s @%d' % (op, i))
        i += 1


def pseudocode(instrs, expression=False):
    """Return (lines, ok, note).  expression=True for IfMessenger conditions
    (the program leaves a single value on the stack)."""
    out = []
    stack = []
    try:
        _eval_range(instrs, 0, len(instrs), stack, out, 0)
        if expression:
            if len(stack) != 1:
                raise _Fail('expression program left %d values on the stack' % len(stack))
            out.append(stack.pop()['s'])
        elif stack:
            raise _Fail('%d values left on the stack at end of program' % len(stack))
        return out, True, ''
    except _Fail as ex:
        return out, False, str(ex)
