#!/usr/bin/env python3
"""mTropolis project (.mfx/.mxx) data-object parser library.

Written for the 1999 Windows release of "Maisy's Playhouse" (mTropolis 2.0,
cross-platform "neutral" project format).  Field layouts follow the ScummVM
mTropolis engine's data.cpp/data.h (GPL, used as a format reference); field
names starting with "unk" are fields whose meaning ScummVM does not know either.

Nothing in here executes game code; it only reads bytes.
"""
import struct

# --------------------------------------------------------------------------
# Type tables
# --------------------------------------------------------------------------
TYPE_NAMES = {
    0x22: 'ProjectLabelMap', 0x3e8: 'ProjectCatalog', 0x3e9: 'StreamHeader',
    0x3ea: 'ProjectHeader', 0x3ec: 'PresentationSettings',
    0xd: 'AssetCatalog', 0x17: 'GlobalObjectInfo', 0x19: 'Unknown19', 0x2b: 'Unknown2B',
    0x2: 'ProjectStructuralDef', 0x3: 'SectionStructuralDef', 0x21: 'SubsectionStructuralDef',
    0x8: 'GraphicElement', 0x5: 'MovieElement', 0x6: 'MToonElement', 0x7: 'ImageElement',
    0xa: 'SoundElement', 0x15: 'TextLabelElement', 0x25: 'AVIMovieElement',
    0x27: 'AliasModifier', 0x136: 'ChangeSceneModifier', 0x140: 'ReturnModifier',
    0x1a4: 'SoundEffectModifier', 0x1fe: 'SimpleMotionModifier', 0x208: 'DragMotionModifier',
    0x21c: 'PathMotionModifierV1', 0x21b: 'PathMotionModifierV2', 0x226: 'VectorMotionModifier',
    0x26c: 'SceneTransitionModifier', 0x276: 'ElementTransitionModifier',
    0x29a: 'SharedSceneModifier', 0x2bc: 'IfMessengerModifier', 0x2c6: 'BehaviorModifier',
    0x2da: 'MessengerModifier', 0x2df: 'SetModifier', 0x2e4: 'TimerMessengerModifier',
    0x2ee: 'CollisionDetectionMessengerModifier', 0x2f8: 'BoundaryDetectionMessengerModifier',
    0x302: 'KeyboardMessengerModifier', 0x32a: 'TextStyleModifier', 0x334: 'GraphicModifier',
    0x384: 'ImageEffectModifier', 0x3c0: 'MiniscriptModifier', 0x3ca: 'CursorModifierV1',
    0x4b0: 'GradientModifier', 0x4c4: 'ColorTableModifier', 0x4ce: 'SoundFadeModifier',
    0x4d8: 'SaveAndRestoreModifier', 0x4e2: 'SaveAndRestoreModifierV2(inferred)',
    0x2c7: 'CompoundVariableModifier', 0x321: 'BooleanVariableModifier',
    0x322: 'IntegerVariableModifier', 0x324: 'IntegerRangeVariableModifier',
    0x327: 'VectorVariableModifier', 0x326: 'PointVariableModifier',
    0x328: 'FloatingPointVariableModifier', 0x329: 'StringVariableModifier',
    0x33e: 'ObjectReferenceVariableModifierV1',
    0xfffffffe: 'Debris', 0xffffffff: 'PlugInModifier',
    0x10: 'MovieAsset', 0x11: 'AudioAsset', 0x1e: 'ColorTableAsset', 0xe: 'ImageAsset',
    0xf: 'MToonAsset', 0x1f: 'TextAsset', 0x24: 'AVIMovieAsset', 0xffff: 'AssetDataChunk',
}
ELEMENT_TYPES = {0x8, 0x5, 0x6, 0x7, 0xa, 0x15, 0x25}
VISUAL_ELEMENT_TYPES = {0x8, 0x5, 0x6, 0x7, 0x15, 0x25}
SCENE_ROOT_TYPES = {0x8, 0x5, 0x6, 0x7, 0x25}
ASSET_TYPES = {0x10, 0x11, 0x1e, 0xe, 0xf, 0x1f, 0x24}
STRUCTURAL_TYPES = ELEMENT_TYPES | {0x2, 0x3, 0x21}
MODIFIER_TYPES = {0x27, 0x136, 0x140, 0x1a4, 0x1fe, 0x208, 0x21c, 0x21b, 0x226, 0x26c, 0x276,
                  0x29a, 0x2bc, 0x2c6, 0x2da, 0x2df, 0x2e4, 0x2ee, 0x2f8, 0x302, 0x32a, 0x334,
                  0x384, 0x3c0, 0x3ca, 0x4b0, 0x4c4, 0x4ce, 0x4d8, 0x4e2, 0x2c7, 0x321, 0x322, 0x324,
                  0x327, 0x326, 0x328, 0x329, 0x33e, 0xfffffffe, 0xffffffff}

SF_HAS_MODIFIERS = 0x1
SF_HAS_CHILDREN = 0x4
SF_NO_MORE_SIBLINGS = 0x8
MF_LAST = 0x2

# Event IDs: names from ScummVM runtime.h (EventIDs enum)
EVENT_NAMES = {
    0: 'Nothing', 207: 'ElementEnableEdit', 220: 'ElementDisableEdit', 209: 'ElementSelect',
    210: 'ElementDeselect', 213: 'ElementToggleSelect', 219: 'ElementUpdatedCalculated',
    222: 'ElementShow', 223: 'ElementHide', 1001: 'ElementScrollUp', 1002: 'ElementScrollDown',
    1005: 'ElementScrollRight', 1006: 'ElementScrollLeft', 501: 'MotionStarted',
    502: 'MotionEnded', 503: 'TransitionStarted', 504: 'TransitionEnded',
    301: 'MouseDown', 302: 'MouseUp', 303: 'MouseOver', 304: 'MouseOutside',
    305: 'MouseTrackedInside', 306: 'MouseTrackedOutside', 307: 'MouseTracking',
    309: 'MouseUpInside', 310: 'MouseUpOutside', 101: 'SceneStarted', 102: 'SceneEnded',
    103: 'SceneDeactivated', 104: 'SceneReactivated', 506: 'SceneTransitionEnded',
    401: 'SharedSceneReturnedToScene', 402: 'SharedSceneSceneChanged',
    403: 'SharedSceneNoNextScene', 404: 'SharedSceneNoPrevScene',
    2001: 'ParentEnabled', 2002: 'ParentDisabled', 227: 'ParentChanged',
    1701: 'PreloadMedia', 1703: 'FlushMedia', 1704: 'PrerollMedia', 1601: 'CloseProject',
    1801: 'UserTimeout', 1802: 'ProjectStarted', 1803: 'ProjectEnded', 1804: 'FlushAllMedia',
    1300: 'AttribGet', 1200: 'AttribSet', 226: 'Clone', 228: 'Kill', 201: 'Play', 202: 'Stop',
    801: 'Pause', 802: 'Unpause', 803: 'TogglePause', 804: 'AtFirstCel', 805: 'AtLastCel',
    900: 'AuthorMessage',
}

# Attribute IDs carried in the info field of AttribGet/AttribSet events (ScummVM runtime.h AttributeIDs)
ATTRIBUTE_NAMES = {55: 'cache', 56: 'direct', 58: 'visible', 24: 'layer', 25: 'paused', 57: 'loop', 1: 'position',
                   2: 'width', 3: 'height', 4: 'rate', 5: 'range', 6: 'cel', 59: 'loopBackForth',
                   60: 'playEveryFrame', 16: 'timeValue', 51: 'trackDisable', 50: 'trackEnable', 13: 'volume',
                   26: 'balance', 7: 'text', 18: 'masterVolume', 19: 'userTimeout'}

# Special message destinations (ScummVM runtime.h MessageDestination enum)
DEST_NAMES = {
    0: 'None', 0x65: 'SharedScene', 0x66: 'Scene', 0x67: 'Section', 0x68: 'Project',
    0x69: 'ActiveScene', 0x6a: 'ElementsParent', 0x6b: 'Children', 0x6c: 'ModifiersParent',
    0x6d: 'Subsection', 0xc9: 'Element', 0xcf: 'SourcesParent', 0xd4: 'Behavior',
    0xd1: 'NextElement', 0xd2: 'PrevElement', 0xd3: 'BehaviorsParent',
}


