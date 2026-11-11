
/* ==== FUN_0047dce0 @ 0047dce0 ==== 
 * signature: undefined __fastcall FUN_0047dce0(int param_1)
 * body: 0047dce0-0047dd69;0047dda0-0047ddc3
 */

void __fastcall FUN_0047dce0(int param_1)

{
  undefined4 *this;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0047ddc4;
  *unaff_FS_OFFSET = &local_10;
  this = FUN_00412c20(200);
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
    *(undefined4 *)((int)this + 0xbe) = 0;
    *this = &PTR_FUN_004c9fb8;
  }
  local_8 = 0xffffffff;
  FUN_0043f850(this,param_1);
  *(undefined4 **)(param_1 + 0x5a) = this;
  *unaff_FS_OFFSET = local_10;
  return;
}


