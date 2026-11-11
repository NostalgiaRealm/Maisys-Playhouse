
/* ==== FUN_00418c80 @ 00418c80 ==== 
 * signature: undefined __fastcall FUN_00418c80(int param_1)
 * body: 00418c80-00418cfb;00418d24-00418d52
 */

void __fastcall FUN_00418c80(int param_1)

{
  int *this;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00418d53;
  *unaff_FS_OFFSET = &local_10;
  this = FUN_00412c20(0x94);
  local_8 = 0;
  if (this == (int *)0x0) {
    this = (int *)0x0;
  }
  else {
    FUN_00412c90(this,0);
    *this = (int)&PTR_FUN_004bf780;
    *this = (int)&PTR_FUN_004c0aa0;
    *this = (int)&PTR_FUN_004c0110;
    *this = (int)&PTR_FUN_004c0770;
    *this = (int)&PTR_FUN_004c0440;
  }
  local_8 = 0xffffffff;
  FUN_004422e0(this,param_1);
  (**(code **)(*this + 0x20c))(param_1);
  *(int **)(param_1 + 0x5a) = this;
  *unaff_FS_OFFSET = local_10;
  return;
}