class ParseError(Exception):
    pass


class Reader:
    """Cursor over a bytes-like object (bytes/mmap).  fmt is 'win' or 'mac'."""

    def __init__(self, buf, pos, end, fmt):
        self.buf = buf
        self.pos = pos
        self.end = end
        self.fmt = fmt
        self.e = '<' if fmt == 'win' else '>'

    def need(self, n):
        if n < 0 or self.pos + n > self.end:
            raise ParseError('read of %d bytes at 0x%x passes end 0x%x' % (n, self.pos, self.end))

    def bytes(self, n):
        self.need(n)
        b = bytes(self.buf[self.pos:self.pos + n])
        self.pos += n
        return b

    def skip(self, n):
        self.need(n)
        self.pos += n

    def _u(self, f, n):
        self.need(n)
        v = struct.unpack_from(self.e + f, self.buf, self.pos)[0]
        self.pos += n
        return v

    def u8(self): return self._u('B', 1)
    def s8(self): return self._u('b', 1)
    def u16(self): return self._u('H', 2)
    def s16(self): return self._u('h', 2)
    def u32(self): return self._u('I', 4)
    def s32(self): return self._u('i', 4)

    def xpfloat(self):
        """Platform float: 8-byte IEEE double on Windows, 80-bit extended on Mac."""
        if self.fmt == 'win':
            return self._u('d', 8)
        se = self.u16()
        mant = struct.unpack_from('>Q', self.buf, self.pos)[0]
        self.pos += 8
        sign = -1.0 if se & 0x8000 else 1.0
        exp = se & 0x7fff
        if exp == 0 and mant == 0:
            return 0.0 * sign
        return sign * mant * 2.0 ** (exp - 16383 - 63)

    def rect(self):
        if self.fmt == 'win':
            l, t, r, b = self.s16(), self.s16(), self.s16(), self.s16()
        else:
            t, l, b, r = self.s16(), self.s16(), self.s16(), self.s16()
        return {'left': l, 'top': t, 'right': r, 'bottom': b}

    def point(self):
        if self.fmt == 'win':
            x, y = self.s16(), self.s16()
        else:
            y, x = self.s16(), self.s16()
        return {'x': x, 'y': y}

    def event(self):
        return {'id': self.u32(), 'info': self.u32()}

    def color(self):
        if self.fmt == 'win':
            b = self.bytes(4)
            return {'r': b[2], 'g': b[1], 'b': b[0]}
        r, g, b = self.u16(), self.u16(), self.u16()
        return {'r': r >> 8, 'g': g >> 8, 'b': b >> 8}

    def tstr(self, n):
        """String of n bytes where the last byte is the NUL terminator."""
        if n == 0:
            return ''
        b = self.bytes(n)
        if b[-1] != 0:
            raise ParseError('string not terminated at 0x%x' % (self.pos - n))
        return dec(b[:-1])

    def ntstr(self, n):
        return dec(self.bytes(n)) if n else ''

    def hex(self, n):
        return self.bytes(n).hex()

    # ---- InternalTypeTaggedValue (always 46 bytes) ----
    def tagged(self):
        t = self.u16()
        start = self.pos
        self.need(44)
        v = {'type': t}
        if t in (0, 0x1b, 0x0d):
            v['kind'] = {0: 'null', 0x1b: 'incomingData', 0x0d: 'string'}[t]
        elif t == 1:
            v['kind'] = 'int'; v['value'] = self.s32()
        elif t == 0x10:
            v['kind'] = 'point'; v['value'] = self.point()
        elif t == 0x11:
            v['kind'] = 'intRange'; v['value'] = {'min': self.s32(), 'max': self.s32()}
        elif t == 0x15:
            v['kind'] = 'float'; v['value'] = self.xpfloat()
        elif t == 0x1a:
            v['kind'] = 'bool'; v['value'] = bool(self.u8())
        elif t == 0x1c:
            v['kind'] = 'varRef'; v['unk'] = self.u32(); v['guid'] = self.u32()
        elif t == 0x1d:
            v['kind'] = 'label'; v['superGroup'] = self.u32(); v['id'] = self.u32()
        else:
            v['kind'] = 'unknown'
            v['raw'] = bytes(self.buf[start:start + 44]).hex()
        self.pos = start + 44
        return v

    # ---- PlugInTypeTaggedValue (variable size) ----
    def ptagged(self):
        t = self.u16()
        v = {'type': t}
        if t == 0:
            v['kind'] = 'null'
        elif t == 0x6e:
            v['kind'] = 'incomingData'
        elif t == 0xa:
            v['kind'] = 'point'; v['value'] = self.point()
        elif t == 1:
            v['kind'] = 'int'; v['value'] = self.s32()
        elif t == 9:
            v['kind'] = 'universalTime'
            v['value'] = {'value': self.s32(), 'scale': self.s32(), 'base': self.s32()}
        elif t == 0xb:
            v['kind'] = 'intRange'; v['value'] = {'min': self.s32(), 'max': self.s32()}
        elif t == 0xf:
            v['kind'] = 'float'; v['value'] = self.xpfloat()
        elif t == 0x14:
            v['kind'] = 'bool'; v['value'] = bool(self.u16())
        elif t == 0x17:
            v['kind'] = 'event'; v['value'] = self.event()
        elif t == 0x64:
            v['kind'] = 'label'; v['id'] = self.u32(); v['superGroup'] = self.u32()
        elif t == 0x66:
            l1 = self.u32(); l2 = self.u32()
            v['kind'] = 'string'; v['value'] = self.tstr(l2)
            if l1 != l2:
                v['len1'] = l1
        elif t == 0x6c:
            v['kind'] = 'color'; v['value'] = self.color()
        elif t == 0x73:
            v['kind'] = 'varRef'; v['guid'] = self.u32()
            n = self.u32()
            extra = self.bytes(n)
            v['extra'] = dec(extra.rstrip(b'\0')) if n else ''
        else:
            raise ParseError('unknown plug-in tagged value type 0x%x at 0x%x' % (t, self.pos - 2))
        return v


def dec(b):
    """Decode a byte string.  The Windows release is authored in a single-byte
    code page; cp1252 is assumed (inferred), with latin-1 fallback so no byte is lost."""
    try:
        return b.decode('cp1252')
    except UnicodeDecodeError:
        return b.decode('latin-1')


# --------------------------------------------------------------------------
# Miniscript program
# --------------------------------------------------------------------------
def parse_miniscript_program(r):
    p = {}
    p['unk1'] = r.u32()
    size_instr = r.u32()
    p['numInstructions'] = r.u32()
    nloc = r.u32()
    nattr = r.u32()
    p['bytecodeOffset'] = r.pos
    p['bytecode'] = r.bytes(size_instr)
    p['localRefs'] = []
    for _ in range(nloc):
        guid = r.u32(); ln = r.u8(); unk = r.u8()
        p['localRefs'].append({'guid': guid, 'unk': unk, 'name': r.tstr(ln) if ln else ''})
    p['attributes'] = []
    for _ in range(nattr):
        ln = r.u8(); unk = r.u8()
        p['attributes'].append({'unk': unk, 'name': r.tstr(ln) if ln else ''})
    return p


# --------------------------------------------------------------------------
# Object parsers.  Each gets (r, o) with r positioned after type(u32)+rev(u16)
# and fills o['f'] (fields), o['name'], o['guid'], o['declSize'].
# --------------------------------------------------------------------------
def _hdr(r, o, v2=None):
    """TypicalModifierHeader."""
    f = o['f']
    if v2 is None:
        v2 = o['rev'] >= 2000
    f['modifierFlags'] = r.u32()
    o['declSize'] = r.u32()
    o['guid'] = r.u32()
    f['unk3'] = r.hex(6)
    f['unk4'] = r.u32()
    f['editorPos'] = r.point()
    ln = r.u16()
    if v2:
        f['unk5'] = r.u32()
    o['name'] = r.tstr(ln) if ln else ''


def _msgspec_tail(r, f):
    a = r.u8(); b = r.u8()
    f['withSource'] = r.ntstr(a)
    f['withString'] = r.ntstr(b)


