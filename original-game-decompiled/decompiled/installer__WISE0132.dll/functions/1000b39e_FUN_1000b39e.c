
/* ==== FUN_1000b39e @ 1000b39e ==== 
 * signature: undefined __cdecl FUN_1000b39e(LPCSTR param_1)
 * body: 1000b39e-1000b4e3
 */

void __cdecl FUN_1000b39e(LPCSTR param_1)

{
  DWORD DVar1;
  CHAR local_604 [256];
  CHAR local_504 [1024];
  byte local_104 [256];
  
  DAT_1001f030 = (HANDLE)FUN_1001223a(param_1,1,1);
  if (DAT_1001f030 != (HANDLE)0xffffffff) {
    GetModuleFileNameA(DAT_1002403c,(LPSTR)local_104,0x100);
    FUN_10013fb4(local_604,0);
    wsprintfA(local_504,s_____Installation_Started__s_____T_1001f9c8,local_604,DAT_10023f04,
              local_104);
    DVar1 = lstrlenA(local_504);
    FileWrite(DAT_1001f030,local_504,DVar1);
    if (DAT_10023f98 != (byte *)0x0) {
      FUN_10009eff(local_104,DAT_10023f98);
      if (local_104[0] != 0) {
        wsprintfA(local_504,s_Uninstall_MIF___s_Manufacturer____1001f96c,local_104,DAT_10023f88,
                  DAT_10023f8c,DAT_10023f90,DAT_10023f94);
        DVar1 = lstrlenA(local_504);
        FileWrite(DAT_1001f030,local_504,DVar1);
      }
    }
    if (*DAT_10023f30 != '\0') {
      wsprintfA(local_504,s_Per_User_ID___s_1001f958,DAT_10023f30);
      DVar1 = lstrlenA(local_504);
      FileWrite(DAT_1001f030,local_504,DVar1);
    }
  }
  return;
}


