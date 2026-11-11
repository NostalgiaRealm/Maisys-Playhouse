
/* ==== entry @ 5f0046c0 ==== 
 * signature: undefined4 __stdcall entry(undefined4 param_1, int param_2)
 * body: 5f0046c0-5f004797
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 entry(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  DWORD DVar2;
  int iVar3;
  
  if (param_2 == 1) {
    hModule = GetModuleHandleA(s_KERNEL32_DLL_5f00c1e4);
    pFVar1 = GetProcAddress(hModule,s_DisableThreadLibraryCalls_5f00c1c8);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
    DAT_5f00514c = param_1;
    DAT_5f005148 = param_1;
    DVar2 = GetVersion();
    DAT_5f005150 = CONCAT11((char)DVar2,(char)(DVar2 >> 8));
    if (((DVar2 & 0x80000000) == 0) || (DAT_5f005152 = 0x10, 0x35e < DAT_5f005150)) {
      DAT_5f005152 = 0x20;
    }
    _DAT_5f00a224 = GetSystemMetrics(7);
    _DAT_5f00a224 = _DAT_5f00a224 + -1;
    iVar3 = GetSystemMetrics(8);
    DAT_5f00a228 = iVar3 + -1;
    DAT_5f00a22c = GetSystemMetrics(4);
    _DAT_5f00a230 = GetSystemMetrics(0x1e);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005110);
  }
  return 1;
}


