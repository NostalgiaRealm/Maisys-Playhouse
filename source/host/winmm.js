// WINMM for the recompiled mTropolis player: waveOut (the title's only sound path: PCM pushed
// in buffers), mmio file access, the multimedia clock, and honest "not present" answers for MCI
// and MIDI, which the authored content never uses (original-game-decompiled/authored-content).

export function installWinmm(m, host) {
  const { u8, u16, u32, i32 } = m;
  const W = 'WINMM.DLL!';
  const log = (s) => host.log(s);

  m.api(W + 'timeGetTime', 0, () => { host.pollAsync(); return host.nowMs() >>> 0; });
  m.api(W + 'timeBeginPeriod', 1, () => 0);
  m.api(W + 'timeEndPeriod', 1, () => 0);
  m.api(W + 'timeGetDevCaps', 2, (p, n) => { u32[p >> 2] = 1; u32[(p + 4) >> 2] = 1000000; return 0; });
  // Multimedia timers: callbacks run at the title's next wait or clock query, never re-entrantly.
  const timers = new Map();
  let nextTimer = 1;
  m.api(W + 'timeSetEvent', 5, (delay, res, proc, user, flags) => {
    const id = nextTimer++;
    timers.set(id, { due: host.nowMs() + delay, delay: Math.max(1, delay), proc, user, periodic: (flags & 1) !== 0, callbackFn: !(flags & 0x30) });
    if (host.traceAudio) log(`timeSetEvent ${delay} ms periodic=${flags & 1}`);
    return id;
  });
  m.api(W + 'timeKillEvent', 1, (id) => (timers.delete(id) ? 0 : 97));
  let inAsync = false;

  // --- waveOut -------------------------------------------------------------------
  const WOM_OPEN = 0x3BB, WOM_CLOSE = 0x3BC, WOM_DONE = 0x3BD;
  const devices = new Map();
  let nextDev = 0xA000;
  const notify = (d, msg, p1) => {
    const kind = d.flags & 0x70000;
    if (kind === 0x30000 && d.callback) m.call(d.callback, [d.h, msg, d.instance, p1, 0]);
    else if (kind === 0x10000 && d.callback) host.postMessage(d.callback, msg, d.h, p1);
  };
  m.api(W + 'waveOutGetDevCapsA', 3, (id, p, n) => {
    const tmp = new Uint8Array(52);
    const v = new DataView(tmp.buffer);
    v.setUint16(0, 1, true); v.setUint16(2, 1, true); v.setUint32(4, 0x0400, true);
    const name = 'Web Audio';
    for (let k = 0; k < name.length; k++) tmp[8 + k] = name.charCodeAt(k);
    v.setUint32(40, 0xFFF, true);        // all standard PCM formats
    v.setUint16(44, 2, true);
    v.setUint32(48, 0x0C, true);         // WAVECAPS_VOLUME | WAVECAPS_LRVOLUME
    u8.set(tmp.subarray(0, Math.min(n, 52)), p);
    return 0;
  });
  m.api(W + 'waveOutOpen', 6, (pH, id, pFmt, callback, instance, flags) => {
    const fmt = { tag: u16[pFmt >> 1], channels: u16[(pFmt + 2) >> 1], rate: u32[(pFmt + 4) >> 2], align: u16[(pFmt + 12) >> 1], bits: u16[(pFmt + 14) >> 1] };
    if (fmt.tag !== 1) return 32;                      // WAVERR_BADFORMAT: PCM only
    if (flags & 1) return 0;                           // WAVE_FORMAT_QUERY
    const h = nextDev;
    nextDev += 4;
    const d = { h, fmt, callback, instance, flags, queue: [], queueEnd: 0, paused: false };
    devices.set(h, d);
    host.audio.open(h, fmt);
    if (pH) u32[pH >> 2] = h;
    log(`waveOutOpen ${fmt.rate} Hz ${fmt.bits}-bit ${fmt.channels} ch`);
    notify(d, WOM_OPEN, 0);
    return 0;
  });
  m.api(W + 'waveOutPrepareHeader', 3, (h, p) => { u32[(p + 16) >> 2] |= 2; return 0; });
  m.api(W + 'waveOutUnprepareHeader', 3, (h, p) => {
    if (u32[(p + 16) >> 2] & 0x10) return 33;          // WAVERR_STILLPLAYING
    u32[(p + 16) >> 2] &= ~2;
    return 0;
  });
  m.api(W + 'waveOutWrite', 3, (h, p) => {
    const d = devices.get(h);
    if (!d) return 5;
    const data = u32[p >> 2];
    const len = u32[(p + 4) >> 2];
    u32[(p + 16) >> 2] = (u32[(p + 16) >> 2] | 0x10) & ~1;      // WHDR_INQUEUE, not DONE
    const now = host.nowMs();
    const ms = (len / d.fmt.align) * 1000 / d.fmt.rate;
    const start = Math.max(now, d.queueEnd);
    d.queueEnd = start + ms;
    d.queue.push({ p, end: d.queueEnd });
    // the samples are copied out now: the title may reuse the buffer once it is returned
    host.audio.submit(h, u8.slice(data, data + len), start - now);
    if (host.traceAudio) log(`waveOutWrite ${h.toString(16)} ${len} bytes (${ms.toFixed(1)} ms), queued ${d.queue.length}, ahead ${(d.queueEnd - now).toFixed(0)} ms`);
    return 0;
  });
  const finish = (d, upTo) => {
    while (d.queue.length && d.queue[0].end <= upTo) {
      const b = d.queue.shift();
      u32[(b.p + 16) >> 2] = (u32[(b.p + 16) >> 2] & ~0x10) | 1;
      notify(d, WOM_DONE, b.p);
    }
  };
  m.api(W + 'waveOutReset', 1, (h) => {
    const d = devices.get(h);
    if (!d) return 5;
    if (host.traceAudio) log('waveOutReset ' + h.toString(16) + ' queued ' + d.queue.length);
    host.audio.reset(h);
    d.queueEnd = 0;
    finish(d, Infinity);
    return 0;
  });
  m.api(W + 'waveOutClose', 1, (h) => {
    const d = devices.get(h);
    if (!d) return 5;
    if (d.queue.length) return 33;
    if (host.traceAudio) log('waveOutClose ' + h.toString(16));
    host.audio.close(h);
    devices.delete(h);
    notify(d, WOM_CLOSE, 0);
    return 0;
  });
  let volume = 0xFFFFFFFF;
  m.api(W + 'waveOutGetVolume', 2, (h, p) => { u32[p >> 2] = volume; return 0; });
  m.api(W + 'waveOutSetVolume', 2, (h, v) => { volume = v >>> 0; host.audio.setVolume((v & 0xFFFF) / 0xFFFF, ((v >>> 16) & 0xFFFF) / 0xFFFF); return 0; });

  /** Delivers finished wave buffers and due timers. Called from the title's waits and clock reads. */
  host.pollAsync = () => {
    if (inAsync) return;
    if (!devices.size && !timers.size) return;
    inAsync = true;
    try {
      const now = host.nowMs();
      for (const d of devices.values()) if (d.queue.length && d.queue[0].end <= now) finish(d, now);
      for (const [id, t] of timers) {
        if (t.due > now) continue;
        if (t.periodic) t.due = Math.max(t.due + t.delay, now - t.delay); else timers.delete(id);
        if (t.callbackFn) m.call(t.proc, [id, 0, t.user, 0, 0]);
      }
    } finally {
      inAsync = false;
    }
  };
  /** Earliest time something asynchronous is due, for blocking waits. */
  host.nextAsyncDue = () => {
    let due = Infinity;
    for (const d of devices.values()) if (d.queue.length) due = Math.min(due, d.queue[0].end);
    for (const t of timers.values()) due = Math.min(due, t.due);
    return due;
  };

  // --- mmio ----------------------------------------------------------------------
  const files = new Map();
  let nextMmio = 0xB000;
  m.api(W + 'mmioOpenA', 3, (pName, pInfo, flags) => {
    const { vfs } = host;
    if (!pName) {
      // memory file: MMIOINFO.fccIOProc 'MEM ' with pchBuffer/cchBuffer
      if (pInfo && u32[(pInfo + 4) >> 2] === 0x204D454D) {
        const h = nextMmio; nextMmio += 4;
        files.set(h, { mem: u32[(pInfo + 24) >> 2], size: u32[(pInfo + 20) >> 2], pos: 0 });
        return h;
      }
      log('mmioOpen without a file name: unsupported I/O procedure');
      if (pInfo) u32[(pInfo + 12) >> 2] = 257;
      return 0;
    }
    const path = host.fullPath(m.cstr(pName));
    if (flags & 0x100) { m.writeCStr(pName, path, 128); return 1; }          // MMIO_PARSE
    let st = vfs.stat(path);
    if (flags & 0x4000) return st && !st.dir ? 1 : 0;                        // MMIO_EXIST
    if (flags & 0x200) return vfs.remove(path) ? 1 : 0;                      // MMIO_DELETE
    if (flags & 0x1000) { vfs.create(path); st = vfs.stat(path); }           // MMIO_CREATE
    if (!st || st.dir) {
      if (host.traceFiles) log('mmioOpen ' + path + ' -> not found');
      if (pInfo) u32[(pInfo + 12) >> 2] = 257;                               // MMIOERR_FILENOTFOUND
      return 0;
    }
    if ((flags & 3) && st.readOnly) { if (pInfo) u32[(pInfo + 12) >> 2] = 260; return 0; }
    const h = nextMmio;
    nextMmio += 4;
    files.set(h, { st, pos: 0, write: (flags & 3) !== 0 });
    if (host.traceFiles) log('mmioOpen ' + path + ' -> ' + h.toString(16));
    return h;
  });
  m.api(W + 'mmioClose', 2, (h) => {
    const f = files.get(h);
    if (!f) return 5;
    if (f.dirty) host.vfs.flush(f.st);
    files.delete(h);
    return 0;
  });
  m.api(W + 'mmioRead', 3, (h, buf, n) => {
    const f = files.get(h);
    if (!f) return -1;
    n |= 0;
    const size = f.st ? host.vfs.size(f.st) : f.size;
    const got = Math.max(0, Math.min(n, size - f.pos));
    if (got) { if (f.st) host.vfs.read(f.st, f.pos, got, u8, buf); else u8.copyWithin(buf, f.mem + f.pos, f.mem + f.pos + got); }
    f.pos += got;
    return got;
  });
  m.api(W + 'mmioWrite', 3, (h, buf, n) => {
    const f = files.get(h);
    if (!f || !f.st || !f.write) return -1;
    host.vfs.write(f.st, f.pos, u8.subarray(buf, buf + n));
    f.pos += n;
    f.dirty = true;
    return n;
  });
  m.api(W + 'mmioSeek', 3, (h, off, origin) => {
    const f = files.get(h);
    if (!f) return -1;
    const size = f.st ? host.vfs.size(f.st) : f.size;
    const np = (origin === 0 ? 0 : origin === 1 ? f.pos : size) + (off | 0);
    if (np < 0) return -1;
    f.pos = np;
    return np;
  });
  m.api(W + 'mmioGetInfo', 3, (h, p) => {
    const f = files.get(h);
    if (!f) return 5;
    u8.fill(0, p, p + 72);
    u32[(p + 4) >> 2] = f.st ? 0x20534F44 : 0x204D454D;       // 'DOS ' / 'MEM '
    // Unbuffered file: the current position is lBufOffset + (pchNext - pchBuffer), which is how
    // the player computes its 'tell' (Maisy.exe 0x00411AE0).
    i32[(p + 40) >> 2] = f.pos;
    i32[(p + 44) >> 2] = f.pos;
    u32[(p + 68) >> 2] = h;
    return 0;
  });

  // --- MCI and MIDI: no such devices ---------------------------------------------------
  m.api(W + 'mciSendCommandA', 4, (dev, msg, flags) => {
    log(`mciSendCommandA msg=${msg.toString(16)}: no MCI devices in this build`);
    return 306;                                             // MCIERR_DEVICE_NOT_INSTALLED
  });
  m.api(W + 'mciGetDeviceIDA', 1, () => 0);
  m.api(W + 'midiOutOpen', 5, () => { log('midiOutOpen: no MIDI device'); return 6; });   // MMSYSERR_NODRIVER
  m.api(W + 'midiOutClose', 1, () => 5);
  m.api(W + 'midiOutShortMsg', 2, () => 5);
  m.api(W + 'DefDriverProc', 5, () => 0);
}
