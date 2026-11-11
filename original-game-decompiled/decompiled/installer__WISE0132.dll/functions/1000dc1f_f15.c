
/* ==== f15 @ 1000dc1f ==== 
 * signature: undefined4 __stdcall f15(int param_1)
 * body: 1000dc1f-1000ddaf
 */

undefined4 f15(int param_1)

{
  HANDLE hObject;
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  byte local_268 [512];
  byte local_68 [64];
  char local_28 [32];
  HANDLE local_8;
  
                    /* 0xdc1f  21  f15 */
  pcVar1 = FUN_10010950((char *)local_268,*(char **)(param_1 + 0x20));
  uVar2 = FUN_10016230(local_268);
  if ((*(char *)(param_1 + 0x18) != '\x01') || ((uVar2 & 1) != 0)) {
    pcVar1 = FUN_10010950((char *)local_268,pcVar1);
    local_8 = (HANDLE)FUN_1001223a((LPCSTR)local_268,~uVar2 & 1,0);
    if (local_8 == (HANDLE)0xffffffff) {
      uVar3 = FUN_10011024((LPCSTR)local_268,0);
      return uVar3;
    }
    pcVar1 = FUN_10010950(local_28,pcVar1);
    FUN_1001054d(local_28,(LPSTR)local_268);
    pcVar1 = FUN_10010950((char *)local_68,pcVar1);
    iVar4 = FUN_10016190(local_68);
    FUN_10010950((char *)local_68,pcVar1);
    DVar5 = FUN_10016230(local_68);
    hObject = local_8;
    FUN_10012303(local_8,iVar4,0);
    if ((uVar2 & 1) == 0) {
      if ((0 < (int)DVar5) && ((int)DVar5 < 0x200)) {
        local_268[DVar5] = 0;
      }
      DVar5 = lstrlenA((LPCSTR)local_268);
      if ((uVar2 & 2) != 0) {
        DVar5 = DVar5 + 1;
      }
      if (local_268[0] != 0) {
        FileWrite(hObject,local_268,DVar5);
      }
    }
    else {
      DVar6 = FUN_100122b9(hObject,local_268,DVar5);
      local_268[DVar5] = 0;
      if (((int)DVar6 < (int)DVar5) && (-1 < (int)DVar6)) {
        local_268[DVar6] = 0;
      }
      if (local_268[0] != 0) {
        FUN_1001488c((LPSTR)local_268,(uint *)&DAT_1001f288);
      }
      FUN_100105d2(local_28,(LPCSTR)local_268);
    }
    CloseHandle(hObject);
  }
  return 0;
}


