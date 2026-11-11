
/* ==== FUN_00446280 @ 00446280 ==== 
 * signature: undefined __fastcall FUN_00446280(int param_1)
 * body: 00446280-004462ee;0044630f-00446332
 */

void __fastcall FUN_00446280(int param_1)

{
  undefined4 *this;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00446333;
  *unaff_FS_OFFSET = &local_10;
  this = FUN_00412c20(0x6e);
  local_8 = 0;
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_00412c90(this,0);
    *this = &PTR_FUN_004bf780;
    *this = &PTR_FUN_004c0aa0;
    *this = &PTR_FUN_004c0110;
    *this = &PTR_FUN_004c7f18;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x5a) = this;
  FUN_0042e9d0(this,param_1);
  *unaff_FS_OFFSET = local_10;
  return;
}


