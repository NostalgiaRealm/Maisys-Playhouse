
/* ==== FUN_110294a0 @ 110294a0 ==== 
 * signature: undefined4 __stdcall FUN_110294a0(undefined4 param_1, int param_2)
 * body: 110294a0-110295ec
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_110294a0(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  int unaff_retaddr;
  
  if (param_2 == 1) {
    DAT_110365c4 = GetVersion();
    if (DAT_11036594 == 0) {
      if (((char)DAT_110365c4 == '\x03') && ((DAT_110365c4 & 0x80000000) != 0)) {
        FUN_1102aeb0(2);
      }
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        pFVar1 = GetProcAddress(hModule,"IsTNT");
        if (pFVar1 != (FARPROC)0x0) {
          FUN_1102aeb0(1);
        }
      }
    }
    FUN_11029fe0();
    _DAT_110365d0 = DAT_110365c4 >> 8 & 0xff;
    _DAT_110365cc = DAT_110365c4 & 0xff;
    DAT_11036580 = DAT_11036580 + 1;
    DAT_110365c4 = DAT_110365c4 >> 0x10;
    _DAT_110365c8 = _DAT_110365cc * 0x100 + _DAT_110365d0;
    iVar2 = __mtinit();
    if (iVar2 == 0) {
      FUN_1102a000();
      return 0;
    }
    DAT_1103ab40 = GetCommandLineA();
    DAT_11036584 = FUN_1102ace0();
    if ((DAT_1103ab40 != (LPSTR)0x0) && (DAT_11036584 != (LPSTR)0x0)) {
      FUN_1102a220();
      ___initmbctable();
      __setargv();
      FUN_1102a460();
      __cinit(unaff_retaddr);
      return 1;
    }
    FUN_1102a000();
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 == 3) {
      __freeptd((_ptiddata)0x0);
    }
    return 1;
  }
  if (0 < DAT_11036580) {
    DAT_11036580 = DAT_11036580 + -1;
    if (DAT_110365fc == 0) {
      FUN_1102a100();
    }
    __ioterm();
    __mtterm();
    FUN_1102a000();
    return 1;
  }
  return 0;
}


