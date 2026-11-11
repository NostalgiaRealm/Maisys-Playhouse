
/* ==== FUN_00442080 @ 00442080 ==== 
 * signature: LPVOID __thiscall FUN_00442080(void * this, byte param_1)
 * body: 00442080-004420ce
 */

LPVOID __thiscall FUN_00442080(void *this,byte param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_004420cf;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004420d9();
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  *unaff_FS_OFFSET = local_10;
  return this;
}


