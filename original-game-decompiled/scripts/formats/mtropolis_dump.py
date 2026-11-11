#!/usr/bin/env python3
"""Dump the authored content of an mTropolis project (catalog, object tree,
Miniscript, inventories) to readable text/CSV/JSON.

Usage:
  python3 -I mtropolis_dump.py SEGMENT1 [SEGMENT2 ...] --out OUTDIR [--json]

SEGMENT1 is the main project file (e.g. data.mfx), following arguments are the
additional segments in catalog order (e.g. data2.mxx).  Input files are opened
read-only and memory-mapped.  No game code is executed.
"""
import argparse
import collections
import csv
import json
import mmap
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import mtropolis_format as M      # noqa: E402
import mtropolis_miniscript as MS  # noqa: E402

T = M.TYPE_NAMES


# --------------------------------------------------------------------------
# Tree
# --------------------------------------------------------------------------
class Node:
    __slots__ = ('o', 'children', 'modifiers', 'parent', 'stream', 'seg', 'gindex', 'scene_stream', 'alias_target')

    def __init__(self, o, stream, seg, parent=None):
        self.o = o
        self.children = []
        self.modifiers = []
        self.parent = parent
        self.stream = stream
        self.seg = seg
        self.gindex = None
        self.scene_stream = None
        self.alias_target = None

    @property
    def type(self):
        return self.o['type']

    def label(self):
        n = self.o.get('name')
        if n:
            return n
        if self.type == 0xffffffff:
            return '<%s>' % self.o['f'].get('modifierName')
        if self.type == 0x27 and self.alias_target is not None:
            return 'alias->' + self.alias_target.label()
        return '<unnamed %s>' % self.o['typeName']

    def path(self):
        parts = []
        n = self
        while n is not None:
            parts.append(n.label())
            n = n.parent
        return '/'.join(reversed(parts))


class TreeBuilder:
    """Re-implements the child/modifier nesting rules of ScummVM's
    Project::loadBootStream / loadSceneFromStream / loadContextualObject."""

    def __init__(self):
        self.stack = []
        self.problems = []
        self.project = None
        self.globals = []
        self.root_extras = []

    def _sf(self, o):
        if 'structuralFlags' not in o['f']:
            self.problems.append('structural object %s at 0x%x was not parsed; its nesting flags are unknown '
                                 '(treated as 0, following objects may be misplaced)' % (o['typeName'], o['off']))
            return 0
        return o['f']['structuralFlags']

    def push(self, kind, node, remaining=0):
        self.stack.append([kind, node, remaining])

    def _add_modifier(self, container, o, stream, seg):
        n = Node(o, stream, seg, container)
        if container is not None:
            container.modifiers.append(n)
        nch = o['f'].get('numChildren', 0) if o['type'] in (0x2c6, 0x2c7) else 0
        if nch:
            self.push('counted', n, nch)
        return n

    def feed(self, o, stream, seg, boot):
        t = o['type']
        if t in M.ASSET_TYPES or t == 0xffff:
            return None
        if not self.stack:
            if boot:
                if t == 0x17:
                    holder = Node(o, stream, seg)
                    self.globals_holder = holder
                    if o['f'].get('numGlobalModifiers'):
                        self.push('counted-global', holder, o['f']['numGlobalModifiers'])
                    return holder
                if t == 0x2:
                    self.project = Node(o, stream, seg)
                    self.push('project', self.project)
                    return self.project
                n = Node(o, stream, seg)
                self.root_extras.append(n)
                return n
            self.problems.append('object %s at 0x%x outside any context' % (o['typeName'], o['off']))
            return None
        ctx = self.stack[-1]
        kind, cont = ctx[0], ctx[1]
        if kind in ('counted', 'counted-global'):
            ctx[2] -= 1
            if ctx[2] == 0:
                self.stack.pop()
            if kind == 'counted-global':
                n = Node(o, stream, seg, None)
                n.gindex = len(self.globals) + 1
                self.globals.append(n)
                nch = o['f'].get('numChildren', 0) if t in (0x2c6, 0x2c7) else 0
                if nch:
                    self.push('counted', n, nch)
                return n
            return self._add_modifier(cont, o, stream, seg)
        if kind == 'flagterm' and t in M.ELEMENT_TYPES | {0x3, 0x21}:
            # an element where a modifier was expected: the modifier list was not terminated properly
            self.problems.append('modifier list of %s not terminated before %s at 0x%x' % (cont.label(), o['typeName'], o['off']))
            self.stack.pop()
            return self.feed(o, stream, seg, boot)
        if kind == 'flagterm':
            if t not in M.MODIFIER_TYPES:
                self.problems.append('non-modifier %s at 0x%x in modifier list' % (o['typeName'], o['off']))
            flags = o['f'].get('modifierFlags', o['f'].get('persistFlags'))
            if flags is None:
                # unparsed object: nearly every modifier starts with u32 flags right after type+revision
                try:
                    flags = int.from_bytes(bytes.fromhex(o['f'].get('hexPreview', ''))[6:10], 'little')
                except ValueError:
                    flags = 0
            if flags & M.MF_LAST:
                self.stack.pop()
            return self._add_modifier(cont, o, stream, seg)
        if t in M.MODIFIER_TYPES or t not in M.TYPE_NAMES:
            # unknown object types are kept in the tree as opaque modifier-like nodes
            return self._add_modifier(cont, o, stream, seg)
        if kind == 'project':
            if t != 0x3:
                self.problems.append('unexpected %s at 0x%x in project context' % (o['typeName'], o['off']))
                return None
            n = Node(o, stream, seg, cont)
            cont.children.append(n)
            sf = self._sf(o)
            if sf & M.SF_HAS_CHILDREN:
                self.push('section', n)
            if sf & M.SF_HAS_MODIFIERS:
                self.push('flagterm', n)
            return n
        if kind == 'section':
            if t != 0x21:
                self.problems.append('unexpected %s at 0x%x in section context' % (o['typeName'], o['off']))
                return None
            n = Node(o, stream, seg, cont)
            cont.children.append(n)
            sf = self._sf(o)
            if sf & M.SF_NO_MORE_SIBLINGS:
                self.stack.pop()
            if sf & M.SF_HAS_CHILDREN:
                self.push('filtered', n)
            if sf & M.SF_HAS_MODIFIERS:
                self.push('flagterm', n)
            return n
        if kind == 'filtered':
            if t not in M.ELEMENT_TYPES:
                self.problems.append('unexpected %s at 0x%x in element context' % (o['typeName'], o['off']))
                return None
            n = Node(o, stream, seg, cont)
            cont.children.append(n)
            sf = self._sf(o)
            if sf & M.SF_NO_MORE_SIBLINGS:
                self.stack.pop()
            if sf & M.SF_HAS_CHILDREN:
                self.push('filtered', n)
            if sf & M.SF_HAS_MODIFIERS:
                self.push('flagterm', n)
            return n
        self.problems.append('bad context %s' % kind)
        return None


# --------------------------------------------------------------------------
# Name lookups / formatting context
# --------------------------------------------------------------------------
class _ScopedGuids:
    """GUID lookup.  GUIDs are not unique project-wide in this title (scene copies such as
    LV1/LV2/LV3 reuse them), so a reference is resolved inside the stream it is made from
    first and only then through the first project-wide occurrence."""

    def __init__(self):
        self.by_stream = collections.defaultdict(dict)
        self.first = {}
        self.cur = None

    def add(self, stream, g, n):
        self.by_stream[stream].setdefault(g, n)
        if g in self.first:
            return False
        self.first[g] = n
        return True

    def get(self, g, default=None):
        n = self.by_stream.get(self.cur, {}).get(g)
        return n if n is not None else self.first.get(g, default)

    def __contains__(self, g):
        return self.get(g) is not None

    def __getitem__(self, g):
        n = self.get(g)
        if n is None:
            raise KeyError(g)
        return n

    def __len__(self):
        return len(self.first)


