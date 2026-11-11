
/* ==== FUN_1000fe31 @ 1000fe31 ==== 
 * signature: undefined FUN_1000fe31(void)
 * body: 1000fe31-1000febf
 */

undefined4 FUN_1000fe31(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  iVar1 = FUN_1000ffa0(param_2);
  if (iVar1 != -1) {
    if ((param_2 == 1) || (param_2 == 2)) {
      iVar1 = FUN_1000ffa0(1);
      iVar2 = FUN_1000ffa0(2);
      if (iVar1 == iVar2) goto LAB_1000fe86;
    }
    hObject = (HANDLE)FUN_1000ffa0(param_2);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000fe88;
    }
  }
LAB_1000fe86:
  DVar4 = 0;
LAB_1000fe88:
  FUN_1000ff00(param_2);
  *(undefined1 *)((&DAT_10018400)[(int)param_2 >> 5] + 4 + (param_2 & 0x1f) * 0x24) = 0;
  if (DVar4 != 0) {
    FUN_1000f4c0(DVar4);
    return 0xffffffff;
  }
  return 0;
}