def p_project_header(r, o):
    f = o['f']
    f['persistFlags'] = r.u32(); o['declSize'] = r.u32(); f['unk1'] = r.u16()
    f['catalogFilePosition'] = r.u32()


def p_catalog(r, o):
    f = o['f']
    rev = o['rev']
    f['persistFlags'] = r.u32()
    f['sizeOfStreamAndSegmentDescs'] = r.u32()
    nstreams = r.u16(); f['unk1'] = r.u16(); f['unk2'] = r.u16(); nseg = r.u16()
    f['streams'] = []
    for i in range(nstreams):
        raw = r.bytes(24)
        st = {'index': i + 1, 'streamType': dec(raw.split(b'\0')[0]), 'typeFieldRawTail': raw[len(raw.split(b'\0')[0]):].hex(),
              'segmentIndexPlusOne': r.u16()}
        if rev >= 3:
            st['macPos'] = r.u32(); st['macSize'] = r.u32(); st['winPos'] = r.u32(); st['winSize'] = r.u32()
        else:
            st['pos'] = r.u32(); st['size'] = r.u32()
        f['streams'].append(st)
    f['segmentPrefix'] = r.u32()
    f['segments'] = []
    for i in range(nseg):
        sid = r.u32()
        ln = r.u16(); label = r.tstr(ln)
        ln = r.u16(); path = r.tstr(ln)
        f['segments'].append({'segmentID': sid, 'label': label, 'exportedPath': path})


def p_stream_header(r, o):
    f = o['f']
    f['marker'] = r.u32(); o['declSize'] = r.u32()
    o['name'] = dec(r.bytes(16).split(b'\0')[0])
    f['projectID'] = r.hex(2); f['unk1'] = r.hex(4); f['unk2'] = r.u16()


def p_presentation(r, o):
    f = o['f']
    f['persistFlags'] = r.u32(); o['declSize'] = r.u32(); f['unk1'] = r.hex(2)
    f['dimensions'] = r.point(); f['bitsPerPixel'] = r.u16(); f['unk4'] = r.u16()


def p_asset_catalog(r, o):
    f = o['f']
    f['persistFlags'] = r.u32(); f['totalNameSizePlus22'] = r.u32(); f['unk1'] = r.hex(4)
    n = r.u32()
    f['assets'] = []
    for i in range(n):
        a = {'id': i + 1, 'flags1': r.u32()}
        ln = r.u16(); a['alwaysZero'] = r.u16(); a['streamID'] = r.u32(); a['filePosition'] = r.u32()
        if o['rev'] >= 3:
            a['assetType'] = r.u32(); a['flags2'] = r.u32()
        a['name'] = r.tstr(ln)
        f['assets'].append(a)


def p_unknown19(r, o):
    f = o['f']
    f['persistFlags'] = r.u32(); o['declSize'] = r.u32(); f['unk1'] = r.hex(2)


def p_unknown2b(r, o):
    f = o['f']
    f['persistFlags'] = r.u32(); o['declSize'] = r.u32()
    f['data'] = r.hex(o['declSize'] - 14)


def p_global_object_info(r, o):
    f = o['f']
    f['persistFlags'] = r.u32(); o['declSize'] = r.u32(); f['numGlobalModifiers'] = r.u16()
    f['unk1'] = r.hex(4)


def _label_tree(r):
    ln = r.u32(); is_group = r.u32(); lid = r.u32(); unk1 = r.u32(); flags = r.u32()
    t = {'id': lid, 'isGroup': is_group, 'unk1': unk1, 'flags': flags, 'name': r.ntstr(ln)}
    if is_group:
        n = r.u32()
        t['children'] = [_label_tree(r) for _ in range(n)]
    return t


def p_label_map(r, o):
    f = o['f']
    f['persistFlags'] = r.u32(); f['unk1'] = r.u32(); n = r.u32(); f['nextAvailableID'] = r.u32()
    f['superGroups'] = []
    for _ in range(n):
        ln = r.u32(); sid = r.u32(); unk2 = r.u32(); name = r.ntstr(ln); nc = r.u32()
        f['superGroups'].append({'id': sid, 'unk2': unk2, 'name': name,
                                 'children': [_label_tree(r) for _ in range(nc)]})


def p_project_def(r, o):
    f = o['f']
    f['unk1'] = r.u32(); o['declSize'] = r.u32(); o['guid'] = r.u32(); f['otherFlags'] = r.u32()
    ln = r.u16(); o['name'] = r.tstr(ln)


def p_section(r, o):
    f = o['f']
    f['structuralFlags'] = r.u32(); o['declSize'] = r.u32(); o['guid'] = r.u32()
    ln = r.u16(); f['otherFlags'] = r.u32(); f['unk4a'] = r.u16(); f['unk4b'] = r.u16()
    f['segmentID'] = r.u32(); o['name'] = r.tstr(ln)


def p_subsection(r, o):
    f = o['f']
    f['structuralFlags'] = r.u32(); o['declSize'] = r.u32(); o['guid'] = r.u32()
    ln = r.u16(); f['otherFlags'] = r.u32(); f['sectionID'] = r.u16(); o['name'] = r.tstr(ln)


def p_graphic_el(r, o):
    f = o['f']
    f['structuralFlags'] = r.u32(); o['declSize'] = r.u32(); o['guid'] = r.u32()
    ln = r.u16(); f['elementFlags'] = r.u32(); f['layer'] = r.u16(); f['sectionID'] = r.u16()
    f['rect1'] = r.rect(); f['rect2'] = r.rect(); f['streamLocator'] = r.u32(); f['unk11'] = r.hex(4)
    o['name'] = r.tstr(ln)


def p_image_el(r, o):
    f = o['f']
    f['structuralFlags'] = r.u32(); o['declSize'] = r.u32(); o['guid'] = r.u32()
    ln = r.u16(); f['elementFlags'] = r.u32(); f['layer'] = r.u16(); f['sectionID'] = r.u16()
    f['rect1'] = r.rect(); f['rect2'] = r.rect(); f['assetID'] = r.u32(); f['streamLocator'] = r.u32()
    f['unk7'] = r.hex(4); o['name'] = r.tstr(ln)


def p_text_el(r, o):
    f = o['f']
    f['structuralFlags'] = r.u32(); o['declSize'] = r.u32(); o['guid'] = r.u32()
    ln = r.u16(); f['elementFlags'] = r.u32(); f['layer'] = r.u16(); f['sectionID'] = r.u16()
    if r.fmt == 'win':
        f['winUnk3'] = r.hex(2)
    f['rect1'] = r.rect(); f['rect2'] = r.rect(); f['assetID'] = r.u32()
    if r.fmt == 'win':
        f['winUnk4'] = r.hex(8)
    else:
        f['macUnk2'] = r.hex(30)
    o['name'] = r.tstr(ln)


def p_sound_el(r, o):
    f = o['f']
    f['structuralFlags'] = r.u32(); o['declSize'] = r.u32(); o['guid'] = r.u32()
    ln = r.u16(); f['elementFlags'] = r.u32(); f['soundFlags'] = r.u32(); f['unk2'] = r.u16()
    f['unk3'] = r.hex(2); f['rightVolume'] = r.u16(); f['leftVolume'] = r.u16(); f['balance'] = r.s16()
    f['assetID'] = r.u32(); f['unk5'] = r.hex(8); o['name'] = r.tstr(ln)


def p_movie_el(r, o):
    f = o['f']
    f['structuralFlags'] = r.u32(); o['declSize'] = r.u32(); o['guid'] = r.u32()
    ln = r.u16(); f['elementFlags'] = r.u32(); f['layer'] = r.u16(); f['unk3'] = r.hex(44)
    f['sectionID'] = r.u16(); f['unk5'] = r.hex(2); f['rect1'] = r.rect(); f['rect2'] = r.rect()
    f['assetID'] = r.u32(); f['unk7'] = r.u32(); f['volume'] = r.u16(); f['animationFlags'] = r.u32()
    f['unk10'] = r.hex(4); f['unk11'] = r.hex(4); f['streamLocator'] = r.u32(); f['unk13'] = r.hex(4)
    o['name'] = r.tstr(ln)


