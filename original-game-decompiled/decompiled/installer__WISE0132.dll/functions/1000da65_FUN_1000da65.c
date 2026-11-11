
/* ==== FUN_1000da65 @ 1000da65 ==== 
 * signature: undefined4 __stdcall FUN_1000da65(void)
 * body: 1000da65-1000dacc
 */

undefined4 FUN_1000da65(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  undefined4 uVar3;
  byte local_104 [256];
  
  uVar3 = 0;
  if (DAT_100238b8 == 0) {
    uVar3 = 1;
  }
  else {
    FUN_10009eff(local_104,(byte *)s__TEMP___W32INST_PATH___1001fc34);
    hModule = LoadLibraryExA((LPCSTR)local_104,(HANDLE)0x0,0);
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,s_IsAdmin_1001fc2c);
      if (pFVar1 != (FARPROC)0x0) {
        iVar2 = (*pFVar1)();
        if (iVar2 != 0) {
          uVar3 = 1;
        }
      }
      FreeLibrary(hModule);
    }
  }
  return uVar3;
}


