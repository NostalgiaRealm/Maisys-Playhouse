// The recompiled Maisy.exe + plug-ins instance: memory views, host thunks, calls into
// original code. See docs/recompiler.md. Adapted from the A2 Racer 4 host (machine.js);
// the COM helpers of that project are not needed here. Addresses are those of the merged
// image: the player at its original base, plug-ins relocated (meta.modules).

const MATH = {
  sin: Math.sin, cos: Math.cos, tan: Math.tan, atan2: Math.atan2, log2: Math.log2,
  pow2m1: (x) => Math.expm1(x * Math.LN2), pow2: (x) => Math.pow(2, x),
  fmod: (a, b) => a % b, frem: (a, b) => a - b * nearestEven(a / b),
  acos: Math.acos, asin: Math.asin, pow: Math.pow, atan: Math.atan, exp: Math.exp,
  log: Math.log, log10: Math.log10, sinh: Math.sinh, cosh: Math.cosh, tanh: Math.tanh,
};

function nearestEven(x) {
  const r = Math.round(x);
  return Math.abs(x % 1) === 0.5 && r % 2 !== 0 ? r - 1 : r;
}

export class GameExit extends Error {
  constructor(code) {
    super('game exit ' + code);
    this.code = code;
  }
}

export class Machine {
  constructor(meta) {
    this.meta = meta;
    this.layout = meta.layout;
    this.thunks = new Array(meta.layout.N_THUNKS).fill(null);
    this.thunkNames = new Array(meta.layout.N_THUNKS).fill(null);
    this.nextThunk = meta.firstFreeThunk;
    this.esp = meta.layout.STACK_TOP;
    this.lowBump = 0x00020000;   // low memory block for host-owned structures
    this.onUnimplemented = (name) => {
      throw new Error('Host function not implemented: ' + name);
    };
    this.apiCount = new Map();
    this.bound = new Set();
    this.traceApi = null;
  }

  async instantiate(wasm, codeMap) {
    this.codeMap = codeMap;
    const env = {
      ...MATH,
      trace: (addr, esp, eax, ecx, edx) => {
        if (this.onTrace) this.onTrace(addr >>> 0, esp >>> 0, eax >>> 0, ecx >>> 0, edx >>> 0);
      },
      host: (id, esp, eax, ecx, edx) => {
        this.esp = esp;
        if (this.traceApi) this.traceApi(id, esp);
        return this.thunks[id](esp, ecx, edx, eax) | 0;
      },
    };
    const res = wasm instanceof WebAssembly.Module
      ? { instance: await WebAssembly.instantiate(wasm, { env }) }
      : await WebAssembly.instantiate(wasm, { env });
    this.instance = res.instance;
    const ex = res.instance.exports;
    this.exports = ex;
    this.mem = ex.memory;
    this.__call = ex.__call;
    this.gEsp = ex.g_esp;
    this.gEdx = ex.g_edx;
    this.gSt0 = ex.g_st0;
    this.gCw = ex.g_cw;
    const b = ex.memory.buffer;
    this.u8 = new Uint8Array(b);
    this.i8 = new Int8Array(b);
    this.u16 = new Uint16Array(b);
    this.i16 = new Int16Array(b);
    this.u32 = new Uint32Array(b);
    this.i32 = new Int32Array(b);
    this.f32 = new Float32Array(b);
    this.f64 = new Float64Array(b);
    this.view = new DataView(b);
    const { CODE_MAP, MAP_LO } = this.layout;
    const cm = new Uint32Array(this.codeMap.buffer, this.codeMap.byteOffset, this.codeMap.byteLength >> 2);
    for (let k = 0; k < cm.length; k += 2) this.u16[(CODE_MAP + (cm[k] - MAP_LO) * 2) >> 1] = cm[k + 1];
    this.codeMap = null;
    // Unaligned-safe IAT and pop table defaults.
    for (const [id, name] of Object.entries(this.meta.thunks)) {
      const k = Number(id);
      this.thunkNames[k] = name;
      this.thunks[k] = () => this.onUnimplemented(name);
    }
    for (let k = 0; k < this.thunks.length; k++) {
      if (!this.thunks[k]) this.thunks[k] = () => this.onUnimplemented('thunk#' + k);
    }
    // The thread information block: no exception frame yet, stack limits.
    const { TIB_BASE, STACK_TOP, STACK_LOW } = this.layout;
    this.u32[TIB_BASE >> 2] = 0xFFFFFFFF;
    this.u32[(TIB_BASE + 4) >> 2] = STACK_TOP;
    this.u32[(TIB_BASE + 8) >> 2] = STACK_LOW;
    this.u32[(TIB_BASE + 0x18) >> 2] = TIB_BASE;
    return this;
  }