class Ctx:
    def __init__(self):
        self.labels = {}       # (superGroupID, id) -> name
        self.sg_names = {}
        self.author = {}       # id -> name
        self.sysmsg = {}       # event id -> name from the project's own "Send/Detect Messages" label tree
        self.guid = _ScopedGuids()   # guid -> Node, resolved in the current scene first, then project-wide
        self.guid_dupes = collections.Counter()
        self.assets = {}       # id -> catalog entry
        self.event_use = collections.Counter()
        self.unresolved_guids = collections.Counter()
        self.plugin_table = {}
        self.struct_guid = {}

    def load_labels(self, lm):
        def walk(sgid, t, depth):
            self.labels.setdefault((sgid, t['id']), t['name'])
            for c in t.get('children', []):
                walk(sgid, c, depth + 1)
        for sg in lm['superGroups']:
            self.sg_names[sg['id']] = sg['name']
            for c in sg['children']:
                walk(sg['id'], c, 0)
            if sg['name'] in ('Detect Messages', 'Send Messages'):
                def sw(t):
                    if not t.get('isGroup') and t['id'] > 1:
                        self.sysmsg.setdefault(t['id'], t['name'].strip())
                    for c in t.get('children', []):
                        sw(c)
                for c in sg['children']:
                    sw(c)
            if sg['name'] == 'Author Messages':
                def aw(t):
                    if not t.get('isGroup'):
                        self.author.setdefault(t['id'], t['name'])
                    for c in t.get('children', []):
                        aw(c)
                for c in sg['children']:
                    aw(c)

    def event_name(self, eid, info):
        if eid == 900:
            return 'AuthorMessage(%d "%s")' % (info, self.author.get(info, '?'))
        nm = M.EVENT_NAMES.get(eid)
        if nm is None:
            if eid == 1:
                nm = 'None'
            elif eid in self.sysmsg:
                # not in ScummVM's event table; name taken from the project's own message label tree
                nm = 'Event_%d<"%s">' % (eid, self.sysmsg[eid])
            else:
                nm = 'Event_%d' % eid
        if eid in (1200, 1300) and info:
            return '%s(attr %d "%s")' % (nm, info, M.ATTRIBUTE_NAMES.get(info, '?'))
        return nm if not info else '%s(info=%d)' % (nm, info)

    def ev(self, e, role=None):
        if role:
            self.event_use[(e['id'], e['info'] if e['id'] == 900 else 0, role)] += 1
        return self.event_name(e['id'], e['info'])

    def guid_name(self, g):
        n = self.guid.get(g)
        if n is None:
            self.unresolved_guids[g] += 1
            return '<guid 0x%x unresolved>' % g
        return '%s<0x%x>' % (n.label(), g)

    def label_name(self, sg, lid):
        nm = self.labels.get((sg, lid))
        return 'label(%s:"%s"#%d)' % (self.sg_names.get(sg, 'sg%d' % sg), nm if nm is not None else '?', lid)

    def asset_name(self, aid):
        a = self.assets.get(aid)
        if aid == 0xffffffff:
            return '#none'
        if not a:
            return '#%d' % aid
        return '#%d "%s"' % (aid, a['name'])

    def dest(self, d):
        if d in M.DEST_NAMES:
            return M.DEST_NAMES[d]
        n = self.guid.get(d)
        if n is not None:
            return '%s "%s"<0x%x>' % (n.o['typeName'], n.label(), d)
        self.unresolved_guids[d] += 1
        return '<guid 0x%x unresolved>' % d

    def tagged(self, v, src='', string=''):
        k = v['kind']
        if k == 'null':
            return 'null'
        if k == 'incomingData':
            return 'incomingData'
        if k == 'string':
            return json.dumps(string)
        if k == 'varRef':
            return 'var %s%s' % (src or '', ' ' + self.guid_name(v['guid']) if v.get('guid') else '')
        if k == 'label':
            return self.label_name(v['superGroup'], v['id'])
        if k == 'point':
            return '(%d, %d)' % (v['value']['x'], v['value']['y'])
        if k in ('intRange',):
            return '%d thru %d' % (v['value']['min'], v['value']['max'])
        if k == 'unknown':
            return '<tagged type 0x%x raw %s>' % (v['type'], v['raw'])
        return str(v.get('value'))

    def ptagged(self, v):
        k = v['kind']
        if k == 'event':
            return self.event_name(v['value']['id'], v['value']['info'])
        if k == 'label':
            return self.label_name(v['superGroup'], v['id'])
        if k == 'varRef':
            return 'var %s %s' % (v.get('extra', ''), self.guid_name(v['guid']))
        if k == 'string':
            return json.dumps(v['value'])
        if k in ('null', 'incomingData'):
            return k
        if k == 'point':
            return '(%d, %d)' % (v['value']['x'], v['value']['y'])
        return '%s' % (v.get('value'),)


def rect_s(r):
    return '(%d,%d,%d,%d)' % (r['left'], r['top'], r['right'], r['bottom'])


def flags_s(v, table):
    out = [n for bit, n in table if v & bit]
    rest = v
    for bit, _ in table:
        rest &= ~bit
    if rest:
        out.append('0x%x' % rest)
    return '|'.join(out) if out else '0'


ELEMENT_FLAGS = [(0x1000, 'NotDirectToScreen'), (0x8000, 'Hidden'), (0x10000, 'Paused'),
                 (0x800000, 'ExpandedInEditor'), (0x2000000, 'CacheBitmap'), (0x10000000, 'SelectedInEditor')]
ANIM_FLAGS = [(0x10000000, 'Alternate'), (0x08000000, 'Loop'), (0x02000000, 'PlayEveryFrame')]
SOUND_FLAGS = [(0x40000000, 'Paused'), (0x80000000, 'Loop')]
MSG_FLAGS = [(0x20000000, 'NoRelay'), (0x40000000, 'NoCascade'), (0x80000000, 'NoImmediate')]
CHANGE_SCENE_FLAGS = [(0x80000000, 'NextScene'), (0x40000000, 'PrevScene'), (0x20000000, 'SpecificScene'),
                      (0x10000000, 'AddToReturnList'), (0x08000000, 'AddToDestList'), (0x04000000, 'WrapAround')]
STRUCT_FLAGS = [(1, 'HasModifiers'), (4, 'HasChildren'), (8, 'NoMoreSiblings')]
INK = {0: 'Copy', 1: 'Transparent', 3: 'Ghost', 4: 'ReverseCopy', 7: 'ReverseGhost', 9: 'ReverseTransparent',
       0x20: 'Blend', 0x24: 'BackgroundTransparent', 0x25: 'ChameleonDark', 0x27: 'ChameleonLight',
       0x224: 'BackgroundMatte', 0xffff: 'Invisible'}
SHAPE = {0: 'None?', 1: 'Rect', 2: 'RoundedRect', 3: 'Oval', 9: 'Polygon', 0xb: 'Star'}
SCENE_TRANS = {0: 'None', 0x406: 'PatternDissolve', 0x410: 'RandomDissolve', 0x41a: 'Fade', 0x3e8: 'Slide',
               0x3f2: 'Push', 0x3fc: 'Zoom', 0x424: 'Wipe'}
DIRS = {0x384: 'Up', 0x385: 'Down', 0x386: 'Left', 0x387: 'Right'}
KEYCODES = {0: 'Any', 1: 'Home', 3: 'Enter', 4: 'End', 5: 'Help', 8: 'Backspace', 9: 'Tab', 0xb: 'PageUp',
            0xc: 'PageDown', 0xd: 'Return', 0x1b: 'Escape', 0x1c: 'ArrowLeft', 0x1d: 'ArrowRight',
            0x1e: 'ArrowUp', 0x1f: 'ArrowDown', 0x7f: 'Delete'}


def loc_s(n):
    return '@seg%d:0x%x' % (n.seg, n.o['off'])


def describe(n, cx, globals_):
    """One-line (sometimes multi-line) description of a node's key parameters.
    Objects that were not parsed (status unknown/fatal) or whose fields are incomplete are shown
    with their type id, offset, size and hex preview instead of raising."""
    o = n.o
    if o['status'] in ('unknown', 'fatal'):
        return ('%s (type 0x%x rev %s) NOT PARSED: %s  size=%s  hex=%s  %s' % (
            o['typeName'], o['type'] or 0, o['rev'], o['note'], o.get('declSize'),
            o['f'].get('hexPreview', '')[:96], loc_s(n)), [])
    try:
        return _describe(n, cx, globals_)
    except (KeyError, IndexError, TypeError, ValueError) as ex:
        return ('%s %s (type 0x%x) fields incomplete (%s: %s)  %s' % (
            o['typeName'], json.dumps(o.get('name')), o['type'] or 0, type(ex).__name__, ex, loc_s(n)), [])