def p_mtoon_el(r, o):
    f = o['f']
    f['structuralFlags'] = r.u32(); o['declSize'] = r.u32(); o['guid'] = r.u32()
    ln = r.u16(); f['elementFlags'] = r.u32(); f['layer'] = r.u16(); f['animationFlags'] = r.u32()
    f['unk4'] = r.hex(4); f['sectionID'] = r.u16(); f['rect1'] = r.rect(); f['rect2'] = r.rect()
    f['assetID'] = r.u32(); f['rateTimes100000'] = r.u32(); f['streamLocator'] = r.u32()
    f['unk6'] = r.u32(); o['name'] = r.tstr(ln)


def p_behavior(r, o):
    f = o['f']
    f['modifierFlags'] = r.u32(); o['declSize'] = r.u32(); f['unk2'] = r.hex(2); o['guid'] = r.u32()
    f['unk4'] = r.u32(); f['unk5'] = r.u16(); f['unk6'] = r.u32(); f['editorPos'] = r.point()
    ln = r.u16(); f['numChildren'] = r.u16()
    if o['rev'] >= 2:
        f['unk8'] = r.u32()
    o['name'] = r.tstr(ln) if ln else ''
    f['behaviorFlags'] = r.u32(); f['enableWhen'] = r.event(); f['disableWhen'] = r.event()
    f['unk7'] = r.hex(2)


def p_miniscript(r, o):
    f = o['f']
    _hdr(r, o)
    f['enableWhen'] = r.event(); f['unk6'] = r.hex(11); f['unk7'] = r.u8()
    f['program'] = parse_miniscript_program(r)


def p_color_table_mod(r, o):
    f = o['f']
    _hdr(r, o)
    f['applyWhen'] = r.event(); f['unk1'] = r.u32(); f['unk2'] = r.hex(4); f['assetID'] = r.u32()


def p_sound_fade(r, o):
    f = o['f']
    _hdr(r, o)
    f['unk1'] = r.hex(4); f['enableWhen'] = r.event(); f['disableWhen'] = r.event()
    f['fadeToVolume'] = r.u16(); f['codedDuration'] = r.hex(4); f['unk2'] = r.hex(18)


def p_save_restore(r, o):
    f = o['f']
    _hdr(r, o)
    f['unk1'] = r.hex(4); f['saveWhen'] = r.event(); f['restoreWhen'] = r.event()
    f['saveOrRestoreValue'] = r.tagged(); f['unk5'] = r.hex(8)
    lfp = r.u8(); lfn = r.u8(); lvn = r.u8(); lvs = r.u8()
    f['varName'] = r.ntstr(lvn); f['varString'] = r.ntstr(lvs)
    f['filePath'] = r.ntstr(lfp); f['fileName'] = r.ntstr(lfn)


def p_messenger(r, o):
    f = o['f']
    _hdr(r, o)
    f['messageFlags'] = r.u32()
    wid = r.u32()
    f['send'] = r.event(); f['unk14'] = r.u16(); f['destination'] = r.u32(); f['unk11'] = r.hex(10)
    f['with'] = r.tagged()
    f['when'] = {'id': wid, 'info': r.u32()}
    _msgspec_tail(r, f)


def p_set(r, o):
    f = o['f']
    _hdr(r, o)
    f['unk1'] = r.hex(4)
    wid = r.u32()
    f['source'] = r.tagged(); f['target'] = r.tagged()
    f['executeWhen'] = {'id': wid, 'info': r.u32()}
    f['unk3'] = r.u8()
    a = r.u8(); b = r.u8(); c = r.u8(); d = r.u8(); f['unk4'] = r.u8()
    f['sourceName'] = r.ntstr(a); f['targetName'] = r.ntstr(b)
    f['sourceString'] = r.ntstr(c); f['targetString'] = r.ntstr(d)


def p_alias(r, o):
    f = o['f']
    rev = o['rev']
    f['modifierFlags'] = r.u32(); o['declSize'] = r.u32(); f['aliasIndexPlusOne'] = r.u16()
    f['unk1'] = r.u32(); f['unk2'] = r.u32()
    ln = 0
    if rev <= 2:
        ln = r.u16()
    f['editorPos'] = r.point()
    if rev >= 2:
        o['guid'] = r.u32()
    if rev >= 4:
        f['unk3'] = r.u32()
    else:
        o['name'] = r.tstr(ln)


def p_change_scene(r, o):
    f = o['f']
    _hdr(r, o)
    f['changeSceneFlags'] = r.u32(); f['executeWhen'] = r.event()
    f['targetSectionGUID'] = r.u32(); f['targetSubsectionGUID'] = r.u32(); f['targetSceneGUID'] = r.u32()


def p_sound_effect(r, o):
    f = o['f']
    _hdr(r, o)
    f['unk1'] = r.hex(4); f['executeWhen'] = r.event(); f['terminateWhen'] = r.event()
    f['unk2'] = r.u32(); f['unk3'] = r.hex(4); f['assetID'] = r.u32(); f['unk5'] = r.hex(4)


def _p_path_motion(v):
    def p(r, o):
        f = o['f']
        _hdr(r, o)
        f['flags'] = r.u32(); f['executeWhen'] = r.event(); f['terminateWhen'] = r.event()
        f['unk2'] = r.hex(2); n = r.u16(); f['unk3'] = r.hex(4)
        f['frameDurationTimes10Million'] = r.u32(); f['unk5'] = r.hex(4); f['unk6'] = r.u32()
        f['points'] = []
        for _ in range(n):
            pt = {'point': r.point(), 'frame': r.u32(), 'frameFlags': r.u32()}
            if v >= 2:
                m = {}
                m['messageFlags'] = r.u32(); m['send'] = r.event(); m['unk11'] = r.u16()
                m['destination'] = r.u32(); m['unk13'] = r.hex(10); m['with'] = r.tagged()
                _msgspec_tail(r, m)
                pt['message'] = m
            f['points'].append(pt)
    return p


def p_simple_motion(r, o):
    f = o['f']
    _hdr(r, o)
    f['executeWhen'] = r.event(); f['terminateWhen'] = r.event(); f['motionType'] = r.u16()
    f['directionFlags'] = r.u16(); f['steps'] = r.u16(); f['delayMSecTimes4800'] = r.u32()
    f['unk1'] = r.hex(4)


def p_drag_motion(r, o):
    f = o['f']
    _hdr(r, o)
    f['enableWhen'] = r.event(); f['disableWhen'] = r.event()
    if r.fmt == 'mac':
        fl = r.u8(); f['macUnk3'] = r.u8()
        f['macFlags'] = fl
        f['constrainToParent'] = bool(fl & 0x10); f['constrainVertical'] = bool(fl & 0x20)
        f['constrainHorizontal'] = bool(fl & 0x40)
    else:
        f['winUnk2'] = r.u8(); f['constrainHorizontal'] = r.u8(); f['constrainVertical'] = r.u8()
        f['constrainToParent'] = r.u8()
    f['constraintMargin'] = r.rect(); f['unk1'] = r.u16()


def p_vector_motion(r, o):
    f = o['f']
    _hdr(r, o)
    f['enableWhen'] = r.event(); f['disableWhen'] = r.event(); f['vec'] = r.tagged()
    f['unk1'] = r.u16(); a = r.u8(); f['vecStringLength'] = r.u8()
    f['vecSource'] = r.ntstr(a)


def p_scene_transition(r, o):
    f = o['f']
    _hdr(r, o)
    f['enableWhen'] = r.event(); f['disableWhen'] = r.event(); f['transitionType'] = r.u16()
    f['direction'] = r.u16(); f['unk3'] = r.u16(); f['steps'] = r.u16(); f['duration'] = r.u32()
    f['unk5'] = r.hex(2)


def p_element_transition(r, o):
    f = o['f']
    _hdr(r, o)
    f['enableWhen'] = r.event(); f['disableWhen'] = r.event(); f['revealType'] = r.u16()
    f['transitionType'] = r.u16(); f['unk3'] = r.u16(); f['unk4'] = r.u16(); f['steps'] = r.u16()
    f['rate'] = r.u16()


def p_shared_scene(r, o):
    f = o['f']
    _hdr(r, o)
    f['unk1'] = r.hex(4); f['executeWhen'] = r.event(); f['sectionGUID'] = r.u32()
    f['subsectionGUID'] = r.u32(); f['sceneGUID'] = r.u32()


