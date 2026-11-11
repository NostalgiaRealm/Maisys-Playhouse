
/* ==== FUN_0045e610 @ 0045e610 ==== 
 * signature: int __fastcall FUN_0045e610(int * param_1)
 * body: 0045e610-0045e80f
 */

int __fastcall FUN_0045e610(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  void *this;
  undefined4 *unaff_FS_OFFSET;
  undefined2 uVar5;
  CHAR local_238 [512];
  byte local_38 [6];
  uint local_32;
  AFX_EXCEPTION_LINK local_28 [16];
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045e828;
  *unaff_FS_OFFSET = &local_10;
  local_18 = 0;
  local_14 = &stack0xfffffdbc;
  iVar1 = *param_1;
  piVar2 = (int *)(**(code **)(iVar1 + 0x118))(1,1,1);
  if (piVar2 == (int *)0x0) {
    FUN_004a3538();
  }
  DAT_004dbdc4 = 1;
  (**(code **)(iVar1 + 0x124))();
  (**(code **)(*piVar2 + 0x148))(0);
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
  local_8 = 1;
  iVar3 = (**(code **)(*piVar2 + 0x128))(local_38);
  if (iVar3 != 0) {
    if ((((local_38[0] != 1) && (local_38[0] != 9)) && (local_38[0] != 8)) &&
       (((local_38[0] != 7 && (local_38[0] != 2)) && ((local_38[0] != 3 && (local_38[0] != 4)))))) {
      uVar4 = FUN_0043c5b0(0x11,(char *)0x0);
      if ((char)uVar4 != '\0') {
        local_18 = 0xa0003;
        goto LAB_0045e76b;
      }
    }
    FUN_0043c5b0(8,(char *)0x0);
    local_18 = 0xa0003;
    goto LAB_0045e76b;
  }
  if (local_32 < 0x2000001) {
    if ((((local_38[0] != 1) && (local_38[0] != 9)) &&
        ((local_38[0] != 8 && (((local_38[0] != 7 && (local_38[0] != 2)) && (local_38[0] != 3))))))
       && (local_38[0] != 4)) {
      uVar4 = FUN_0043c5b0(0x11,(char *)0x0);
      if ((char)uVar4 != '\0') {
        local_18 = 0xa0003;
        goto LAB_0045e728;
      }
    }
    *(ushort *)((int)param_1 + 0x3e) = (ushort)local_38[0];
  }
  else {
    iVar3 = FUN_004bafca();
    if (*(HINSTANCE *)(iVar3 + 8) != (HINSTANCE)0x0) {
      LoadStringA(*(HINSTANCE *)(iVar3 + 8),0x422,local_238,0x200);
      AfxMessageBox(local_238,0x10,0);
    }
    local_18 = 0xa0003;
  }
LAB_0045e728:
  if (local_18 == 0) {
    uVar5 = *(undefined2 *)((int)param_1 + 0x3e);
    this = (void *)FUN_00466a70(*(int *)((int)param_1 + 0x26));
    FUN_0044f340(this,uVar5);
    iVar3 = (**(code **)(iVar1 + 0x158))();
    if (iVar3 == 0) {
      iVar3 = (**(code **)(iVar1 + 0x154))(0);
      if (iVar3 == 0) {
        DAT_004dbdc4 = 0;
        (**(code **)(iVar1 + 0x150))();
        goto LAB_0045e76b;
      }
    }
    FUN_0043c5b0(8,(char *)0x0);
    local_18 = 0xa0003;
  }
LAB_0045e76b:
  local_8 = 0xffffffff;
  FUN_0045e832();
  if (local_18 != 0) {
    DAT_004dbdc4 = 0;
    FUN_004a3538();
  }
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


