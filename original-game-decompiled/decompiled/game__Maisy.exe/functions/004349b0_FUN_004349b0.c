
/* ==== FUN_004349b0 @ 004349b0 ==== 
 * signature: undefined4 * __thiscall FUN_004349b0(void * this, undefined4 param_1, int param_2, char param_3, undefined4 param_4)
 * body: 004349b0-00434a10
 */

undefined4 * __thiscall
FUN_004349b0(void *this,undefined4 param_1,int param_2,char param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00434a11;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042f970(this,param_1,param_2,param_3,param_4,'\0');
  *(undefined ***)this = &PTR_FUN_004c76d8;
  *unaff_FS_OFFSET = local_10;
  return this;
}


