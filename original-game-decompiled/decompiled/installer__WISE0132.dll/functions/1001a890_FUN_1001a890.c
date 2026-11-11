
/* ==== FUN_1001a890 @ 1001a890 ==== 
 * signature: int __cdecl FUN_1001a890(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 1001a890-1001a91e
 */

int __cdecl FUN_1001a890(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_100237c8 != (FARPROC)0x0) {
LAB_1001a8e0:
    if (DAT_100237cc != (FARPROC)0x0) {
      iVar1 = (*DAT_100237cc)();
    }
    if ((iVar1 != 0) && (DAT_100237d0 != (FARPROC)0x0)) {
      iVar1 = (*DAT_100237d0)(iVar1);
    }
    iVar1 = (*DAT_100237c8)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_100237c8 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_100237c8 != (FARPROC)0x0) {
      DAT_100237cc = GetProcAddress(hModule,"GetActiveWindow");
      DAT_100237d0 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_1001a8e0;
    }
  }
  return 0;
}


