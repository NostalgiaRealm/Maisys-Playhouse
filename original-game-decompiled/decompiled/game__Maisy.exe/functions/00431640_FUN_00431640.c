
/* ==== FUN_00431640 @ 00431640 ==== 
 * signature: undefined4 * __thiscall FUN_00431640(void * this, undefined4 param_1, undefined4 param_2)
 * body: 00431640-004316ba
 */

undefined4 * __thiscall FUN_00431640(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004316bb;
  *unaff_FS_OFFSET = &local_10;
  FUN_004152b0(this,param_1,param_2);
  *(undefined2 *)((int)this + 0x4a) = 0;
  *(undefined ***)this = &PTR_FUN_004c7520;
  *(uint *)((int)this + 0x42) = *(uint *)((int)this + 0x42) | 0x200;
  *(undefined2 *)((int)this + 0x4c) = 0;
  *(undefined1 *)((int)this + 0x6e) = 0;
  *(undefined2 *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x66) = 0;
  *(undefined2 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *unaff_FS_OFFSET = local_10;
  return this;
}


