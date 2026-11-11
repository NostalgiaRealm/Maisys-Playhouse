
/* ==== FUN_0042f970 @ 0042f970 ==== 
 * signature: undefined4 * __thiscall FUN_0042f970(void * this, undefined4 param_1, int param_2, char param_3, undefined4 param_4, char param_5)
 * body: 0042f970-0042f9e7
 */

undefined4 * __thiscall
FUN_0042f970(void *this,undefined4 param_1,int param_2,char param_3,undefined4 param_4,char param_5)

{
  byte bVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0042f9e8;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412c90(this,0);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_004c7320;
  FUN_0042fb50(this,param_1,param_2,param_3,param_4);
  bVar1 = *(byte *)((int)this + 0x48);
  *unaff_FS_OFFSET = local_10;
  *(byte *)((int)this + 0x48) = (param_5 << 2 ^ bVar1) & 4 ^ bVar1;
  return this;
}