def _describe(n, cx, globals_):
    o = n.o
    f = o['f']
    t = o['type']
    g = ('guid=0x%x' % o['guid']) if o.get('guid') is not None else ''
    nm = json.dumps(o['name']) if o.get('name') is not None else ''
    head = '%s %s %s' % (o['typeName'], nm, g)
    extra = []
    sub = []
    if t in M.ELEMENT_TYPES:
        if t != 0xa:
            extra.append('layer=%d rect=%s' % (f['layer'], rect_s(f['rect1'])))
            if f['rect2'] != f['rect1']:
                extra.append('rect2=%s' % rect_s(f['rect2']))
        extra.append('flags=%s' % flags_s(f['elementFlags'], ELEMENT_FLAGS))
        if 'assetID' in f:
            extra.append('asset=%s' % cx.asset_name(f['assetID']))
        if t == 0x6:
            extra.append('anim=%s rate=%g' % (flags_s(f['animationFlags'], ANIM_FLAGS), f['rateTimes100000'] / 100000.0))
        if t in (0x5, 0x25):
            extra.append('anim=%s volume=%d' % (flags_s(f['animationFlags'], ANIM_FLAGS), f['volume']))
        if t == 0xa:
            extra.append('sound=%s vol(L/R)=%d/%d balance=%d' % (flags_s(f['soundFlags'], SOUND_FLAGS),
                                                               f['leftVolume'], f['rightVolume'], f['balance']))
        if f.get('streamLocator'):
            extra.append('streamLocator=0x%x(stream %d)' % (f['streamLocator'], f['streamLocator'] & 0xffff))
        extra.append('sf=%s' % flags_s(f['structuralFlags'], STRUCT_FLAGS))
    elif t in (0x2, 0x3, 0x21):
        if 'structuralFlags' in f:
            extra.append('sf=%s' % flags_s(f['structuralFlags'], STRUCT_FLAGS))
        if t == 0x3:
            extra.append('segmentID=%d' % f['segmentID'])
    elif t == 0x27:
        idx = f['aliasIndexPlusOne']
        tgt = globals_[idx - 1] if 0 < idx <= len(globals_) else None
        if tgt is not None:
            extra.append('-> global modifier #%d: %s %s guid=0x%x (see global_modifiers)' % (
                idx, tgt.o['typeName'] if tgt.type != 0xffffffff else 'PlugIn:' + tgt.o['f'].get('modifierName', '?'),
                json.dumps(tgt.o.get('name')), tgt.o.get('guid') or 0))
        else:
            extra.append('-> global modifier #%d (OUT OF RANGE)' % idx)
    elif t == 0x2c6:
        sw = bool(f['behaviorFlags'] & 1)
        extra.append('children=%d switchable=%s' % (f['numChildren'], sw))
        if sw or f['enableWhen']['id'] or f['disableWhen']['id']:
            extra.append('enableWhen=%s disableWhen=%s' % (cx.ev(f['enableWhen'], 'when'), cx.ev(f['disableWhen'], 'when')))
    elif t == 0x3c0:
        p = f['program']
        extra.append('enableWhen=%s instructions=%d (see scripts)' % (cx.ev(f['enableWhen'], 'when'), p['numInstructions']))
    elif t in (0x2da, 0x2bc):
        extra.append('when=%s -> send %s to %s with %s flags=%s' % (
            cx.ev(f['when'], 'when'), cx.ev(f['send'], 'send'), cx.dest(f['destination']),
            cx.tagged(f['with'], f['withSource'], f['withString']), flags_s(f['messageFlags'], MSG_FLAGS)))
        if t == 0x2bc:
            extra.append('condition: see scripts (%d instructions)' % f['program']['numInstructions'])
    elif t == 0x2df:
        extra.append('executeWhen=%s: set %s := %s' % (
            cx.ev(f['executeWhen'], 'when'), cx.tagged(f['target'], f['targetName'], f['targetString']),
            cx.tagged(f['source'], f['sourceName'], f['sourceString'])))
    elif t == 0x2e4:
        fl = f['messageAndTimerFlags']
        extra.append('executeWhen=%s terminateWhen=%s after %02d:%02d.%02d%s -> send %s to %s with %s flags=%s' % (
            cx.ev(f['executeWhen'], 'when'), cx.ev(f['terminateWhen'], 'when'), f['minutes'], f['seconds'],
            f['hundredthsOfSeconds'], ' LOOPING' if fl & 0x10000000 else '', cx.ev(f['send'], 'send'),
            cx.dest(f['destination']), cx.tagged(f['with'], f['withSource'], f['withString']),
            flags_s(fl & ~0x10000000, MSG_FLAGS)))
    elif t == 0x2ee:
        fl = f['messageAndModifierFlags']
        mode = {0x01400000: 'FirstContact', 0x01000000: 'WhileInContact', 0x00800000: 'Exiting'}.get(fl & 0x01c00000, '0x%x' % (fl & 0x01c00000))
        extra.append('enableWhen=%s disableWhen=%s mode=%s front=%s behind=%s toColliding=%s -> send %s to %s with %s rawFlags=0x%x' % (
            cx.ev(f['enableWhen'], 'when'), cx.ev(f['disableWhen'], 'when'), mode, bool(fl & 0x10000000),
            bool(fl & 0x08000000), bool(fl & 0x02000000), cx.ev(f['send'], 'send'), cx.dest(f['destination']),
            cx.tagged(f['with'], f['withSource'], f['withString']), fl))
    elif t == 0x2f8:
        extra.append('enableWhen=%s disableWhen=%s edgeFlags=0x%x -> send %s to %s with %s' % (
            cx.ev(f['enableWhen'], 'when'), cx.ev(f['disableWhen'], 'when'), f['messageFlagsHigh'],
            cx.ev(f['send'], 'send'), cx.dest(f['destination']), cx.tagged(f['with'], f['withSource'], f['withString'])))
    elif t == 0x302:
        ks = f['messageFlagsAndKeyStates']
        st = [nm_ for bit, nm_ in ((0x10000000, 'down'), (0x8000000, 'repeat'), (0x4000000, 'up')) if ks & bit]
        kc = f['keycode']
        extra.append('key=%s on=%s keyModifiers=0x%x -> send %s to %s with %s rawFlags=0x%x' % (
            KEYCODES.get(kc, repr(chr(kc)) if 32 <= kc < 127 else '0x%x' % kc), '+'.join(st), f['keyModifiers'],
            cx.ev(f['send'], 'send'), cx.dest(f['destination']), cx.tagged(f['with'], f['withSource'], f['withString']), ks))
    elif t == 0x136:
        def gn(x):
            if not x:
                return 'none'
            sn = cx.struct_guid.get(x)   # sections/subsections/scenes take precedence for scene targets
            return ('%s<0x%x>' % (sn.label(), x)) if sn is not None else cx.guid_name(x)
        if f['changeSceneFlags'] & 0x20000000:
            tgt = 'section=%s subsection=%s scene=%s' % (gn(f['targetSectionGUID']), gn(f['targetSubsectionGUID']),
                                                         gn(f['targetSceneGUID']))
        else:
            # ScummVM only uses the target GUIDs when SpecificScene is set; the fields then hold stale values
            tgt = '(target GUID fields not used without SpecificScene: raw 0x%x/0x%x/0x%x)' % (
                f['targetSectionGUID'], f['targetSubsectionGUID'], f['targetSceneGUID'])
        extra.append('executeWhen=%s flags=%s %s' % (
            cx.ev(f['executeWhen'], 'when'), flags_s(f['changeSceneFlags'], CHANGE_SCENE_FLAGS), tgt))
    elif t == 0x140:
        extra.append('executeWhen=%s' % cx.ev(f['executeWhen'], 'when'))
    elif t == 0x29a:
        def gs(x):
            sn = cx.struct_guid.get(x)
            return ('%s<0x%x>' % (sn.label(), x)) if sn is not None else cx.guid_name(x)
        extra.append('executeWhen=%s section=%s subsection=%s scene=%s' % (
            cx.ev(f['executeWhen'], 'when'), gs(f['sectionGUID']), gs(f['subsectionGUID']), gs(f['sceneGUID'])))
    elif t == 0x1a4:
        extra.append('executeWhen=%s terminateWhen=%s asset=%s' % (
            cx.ev(f['executeWhen'], 'when'), cx.ev(f['terminateWhen'], 'when'), cx.asset_name(f['assetID'])))
    elif t == 0x208:
        extra.append('enableWhen=%s disableWhen=%s constrainH=%s constrainV=%s constrainToParent=%s margin=%s' % (
            cx.ev(f['enableWhen'], 'when'), cx.ev(f['disableWhen'], 'when'), f['constrainHorizontal'],
            f['constrainVertical'], f['constrainToParent'], rect_s(f['constraintMargin'])))
    elif t in (0x21b, 0x21c):
        extra.append('executeWhen=%s terminateWhen=%s flags=0x%x points=%d frameDuration=%gs' % (
            cx.ev(f['executeWhen'], 'when'), cx.ev(f['terminateWhen'], 'when'), f['flags'], len(f['points']),
            f['frameDurationTimes10Million'] / 1e7))
        for i, p in enumerate(f['points']):
            s = 'point %d: (%d,%d) frame=%d frameFlags=0x%x' % (i, p['point']['x'], p['point']['y'], p['frame'], p['frameFlags'])
            m = p.get('message')
            if m and m['send']['id']:
                s += ' -> send %s to %s with %s' % (cx.ev(m['send'], 'send'), cx.dest(m['destination']),
                                                   cx.tagged(m['with'], m['withSource'], m['withString']))
            sub.append(s)
    elif t == 0x226:
        extra.append('enableWhen=%s disableWhen=%s vec=%s' % (cx.ev(f['enableWhen'], 'when'), cx.ev(f['disableWhen'], 'when'),
                                                          cx.tagged(f['vec'], f['vecSource'])))
    elif t == 0x1fe:
        extra.append('executeWhen=%s terminateWhen=%s motionType=%d directionFlags=0x%x steps=%d delay=%gms' % (
            cx.ev(f['executeWhen'], 'when'), cx.ev(f['terminateWhen'], 'when'), f['motionType'], f['directionFlags'],
            f['steps'], f['delayMSecTimes4800'] / 4800.0))
    elif t == 0x26c:
        extra.append('enableWhen=%s disableWhen=%s type=%s direction=%s steps=%d duration=%d' % (
            cx.ev(f['enableWhen'], 'when'), cx.ev(f['disableWhen'], 'when'),
            SCENE_TRANS.get(f['transitionType'], '0x%x' % f['transitionType']),
            DIRS.get(f['direction'], '0x%x' % f['direction']), f['steps'], f['duration']))
    elif t == 0x276:
        extra.append('enableWhen=%s disableWhen=%s reveal=%d type=0x%x steps=%d rate=%d' % (
            cx.ev(f['enableWhen'], 'when'), cx.ev(f['disableWhen'], 'when'), f['revealType'], f['transitionType'],
            f['steps'], f['rate']))
    elif t == 0x334:
        extra.append('applyWhen=%s removeWhen=%s ink=%s shape=%s fore=#%02x%02x%02x back=#%02x%02x%02x border=%d shadow=%d polyPoints=%d' % (
            cx.ev(f['applyWhen'], 'when'), cx.ev(f['removeWhen'], 'when'), INK.get(f['inkMode'], '0x%x' % f['inkMode']),
            SHAPE.get(f['shape'], '0x%x' % f['shape']), f['foreColor']['r'], f['foreColor']['g'], f['foreColor']['b'],
            f['backColor']['r'], f['backColor']['g'], f['backColor']['b'], f['borderSize'], f['shadowSize'],
            len(f['polyPoints'])))
    elif t == 0x384:
        extra.append('applyWhen=%s removeWhen=%s type=%d bevelWidth=%d toneAmount=%d flags=0x%x' % (
            cx.ev(f['applyWhen'], 'when'), cx.ev(f['removeWhen'], 'when'), f['type'], f['bevelWidth'], f['toneAmount'], f['flags']))
    elif t == 0x32a:
        extra.append('applyWhen=%s removeWhen=%s font=%s size=%d align=%d flags=0x%x color=#%02x%02x%02x' % (
            cx.ev(f['applyWhen'], 'when'), cx.ev(f['removeWhen'], 'when'), json.dumps(f['fontFamilyName']), f['size'],
            f['alignment'], f['flags'], f['textColor']['r'], f['textColor']['g'], f['textColor']['b']))
    elif t == 0x4c4:
        extra.append('applyWhen=%s colorTableAsset=%s' % (cx.ev(f['applyWhen'], 'when'), cx.asset_name(f['assetID'])))
    elif t == 0x4ce:
        extra.append('enableWhen=%s disableWhen=%s fadeToVolume=%d codedDuration=%s' % (
            cx.ev(f['enableWhen'], 'when'), cx.ev(f['disableWhen'], 'when'), f['fadeToVolume'], f['codedDuration']))
    elif t == 0x4d8:
        extra.append('saveWhen=%s restoreWhen=%s value=%s file=%s path=%s' % (
            cx.ev(f['saveWhen'], 'when'), cx.ev(f['restoreWhen'], 'when'),
            cx.tagged(f['saveOrRestoreValue'], f['varName'], f['varString']), json.dumps(f['fileName']), json.dumps(f['filePath'])))
    elif t == 0x4e2:
        extra.append('[layout inferred] saveWhen=%s restoreWhen=%s value=%s pathFrom=%s fileName=%s' % (
            cx.ev(f['saveWhen'], 'when'), cx.ev(f['restoreWhen'], 'when'),
            cx.tagged(f['saveOrRestoreValue'], f['varName'], f['varString']),
            cx.tagged(f['filePathValue'], f['pathVarName'], f['pathVarString']), json.dumps(f['fileName'])))
    elif t == 0x3ca:
        if 'applyWhen' in f:
            extra.append('applyWhen=%s cursorIndex=%d' % (cx.ev(f['applyWhen'], 'when'), f['cursorIndex']))
    elif t == 0x2c7:
        extra.append('children=%d' % f['numChildren'])
    elif t in (0x321, 0x322, 0x324, 0x326, 0x327, 0x328, 0x329):
        v = f['value']
        if t == 0x326:
            v = '(%d, %d)' % (v['x'], v['y'])
        elif t == 0x324:
            v = '%d thru %d' % (v['min'], v['max'])
        elif t == 0x329:
            v = json.dumps(v)
        extra.append('initial=%s' % (v,))
    elif t == 0x33e:
        extra.append('setToSourcesParentWhen=%s' % cx.ev(f['setToSourcesParentWhen'], 'when'))
    elif t == 0xffffffff:
        mn = f['modifierName']
        head = 'PlugInModifier[%s rev%d, %s] %s %s' % (mn, f['plugInRevision'],
                                                    cx.plugin_table.get(mn, {}).get('kit', '?') + ' kit', nm, g)
        pl = f['payload']
        if f['payloadParse'] == 'opaque':
            extra.append('payload OPAQUE (%d bytes at 0x%x): %s' % (f['payloadSize'], f['payloadOffset'], pl.get('hex', '')[:80]))
        elif f['payloadParse'] == 'generic-tagged-values':
            extra.append('payload(generic tagged values)=[%s]' % ', '.join(cx.ptagged(v) for v in pl['values']))
        elif f['payloadParse'] == 'empty':
            extra.append('no payload')
        else:
            parts = []
            for k, v in pl.items():
                if isinstance(v, dict) and 'kind' in v:
                    if v['kind'] == 'event':
                        cx.event_use[(v['value']['id'], v['value']['info'] if v['value']['id'] == 900 else 0,
                                      'send' if 'send' in k.lower() else 'when')] += 1
                    parts.append('%s=%s' % (k, cx.ptagged(v)))
                elif k == 'values':
                    parts.append('values=[%s]' % ', '.join(cx.ptagged(x) for x in v))
                elif k == 'destination':
                    parts.append('destination=%s' % cx.dest(v))
                else:
                    parts.append('%s=%s' % (k, v))
            extra.append(' '.join(parts))
    if 'modifierFlags' in f:
        mf = f['modifierFlags']
        if mf & ~0x22:
            extra.append('modifierFlags=0x%x' % mf)
    line = head.rstrip() + ('  ' + '  '.join(extra) if extra else '') + '  ' + loc_s(n)
    if o['status'] not in ('ok', 'ok-nosize'):
        line += '  [parse status: %s %s]' % (o['status'], o['note'])
    return line, sub


