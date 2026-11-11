
/* ==== FUN_15001010 @ 15001010 ==== 
 * signature: undefined4 __stdcall FUN_15001010(undefined4 param_1, int param_2)
 * body: 15001010-1500115c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_15001010(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  int unaff_retaddr;
  
  if (param_2 == 1) {
    DAT_1500504c = GetVersion();
    if (DAT_15005044 == 0) {
      if (((char)DAT_1500504c == '\x03') && ((DAT_1500504c & 0x80000000) != 0)) {
        FUN_15002020(2);
      }
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        pFVar1 = GetProcAddress(hModule,"IsTNT");
        if (pFVar1 != (FARPROC)0x0) {
          FUN_15002020(1);
        }
      }
    }
    FUN_150015a0();
    _DAT_15005058 = DAT_1500504c >> 8 & 0xff;
    _DAT_15005054 = DAT_1500504c & 0xff;
    DAT_15005030 = DAT_15005030 + 1;
    DAT_1500504c = DAT_1500504c >> 0x10;
    _DAT_15005050 = _DAT_15005054 * 0x100 + _DAT_15005058;
    iVar2 = __mtinit();
    if (iVar2 == 0) {
      FUN_150015c0();
      return 0;
    }
    DAT_15006b64 = GetCommandLineA();
    DAT_15005034 = FUN_15001e80();
    if ((DAT_15006b64 != (LPSTR)0x0) && (DAT_15005034 != (LPSTR)0x0)) {
      FUN_150015d0();
      ___initmbctable();
      __setargv();
      FUN_15001810();
      __cinit(unaff_retaddr);
      return 1;
    }
    FUN_150015c0();
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 == 3) {
      __freeptd((_ptiddata)0x0);
    }
    return 1;
  }
  if (0 < DAT_15005030) {
    DAT_15005030 = DAT_15005030 + -1;
    if (DAT_15005084 == 0) {
      FUN_150012c0();
    }
    __ioterm();
    __mtterm();
    FUN_150015c0();
    return 1;
  }
  return 0;
}


