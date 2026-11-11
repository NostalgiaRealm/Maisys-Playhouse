
/* ==== FUN_0042acc0 @ 0042acc0 ==== 
 * signature: undefined4 * __thiscall FUN_0042acc0(void * this, void * param_1, short param_2, undefined4 * param_3, byte param_4)
 * body: 0042acc0-0042ad3e
 */

undefined4 * __thiscall
FUN_0042acc0(void *this,void *param_1,short param_2,undefined4 *param_3,byte param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0042ad3f;
  *unaff_FS_OFFSET = &local_10;
  FUN_0040ffe0(this,param_2,param_3,param_4);
  local_8 = 0;
  *(undefined2 *)((int)this + 0x52) = 1;
  *(undefined ***)this = &PTR_FUN_004c71b8;
  *(undefined2 *)((int)this + 0x50) = 1;
  *(void **)((int)this + 0x4c) = param_1;
  *(undefined4 *)((int)this + 0x54) = 0xf8000000;
  if (param_1 != (void *)0x0) {
    FUN_0045a050(param_1,(int)this);
  }
  *unaff_FS_OFFSET = local_10;
  return this;
}


