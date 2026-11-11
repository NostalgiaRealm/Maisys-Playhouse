
/* ==== FUN_0043be20 @ 0043be20 ==== 
 * signature: undefined4 * __thiscall FUN_0043be20(void * this, undefined4 param_1)
 * body: 0043be20-0043be70
 */

undefined4 * __thiscall FUN_0043be20(void *this,undefined4 param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0043be71;
  *unaff_FS_OFFSET = &local_10;
  FUN_0043bda0(this,param_1);
  *(undefined ***)this = &PTR_FUN_004c7cac;
  *unaff_FS_OFFSET = local_10;
  return this;
}