def p_if_messenger(r, o):
    f = o['f']
    _hdr(r, o)
    f['messageFlags'] = r.u32(); f['when'] = r.event(); f['send'] = r.event(); f['unk6'] = r.u16()
    f['destination'] = r.u32(); f['unk7'] = r.hex(10); f['with'] = r.tagged(); f['unk9'] = r.hex(10)
    _msgspec_tail(r, f)
    f['program'] = parse_miniscript_program(r)


def p_timer(r, o):
    f = o['f']
    _hdr(r, o)
    f['messageAndTimerFlags'] = r.u32(); f['executeWhen'] = r.event(); f['send'] = r.event()
    f['terminateWhen'] = r.event(); f['unk2'] = r.u16(); f['destination'] = r.u32()
    f['unk4'] = r.hex(10); f['with'] = r.tagged(); f['unk5'] = r.u8(); f['minutes'] = r.u8()
    f['seconds'] = r.u8(); f['hundredthsOfSeconds'] = r.u8(); f['unk6'] = r.u32(); f['unk7'] = r.u32()
    f['unk8'] = r.hex(10)
    _msgspec_tail(r, f)


def p_boundary(r, o):
    f = o['f']
    _hdr(r, o)
    f['messageFlagsHigh'] = r.u16(); f['enableWhen'] = r.event(); f['disableWhen'] = r.event()
    f['send'] = r.event(); f['unk2'] = r.u16(); f['destination'] = r.u32(); f['unk3'] = r.hex(10)
    f['with'] = r.tagged()
    _msgspec_tail(r, f)


def p_collision(r, o):
    f = o['f']
    _hdr(r, o)
    f['messageAndModifierFlags'] = r.u32(); f['enableWhen'] = r.event(); f['disableWhen'] = r.event()
    f['send'] = r.event(); f['unk2'] = r.u16(); f['destination'] = r.u32(); f['unk3'] = r.hex(10)
    f['with'] = r.tagged()
    _msgspec_tail(r, f)


def p_keyboard(r, o):
    f = o['f']
    _hdr(r, o)
    f['messageFlagsAndKeyStates'] = r.u32(); f['unk2'] = r.u16(); f['keyModifiers'] = r.u16()
    f['keycode'] = r.u8(); f['unk4'] = r.hex(7); f['send'] = r.event(); f['unk7'] = r.u16()
    f['destination'] = r.u32(); f['unk9'] = r.hex(10); f['with'] = r.tagged()
    _msgspec_tail(r, f)


def p_text_style(r, o):
    f = o['f']
    _hdr(r, o)
    f['unk1'] = r.hex(4); f['macFontID'] = r.u16(); f['flags'] = r.u8(); f['unk2'] = r.u8()
    f['size'] = r.u16(); f['textColor'] = r.color(); f['backgroundColor'] = r.color()
    f['alignment'] = r.u16(); f['unk3'] = r.u16(); f['applyWhen'] = r.event(); f['removeWhen'] = r.event()
    ln = r.u16(); f['fontFamilyName'] = r.ntstr(ln)


def p_graphic_mod(r, o):
    f = o['f']
    _hdr(r, o)
    f['unk1'] = r.u16(); f['applyWhen'] = r.event(); f['removeWhen'] = r.event(); f['unk2'] = r.hex(2)
    f['inkMode'] = r.u16(); f['shape'] = r.u16()
    if r.fmt == 'mac':
        f['macUnk4_1'] = r.hex(6)
    else:
        f['winUnk5_1'] = r.hex(4)
    f['backColor'] = r.color(); f['foreColor'] = r.color(); f['borderSize'] = r.u16()
    f['borderColor'] = r.color(); f['shadowSize'] = r.u16(); f['shadowColor'] = r.color()
    if r.fmt == 'mac':
        f['macUnk4_2'] = r.hex(26)
    else:
        f['winUnk5_2'] = r.hex(22)
    n = r.u16(); f['unk6'] = r.hex(8)
    f['polyPoints'] = [r.point() for _ in range(n)]


def p_image_effect(r, o):
    f = o['f']
    _hdr(r, o)
    f['flags'] = r.u32(); f['type'] = r.u16(); f['applyWhen'] = r.event(); f['removeWhen'] = r.event()
    f['bevelWidth'] = r.u16(); f['toneAmount'] = r.u16(); f['unk2'] = r.hex(2)


def p_return(r, o):
    f = o['f']
    _hdr(r, o)
    f['executeWhen'] = r.event(); f['unk1'] = r.u16()


def p_cursor_v1(r, o):
    f = o['f']
    _hdr(r, o)
    if r.fmt == 'mac' or o['declSize'] > (r.pos - o['off']):
        f['applyWhen'] = r.event(); f['unk1'] = r.u32(); f['unk2'] = r.u16(); f['cursorIndex'] = r.u32()


def p_compound_var(r, o):
    f = o['f']
    f['modifierFlags'] = r.u32(); o['declSize'] = r.u32(); f['unk1'] = r.hex(2); o['guid'] = r.u32()
    f['unk4'] = r.hex(6); f['unk5'] = r.u32(); f['editorPos'] = r.point()
    ln = r.u16(); f['numChildren'] = r.u16()
    if o['rev'] >= 2:
        f['unk8_rev2'] = r.u32()   # observed in this title (rev 2); not in ScummVM (rev 1 only)
    o['name'] = r.tstr(ln); f['unk7'] = r.hex(4)


def p_bool_var(r, o):
    f = o['f']; _hdr(r, o); f['value'] = bool(r.u8()); f['unk5'] = r.u8()


def p_int_var(r, o):
    f = o['f']; _hdr(r, o); f['unk1'] = r.hex(4); f['value'] = r.s32()


def p_range_var(r, o):
    f = o['f']; _hdr(r, o); f['unk1'] = r.hex(4); f['value'] = {'min': r.s32(), 'max': r.s32()}


def p_vector_var(r, o):
    f = o['f']; _hdr(r, o); f['unk1'] = r.hex(4)
    f['value'] = {'angleRadians': r.xpfloat(), 'magnitude': r.xpfloat()}


def p_point_var(r, o):
    f = o['f']; _hdr(r, o); f['unk5'] = r.hex(4); f['value'] = r.point()


def p_float_var(r, o):
    f = o['f']; _hdr(r, o); f['unk1'] = r.hex(4); f['value'] = r.xpfloat()


def p_string_var(r, o):
    f = o['f']; _hdr(r, o); ln = r.u32(); f['unk1'] = r.hex(4)
    # ScummVM (rev 1000) reads a NUL-terminated string here.  In this title's rev 2000
    # objects the length does not include a terminator (observed: declared sizes match).
    b = r.bytes(ln)
    f['value'] = dec(b[:-1] if b.endswith(b'\0') else b)


def p_objref_v1(r, o):
    f = o['f']; _hdr(r, o); f['unk1'] = r.u32(); f['setToSourcesParentWhen'] = r.event()


def p_save_restore_v2(r, o):
    """Type 0x4e2 rev 2000.  Unknown to ScummVM.  Layout INFERRED from the two
    instances in this title by analogy with SaveAndRestoreModifier (0x4d8)."""
    f = o['f']
    _hdr(r, o)
    f['unk1'] = r.hex(4); f['saveWhen'] = r.event(); f['restoreWhen'] = r.event()
    f['saveOrRestoreValue'] = r.tagged(); f['filePathValue'] = r.tagged(); f['unk5'] = r.hex(4)
    a = r.u8(); b = r.u8(); c = r.u8(); d = r.u8(); e = r.u8(); f['unk6'] = r.u8()
    f['varName'] = r.ntstr(a); f['varString'] = r.ntstr(b)
    f['pathVarName'] = r.ntstr(c); f['pathVarString'] = r.ntstr(d); f['fileName'] = r.ntstr(e)


def p_debris(r, o):
    f = o['f']; f['persistFlags'] = r.u32(); o['declSize'] = r.u32()


