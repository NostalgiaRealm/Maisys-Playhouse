
/* ==== FUN_0047d8d0 @ 0047d8d0 ==== 
 * signature: undefined4 * __thiscall FUN_0047d8d0(void * this, int param_1)
 * body: 0047d8d0-0047d925
 */

undefined4 * __thiscall FUN_0047d8d0(void *this,int param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0047d926;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412c90(this,param_1);
  *(undefined ***)this = &PTR_FUN_004c9ec0;
  *(int *)((int)this + 0x26) = param_1;
  *unaff_FS_OFFSET = local_10;
  return this;
}


