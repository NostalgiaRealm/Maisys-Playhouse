
/* ==== FUN_1001ba50 @ 1001ba50 ==== 
 * signature: undefined4 __stdcall FUN_1001ba50(HANDLE param_1)
 * body: 1001ba50-1001ba50
 */

undefined4 FUN_1001ba50(HANDLE param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  iVar1 = FUN_1001bbc0((uint)param_1);
  if (iVar1 != -1) {
    if ((param_1 == (HANDLE)0x1) || (param_1 == (HANDLE)0x2)) {
      iVar1 = FUN_1001bbc0(1);
      iVar2 = FUN_1001bbc0(2);
      if (iVar1 == iVar2) goto LAB_1001baa6;
    }
    hObject = (HANDLE)FUN_1001bbc0((uint)param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1001baa8;
    }
  }
LAB_1001baa6:
  DVar4 = 0;
LAB_1001baa8:
  FUN_1001bb20((uint)param_1);
  *(undefined1 *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + ((uint)param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 != 0) {
    FUN_100181a0(DVar4);
    return 0xffffffff;
  }
  return 0;
}


