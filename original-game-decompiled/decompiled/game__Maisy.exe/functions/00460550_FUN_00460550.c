
/* ==== FUN_00460550 @ 00460550 ==== 
 * signature: undefined __fastcall FUN_00460550(int param_1)
 * body: 00460550-004605b4;004605cd-004605fb
 */

void __fastcall FUN_00460550(int param_1)

{
  int *this;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004605fc;
  *unaff_FS_OFFSET = &local_10;
  this = FUN_00412c20(0x6c);
  local_8 = 0;
  if (this == (int *)0x0) {
    this = (int *)0x0;
  }
  else {
    FUN_00412c90(this,0);
    *this = (int)&PTR_FUN_004bf780;
    *this = (int)&PTR_FUN_004c0aa0;
    *this = (int)&PTR_FUN_004c0110;
  }
  local_8 = 0xffffffff;
  FUN_0044b000(this,param_1);
  (**(code **)(*this + 0x20c))(param_1);
  *(int **)(param_1 + 0x5a) = this;
  *unaff_FS_OFFSET = local_10;
  return;
}


