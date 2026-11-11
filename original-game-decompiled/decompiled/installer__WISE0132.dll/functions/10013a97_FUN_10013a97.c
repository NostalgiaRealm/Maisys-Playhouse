
/* ==== FUN_10013a97 @ 10013a97 ==== 
 * signature: uint __cdecl FUN_10013a97(undefined4 param_1, FARPROC param_2)
 * body: 10013a97-10013bb9
 */

uint __cdecl FUN_10013a97(undefined4 param_1,FARPROC param_2)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  int iVar3;
  uint uVar4;
  FARPROC pFVar5;
  undefined4 local_10;
  undefined4 local_c;
  FARPROC local_8;
  
  if (DAT_100241e8 != 0) {
    local_8 = (FARPROC)0x0;
    pHVar1 = LoadLibraryExA(s_MPR_DLL_1001fe34,(HANDLE)0x0,0);
    if (pHVar1 != (HMODULE)0x0) {
      pFVar2 = GetProcAddress(pHVar1,s_WNetGetUserA_1001fe24);
      if (pFVar2 != (FARPROC)0x0) {
        local_10 = 0x100;
        iVar3 = (*pFVar2)(param_2,param_1,&local_10);
        if (iVar3 == 0) {
          local_8 = (FARPROC)0x1;
        }
      }
      FreeLibrary(pHVar1);
    }
    if (local_8 != (FARPROC)0x0) {
      return (uint)local_8;
    }
  }
  local_c = 0x100;
  pHVar1 = LoadLibraryA(s_USER_EXE_1001fe18);
  local_8 = GetProcAddress(pHVar1,s_WNETGETUSER_1001fe0c);
  param_2 = GetProcAddress(pHVar1,s_WNETGETCAPS_1001fe00);
  FreeLibrary(pHVar1);
  pFVar2 = param_2;
  if (local_8 == (FARPROC)0x0) {
LAB_10013b9d:
    uVar4 = 0;
  }
  else {
    if (param_2 == (FARPROC)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (*param_2)(2);
    }
    if ((uVar4 & 0x8000) != 0) {
      pHVar1 = (HMODULE)0x0;
      if (pFVar2 != (FARPROC)0x0) {
        uVar4 = (*pFVar2)(0xffff);
        pHVar1 = (HMODULE)(uVar4 & 0xffff);
      }
      pFVar2 = GetProcAddress(pHVar1,s_MNETNETWORKENUM_1001fdf0);
      pFVar5 = GetProcAddress(pHVar1,s_MNETSETNEXTTARGET_1001fddc);
      if ((pFVar2 != (FARPROC)0x0) && (pFVar5 != (FARPROC)0x0)) {
        param_2 = (FARPROC)0x0;
        while (iVar3 = (*pFVar2)(&param_2), (short)iVar3 == 0) {
          (*pFVar5)(param_2);
          iVar3 = (*local_8)(param_1,&local_c);
          if ((short)iVar3 == 0) {
            return 1;
          }
        }
        goto LAB_10013b9d;
      }
    }
    iVar3 = (*local_8)(param_1,&local_c);
    uVar4 = (uint)((short)iVar3 == 0);
  }
  return uVar4;
}


