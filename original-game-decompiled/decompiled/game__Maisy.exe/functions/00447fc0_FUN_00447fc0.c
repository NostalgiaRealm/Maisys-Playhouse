
/* ==== FUN_00447fc0 @ 00447fc0 ==== 
 * signature: undefined4 * __thiscall FUN_00447fc0(void * this, int param_1)
 * body: 00447fc0-00448065
 */

undefined4 * __thiscall FUN_00447fc0(void *this,int param_1)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00448073;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412c90(this,param_1);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_004c8248;
  this_00 = FUN_00412c20(0x4a);
  local_8._0_1_ = 1;
  puVar1 = (undefined4 *)0x0;
  if (this_00 != (undefined4 *)0x0) {
    puVar1 = FUN_00430a50(this_00,0xc,0x10,'\0',0);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined4 **)((int)this + 0x2a) = puVar1;
  *(undefined4 *)((int)this + 0x2e) = 0;
  *(undefined1 *)((int)this + 0x3b) = 0;
  *(undefined4 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x36) = 0;
  FUN_00470b60((int)this);
  *(undefined4 *)((int)this + 0x26) = 0;
  *(undefined1 *)((int)this + 0x3a) = 0;
  *unaff_FS_OFFSET = local_10;
  return this;
}


