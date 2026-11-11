
/* ==== FUN_10013e86 @ 10013e86 ==== 
 * signature: undefined4 __cdecl FUN_10013e86(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * body: 10013e86-10013fb3
 */

undefined4 __cdecl
FUN_10013e86(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  CHAR local_304 [512];
  CHAR local_104 [256];
  
  iVar2 = 0;
  local_104[0] = '\0';
  if (DAT_10023940 == (HMODULE)0x0) {
    if ((DAT_100238d0 != (LPCSTR)0x0) && (DAT_100241e8 != 0)) {
      DAT_10023940 = LoadLibraryExA(DAT_100238d0,(HANDLE)0x0,0);
      if (DAT_10023940 == (HMODULE)0x0) {
        iVar2 = -10;
      }
      else {
        DAT_100238f4 = GetProcAddress(DAT_10023940,&DAT_1001fe40);
        DAT_10023f14 = GetProcAddress(DAT_10023940,&DAT_1001fe3c);
      }
    }
    if (DAT_10023940 == (HMODULE)0x0) {
      iVar2 = -0xb;
    }
  }
  if (iVar2 == 0) {
    SetTimer(DAT_100238d8,0x4d2,0xfa,(TIMERPROC)0x0);
    iVar2 = (*DAT_100238f4)(DAT_1002392c + 0x1c,param_1,param_2,DAT_100238d8,DAT_1002392c + 0x14,
                            param_3,param_4,param_5,param_6,local_104);
    KillTimer(DAT_100238d8,0x4d2);
  }
  if (iVar2 < 0) {
    if ((param_3 != -1) && (param_3 != -3)) {
      wsprintfA(local_304,*(LPCSTR *)(DAT_100240b8 + 0x3c),-iVar2);
      lstrcatA(local_304,local_104);
      FUN_1000b352(local_304);
    }
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


