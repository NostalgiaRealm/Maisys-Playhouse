
/* ==== FUN_00471ff0 @ 00471ff0 ==== 
 * signature: undefined __fastcall FUN_00471ff0(int param_1)
 * body: 00471ff0-0047205e;0047207f-004720ad
 */

void __fastcall FUN_00471ff0(int param_1)

{
  int *this;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004720ae;
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
    *this = (int)&PTR_FUN_004c9658;
  }
  local_8 = 0xffffffff;
  FUN_00472c50(this,param_1);
  (**(code **)(*this + 0x20c))(param_1);
  *(int **)(param_1 + 0x5a) = this;
  *unaff_FS_OFFSET = local_10;
  return;
}


