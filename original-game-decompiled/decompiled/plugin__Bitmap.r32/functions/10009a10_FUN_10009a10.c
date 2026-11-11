
/* ==== FUN_10009a10 @ 10009a10 ==== 
 * signature: undefined4 __stdcall FUN_10009a10(undefined4 param_1, int param_2)
 * body: 10009a10-10009b72
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10009a10(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  if (param_2 != 1) {
    if (param_2 != 0) {
      if (param_2 == 3) {
        FUN_1000a8c0((undefined *)0x0);
      }
      return 1;
    }
    if (0 < DAT_10016f30) {
      DAT_10016f30 = DAT_10016f30 + -1;
      if (DAT_1001700c == 0) {
        FUN_1000a680();
      }
      FUN_1000ab70();
      FUN_1000a7f0();
      FUN_1000b420();
      return 1;
    }
    return 0;
  }
  DAT_10016fd4 = GetVersion();
  if (DAT_10016f40 == 0) {
    if (((char)DAT_10016fd4 == '\x03') && ((DAT_10016fd4 & 0x80000000) != 0)) {
      FUN_1000b460(2);
    }
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"IsTNT");
      if (pFVar1 != (FARPROC)0x0) {
        FUN_1000b460(1);
      }
    }
  }
  iVar2 = FUN_1000b3e0();
  if (iVar2 == 0) {
    return 0;
  }
  _DAT_10016fe0 = DAT_10016fd4 >> 8 & 0xff;
  _DAT_10016fdc = DAT_10016fd4 & 0xff;
  _DAT_10016fd8 = _DAT_10016fdc * 0x100 + _DAT_10016fe0;
  DAT_10016fd4 = DAT_10016fd4 >> 0x10;
  iVar2 = FUN_1000a790();
  if (iVar2 == 0) {
    FUN_1000b420();
    return 0;
  }
  DAT_10018514 = GetCommandLineA();
  DAT_10016f34 = FUN_1000b280();
  if ((DAT_10018514 != (LPSTR)0x0) && (DAT_10016f34 != (LPSTR)0x0)) {
    FUN_1000a960();
    FUN_1000b270();
    FUN_1000acc0();
    FUN_1000abd0();
    FUN_1000a630();
    DAT_10016f30 = DAT_10016f30 + 1;
    return 1;
  }
  FUN_1000a7f0();
  FUN_1000b420();
  return 0;
}


