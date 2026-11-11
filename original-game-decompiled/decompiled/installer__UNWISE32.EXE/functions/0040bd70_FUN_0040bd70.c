
/* ==== FUN_0040bd70 @ 0040bd70 ==== 
 * signature: DWORD __cdecl FUN_0040bd70(uint param_1, LONG param_2, DWORD param_3)
 * body: 0040bd70-0040be2c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD __cdecl FUN_0040bd70(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < DAT_00413e00) {
    iVar3 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + iVar3) & 1) != 0) {
      hFile = (HANDLE)FUN_0040b880(param_1);
      if (hFile == (HANDLE)0xffffffff) {
        _DAT_00413464 = 9;
        return 0xffffffff;
      }
      DVar1 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
      if (DVar1 == 0xffffffff) {
        uVar2 = GetLastError();
      }
      else {
        uVar2 = 0;
      }
      if (uVar2 != 0) {
        FUN_0040b040(uVar2);
        return 0xffffffff;
      }
      *(byte *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + iVar3) =
           *(byte *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + iVar3) & 0xfd;
      return DVar1;
    }
  }
  _DAT_00413464 = 9;
  DAT_00413468 = 0;
  return 0xffffffff;
}


