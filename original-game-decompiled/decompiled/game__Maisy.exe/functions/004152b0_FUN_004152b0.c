
/* ==== FUN_004152b0 @ 004152b0 ==== 
 * signature: undefined4 * __thiscall FUN_004152b0(void * this, undefined4 param_1, undefined4 param_2)
 * body: 004152b0-00415312
 */

undefined4 * __thiscall FUN_004152b0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00415313;
  *unaff_FS_OFFSET = &local_10;
  FUN_00414d40(this,param_1,param_2);
  *(uint *)((int)this + 0x42) = *(uint *)((int)this + 0x42) | 2;
  *(undefined2 *)((int)this + 0x46) = 0;
  *(undefined ***)this = &PTR_FUN_004beb40;
  *(undefined1 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x5a) = 0;
  *unaff_FS_OFFSET = local_10;
  return this;
}