# ---- plug-in modifiers ----
# Which plug-in file exports which modifier name.  "source" says how we know.
PLUGIN_OF = {
    # ScummVM plugin/standard.cpp registers these for the "Standard" plug-in
    'CursorMod': 'standard kit', 'STransCt': 'standard kit', 'MediaCue': 'standard kit',
    'ObjRefP': 'standard kit', 'ListMod': 'standard kit', 'SysInfo': 'standard kit',
    'Print': 'standard kit', 'panning': 'standard kit', 'fade': 'standard kit',
    'Navigate': 'standard kit', 'OpenTitle': 'standard kit', 'openApp': 'standard kit',
    'MIDIModf': 'MIDI (standard kit)',
    'hlBitmapVariable': 'Bitmap.r32 (Hoologic)', 'hlCaptureBitmap': 'Bitmap.r32 (Hoologic)',
    'hlImportBitmap': 'Bitmap.r32 (Hoologic)', 'hlDisplayBitmap': 'Bitmap.r32 (Hoologic)',
    'hlScaleBitmap': 'Bitmap.r32 (Hoologic)', 'hlSaveBitmap': 'Bitmap.r32 (Hoologic)',
    'hlPrintBitmap': 'Bitmap.r32 (Hoologic)', 'hlPainter': 'Hoologic', 'hlKeyState': 'Hoologic',
}

# Field names for known plug-in payloads (sequence of PlugInTypeTaggedValue).
# Names come from ScummVM plugin/*_data.cpp; "unknownN" there means unknown here too.
PLUGIN_FIELDS = {
    'CursorMod': {0: ['applyWhen', 'cursorIDAsLabel'], 1: ['applyWhen', 'removeWhen', 'cursorIDAsLabel'],
                  2: ['applyWhen', 'removeWhen', 'cursorIDAsLabel']},
    'STransCt': {0: ['enableWhen', 'disableWhen', 'transitionType', 'transitionDirection', 'unknown1',
                     'steps', 'duration', 'fullScreen']},
    'SysInfo': {0: []},
    'Print': {0: ['executeWhen', 'unknown1Bool', 'unknown2Bool', 'unknown3Bool', 'filePath', 'unknown4Bool']},
    'panning': {3: ['unknown1Event', 'unknown2Event', 'unknown3Int', 'unknown4Int', 'unknown5Int']},
    'fade': {1: ['unknown1Event', 'unknown2Event', 'unknown3Int', 'unknown4Int', 'unknown5Int']},
    'OpenTitle': {0: ['executeWhen', 'pathOrUrl', 'addToReturnList']},
    'openApp': {0: ['unknown1Null', 'unknown2Null', 'unknown3Event', 'unknown4String', 'unknown5Integer',
                    'unknown6Integer', 'unknown7Bool']},
    'hlBitmapVariable': {0: []},
    'hlCaptureBitmap': {0: ['unknown1Event', 'unknown2VarRef']},
    'hlImportBitmap': {0: ['unknown1Event', 'unknown2Bool', 'unknown3Bool', 'unknown4VarRef', 'unknown5VarRef']},
    'hlDisplayBitmap': {0: ['unknown1Event', 'unknown2VarRef', 'unknown3VarRef']},
    'hlScaleBitmap': {0: ['unknown1Event', 'unknown2VarRef', 'unknown3IncomingData', 'unknown4Int']},
    'hlSaveBitmap': {0: ['unknown1Event', 'unknown2VarRef', 'unknown3Bool', 'unknown4Bool', 'unknown5VarRef']},
    'hlPrintBitmap': {0: ['unknown1Event', 'unknown2VarRef', 'unknown3Bool', 'unknown4Bool', 'unknown5Int',
                          'unknown6Int', 'unknown7Null', 'unknown8Null']},
    'hlKeyState': {0: []},
}


def _plug_mediacue(r, f, rev):
    f['enableWhen'] = r.ptagged(); f['disableWhen'] = r.ptagged(); f['sendEvent'] = r.ptagged()
    f['nonStandardMessageFlags'] = r.ptagged(); f['unknown1'] = r.u16(); f['destination'] = r.u32()
    f['unknown2'] = r.u32(); f['with'] = r.ptagged(); f['executeAt'] = r.ptagged()
    f['triggerTiming'] = r.ptagged()


def _plug_objrefp(r, f, rev):
    f['setToSourceParentWhen'] = r.ptagged()
    if rev == 0:
        f['objectPath'] = r.ptagged()
    else:
        f['unknown1'] = r.ptagged()
        if not (f['unknown1']['kind'] == 'int' and f['unknown1']['value'] == 0):
            f['objectPath'] = r.ptagged()


def _plug_listmod(r, f, rev):
    f['unknown1'] = r.u16(); f['contentsType'] = r.u32(); f['unknown2'] = r.hex(4)
    have = False
    if rev == 1:
        have = True
    elif rev >= 3:   # ScummVM knows rev 3; this title has rev 5 with the same observed layout
        pf = r.ptagged()
        f['persistentFlag'] = pf
        have = bool(pf.get('value'))
    f['havePersistentData'] = have
    if have:
        n = r.ptagged()
        f['numValues'] = n.get('value')
        f['values'] = [r.ptagged() for _ in range(n.get('value', 0))]


def _plug_midi(r, f, rev):
    f['executeWhen'] = r.ptagged(); f['terminateWhen'] = r.ptagged(); f['embeddedFlag'] = r.u8()
    if f['embeddedFlag']:
        f['hasFile'] = r.u8()
        if f['hasFile']:
            ln = struct.unpack('>I', r.bytes(4))[0]
            f['embeddedFileOffset'] = r.pos
            f['embeddedFileSize'] = ln
            f['embeddedFileMagic'] = bytes(r.buf[r.pos:r.pos + 4]).hex()
            r.skip(ln)
        f['loop'] = r.u8(); f['overrideTempo'] = r.u8(); f['volume'] = r.u8()
        f['tempo'] = r.ptagged(); f['fadeIn'] = r.ptagged(); f['fadeOut'] = r.ptagged()
    else:
        f['channel'] = r.u8(); f['note'] = r.u8(); f['velocity'] = r.u8(); f['program'] = r.u8()
        f['singleNoteDuration'] = r.ptagged()


PLUGIN_SPECIAL = {'MediaCue': _plug_mediacue, 'ObjRefP': _plug_objrefp, 'ListMod': _plug_listmod,
                  'MIDIModf': _plug_midi}


def p_plugin(r, o):
    f = o['f']
    f['modifierFlags'] = r.u32(); coded = r.u32()
    f['codedSize'] = coded
    f['modifierName'] = dec(r.bytes(16).split(b'\0')[0])
    o['guid'] = r.u32(); f['unk2'] = r.hex(6); f['plugInRevision'] = r.u16(); f['unk4'] = r.u32()
    f['editorPos'] = r.point()
    ln = r.u16()
    hdr = 52
    if o['rev'] >= 2000:
        # Observed in this title: rev 2001 plug-in modifiers carry the same extra u32
        # that TypicalModifierHeader has for 2xxx revisions (ScummVM does not read it here).
        f['unk5'] = r.u32()
        hdr = 56
    o['name'] = r.tstr(ln) if ln else ''
    sub = coded - ln - hdr
    if sub < 0:
        raise ParseError('plug-in codedSize %d too small' % coded)
    o['declSize'] = (r.pos - o['off']) + sub
    pstart = r.pos
    pend = pstart + sub
    f['payloadOffset'] = pstart
    f['payloadSize'] = sub
    mname = f['modifierName']
    rev = f['plugInRevision']
    # Observed in this title (mTropolis 2.0 data): a non-empty payload starts with a
    # u16 that repeats plugInRevision; the ScummVM-documented fields follow.
    body = pstart
    if sub >= 2 and o['rev'] >= 2000:
        pre = Reader(r.buf, pstart, pend, r.fmt).u16()
        if pre == rev:
            f['payloadRevisionPrefix'] = pre
            body = pstart + 2
    sub_r = Reader(r.buf, body, pend, r.fmt)
    how = None
    payload = {}
    if sub == 0:
        how = 'empty'
    try:
        if how:
            pass
        elif mname in PLUGIN_SPECIAL:
            PLUGIN_SPECIAL[mname](sub_r, payload, rev)
            how = 'scummvm-layout'
        elif mname in PLUGIN_FIELDS:
            tbl = PLUGIN_FIELDS[mname]
            names = tbl.get(rev, tbl[max(tbl)])
            for nm in names:
                payload[nm] = sub_r.ptagged()
            how = 'scummvm-layout'
        if how and sub_r.pos != pend:
            how = None
            payload = {}
    except (ParseError, struct.error):
        how = None
        payload = {}
    if how is None:
        # Generic attempt: plug-in payloads are normally a plain sequence of tagged values.
        sub_r = Reader(r.buf, body, pend, r.fmt)
        vals = []
        try:
            while sub_r.pos < pend:
                vals.append(sub_r.ptagged())
            if sub_r.pos == pend:
                how = 'generic-tagged-values'
                payload = {'values': vals}
        except (ParseError, struct.error):
            how = None
    if how is None:
        payload = {'hex': bytes(r.buf[pstart:pend][:256]).hex()}
        o['status'] = 'opaque-payload'
        o['note'] = 'plug-in payload not understood; skipped using codedSize'
    f['payloadParse'] = how or 'opaque'
    f['payload'] = payload
    r.pos = pend


