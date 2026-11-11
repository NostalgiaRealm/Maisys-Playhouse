
/* ==== FUN_00430a50 @ 00430a50 ==== 
 * signature: undefined4 * __thiscall FUN_00430a50(void * this, undefined4 param_1, int param_2, char param_3, undefined4 param_4)
 * body: 00430a50-00430ab0
 */

undefined4 * __thiscall
FUN_00430a50(void *this,undefined4 param_1,int param_2,char param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00430ab1;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042f970(this,param_1,param_2,param_3,param_4,'\0');
  *(undefined ***)this = &PTR_FUN_004c7420;
  *unaff_FS_OFFSET = local_10;
  return this;
}


