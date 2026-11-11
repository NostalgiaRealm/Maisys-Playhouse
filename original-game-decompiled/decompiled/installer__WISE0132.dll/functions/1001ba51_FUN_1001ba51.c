
/* ==== FUN_1001ba51 @ 1001ba51 ==== 
 * signature: undefined FUN_1001ba51(void)
 * body: 1001ba51-1001badf
 */

undefined4 FUN_1001ba51(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  iVar1 = FUN_1001bbc0(param_2);
  if (iVar1 != -1) {
    if ((param_2 == 1) || (param_2 == 2)) {
      iVar1 = FUN_1001bbc0(1);
      iVar2 = FUN_1001bbc0(2);
      if (iVar1 == iVar2) goto LAB_1001baa6;
    }
    hObject = (HANDLE)FUN_1001bbc0(param_2);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1001baa8;
    }
  }
LAB_1001baa6:
  DVar4 = 0;
LAB_1001baa8:
  FUN_1001bb20(param_2);
  *(undefined1 *)((&DAT_10025220)[(int)param_2 >> 5] + 4 + (param_2 & 0x1f) * 0x24) = 0;
  if (DVar4 != 0) {
    FUN_100181a0(DVar4);
    return 0xffffffff;
  }
  return 0;
}


