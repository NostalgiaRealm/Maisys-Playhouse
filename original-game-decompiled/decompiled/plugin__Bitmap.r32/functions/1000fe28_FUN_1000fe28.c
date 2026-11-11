
/* ==== FUN_1000fe28 @ 1000fe28 ==== 
 * signature: undefined FUN_1000fe28(void)
 * body: 1000fe28-1000fe2f
 */

undefined4 FUN_1000fe28(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  iVar1 = FUN_1000ffa0(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1000ffa0(1);
      iVar2 = FUN_1000ffa0(2);
      if (iVar1 == iVar2) goto LAB_1000fe86;
    }
    hObject = (HANDLE)FUN_1000ffa0(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000fe88;
    }
  }
LAB_1000fe86:
  DVar4 = 0;
LAB_1000fe88:
  FUN_1000ff00(param_1);
  *(undefined1 *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 != 0) {
    FUN_1000f4c0(DVar4);
    return 0xffffffff;
  }
  return 0;
}