def write_tree(n, cx, globals_, out, depth=0, max_depth=None):
    pad = '    ' * depth
    cx.guid.cur = n.stream
    line, sub = describe(n, cx, globals_)
    tag = '{mod}' if n.type in M.MODIFIER_TYPES else ('[el]' if n.type in M.ELEMENT_TYPES else
                                                      ('[struct]' if n.type in M.TYPE_NAMES else '[unknown-type]'))
    out.append('%s%s %s' % (pad, tag, line))
    for s in sub:
        out.append('%s      . %s' % (pad, s))
    for m in n.modifiers:
        write_tree(m, cx, globals_, out, depth + 1)
    for c in n.children:
        write_tree(c, cx, globals_, out, depth + 1)


def iter_nodes(n):
    yield n
    for m in n.modifiers:
        yield from iter_nodes(m)
    for c in n.children:
        yield from iter_nodes(c)


def safe_name(s):
    s = re.sub(r'[^A-Za-z0-9._-]+', '_', s).strip('_')
    return s[:60] or 'unnamed'


def script_block(n, cx, fmt):
    """Text block for a MiniscriptModifier / IfMessengerModifier node."""
    o = n.o
    f = o['f']
    p = f['program']
    is_if = (o['type'] == 0x2bc)
    cx.guid.cur = n.stream
    lines = []
    lines.append('=' * 100)
    lines.append('%s %s  guid=0x%x  %s (stream %d)' % ('IF-MESSENGER CONDITION' if is_if else 'MINISCRIPT',
                                                      json.dumps(o['name']), o['guid'], loc_s(n), n.stream))
    lines.append('owner path : %s' % (n.parent.path() if n.parent is not None else
                                      ('<global modifier table #%s>' % n.gindex)))
    if is_if:
        lines.append('when       : %s   then send %s to %s with %s' % (
            cx.ev(f['when']), cx.ev(f['send']), cx.dest(f['destination']),
            cx.tagged(f['with'], f['withSource'], f['withString'])))
    else:
        lines.append('enable when: %s' % cx.ev(f['enableWhen']))
    lines.append('program    : %d instructions, %d bytecode bytes at file offset 0x%x, unk1=0x%x' % (
        p['numInstructions'], len(p['bytecode']), p['bytecodeOffset'], p['unk1']))
    if p['localRefs']:
        lines.append('local refs : ' + ', '.join('[%d] %s guid=0x%x -> %s' % (
            i, json.dumps(r['name']), r['guid'],
            (cx.guid[r['guid']].o['typeName'] + ' ' + cx.guid[r['guid']].path()) if r['guid'] in cx.guid else 'UNRESOLVED')
            for i, r in enumerate(p['localRefs'])))
    if p['attributes']:
        lines.append('attributes : ' + ', '.join('[%d] %s' % (i, a['name']) for i, a in enumerate(p['attributes'])))
    instrs = MS.decode(p, fmt, cx)
    lines.append('--- disassembly ---')
    lines.extend(MS.disassemble(instrs))
    pc, ok, note = MS.pseudocode(instrs, expression=is_if)
    lines.append('--- GENERATED pseudocode (reconstructed from bytecode; NOT original source) ---')
    if ok:
        lines.extend('    ' + x for x in pc) if pc else lines.append('    (empty program)')
    else:
        lines.append('    (not reconstructed: %s)' % note)
    lines.append('')
    return lines, ok, instrs


