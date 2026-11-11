
/* ==== FUN_00486f60 @ 00486f60 ==== 
 * signature: int __cdecl FUN_00486f60(int param_1, char * param_2)
 * body: 00486f60-00486fd3;00486fdc-0048706f
 */

int __cdecl FUN_00486f60(int param_1,char *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_5c [16];
  AFX_EXCEPTION_LINK local_4c [36];
  int *local_28;
  int *local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00487090;
  *unaff_FS_OFFSET = &local_10;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_14 = &stack0xffffff98;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_4c);
  local_8 = 1;
  piVar1 = FUN_00412c20(0x170);
  local_8._0_1_ = 2;
  local_20 = piVar1;
  if (piVar1 == (int *)0x0) {
    local_18 = (int *)0x0;
  }
  else {
    local_28 = piVar1;
    FUN_00481280(piVar1);
    *piVar1 = (int)&PTR_FUN_004c8970;
    local_18 = piVar1;
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00486ab0(local_18,param_1,param_2,1);
  uVar2 = FUN_00486ae0(local_18,1);
  local_1c = (int)(short)uVar2;
  if (local_1c == 0) {
    (**(code **)(*local_18 + 0x148))(0);
    iVar3 = (**(code **)(*local_18 + 0x128))(local_5c);
    if (iVar3 == 0) {
      local_1c = (**(code **)(*local_18 + 0x154))();
    }
    else {
      local_1c = 8;
    }
  }
  local_8 = 0xffffffff;
  FUN_0048709a();
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 4))();
  }
  *unaff_FS_OFFSET = local_10;
  return local_1c;
}


