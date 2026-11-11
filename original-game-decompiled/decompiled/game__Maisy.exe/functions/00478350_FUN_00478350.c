
/* ==== FUN_00478350 @ 00478350 ==== 
 * signature: undefined4 * __thiscall FUN_00478350(void * this, int param_1)
 * body: 00478350-004783e7
 */

undefined4 * __thiscall FUN_00478350(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *this_00;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004783f5;
  *unaff_FS_OFFSET = &local_10;
  FUN_0045d050(this,param_1);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_004c9d30;
  puVar1 = FUN_00412c20(0x4a);
  local_8._0_1_ = 1;
  this_00 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    this_00 = FUN_0042f8d0(puVar1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined4 **)((int)this + 0x54) = this_00;
  FUN_0042fb50(this_00,0x1c,0,'\0',0);
  *(undefined2 *)((int)this + 0x58) = 1;
  *unaff_FS_OFFSET = local_10;
  *(undefined4 *)((int)this + 0x5a) = 1;
  return this;
}


