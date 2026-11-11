
/* ==== FUN_10004b9d @ 10004b9d ==== 
 * signature: undefined __stdcall FUN_10004b9d(void)
 * body: 10004b9d-10004cff
 */

void FUN_10004b9d(void)

{
  byte *pbVar1;
  byte *pbVar2;
  FARPROC pFVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte local_10c [256];
  uint local_c;
  HMODULE local_8;
  
  local_c = (*(byte *)(DAT_10023310 + 1) & 2) >> 1;
  if ((*(byte *)(DAT_10023310 + 1) & 1) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = DAT_100238d8;
    if (DAT_10023fac != 0) {
      iVar6 = DAT_10023fac;
    }
  }
  if (local_c == 0) {
    local_8 = LoadLibraryA(s_ODBCINST_DLL_1001f478);
  }
  else {
    local_8 = LoadLibraryExA(s_ODBCCP32_DLL_1001f488,(HANDLE)0x0,0);
  }
  if (local_8 != (HMODULE)0x0) {
    pbVar2 = (byte *)(DAT_10023310 + 2);
    pbVar1 = (byte *)FUN_1000bc0e((char *)pbVar2);
    FUN_10009f15(local_10c,pbVar2,0x100);
    FUN_10009f15(DAT_10024170,pbVar1,0x7800);
    for (pbVar2 = DAT_10024170; *pbVar2 != 0; pbVar2 = pbVar2 + 1) {
      if (*pbVar2 == 0x7f) {
        *pbVar2 = 0;
      }
    }
    pbVar2[1] = 0;
    if (local_c == 0) {
      pFVar3 = GetProcAddress(local_8,s_SQLConfigDataSource_1001f498);
      if ((pFVar3 != (FARPROC)0x0) &&
         (iVar5 = (*pFVar3)(iVar6,1,local_10c,DAT_10024170), iVar5 == 0)) {
        (*pFVar3)(iVar6,2,local_10c,DAT_10024170);
      }
    }
    else {
      pFVar3 = GetProcAddress(local_8,s_SQLConfigDataSource_1001f498);
      if (pFVar3 != (FARPROC)0x0) {
        uVar4 = -(uint)((*(byte *)(DAT_10023310 + 1) & 4) != 0) & 3;
        iVar5 = (*pFVar3)(iVar6,uVar4 + 1,local_10c,DAT_10024170);
        if (iVar5 == 0) {
          (*pFVar3)(iVar6,uVar4 + 2,local_10c,DAT_10024170);
        }
      }
    }
    FreeLibrary(local_8);
  }
  return;
}


