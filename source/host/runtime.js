// Puts the recompiled player together with its host services. The platform object supplies
// what differs between the browser worker and the Node test runner: clock, blocking waits,
// file readers, screen buffers, input queue, audio sink, text rasteriser, persistence.
import { Machine, GameExit } from './machine.js';
import { installKernel32, GAME_DIR } from './kernel32.js';
import { installGdi32 } from './gdi32.js';
import { installUser32 } from './user32.js';
import { installWinmm } from './winmm.js';
import { installEh } from './eh.js';
import { Vfs } from './vfs.js';

export { GameExit, GAME_DIR };

/**
 * platform: {
 *   log(s), nowMs(), wallClockMs(), sleep(ms), waitForInput(ms), idle(), wake(),
 *   screen: {width, height, pixels: Uint8Array, palette: Uint32Array, markDirty(), present(), paletteChanged()},
 *   input: {poll() -> events[] | null}, audio: {open, submit, reset, close, setVolume},
 *   text: {metrics(font), width(font, str), raster(font, str)},
 *   settings: Map, saveSettings(), persistFile(path, data|null),
 *   messageBox(text, caption, type) -> id, beep(), showHelp(file), canPrint(), printPage(surface, name, n),
 *   cursorChanged(cursor|null, visible)
 * }
 */
export async function createGame({ wasm, meta, codeMap, platform, files, options = {} }) {
  const m = new Machine(meta);
  await m.instantiate(wasm, codeMap);
  const vfs = new Vfs();
  for (const f of files) {
    if (f.data) vfs.add(f.path, f.data, { readOnly: !!f.readOnly, persist: !!f.persist });
    else vfs.mount(f.path, f.size, f.reader);
  }
  vfs.mkdir('C:\\WINDOWS');
  vfs.mkdir('C:\\WINDOWS\\SYSTEM');
  vfs.mkdir('C:\\WINDOWS\\TEMP');
  vfs.onPersist = (path, data) => platform.persistFile(path, data);

  const host = {
    m, vfs, options,
    log: platform.log,
    nowMs: platform.nowMs,
    wallClockMs: platform.wallClockMs,
    sleep: (ms) => { platform.sleep(ms); host.pollAsync(); },
    waitForInput: (ms) => {
      // never sleep past the next finished audio buffer or timer
      const due = host.nextAsyncDue() - platform.nowMs();
      platform.waitForInput(Math.max(0, Math.min(ms, due)));
      host.pollAsync();
    },
    idle: () => { platform.idle(); host.pollAsync(); },
    wake: () => platform.wake(),
    screen: platform.screen,
    input: platform.input,
    audio: platform.audio,
    text: platform.text,
    settingsStore: platform.settings,
    saveSettings: () => platform.saveSettings(),
    messageBox: (text, caption, type) => platform.messageBox(text, caption, type),
    beep: () => platform.beep(),
    showHelp: (f) => platform.showHelp(f),
    canPrint: () => platform.canPrint(),
    printPage: (s, name, n) => platform.printPage(s, name, n),
    cursorChanged: (c, visible) => platform.cursorChanged(c, visible),
    showDialog: (spec) => platform.showDialog(spec),
    hideDialog: (hwnd) => platform.hideDialog(hwnd),
    commandLine: options.commandLine,
    pollAsync: () => {},
    nextAsyncDue: () => Infinity,
    postMessage: (hwnd, msg, wp, lp) => { host.user.queue.push({ hwnd, msg, wp, lp, posted: true }); },
    raiseException: () => { throw new Error('RaiseException before the exception support was installed'); },
    rtlUnwind: () => 0,
  };
  m.onUnimplemented = (name) => { throw new Error('Host function not implemented: ' + name); };
  installKernel32(m, host);
  installGdi32(m, host);
  installUser32(m, host);
  installWinmm(m, host);
  installEh(m, host);

  const unbound = Object.values(meta.thunks).filter((n) => !m.bound.has(n));
  host.unbound = unbound;

  return {
    m, host, vfs,
    /** Runs the original entry point (CRT start-up -> WinMain). Returns the exit code when the title quits. */
    run() {
      try {
        m.call(meta.entry, []);
        return 0;
      } catch (e) {
        if (e instanceof GameExit) return e.code;
        throw e;
      }
    },
  };
}
