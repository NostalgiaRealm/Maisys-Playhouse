
/* ==== FUN_00487990 @ 00487990 ==== 
 * signature: undefined __fastcall FUN_00487990(int param_1)
 * body: 00487990-004879fe;00487a1f-00487a4d
 */

void __fastcall FUN_00487990(int param_1)

{
  int *this;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00487a4e;
  *unaff_FS_OFFSET = &local_10;
  this = FUN_00412c20(0x70);
  local_8 = 0;
  if (this == (int *)0x0) {
    this = (int *)0x0;
  }
  else {
    FUN_00412c90(this,0);
    *this = (int)&PTR_FUN_004bf780;
    *this = (int)&PTR_FUN_004c0aa0;
    *this = (int)&PTR_FUN_004c0110;
    *this = (int)&PTR_FUN_004ca580;
  }
  local_8 = 0xffffffff;
  *(int **)(param_1 + 0x5a) = this;
  FUN_004883e0(this,param_1);
  (**(code **)(*this + 0x20c))(param_1);
  *unaff_FS_OFFSET = local_10;
  return;
}


