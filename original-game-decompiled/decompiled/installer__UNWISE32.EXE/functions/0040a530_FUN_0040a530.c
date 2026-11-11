
/* ==== FUN_0040a530 @ 0040a530 ==== 
 * signature: undefined4 __cdecl FUN_0040a530(uint param_1)
 * body: 0040a530-0040a601
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040a530(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_00413e00 <= param_1) {
    _DAT_00413464 = 9;
    DAT_00413468 = 0;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) {
    _DAT_00413464 = 9;
    DAT_00413468 = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_0040b880(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_0040b880(2);
      iVar2 = FUN_0040b880(1);
      if (iVar2 == iVar1) goto LAB_0040a5b7;
    }
    hObject = (HANDLE)FUN_0040b880(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_0040a5b9;
    }
  }
LAB_0040a5b7:
  DVar4 = 0;
LAB_0040a5b9:
  FUN_0040b7e0(param_1);
  *(undefined1 *)((&DAT_00413d00)[(int)param_1 >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_0040b040(DVar4);
  return 0xffffffff;
}


