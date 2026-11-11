
/* ==== FUN_12028c50 @ 12028c50 ==== 
 * signature: undefined4 __stdcall FUN_12028c50(undefined4 param_1, int param_2)
 * body: 12028c50-12028d9c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_12028c50(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  int unaff_retaddr;
  
  if (param_2 == 1) {
    DAT_12037e98 = GetVersion();
    if (DAT_12037e64 == 0) {
      if (((char)DAT_12037e98 == '\x03') && ((DAT_12037e98 & 0x80000000) != 0)) {
        FUN_1202b0a0(2);
      }
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        pFVar1 = GetProcAddress(hModule,"IsTNT");
        if (pFVar1 != (FARPROC)0x0) {
          FUN_1202b0a0(1);
        }
      }
    }
    FUN_1202a3e0();
    _DAT_12037ea4 = DAT_12037e98 >> 8 & 0xff;
    _DAT_12037ea0 = DAT_12037e98 & 0xff;
    DAT_12037e50 = DAT_12037e50 + 1;
    DAT_12037e98 = DAT_12037e98 >> 0x10;
    _DAT_12037e9c = _DAT_12037ea0 * 0x100 + _DAT_12037ea4;
    iVar2 = __mtinit();
    if (iVar2 == 0) {
      FUN_1202a400();
      return 0;
    }
    DAT_1203ac00 = GetCommandLineA();
    DAT_12037e54 = FUN_1202aed0();
    if ((DAT_1203ac00 != (LPSTR)0x0) && (DAT_12037e54 != (LPSTR)0x0)) {
      FUN_1202a410();
      ___initmbctable();
      __setargv();
      FUN_1202a650();
      __cinit(unaff_retaddr);
      return 1;
    }
    FUN_1202a400();
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 == 3) {
      __freeptd((_ptiddata)0x0);
    }
    return 1;
  }
  if (0 < DAT_12037e50) {
    DAT_12037e50 = DAT_12037e50 + -1;
    if (DAT_12037ed0 == 0) {
      FUN_1202a2c0();
    }
    __ioterm();
    __mtterm();
    FUN_1202a400();
    return 1;
  }
  return 0;
}