  // --- host functions ---------------------------------------------------------
  /** Binds an imported function by "DLL!Name". fn(esp) gets the raw stack pointer. */
  bindRaw(name, popBytes, fn) {
    const id = this.thunkId(name);
    this.thunks[id] = fn;
    this.u32[(this.layout.POP_TABLE + id * 4) >> 2] = popBytes;
  }

  thunkId(name) {
    if (!this._ids) {
      this._ids = new Map();
      for (const [id, n] of Object.entries(this.meta.thunks)) this._ids.set(n, Number(id));
    }
    const id = this._ids.get(name);
    if (id === undefined) throw new Error('unknown thunk ' + name);
    return id;
  }

  /** Binds an stdcall import. fn receives its integer arguments. */
  api(name, nargs, fn) {
    if (!this._ids) this.thunkId(name);
    if (!this._ids.has(name)) return; // no module imports it
    this.bound.add(name);
    const u32 = this.u32;
    const wrapped = (esp) => {
      switch (nargs) {
        case 0: return fn();
        case 1: return fn(u32[(esp + 4) >> 2]);
        case 2: return fn(u32[(esp + 4) >> 2], u32[(esp + 8) >> 2]);
        case 3: return fn(u32[(esp + 4) >> 2], u32[(esp + 8) >> 2], u32[(esp + 12) >> 2]);
        case 4: return fn(u32[(esp + 4) >> 2], u32[(esp + 8) >> 2], u32[(esp + 12) >> 2], u32[(esp + 16) >> 2]);
        default: {
          const a = new Array(nargs);
          for (let k = 0; k < nargs; k++) a[k] = u32[(esp + 4 + k * 4) >> 2];
          return fn(...a);
        }
      }
    };
    this.bindRaw(name, nargs * 4, wrapped);
  }

  /** Allocates a thunk for a JS callable that game code calls by address. */
  makeThunk(name, popBytes, fn) {
    const id = this.nextThunk++;
    if (id >= this.thunks.length) throw new Error('out of host thunks');
    this.thunks[id] = fn;
    this.thunkNames[id] = name;
    this.u32[(this.layout.POP_TABLE + id * 4) >> 2] = popBytes;
    return this.layout.THUNK_BASE + id;
  }

  /** Allocates low memory for host-owned structures. Never freed. */
  lowAlloc(size) {
    const p = (this.lowBump + 15) & ~15;
    this.lowBump = p + size;
    if (this.lowBump > 0x000F0000) throw new Error('low area full');
    return p;
  }

  /** Is addr an entry in the code map (callable)? */
  isCode(addr) {
    const { CODE_MAP, MAP_LO, IMAGE_END } = this.layout;
    return addr >= MAP_LO && addr < IMAGE_END && this.u16[(CODE_MAP + (addr - MAP_LO) * 2) >> 1] !== 0;
  }

  // --- calling game code ------------------------------------------------------
  /** cdecl or stdcall call from the host. Arguments are integers. Returns eax. */
  call(addr, args = [], ecx = 0, edx = 0) {
    const saved = this.esp;
    let esp = (saved - 256) & ~3;
    esp -= args.length * 4;
    for (let k = 0; k < args.length; k++) this.u32[(esp + k * 4) >> 2] = args[k] >>> 0;
    esp -= 4;
    this.u32[esp >> 2] = 0;
    this.esp = esp;
    const r = this.__call(addr, esp, 0, ecx, edx);
    this.esp = saved;
    return r;
  }

  // --- strings ----------------------------------------------------------------
  cstr(p) {
    const u8 = this.u8;
    let s = '';
    for (let c = u8[p]; c; c = u8[++p]) s += String.fromCharCode(c);
    return s;
  }

  writeCStr(p, s, max = 0x7FFFFFFF) {
    const u8 = this.u8;
    const n = Math.min(s.length, max - 1);
    for (let k = 0; k < n; k++) u8[p + k] = s.charCodeAt(k) & 0xFF;
    u8[p + n] = 0;
    return n;
  }
}