# ---- assets ----
def p_color_table_asset(r, o):
    f = o['f']
    f['persistFlags'] = r.u32(); o['declSize'] = r.u32(); f['unk1'] = r.hex(4)
    f['assetID'] = r.u32(); f['unk2'] = r.u32()
    cols = []
    if r.fmt == 'mac':
        f['macUnk'] = r.hex(20); f['clutHeader'] = r.hex(8)
        raw = r.bytes(256 * 8)
        for i in range(256):
            cols.append([raw[i * 8 + 2], raw[i * 8 + 4], raw[i * 8 + 6]])
    else:
        f['winUnk'] = r.hex(14)
        raw = r.bytes(256 * 4)
        for i in range(256):
            cols.append([raw[i * 4], raw[i * 4 + 1], raw[i * 4 + 2]])
    f['colors'] = cols


def p_movie_asset(r, o):
    f = o['f']
    f['persistFlags'] = r.u32(); f['assetAndDataCombinedSize'] = r.u32(); f['unk1'] = r.hex(4)
    f['assetID'] = r.u32(); f['unk1_1'] = r.hex(4); ln = r.u16()
    if r.fmt == 'mac':
        f['macUnk5_1'] = r.hex(66); f['movieDataSize'] = r.u32(); f['macUnk6'] = r.hex(12)
        f['moovAtomPos'] = r.u32()
        if o['rev'] >= 1:
            f['macUnk8'] = r.hex(4)
    else:
        f['winUnk3_1'] = r.hex(32); f['movieDataSize'] = r.u32(); f['winUnk4'] = r.hex(12)
        f['moovAtomPos'] = r.u32(); f['winUnk7'] = r.hex(12)
    f['extFileName'] = r.tstr(ln)
    f['movieDataPos'] = r.pos
    r.skip(f['movieDataSize'])


def p_avi_asset(r, o):
    f = o['f']
    f['unk1'] = r.hex(12); f['assetID'] = r.u32(); f['unk2'] = r.hex(4); ln = r.u16()
    f['unk3'] = r.hex(60); f['extFileName'] = r.tstr(ln)


def p_audio_asset(r, o):
    f = o['f']
    f['persistFlags'] = r.u32(); f['assetAndDataCombinedSize'] = r.u32(); f['unk2'] = r.hex(4)
    f['assetID'] = r.u32(); f['unk3'] = r.hex(20)
    if r.fmt == 'mac':
        f['macUnk4'] = r.hex(4); f['sampleRate1'] = r.u16(); f['macUnk5'] = r.hex(5)
        f['bitsPerSample'] = r.u8(); f['encoding1'] = r.u8(); f['channels'] = r.u8()
        f['codedDuration'] = r.hex(4); f['macUnk8'] = r.hex(20); f['sampleRate2'] = r.u16()
    else:
        f['sampleRate1'] = r.u16(); f['bitsPerSample'] = r.u8(); f['winUnk9'] = r.hex(3)
        f['encoding1'] = r.u8(); f['channels'] = r.u8(); f['codedDuration'] = r.hex(4)
        f['winUnk11'] = r.hex(18); f['sampleRate2'] = r.u16(); f['winUnk12_1'] = r.hex(2)
    cps = r.u32(); ncp = r.u16(); f['unk14'] = r.hex(4)
    f['filePosition'] = r.u32(); f['size'] = r.u32()
    f['cuePointDataSize'] = cps
    if ncp * 14 > cps:
        raise ParseError('cue point table larger than declared')
    f['cuePoints'] = []
    for _ in range(ncp):
        f['cuePoints'].append({'unk13': r.hex(2), 'unk14': r.u32(), 'position': r.u32(), 'cuePointID': r.u32()})
    r.skip(cps - ncp * 14)


def p_image_asset(r, o):
    f = o['f']
    f['persistFlags'] = r.u32(); f['unk1'] = r.u32(); f['unk2'] = r.hex(4)
    f['assetID'] = r.u32(); f['unk3'] = r.u32()
    if r.fmt == 'mac':
        f['macUnk7'] = r.hex(44)
    else:
        f['winUnk8'] = r.hex(10)
    f['rect1'] = r.rect(); f['hdpiFixed'] = r.u32(); f['vdpiFixed'] = r.u32(); f['bitsPerPixel'] = r.u16()
    f['unk4'] = r.hex(2); f['unk5'] = r.hex(4); f['unk6'] = r.hex(8); f['rect2'] = r.rect()
    f['filePosition'] = r.u32(); f['size'] = r.u32()


def p_mtoon_asset(r, o):
    f = o['f']
    f['marker'] = r.u32(); f['unk1'] = r.hex(8); f['assetID'] = r.u32()
    if r.fmt == 'mac':
        f['macUnk10'] = r.hex(88)
    else:
        f['winUnk11'] = r.hex(54)
    f['frameDataPosition'] = r.u32(); f['sizeOfFrameData'] = r.u32()
    h0 = r.u32(); h1 = r.u32()
    if h0 != 0 or h1 != 0x546f6f6e:
        raise ParseError('mToon header magic mismatch %x %x' % (h0, h1))
    f['version'] = r.u16(); f['unk2'] = r.hex(4); f['encodingFlags'] = r.u32(); f['rect'] = r.rect()
    n = r.u16(); f['unk3'] = r.hex(14); f['bitsPerPixel'] = r.u16(); f['codecID'] = r.u32()
    f['unk4_1'] = r.hex(8); cds = r.u32(); f['registrationPoint'] = r.point()
    f['numFrames'] = n
    frames = []
    for _ in range(n):
        fr = {}
        fr['unk12'] = r.hex(4); fr['rect1'] = r.rect(); fr['dataOffset'] = r.u32(); fr['unk13'] = r.hex(2)
        fr['compressedSize'] = r.u32(); fr['unk14'] = r.u8(); fr['keyframeFlag'] = r.u8()
        fr['platformBit'] = r.u8(); fr['unk15'] = r.u8(); fr['rect2'] = r.rect(); fr['hdpiFixed'] = r.u32()
        fr['vdpiFixed'] = r.u32(); fr['bitsPerPixel'] = r.u16(); fr['unk16'] = r.u32()
        fr['decompressedBytesPerRow'] = r.u16()
        if r.fmt == 'mac':
            fr['macUnk17'] = r.hex(4)
        else:
            fr['winUnk18'] = r.hex(2)
        fr['decompressedSize'] = r.u32()
        frames.append(fr)
    f['frames'] = frames
    f['codecDataSize'] = cds
    f['codecData'] = r.hex(cds) if cds else ''
    f['frameRanges'] = []
    if f['encodingFlags'] & 0x20000000:
        tag = r.u32(); f['frameRangesSize'] = r.u32(); nr = r.u32()
        if tag != 1:
            raise ParseError('mToon frame range tag %x' % tag)
        for _ in range(nr):
            s = r.u32(); e = r.u32(); ln = r.u8(); u = r.u8()
            f['frameRanges'].append({'startFrame': s, 'endFrame': e, 'unk14': u, 'name': r.tstr(ln)})


