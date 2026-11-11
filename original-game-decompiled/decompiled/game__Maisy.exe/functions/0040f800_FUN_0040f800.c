
/* ==== FUN_0040f800 @ 0040f800 ==== 
 * signature: undefined4 __thiscall FUN_0040f800(void * this, int param_1)
 * body: 0040f800-0040f956
 */

undefined4 __thiscall FUN_0040f800(void *this,int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_2c [12];
  int local_20;
  void *local_1c;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0040f963;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffc8;
  local_1c = this;
  puVar2 = &stack0xffffffc8;
  if (DAT_004dc57c == '\0') {
    FUN_004a6dc5(this,param_1);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  piVar6 = (int *)((int)local_1c + 200);
  if (*(int *)((int)local_1c + 200) != 0) {
    iVar7 = 0;
    iVar3 = *(int *)(*(int *)((int)local_1c + 200) + 0x50);
    if (iVar3 != 0) {
      iVar3 = FUN_00409590(*(int *)(iVar3 + 0x82));
      iVar7 = *(int *)(iVar3 + 0x26);
    }
    if ((iVar7 == 0) ||
       ((iVar7 == DAT_004dc574 && (iVar3 = FUN_00470c80((int)DAT_004dc564), (char)iVar3 != '\0'))))
    {
      piVar1 = (int *)*piVar6;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(1);
      }
    }
    else {
      SendMessageA(*(HWND *)(iVar7 + 0x1c),0x10,0,0);
    }
    *piVar6 = 0;
  }
  (**(code **)(*DAT_004dc564 + 0x7c))();
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_2c);
  sVar5 = 1;
  local_8 = 1;
  uVar4 = FUN_0046e970((int)DAT_004dc564);
  if (0 < (short)uVar4) {
    do {
      local_20 = FUN_0046e950(DAT_004dc564,sVar5);
      if (local_20 != 0) {
        FUN_0045a4b0(local_20);
      }
      sVar5 = sVar5 + 1;
    } while (sVar5 <= (short)uVar4);
  }
  local_8 = 0xffffffff;
  FUN_0040f96d();
  if (*(int *)((int)local_1c + 0xc4) != 0) {
    iVar3 = FUN_00409590(*(int *)(DAT_004da378 + 0x82));
    SendMessageA(*(HWND *)(*(int *)(iVar3 + 0x26) + 0x1c),0x10,0,0);
    PostQuitMessage(0);
  }
  *unaff_FS_OFFSET = local_10;
  return 1;
}


