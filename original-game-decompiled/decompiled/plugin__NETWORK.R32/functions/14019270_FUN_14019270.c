
/* ==== FUN_14019270 @ 14019270 ==== 
 * signature: undefined4 __stdcall FUN_14019270(undefined4 param_1, int param_2)
 * body: 14019270-140193bc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14019270(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  int unaff_retaddr;
  
  if (param_2 == 1) {
    DAT_140272e0 = GetVersion();
    if (DAT_14026e50 == 0) {
      if (((char)DAT_140272e0 == '\x03') && ((DAT_140272e0 & 0x80000000) != 0)) {
        FUN_1401bc60(2);
      }
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        pFVar1 = GetProcAddress(hModule,"IsTNT");
        if (pFVar1 != (FARPROC)0x0) {
          FUN_1401bc60(1);
        }
      }
    }
    FUN_1401afa0();
    _DAT_140272ec = DAT_140272e0 >> 8 & 0xff;
    _DAT_140272e8 = DAT_140272e0 & 0xff;
    DAT_14026e3c = DAT_14026e3c + 1;
    DAT_140272e0 = DAT_140272e0 >> 0x10;
    _DAT_140272e4 = _DAT_140272e8 * 0x100 + _DAT_140272ec;
    iVar2 = __mtinit();
    if (iVar2 == 0) {
      FUN_1401afc0();
      return 0;
    }
    DAT_14029f88 = GetCommandLineA();
    DAT_14026e40 = FUN_1401ba90();
    if ((DAT_14029f88 != (LPSTR)0x0) && (DAT_14026e40 != (LPSTR)0x0)) {
      FUN_1401afd0();
      ___initmbctable();
      __setargv();
      FUN_1401b210();
      __cinit(unaff_retaddr);
      return 1;
    }
    FUN_1401afc0();
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 == 3) {
      __freeptd((_ptiddata)0x0);
    }
    return 1;
  }
  if (0 < DAT_14026e3c) {
    DAT_14026e3c = DAT_14026e3c + -1;
    if (DAT_14027318 == 0) {
      FUN_1401ac90();
    }
    __ioterm();
    __mtterm();
    FUN_1401afc0();
    return 1;
  }
  return 0;
}


