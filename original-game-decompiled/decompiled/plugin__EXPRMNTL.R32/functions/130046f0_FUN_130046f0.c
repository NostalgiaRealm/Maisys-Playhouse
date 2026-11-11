
/* ==== FUN_130046f0 @ 130046f0 ==== 
 * signature: undefined4 __stdcall FUN_130046f0(undefined4 param_1, int param_2)
 * body: 130046f0-1300483c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_130046f0(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  int unaff_retaddr;
  
  if (param_2 == 1) {
    DAT_13008340 = GetVersion();
    if (DAT_13008338 == 0) {
      if (((char)DAT_13008340 == '\x03') && ((DAT_13008340 & 0x80000000) != 0)) {
        FUN_13005700(2);
      }
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        pFVar1 = GetProcAddress(hModule,"IsTNT");
        if (pFVar1 != (FARPROC)0x0) {
          FUN_13005700(1);
        }
      }
    }
    FUN_13004c80();
    _DAT_1300834c = DAT_13008340 >> 8 & 0xff;
    _DAT_13008348 = DAT_13008340 & 0xff;
    DAT_13008324 = DAT_13008324 + 1;
    DAT_13008340 = DAT_13008340 >> 0x10;
    _DAT_13008344 = _DAT_13008348 * 0x100 + _DAT_1300834c;
    iVar2 = __mtinit();
    if (iVar2 == 0) {
      FUN_13004ca0();
      return 0;
    }
    DAT_13009e64 = GetCommandLineA();
    DAT_13008328 = FUN_13005560();
    if ((DAT_13009e64 != (LPSTR)0x0) && (DAT_13008328 != (LPSTR)0x0)) {
      FUN_13004cb0();
      ___initmbctable();
      __setargv();
      FUN_13004ef0();
      __cinit(unaff_retaddr);
      return 1;
    }
    FUN_13004ca0();
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 == 3) {
      __freeptd((_ptiddata)0x0);
    }
    return 1;
  }
  if (0 < DAT_13008324) {
    DAT_13008324 = DAT_13008324 + -1;
    if (DAT_13008378 == 0) {
      FUN_130049a0();
    }
    __ioterm();
    __mtterm();
    FUN_13004ca0();
    return 1;
  }
  return 0;
}


