
/* ==== FUN_00425830 @ 00425830 ==== 
 * signature: undefined __fastcall FUN_00425830(int param_1)
 * body: 00425830-004258ab;004258d4-004258f7
 */

void __fastcall FUN_00425830(int param_1)

{
  undefined4 *this;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004258f8;
  *unaff_FS_OFFSET = &local_10;
  this = FUN_00412c20(0xa4);
  local_8 = 0;
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_00412c90(this,0);
    *this = &PTR_FUN_004bf780;
    *this = &PTR_FUN_004c0aa0;
    *this = &PTR_FUN_004c0110;
    *this = &PTR_FUN_004c0770;
    *this = &PTR_FUN_004c6ad8;
  }
  local_8 = 0xffffffff;
  FUN_0044ba40(this,param_1);
  *(undefined4 **)(param_1 + 0x5a) = this;
  *unaff_FS_OFFSET = local_10;
  return;
}


