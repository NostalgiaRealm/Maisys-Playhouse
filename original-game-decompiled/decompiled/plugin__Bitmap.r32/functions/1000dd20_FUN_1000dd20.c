
/* ==== FUN_1000dd20 @ 1000dd20 ==== 
 * signature: int __cdecl FUN_1000dd20(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 1000dd20-1000ddae
 */

int __cdecl FUN_1000dd20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_100172a0 != (FARPROC)0x0) {
LAB_1000dd70:
    if (DAT_100172a4 != (FARPROC)0x0) {
      iVar1 = (*DAT_100172a4)();
    }
    if ((iVar1 != 0) && (DAT_100172a8 != (FARPROC)0x0)) {
      iVar1 = (*DAT_100172a8)(iVar1);
    }
    iVar1 = (*DAT_100172a0)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_100172a0 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_100172a0 != (FARPROC)0x0) {
      DAT_100172a4 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_100172a8 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_1000dd70;
    }
  }
  return 0;
}