def p_text_asset(r, o):
    f = o['f']
    f['persistFlags'] = r.u32(); o['declSize'] = r.u32(); f['unk1'] = r.u32(); f['assetID'] = r.u32()
    f['unk2'] = r.u32()
    if r.fmt == 'mac':
        f['macUnk3'] = r.hex(44)
    else:
        f['winUnk4'] = r.hex(10)
    f['bitmapRect'] = r.rect(); f['hdpi'] = r.u32(); f['vdpi'] = r.u32(); f['unk5'] = r.u16()
    pb = r.bytes(2); f['pitch'] = (pb[0] << 8) | pb[1]
    f['unk6'] = r.u32(); f['bitmapSize'] = r.u32(); f['unk7'] = r.hex(20); f['textSize'] = r.u32()
    f['unk8'] = r.hex(8); f['alignment'] = r.u16(); f['isBitmap'] = r.u16()
    if (f['isBitmap'] & 1) == 0:
        f['text'] = r.ntstr(f['textSize'])
        if r.fmt == 'mac':
            n = r.u16()
            f['macFormattingSpans'] = []
            for _ in range(n):
                sp = {'unk9': r.hex(2), 'spanStart': r.u16(), 'unk10': r.hex(4), 'fontID': r.u16(),
                      'fontFlags': r.u8(), 'unk11': r.hex(1), 'size': r.u16(), 'unk12': r.hex(6)}
                f['macFormattingSpans'].append(sp)
    else:
        f['bitmapDataPos'] = r.pos
        r.skip(f['bitmapSize'])


def p_asset_data_chunk(r, o):
    f = o['f']
    f['unk1'] = r.u32(); o['declSize'] = r.u32()
    f['dataPos'] = r.pos
    r.skip(o['declSize'] - 14)


PARSERS = {
    0x22: p_label_map, 0x3e8: p_catalog, 0x3e9: p_stream_header, 0x3ea: p_project_header,
    0x3ec: p_presentation, 0xd: p_asset_catalog, 0x17: p_global_object_info, 0x19: p_unknown19,
    0x2b: p_unknown2b, 0x2: p_project_def, 0x3: p_section, 0x21: p_subsection,
    0x8: p_graphic_el, 0x5: p_movie_el, 0x25: p_movie_el, 0x6: p_mtoon_el, 0x7: p_image_el,
    0xa: p_sound_el, 0x15: p_text_el,
    0x27: p_alias, 0x136: p_change_scene, 0x140: p_return, 0x1a4: p_sound_effect,
    0x1fe: p_simple_motion, 0x208: p_drag_motion, 0x21c: _p_path_motion(1), 0x21b: _p_path_motion(2),
    0x226: p_vector_motion, 0x26c: p_scene_transition, 0x276: p_element_transition,
    0x29a: p_shared_scene, 0x2bc: p_if_messenger, 0x2c6: p_behavior, 0x2da: p_messenger,
    0x2df: p_set, 0x2e4: p_timer, 0x2ee: p_collision, 0x2f8: p_boundary, 0x302: p_keyboard,
    0x32a: p_text_style, 0x334: p_graphic_mod, 0x384: p_image_effect, 0x3c0: p_miniscript,
    0x3ca: p_cursor_v1, 0x4c4: p_color_table_mod, 0x4ce: p_sound_fade, 0x4d8: p_save_restore,
    0x4e2: p_save_restore_v2,
    0x2c7: p_compound_var, 0x321: p_bool_var, 0x322: p_int_var, 0x324: p_range_var,
    0x327: p_vector_var, 0x326: p_point_var, 0x328: p_float_var, 0x329: p_string_var,
    0x33e: p_objref_v1, 0xfffffffe: p_debris, 0xffffffff: p_plugin,
    0x10: p_movie_asset, 0x11: p_audio_asset, 0x1e: p_color_table_asset, 0xe: p_image_asset,
    0xf: p_mtoon_asset, 0x1f: p_text_asset, 0x24: p_avi_asset, 0xffff: p_asset_data_chunk,
}

# Types whose second u32 is a size-including-tag that covers the whole object,
# so it can be used to resync if the field parser fails.  (Assets with trailing
# media, and the catalog-ish objects, are excluded.)
NO_DECL_RESYNC = {0x10, 0x11, 0xe, 0xf, 0x24, 0xd, 0x22, 0x3e8}


def read_object(buf, pos, end, fmt):
    """Parse one data object at absolute offset pos.  Never raises.

    Returns a dict:
      off, end (absolute offsets), type, typeName, rev, status, name, guid,
      declSize (size-including-tag if the object declares one), f (fields), note.
    status: 'ok'            parsed by a field parser, and (when a size is declared)
                            consumed bytes == declared size
            'ok-nosize'     parsed; object type has no usable declared size to cross-check
            'partial'       field parser consumed != declared size; resynced to declared size
            'opaque-payload' plug-in header parsed, payload skipped by its coded size
            'unknown'       no field parser / parser failed; skipped using declared size
            'fatal'         cannot determine object size; caller must stop
    """
    o = {'off': pos, 'f': {}, 'name': None, 'guid': None, 'declSize': None, 'status': 'ok', 'note': ''}
    r = Reader(buf, pos, end, fmt)
    try:
        o['type'] = r.u32()
        o['rev'] = r.u16()
    except ParseError as ex:
        o['type'] = None; o['rev'] = None; o['typeName'] = '?'
        o['status'] = 'fatal'; o['note'] = str(ex); o['end'] = pos
        return o
    t = o['type']
    o['typeName'] = TYPE_NAMES.get(t, 'UnknownType_0x%x' % t)
    parser = PARSERS.get(t)
    err = None
    if parser:
        try:
            parser(r, o)
        except (ParseError, struct.error, IndexError, KeyError) as ex:
            err = '%s: %s' % (type(ex).__name__, ex)
    else:
        err = 'no parser for type'
    if err is None:
        consumed = r.pos - pos
        ds = o['declSize']
        if t in NO_DECL_RESYNC or ds is None:
            if o['status'] == 'ok':
                o['status'] = 'ok-nosize'
            o['end'] = r.pos
        elif ds == consumed:
            o['end'] = r.pos
        else:
            o['note'] = (o['note'] + ' ' if o['note'] else '') + \
                'field parser consumed %d bytes but declared size is %d' % (consumed, ds)
            if 14 <= ds <= end - pos:
                o['status'] = 'partial'
                o['end'] = pos + ds
            else:
                o['end'] = r.pos
                o['status'] = 'partial'
        return o
    # failure path: try to resync using the flags/size pair that most objects start with
    o['note'] = err
    try:
        rr = Reader(buf, pos + 6, end, fmt)
        rr.u32()
        ds = rr.u32()
    except ParseError:
        ds = None
    if t == 0xffffffff and ds is not None:
        pass
    if ds is not None and t not in NO_DECL_RESYNC and 14 <= ds <= end - pos:
        o['declSize'] = ds
        o['status'] = 'unknown'
        o['end'] = pos + ds
        o['f'] = {'hexPreview': bytes(buf[pos:pos + min(ds, 96)]).hex()}
    else:
        o['status'] = 'fatal'
        o['end'] = pos
        o['f'] = {'hexPreview': bytes(buf[pos:pos + 96]).hex()}
    return o


def walk_stream(buf, pos, size, fmt):
    """Yield every object in [pos, pos+size).  Stops after a 'fatal' object."""
    end = pos + size
    p = pos
    while p < end:
        o = read_object(buf, p, end, fmt)
        yield o
        if o['status'] == 'fatal' or o['end'] <= p:
            return
        p = o['end']


def read_catalog(buf):
    """Parse the segment-1 preamble: start value, magic, project header, catalog."""
    start = struct.unpack_from('<H', buf, 0)[0]
    proj_fmt = {1: 'Windows', 0: 'Macintosh', 8: 'Neutral (cross-platform)'}.get(start, 'unknown')
    fmt = 'mac' if start == 0 else 'win'
    r = Reader(buf, 2, len(buf), fmt)
    magic, hdr1, hdr2 = r.u32(), r.u32(), r.u32()
    hdr = read_object(buf, r.pos, len(buf), fmt)
    cat = read_object(buf, hdr['end'], len(buf), fmt)
    return {'startValue': start, 'projectFormat': proj_fmt, 'catalogDataFormat': fmt,
            'magic': magic, 'hdr1': hdr1, 'hdr2': hdr2, 'projectHeader': hdr, 'catalog': cat}
