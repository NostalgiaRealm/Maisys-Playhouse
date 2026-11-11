
/* ==== FUN_0040dbc0 @ 0040dbc0 ==== 
 * signature: int __cdecl FUN_0040dbc0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 0040dbc0-0040dc4e
 */

int __cdecl FUN_0040dbc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_004137fc != (FARPROC)0x0) {
LAB_0040dc10:
    if (DAT_00413800 != (FARPROC)0x0) {
      iVar1 = (*DAT_00413800)();
    }
    if ((iVar1 != 0) && (DAT_00413804 != (FARPROC)0x0)) {
      iVar1 = (*DAT_00413804)(iVar1);
    }
    iVar1 = (*DAT_004137fc)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_004137fc = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_004137fc != (FARPROC)0x0) {
      DAT_00413800 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_00413804 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_0040dc10;
    }
  }
  return 0;
}