def parse_plugin_table(o):
    """Type 0x2b object: observed to be a table of plug-in modifier descriptors
    (layout inferred from this title: u16 count, then 84-byte records)."""
    b = bytes.fromhex(o['f']['data'])
    if len(b) < 2:
        return []
    cnt = b[0] | (b[1] << 8)
    recs = []
    for i in range(cnt):
        r = b[2 + i * 84: 2 + (i + 1) * 84]
        if len(r) < 84:
            break
        def z(x):
            return x.split(b'\0')[0].decode('cp1252', 'replace')
        recs.append({'unk0': r[0], 'modifierName': z(r[1:18]), 'revision': r[18] | (r[19] << 8),
                     'displayName': z(r[20:52]), 'kit': z(r[52:68]), 'vendor': z(r[68:84])})
    return recs


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('segments', nargs='+')
    ap.add_argument('--out', required=True)
    ap.add_argument('--json', action='store_true', help='also write structure/json/*.json')
    args = ap.parse_args()

    out = args.out
    for d in ('structure', 'scripts', 'inventory'):
        os.makedirs(os.path.join(out, d), exist_ok=True)

    bufs = []
    sizes = []
    for s in args.segments:
        fh = open(s, 'rb')
        bufs.append(mmap.mmap(fh.fileno(), 0, access=mmap.ACCESS_READ))
        sizes.append(os.path.getsize(s))

    pre = M.read_catalog(bufs[0])
    cat = pre['catalog']
    if cat['type'] != 0x3e8 or cat['status'] not in ('ok', 'ok-nosize'):
        sys.exit('catalog not parsed: %r' % (cat.get('note'),))
    streams = cat['f']['streams']
    two_variants = cat['rev'] >= 3

    # ------------------------------------------------------------------ catalog.json
    catalog_json = {
        'sourceFiles': [os.path.basename(s) for s in args.segments],
        'segmentFileSizes': sizes,
        'startValue': pre['startValue'], 'projectFormat': pre['projectFormat'],
        'catalogDataFormat': 'little-endian (Windows layout)' if pre['catalogDataFormat'] == 'win' else 'big-endian (Macintosh layout)',
        'magic': '0x%08x' % pre['magic'], 'hdr1': '0x%08x' % pre['hdr1'], 'hdr2': pre['hdr2'],
        'runtimeVersionHint': 'hdr1==0x02000000 -> mTropolis 2.0 project header (ScummVM heuristic)' if pre['hdr1'] == 0x2000000 else 'hdr1==0 -> 1.x',
        'projectHeader': {'offset': pre['projectHeader']['off'], 'fields': pre['projectHeader']['f']},
        'catalog': {'offset': cat['off'], 'end': cat['end'], 'revision': cat['rev'],
                    'persistFlags': cat['f']['persistFlags'],
                    'sizeOfStreamAndSegmentDescs': cat['f']['sizeOfStreamAndSegmentDescs'],
                    'unk1': cat['f']['unk1'], 'unk2': cat['f']['unk2'], 'segmentPrefix': cat['f']['segmentPrefix']},
        'segments': [dict(s, index=i + 1, file=os.path.basename(args.segments[i]) if i < len(args.segments) else None)
                     for i, s in enumerate(cat['f']['segments'])],
        'streams': [],
    }

    # ------------------------------------------------------------------ walk everything
    variants = ('win', 'mac') if two_variants else (pre['catalogDataFormat'],)
    objects = []          # (variant, stream, seg, o-lite)
    coverage = []
    win_objs = {}         # stream index -> list of full objects
    seq = {}
    intervals = collections.defaultdict(list)
    intervals[1].append((0, cat['end'], 'file preamble + project header + catalog'))
    for st in streams:
        seg = st['segmentIndexPlusOne']
        sj = {'index': st['index'], 'type': st['streamType'], 'segment': seg,
              'typeFieldRawTail': st['typeFieldRawTail']}
        for var in variants:
            pos = st.get(var + 'Pos', st.get('pos'))
            size = st.get(var + 'Size', st.get('size'))
            sj[var + 'Pos'] = pos
            sj[var + 'Size'] = size
            if not size:
                coverage.append({'stream': st['index'], 'variant': var, 'segment': seg, 'pos': pos, 'size': 0,
                                 'parsed': 0, 'objects': 0, 'status': {}, 'name': ''})
                continue
            if seg > len(bufs):
                coverage.append({'stream': st['index'], 'variant': var, 'segment': seg, 'pos': pos, 'size': size,
                                 'parsed': 0, 'objects': 0, 'status': {'segment-file-missing': 1}, 'name': ''})
                continue
            intervals[seg].append((pos, pos + size, 'stream %d %s' % (st['index'], var)))
            buf = bufs[seg - 1]
            stat = collections.Counter()
            lst = []
            last_end = pos
            sname = ''
            sig = []
            for o in M.walk_stream(buf, pos, size, var):
                stat[o['status']] += 1
                last_end = o['end']
                if o['type'] == 0x3e9 and not sname:
                    sname = o['name']
                objects.append((var, st['index'], seg, o['off'], o['end'] - o['off'], o['type'], o['typeName'], o['rev'],
                                o['name'], o['guid'], o['status'], o['note'],
                                o['f'].get('modifierName') if o['type'] == 0xffffffff else ''))
                if o['type'] != 0xffff:
                    sig.append((o['type'], o['guid'], o['name'], o['f'].get('assetID')))
                if var == variants[0]:
                    lst.append(o)
            seq[(st['index'], var)] = sig
            if var == variants[0]:
                win_objs[st['index']] = lst
            coverage.append({'stream': st['index'], 'variant': var, 'segment': seg, 'pos': pos, 'size': size,
                             'parsed': last_end - pos, 'objects': sum(stat.values()), 'status': dict(stat),
                             'name': sname})
            sj.setdefault('name', sname)
        catalog_json['streams'].append(sj)

    # file-level coverage
    file_cov = []
    for seg in range(1, len(bufs) + 1):
        iv = sorted(intervals[seg])
        covered = 0
        gaps = []
        overlaps = []
        p = 0
        for a, b, what in iv:
            if a > p:
                gaps.append([p, a])
            if a < p:
                overlaps.append([a, min(b, p), what])
            covered += max(0, b - max(a, p))
            p = max(p, b)
        if p < sizes[seg - 1]:
            gaps.append([p, sizes[seg - 1]])
        file_cov.append({'segment': seg, 'file': os.path.basename(args.segments[seg - 1]), 'fileSize': sizes[seg - 1],
                         'bytesInsideCatalogOrStreams': covered, 'gaps': gaps, 'overlaps': overlaps})
    catalog_json['fileCoverage'] = file_cov
    with open(os.path.join(out, 'catalog.json'), 'w') as fh:
        json.dump(catalog_json, fh, indent=1)

    # variant cross-check
    variant_check = []
    if two_variants:
        for st in streams:
            a = seq.get((st['index'], 'win'))
            b = seq.get((st['index'], 'mac'))
            if a is None or b is None:
                continue
            variant_check.append((st['index'], len(a), len(b), a == b))

    # ------------------------------------------------------------------ build tree (primary variant)
    pv = variants[0]
    cx = Ctx()
    boot_idx = next(st['index'] for st in streams if st['streamType'].lower() == 'bootstream')
    tb = TreeBuilder()
    presentation = None
    asset_catalog = None
    plugin_table = []
    for o in win_objs[boot_idx]:
        if o['type'] == 0x3ec:
            presentation = o
        elif o['type'] == 0xd:
            asset_catalog = o
        elif o['type'] == 0x22:
            cx.load_labels(o['f'])
            labelmap = o
        elif o['type'] == 0x2b:
            plugin_table = parse_plugin_table(o)
        if o['type'] in (0x3e9, 0x3ec, 0xd, 0x22, 0x2b, 0x19):
            continue
        tb.feed(o, boot_idx, streams[boot_idx - 1]['segmentIndexPlusOne'], True)
    problems = list(tb.problems)
    if tb.stack and not (len(tb.stack) == 1 and tb.stack[0][0] == 'project'):
        problems.append('boot stream ended with loader stack %r' % [(k, n.label(), r) for k, n, r in tb.stack])
    project = tb.project
    globals_ = tb.globals
    for a in (asset_catalog['f']['assets'] if asset_catalog else []):
        cx.assets[a['id']] = a
    for r in plugin_table:
        cx.plugin_table[r['modifierName']] = r

    # scenes
    scenes = []   # (section, subsection, sceneNode)
    for sec in project.children:
        for sub in sec.children:
            for sc in sub.children:
                scenes.append((sec, sub, sc))
    scene_by_stream = {}
    for sec, sub, sc in scenes:
        sidx = sc.o['f'].get('streamLocator', 0) & 0xffff
        sc.scene_stream = sidx
        if sidx in scene_by_stream:
            problems.append('stream %d referenced by more than one scene' % sidx)
        scene_by_stream[sidx] = sc
        if sidx not in win_objs:
            problems.append('scene %s references missing stream %d' % (sc.label(), sidx))
            continue
        b = TreeBuilder()
        b.push('filtered', sc)
        seg = streams[sidx - 1]['segmentIndexPlusOne']
        for o in win_objs[sidx]:
            if o['type'] == 0x3e9:
                continue
            b.feed(o, sidx, seg, False)
        problems.extend('stream %d: %s' % (sidx, p) for p in b.problems)
        if len(b.stack) > 1 or (len(b.stack) == 1 and b.stack[0][0] != 'filtered'):
            problems.append('stream %d ended with loader stack %r' % (sidx, [(k, n.label(), r) for k, n, r in b.stack]))
    orphan_streams = [st['index'] for st in streams
                      if st['index'] not in scene_by_stream and st['index'] != boot_idx and st.get(pv + 'Size', st.get('size'))]
    if orphan_streams:
        problems.append('streams not referenced by any scene: %r' % orphan_streams)

    # guid map
    for sec in project.children:
        cx.struct_guid[sec.o['guid']] = sec
        for sub in sec.children:
            cx.struct_guid[sub.o['guid']] = sub
            for sc in sub.children:
                cx.struct_guid[sc.o['guid']] = sc
    all_roots = globals_ + [project]
    for root in all_roots:
        for n in iter_nodes(root):
            if n.type == 0x27:
                idx = n.o['f']['aliasIndexPlusOne']
                if 0 < idx <= len(globals_):
                    n.alias_target = globals_[idx - 1]
            g = n.o.get('guid')
            if g is None:
                continue
            if not cx.guid.add(n.stream, g, n):
                cx.guid_dupes[g] += 1

    # ------------------------------------------------------------------ structure output
    sdir = os.path.join(out, 'structure')
    hdr = ['# GENERATED by scripts/formats/mtropolis_dump.py from the original data files (read-only).',
           '# Offsets are "@seg<N>:0x<absolute file offset>" (seg1 = %s%s).' % (
               os.path.basename(args.segments[0]),
               ''.join(', seg%d = %s' % (i + 1, os.path.basename(s)) for i, s in enumerate(args.segments) if i)),
           '# {mod} = modifier, [el] = element, [struct] = project/section/subsection.',
           '# Field meanings follow ScummVM engines/mtropolis (data.cpp); see FORMAT_NOTES.md.', '']

    # label map
    lm_lines = list(hdr)
    for sg in labelmap['f']['superGroups']:
        lm_lines.append('supergroup id=%d %s (unk2=%d)' % (sg['id'], json.dumps(sg['name']), sg['unk2']))
        def lw(t, d):
            lm_lines.append('%s%s id=%d %s%s' % ('    ' * d, 'group' if t.get('isGroup') else 'label', t['id'],
                                                 json.dumps(t['name']), (' flags=0x%x' % t['flags']) if t['flags'] else ''))
            for c in t.get('children', []):
                lw(c, d + 1)
        for c in sg['children']:
            lw(c, 1)
    with open(os.path.join(sdir, 'label_map.txt'), 'w') as fh:
        fh.write('\n'.join(lm_lines) + '\n')

    with open(os.path.join(sdir, 'plugin_modifier_table.txt'), 'w') as fh:
        fh.write('\n'.join(hdr))
        fh.write('# Decoded from the type-0x2B object in the boot stream (layout inferred: u16 count + 84-byte records).\n')
        for r in plugin_table:
            fh.write('%-18s rev=%d display=%s kit=%s vendor=%s\n' % (
                r['modifierName'], r['revision'], json.dumps(r['displayName']), json.dumps(r['kit']), json.dumps(r['vendor'])))

    # global modifiers
    gl = list(hdr)
    gl.append('GLOBAL MODIFIER TABLE (%d entries; AliasModifier.aliasIndexPlusOne indexes this table, 1-based)' % len(globals_))
    gl.append('')
    alias_use = collections.defaultdict(collections.Counter)
    for root in all_roots:
        for n in iter_nodes(root):
            if n.type == 0x27:
                top = n
                while top.parent is not None and top.parent.type not in (0x21, 0x3, 0x2):
                    top = top.parent
                if top.parent is None:
                    where = ('global #%d' % top.gindex) if top.gindex else 'project'
                elif top.type in M.ELEMENT_TYPES:
                    where = 'scene %d' % (top.scene_stream or 0)
                else:
                    where = 'project/section/subsection level'
                alias_use[n.o['f']['aliasIndexPlusOne']][where] += 1
    unreferenced = []
    for g in globals_:
        u = alias_use.get(g.gindex)
        if u:
            ref = 'aliased %d time(s): %s' % (sum(u.values()), ', '.join('%s x%d' % kv for kv in u.most_common(8)) +
                                              (' ...' if len(u) > 8 else ''))
        else:
            ref = 'NOT referenced by any AliasModifier in the parsed streams'
            unreferenced.append(g)
        gl.append('--- global #%d --- %s' % (g.gindex, ref))
        write_tree(g, cx, globals_, gl, 0)
    with open(os.path.join(sdir, 'global_modifiers.txt'), 'w') as fh:
        fh.write('\n'.join(gl) + '\n')

    # per-scene files + overview
    ov = list(hdr)
    ps = presentation['f'] if presentation else {}
    ov.append('PRESENTATION: %sx%s, %s bits per pixel (PresentationSettings rev %s, unk4=%s)' % (
        ps.get('dimensions', {}).get('x'), ps.get('dimensions', {}).get('y'), ps.get('bitsPerPixel'),
        presentation['rev'] if presentation else '?', ps.get('unk4')))
    ov.append('GLOBAL MODIFIERS: %d (see global_modifiers.txt)' % len(globals_))
    ov.append('')
    line, _ = describe(project, cx, globals_)
    ov.append('[struct] ' + line)
    for m in project.modifiers:
        tmp = []
        write_tree(m, cx, globals_, tmp, 1)
        ov.extend(tmp)
    scene_rows = []
    scene_files = {}
    for sec in project.children:
        line, _ = describe(sec, cx, globals_)
        ov.append('    [struct] ' + line)
        for m in sec.modifiers:
            tmp = []
            write_tree(m, cx, globals_, tmp, 2)
            ov.extend(tmp)
        for sub in sec.children:
            line, _ = describe(sub, cx, globals_)
            ov.append('        [struct] ' + line)
            for m in sub.modifiers:
                tmp = []
                write_tree(m, cx, globals_, tmp, 3)
                ov.extend(tmp)
            for si, sc in enumerate(sub.children):
                nodes = list(iter_nodes(sc))
                els = [n for n in nodes if n.type in M.ELEMENT_TYPES and n is not sc]
                mods = [n for n in nodes if n.type in M.MODIFIER_TYPES]
                cnt = collections.Counter(n.o['typeName'] if n.type != 0xffffffff else 'PlugIn:' + n.o['f'].get('modifierName', '?')
                                          for n in nodes if n is not sc)
                fname = 'scene_%02d_%s.txt' % (sc.scene_stream, safe_name(sc.label()))
                scene_files[sc.scene_stream] = fname
                line, _ = describe(sc, cx, globals_)
                ov.append('            [el] %s%s' % (line, '   <-- first scene of subsection = shared scene' if si == 0 else ''))
                ov.append('                 %d elements, %d modifiers -> structure/%s' % (len(els), len(mods), fname))
                sl = list(hdr)
                sl.append('SCENE %s' % json.dumps(sc.label()))
                sl.append('path     : %s' % sc.path())
                sl.append('stream   : %d (segment %d), scene element defined in boot stream %s' % (
                    sc.scene_stream, streams[sc.scene_stream - 1]['segmentIndexPlusOne'] if sc.scene_stream else 0, loc_s(sc)))
                sl.append('contents : %d elements, %d modifiers' % (len(els), len(mods)))
                sl.append('by type  : ' + ', '.join('%s=%d' % kv for kv in sorted(cnt.items())))
                sl.append('')
                write_tree(sc, cx, globals_, sl, 0)
                with open(os.path.join(sdir, fname), 'w') as fh:
                    fh.write('\n'.join(sl) + '\n')
                scene_rows.append([sec.label(), sub.label(), sc.label(), '0x%x' % sc.o['guid'], si == 0, sc.scene_stream,
                                   streams[sc.scene_stream - 1]['segmentIndexPlusOne'] if sc.scene_stream else '',
                                   len(els), len(mods),
                                   sum(1 for n in els if n.type == 0x6), sum(1 for n in els if n.type == 0x8),
                                   sum(1 for n in els if n.type == 0xa), sum(1 for n in els if n.type == 0x15),
                                   sum(1 for n in els if n.type in (0x5, 0x25)), sum(1 for n in els if n.type == 0x7),
                                   sum(1 for n in mods if n.type == 0x3c0), sum(1 for n in mods if n.type == 0x27),
                                   sum(1 for n in mods if n.type == 0xffffffff), fname])
    with open(os.path.join(sdir, 'project_tree.txt'), 'w') as fh:
        fh.write('\n'.join(ov) + '\n')

    # per-scene summaries (input for CONTENT_OVERVIEW.md)
    sm = list(hdr)
    sm.append('PER-SCENE SUMMARY (generated).  "library" = global modifiers used through aliases, with use counts.')
    sm.append('')
    for sec, sub, sc in scenes:
        nodes = list(iter_nodes(sc))
        els = [n for n in nodes if n.type in M.ELEMENT_TYPES and n is not sc]
        sm.append('## stream %d  %s' % (sc.scene_stream, sc.path()))
        sm.append('elements: %d (mToon %d, graphic %d, sound %d, text %d)   modifiers: %d   scripts: %d' % (
            len(els), sum(1 for n in els if n.type == 0x6), sum(1 for n in els if n.type == 0x8),
            sum(1 for n in els if n.type == 0xa), sum(1 for n in els if n.type == 0x15),
            sum(1 for n in nodes if n.type in M.MODIFIER_TYPES), sum(1 for n in nodes if n.type in (0x3c0, 0x2bc))))
        sm.append('top-level elements: ' + ', '.join('%s%s' % (c.label(), '(%d)' % (len(list(iter_nodes(c))) - 1) if c.children or c.modifiers else '')
                                                     for c in sc.children))
        lib = collections.Counter()
        for n in nodes:
            if n.type == 0x27 and n.alias_target is not None:
                t_ = n.alias_target
                lib['%s:%s' % (t_.o['typeName'].replace('Modifier', '') if t_.type != 0xffffffff else t_.o['f'].get('modifierName', '?'), t_.label())] += 1
        sm.append('library: ' + ', '.join('%s x%d' % kv for kv in lib.most_common(40)) + (' ...(+%d more)' % (len(lib) - 40) if len(lib) > 40 else ''))
        pref = collections.Counter()
        for n in els:
            aid = n.o['f'].get('assetID')
            if aid and aid in cx.assets:
                nm_ = cx.assets[aid]['name']
                pref[('snd:' if n.type == 0xa else 'gfx:') + (nm_.split('_')[0] if '_' in nm_ else nm_[:6])] += 1
        sm.append('asset name prefixes: ' + ', '.join('%s x%d' % kv for kv in pref.most_common(12)))
        own = [n for n in nodes if n.type in M.MODIFIER_TYPES and n.type not in (0x27, 0x322, 0x326, 0x329, 0x321, 0x2c7)
               and not (n.type == 0xffffffff and n.o['f'].get('modifierName', '?') in ('ObjRefP', 'ListMod'))]
        sm.append('scene-local non-variable modifiers (%d): ' % len(own) + '; '.join(
            '%s %s' % (n.o['typeName'].replace('Modifier', '') if n.type != 0xffffffff else n.o['f'].get('modifierName', '?'),
                       json.dumps(n.o.get('name') or '')) for n in own[:45]) + (' ...' if len(own) > 45 else ''))
        sm.append('')
    with open(os.path.join(sdir, 'scene_summaries.txt'), 'w') as fh:
        fh.write('\n'.join(sm) + '\n')

    if args.json:
        jdir = os.path.join(sdir, 'json')
        os.makedirs(jdir, exist_ok=True)

        def jn(n):
            o = dict(n.o)
            f = dict(o['f'])
            if 'program' in f:
                p = dict(f['program'])
                p['bytecode'] = p['bytecode'].hex()
                f['program'] = p
            o['f'] = f
            o['segment'] = n.seg
            o['stream'] = n.stream
            d = {'object': o}
            if n.modifiers:
                d['modifiers'] = [jn(m) for m in n.modifiers]
            if n.children:
                d['children'] = [jn(c) for c in n.children]
            return d
        with open(os.path.join(jdir, 'global_modifiers.json'), 'w') as fh:
            json.dump([jn(g) for g in globals_], fh)
        for sec, sub, sc in scenes:
            with open(os.path.join(jdir, 'scene_%02d.json' % sc.scene_stream), 'w') as fh:
                json.dump({'section': sec.label(), 'subsection': sub.label(), 'scene': jn(sc)}, fh)
        shallow = {'project': dict(project.o), 'modifiers': [jn(m) for m in project.modifiers], 'sections': []}
        for sec in project.children:
            shallow['sections'].append({'object': sec.o, 'modifiers': [jn(m) for m in sec.modifiers],
                                        'subsections': [{'object': sub.o, 'modifiers': [jn(m) for m in sub.modifiers],
                                                         'scenes': [{'name': sc.label(), 'guid': sc.o['guid'],
                                                                     'stream': sc.scene_stream} for sc in sub.children]}
                                                        for sub in sec.children]})
        with open(os.path.join(jdir, 'project.json'), 'w') as fh:
            json.dump(shallow, fh)

    # ------------------------------------------------------------------ scripts
    scdir = os.path.join(out, 'scripts')
    shdr = ['# GENERATED by scripts/formats/mtropolis_dump.py.',
            '# Each block = one Miniscript program stored in the data files, shown as (1) a raw disassembly',
            '#   (instruction index, byte offset inside the bytecode, opcode, flags, decoded operands) and',
            '#   (2) GENERATED pseudocode reconstructed by symbolic stack evaluation of that bytecode.',
            '# The pseudocode is NOT the original authored Miniscript source; the title does not ship source text.',
            '# Names in <0x...> are GUIDs resolved through the parsed object tree.', '']
    script_stats = collections.Counter()
    opcode_use = collections.Counter()
    attr_use = collections.Counter()
    unresolved_rows = []

    def emit_scripts(roots, fname, title):
        lines = list(shdr) + [title, '']
        n_here = 0
        for root in roots:
            for n in iter_nodes(root):
                if n.type in (0x3c0, 0x2bc) and 'program' not in n.o['f']:
                    unresolved_rows.append(['miniscript-not-parsed', n.stream, n.seg, '0x%x' % n.o['off'], n.o['typeName'],
                                            n.o.get('name') or '', 'modifier object not parsed, script not available'])
                    continue
                if n.type in (0x3c0, 0x2bc):
                    blk, ok, instrs = script_block(n, cx, pv)
                    lines.extend(blk)
                    n_here += 1
                    script_stats['programs'] += 1
                    script_stats['miniscript' if n.type == 0x3c0 else 'ifmessenger'] += 1
                    script_stats['pseudocode_ok' if ok else 'pseudocode_failed'] += 1
                    script_stats['instructions'] += len(instrs)
                    for ins in instrs:
                        opcode_use[ins['op']] += 1
                        if 'attr' in ins:
                            attr_use[ins['attr']] += 1
                        if ins['op'] == 'Send':
                            cx.event_use[(ins['event'][0], ins['event'][1] if ins['event'][0] == 900 else 0, 'send(miniscript)')] += 1
                        if ins['op'].startswith('Unknown') or ins.get('bad'):
                            unresolved_rows.append(['miniscript-instruction', n.stream, n.seg, '0x%x' % n.o['off'], n.o['typeName'],
                                                    n.o['name'], 'instruction @%d opcode 0x%x not decoded' % (ins['index'], ins['opcode'] or 0)])
                    if not ok:
                        unresolved_rows.append(['miniscript-pseudocode', n.stream, n.seg, '0x%x' % n.o['off'], n.o['typeName'],
                                                n.o['name'], 'disassembled, but pseudocode not reconstructed'])
        if n_here:
            with open(os.path.join(scdir, fname), 'w') as fh:
                fh.write('\n'.join(lines) + '\n')
        return n_here

    script_index = []
    c = emit_scripts(globals_, 'global_modifiers.txt', 'SCRIPTS IN THE GLOBAL MODIFIER TABLE (shared via AliasModifier)')
    script_index.append(('global_modifiers.txt', 'global modifier table', c))
    pseudo = []
    for m in project.modifiers:
        pseudo.append(m)
    for sec in project.children:
        pseudo.extend(sec.modifiers)
        for sub in sec.children:
            pseudo.extend(sub.modifiers)
    c = emit_scripts(pseudo, 'project_section_subsection_level.txt', 'SCRIPTS ATTACHED DIRECTLY TO PROJECT / SECTIONS / SUBSECTIONS')
    script_index.append(('project_section_subsection_level.txt', 'project/section/subsection modifiers', c))
    for sec, sub, sc in scenes:
        fname = 'scene_%02d_%s.txt' % (sc.scene_stream, safe_name(sc.label()))
        c = emit_scripts([sc], fname, 'SCRIPTS IN SCENE %s  (%s)' % (json.dumps(sc.label()), sc.path()))
        script_index.append((fname if c else '(none)', sc.path(), c))
    with open(os.path.join(scdir, 'INDEX.txt'), 'w') as fh:
        fh.write('\n'.join(shdr))
        fh.write('programs: %d (MiniscriptModifier %d, IfMessenger conditions %d); instructions: %d; pseudocode reconstructed: %d, failed: %d\n\n' % (
            script_stats['programs'], script_stats['miniscript'], script_stats['ifmessenger'], script_stats['instructions'],
            script_stats['pseudocode_ok'], script_stats['pseudocode_failed']))
        fh.write('opcode usage:\n')
        for k, v in opcode_use.most_common():
            fh.write('  %-20s %d\n' % (k, v))
        fh.write('\nattribute names referenced (GetChild):\n')
        for k, v in attr_use.most_common():
            fh.write('  %-28s %d\n' % (k, v))
        fh.write('\nfiles:\n')
        for fn, what, c in script_index:
            fh.write('  %5d  %-60s %s\n' % (c, fn, what))

    # ------------------------------------------------------------------ inventories
    idir = os.path.join(out, 'inventory')

    def wcsv(name, header, rows):
        with open(os.path.join(idir, name), 'w', newline='') as fh:
            w = csv.writer(fh)
            w.writerow(header)
            w.writerows(rows)

    def pstat(s):
        return {'ok': 'ok', 'ok-nosize': 'ok', 'partial': 'partial', 'opaque-payload': 'partial',
                'unknown': 'unknown', 'fatal': 'unknown'}[s]

    wcsv('objects.csv',
         ['variant', 'stream', 'segment', 'offset', 'size', 'type_id', 'type_name', 'revision', 'name', 'guid',
          'parsed', 'parse_detail', 'note', 'plugin_modifier'],
         [[v, st, seg, '0x%x' % off, size, '0x%x' % t if t is not None else '', tn, rev, nm if nm is not None else '',
           ('0x%x' % g) if g is not None else '', pstat(status), status, note, pm]
          for (v, st, seg, off, size, t, tn, rev, nm, g, status, note, pm) in objects])

    # modifier types (primary variant, tree-based so we know global vs scene usage)
    mt = collections.OrderedDict()
    for root in all_roots:
        for n in iter_nodes(root):
            if n.type not in M.MODIFIER_TYPES:
                continue
            f = n.o['f']
            if n.type == 0xffffffff:
                key = ('0xffffffff', 'PlugInModifier', f.get('modifierName', '<header not parsed>'))
            else:
                key = ('0x%x' % n.type, n.o['typeName'], '')
            e = mt.setdefault(key, {'count': 0, 'revs': set(), 'status': collections.Counter(), 'parse': collections.Counter(),
                                    'scenes': collections.Counter(), 'prev': set()})
            e['count'] += 1
            e['revs'].add(n.o['rev'])
            e['status'][pstat(n.o['status'])] += 1
            if n.type == 0xffffffff:
                e['parse'][f.get('payloadParse', 'object-not-parsed')] += 1
                e['prev'].add(f.get('plugInRevision', -1))
            top = n
            while top.parent is not None and top.parent.type not in (0x21, 0x3, 0x2):
                top = top.parent
            where = 'global table' if (top.parent is None and top.type in M.MODIFIER_TYPES) else top.label()
            e['scenes'][where] += 1
    rows = []
    KIT_FILE = {'Extras': 'EXTRAS.R32', 'Experimental': 'EXPRMNTL.R32', 'Bitmap': 'Bitmap.r32', 'Network': 'NETWORK.R32'}
    for (tid, tn, pn), e in sorted(mt.items(), key=lambda kv: -kv[1]['count']):
        if pn:
            r = cx.plugin_table.get(pn, {})
            kit = r.get('kit', '')
            plug = '%s kit (%s), vendor %s [from the project plug-in table, object type 0x2B]' % (
                kit, KIT_FILE.get(kit, 'file not established'), r.get('vendor', '?')) if r else 'not listed in plug-in table'
            parsed = '; '.join('%s=%d' % kv for kv in e['parse'].items())
        else:
            plug = 'built-in modifier type (BASIC.X32 exports "...mod" names; pairing inferred - see FORMAT_NOTES section 2)'
            parsed = '; '.join('%s=%d' % kv for kv in e['status'].items())
        rows.append([tid, tn, pn, e['count'], '/'.join(str(x) for x in sorted(e['revs'])),
                     '/'.join(str(x) for x in sorted(e['prev'])), plug, parsed,
                     '; '.join('%s=%d' % kv for kv in e['scenes'].most_common(6)) + (' ...' if len(e['scenes']) > 6 else '')])
    wcsv('modifier_types.csv', ['type_id', 'type_name', 'plugin_modifier_name', 'count_primary_variant', 'object_revisions',
                                'plugin_revisions', 'provided_by', 'parse_status', 'where_used_top6'], rows)

    # assets
    arows = []
    asset_objs = collections.defaultdict(list)
    KIND = {0x10: 'movie(QuickTime)', 0x24: 'movie(AVI)', 0x11: 'audio', 0x1e: 'colorTable', 0xe: 'image', 0xf: 'mToon', 0x1f: 'text'}
    CAT_KIND = {2: 'colorTable', 16: 'mToon', 84: 'audio', 31: 'text'}
    for st in streams:
        for o in win_objs.get(st['index'], []):
            if o['type'] not in M.ASSET_TYPES:
                continue
            f = o['f']
            if o['status'] in ('unknown', 'fatal'):
                arows.append(['', '', KIND.get(o['type'], o['typeName']), st['index'], st['segmentIndexPlusOne'],
                              '0x%x' % o['off'], o['end'] - o['off'], '', '', '', '', '', '', '', '', '', '',
                              'asset-object NOT PARSED: ' + o['note']])
                continue
            aid = f.get('assetID')
            asset_objs[aid].append(st['index'])
            ce = cx.assets.get(aid, {})
            dims = fmt = codec = sr = ch = bits = frames = dur = ''
            dpos = dsize = ''
            if o['type'] == 0xf:
                r = f['rect']
                dims = '%dx%d' % (r['right'] - r['left'], r['bottom'] - r['top'])
                codec = {0x2e524c45: 'mToon RLE (.RLE)', 0: 'uncompressed'}.get(f['codecID'], 'codec 0x%08x' % f['codecID'])
                bits = f['bitsPerPixel']
                frames = f['numFrames']
                dpos, dsize = f['frameDataPosition'], f['sizeOfFrameData']
                fmt = 'encodingFlags=0x%x ranges=%d' % (f['encodingFlags'], len(f['frameRanges']))
            elif o['type'] == 0x11:
                sr, ch, bits = f['sampleRate1'], f['channels'], f['bitsPerSample']
                codec = {0: 'PCM uncompressed', 3: 'MACE 3:1', 4: 'MACE 6:1'}.get(f['encoding1'], 'encoding %d' % f['encoding1'])
                cd = bytes.fromhex(f['codedDuration'])
                dur = '%.2f' % ((((cd[0] * 60 + cd[1]) * 60 + cd[2]) * 100 + cd[3]) / 100.0)
                dpos, dsize = f['filePosition'], f['size']
                fmt = 'cuePoints=%d' % len(f['cuePoints'])
            elif o['type'] == 0x1e:
                fmt = '256 colors'
            elif o['type'] == 0x1f:
                fmt = 'bitmap' if f['isBitmap'] & 1 else 'plain text (%d chars)' % f['textSize']
            elif o['type'] == 0xe:
                r = f['rect1']
                dims = '%dx%d' % (r['right'] - r['left'], r['bottom'] - r['top'])
                bits = f['bitsPerPixel']
                dpos, dsize = f['filePosition'], f['size']
            elif o['type'] == 0x10:
                dpos, dsize = f['movieDataPos'], f['movieDataSize']
            arows.append([aid, ce.get('name', ''), KIND.get(o['type'], o['typeName']), st['index'], st['segmentIndexPlusOne'],
                          '0x%x' % o['off'], o['end'] - o['off'], dpos, dsize, dims, fmt, codec, sr, ch, bits, frames, dur,
                          'asset-object'])
    for aid, a in sorted(cx.assets.items()):
        if aid not in asset_objs:
            arows.append([aid, a['name'], CAT_KIND.get(a.get('assetType'), 'catalogType %s' % a.get('assetType')),
                          a['streamID'] & 0xffff, '', '', '', '', '', '', '', '', '', '', '', '', '',
                          'catalog-only (%s; no asset object found in any stream)' % (
                              'flagged deleted' if a['flags1'] & 1 else 'not flagged deleted')])
    wcsv('assets.csv', ['asset_id', 'name', 'kind', 'stream', 'segment', 'object_offset', 'object_size', 'data_offset',
                        'data_size', 'dimensions', 'format', 'codec', 'sample_rate', 'channels', 'bits', 'frame_count',
                        'duration_s', 'source'], arows)

    wcsv('scenes.csv', ['section', 'subsection', 'scene', 'scene_guid', 'is_shared_scene', 'stream', 'segment',
                        'elements', 'modifiers', 'mtoon_elements', 'graphic_elements', 'sound_elements', 'text_elements',
                        'movie_elements', 'image_elements', 'miniscript_modifiers', 'alias_modifiers', 'plugin_modifiers',
                        'structure_file'], scene_rows)

    erows = []
    agg = collections.defaultdict(collections.Counter)
    for (eid, info, role), c in cx.event_use.items():
        agg[(eid, info)][role] += c
    for (eid, info), roles in sorted(agg.items()):
        nm = M.EVENT_NAMES.get(eid, 'None' if eid == 1 else 'Event_%d' % eid)
        erows.append([eid, nm, 'None' if eid == 1 else cx.sysmsg.get(eid, ''), info if eid == 900 else '',
                      cx.author.get(info, '') if eid == 900 else '',
                      roles.get('when', 0), roles.get('send', 0), roles.get('send(miniscript)', 0), sum(roles.values())])
    wcsv('messages_events.csv', ['event_id', 'event_name_scummvm', 'name_in_project_label_map', 'author_message_id', 'author_message_name',
                                 'used_as_trigger', 'sent_by_modifier', 'sent_by_miniscript', 'total'], erows)

    # unresolved
    for (v, st, seg, off, size, t, tn, rev, nm, g, status, note, pm) in objects:
        if status not in ('ok', 'ok-nosize'):
            unresolved_rows.append(['object-' + status, st, seg, '0x%x' % off, tn + ((':' + pm) if pm else ''), nm or '',
                                    '%s variant: %s' % (v, note)])
    for g, c in sorted(cx.unresolved_guids.items()):
        unresolved_rows.append(['guid-reference', '', '', '', '', '', 'GUID 0x%x referenced %d time(s) in messengers/scripts but no object with that GUID exists in the parsed tree' % (g, c)])
    cx.guid.cur = None
    same_stream_dupes = 0
    seen_sg = set()
    for root in all_roots:
        for n in iter_nodes(root):
            g = n.o.get('guid')
            if g is None:
                continue
            if (n.stream, g) in seen_sg:
                same_stream_dupes += 1
                first = cx.guid.by_stream[n.stream][g]
                unresolved_rows.append(['guid-duplicate-in-stream', n.stream, n.seg, '0x%x' % n.o['off'], n.o['typeName'], n.label(),
                                        'GUID 0x%x also used earlier in the same stream by %s; references resolve to the first' % (g, first.path())])
            seen_sg.add((n.stream, g))
    for p in problems:
        unresolved_rows.append(['structure', '', '', '', '', '', p])
    seen_plug = set()
    for root in all_roots:
        for n in iter_nodes(root):
            if n.type == 0xffffffff and 'payloadParse' in n.o['f']:
                f = n.o['f']
                key = (f['modifierName'], f['plugInRevision'], f['payloadParse'])
                if key in seen_plug:
                    continue
                seen_plug.add(key)
                unk = [k for k in f['payload'] if k.lower().startswith('unknown')] if isinstance(f['payload'], dict) else []
                if f['payloadParse'] in ('opaque', 'generic-tagged-values') or unk:
                    unresolved_rows.append(['plugin-payload-semantics', n.stream, n.seg, '0x%x' % n.o['off'],
                                            'PlugIn:' + f['modifierName'], n.o['name'] or '',
                                            'rev %d payload parse=%s; fields without known meaning: %s (first instance listed)' % (
                                                f['plugInRevision'], f['payloadParse'], ', '.join(unk) or 'all')])
    for root in all_roots:
        for n in iter_nodes(root):
            if n.type == 0x4e2:
                unresolved_rows.append(['inferred-layout', n.stream, n.seg, '0x%x' % n.o['off'], n.o['typeName'], n.o['name'],
                                        'type 0x4e2 is not known to ScummVM; field layout inferred (sizes match), semantics unverified'])
    wcsv('unresolved.csv', ['category', 'stream', 'segment', 'offset', 'type', 'name', 'reason'], unresolved_rows)

    # coverage report (JSON, consumed by the notes)
    tot = collections.Counter()
    for (v, st, seg, off, size, t, tn, rev, nm, g, status, note, pm) in objects:
        tot[(v, status)] += 1
    summary = {
        'coverage': coverage, 'fileCoverage': file_cov,
        'objectStatusTotals': {'%s/%s' % k: v for k, v in sorted(tot.items())},
        'variantCrossCheck': {'streamsCompared': len(variant_check),
                              'identicalObjectSequences': sum(1 for x in variant_check if x[3]),
                              'different': [x[0] for x in variant_check if not x[3]]},
        'treeProblems': problems, 'scriptStats': dict(script_stats),
        'globalsNotReferencedByAnyAlias': [{'index': g.gindex, 'type': g.o['typeName'], 'name': g.o.get('name')} for g in unreferenced],
        'globalModifiers': len(globals_), 'guidCount': len(cx.guid), 'guidsReusedAcrossStreams': len(cx.guid_dupes),
        'guidDuplicatesWithinOneStream': same_stream_dupes,
        'unresolvedGuidRefs': len(cx.unresolved_guids),
        'presentation': ps, 'pluginTable': plugin_table,
        'assetCatalogEntries': len(cx.assets),
    }
    with open(os.path.join(idir, 'coverage.json'), 'w') as fh:
        json.dump(summary, fh, indent=1)
    with open(os.path.join(idir, 'coverage.csv'), 'w', newline='') as fh:
        w = csv.writer(fh)
        w.writerow(['stream', 'name', 'variant', 'segment', 'position', 'stream_size', 'bytes_parsed', 'complete',
                    'objects', 'ok', 'partial', 'opaque_payload', 'unknown', 'fatal'])
        for c in coverage:
            s = c['status']
            w.writerow([c['stream'], c['name'], c['variant'], c['segment'], c['pos'], c['size'], c['parsed'],
                        c['parsed'] == c['size'], c['objects'], s.get('ok', 0) + s.get('ok-nosize', 0), s.get('partial', 0),
                        s.get('opaque-payload', 0), s.get('unknown', 0), s.get('fatal', 0)])

    # console summary
    print('project format:', pre['projectFormat'], '| streams:', len(streams), '| segments:', len(cat['f']['segments']))
    print('presentation:', ps.get('dimensions'), ps.get('bitsPerPixel'), 'bpp')
    for v in variants:
        cs = [c for c in coverage if c['variant'] == v]
        print('variant %s: %d streams, bytes parsed %d / %d, objects %d, status %s' % (
            v, len(cs), sum(c['parsed'] for c in cs), sum(c['size'] for c in cs), sum(c['objects'] for c in cs),
            dict(sum((collections.Counter(c['status']) for c in cs), collections.Counter()))))
    for fc in file_cov:
        print('file', fc['file'], 'size', fc['fileSize'], 'covered', fc['bytesInsideCatalogOrStreams'], 'gaps', fc['gaps'][:5], 'overlaps', fc['overlaps'][:5])
    print('variant cross-check:', summary['variantCrossCheck'])
    print('global modifiers:', len(globals_), '| scenes:', len(scenes), '| guids:', len(cx.guid), 'reused across streams:', len(cx.guid_dupes), 'dupes within a stream:', same_stream_dupes,
          'unresolved guid refs:', len(cx.unresolved_guids))
    print('scripts:', dict(script_stats))
    print('tree problems:', problems[:10])
    print('unresolved rows:', len(unresolved_rows))


if __name__ == '__main__':
    main()
