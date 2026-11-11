
/* ==== FUN_00414e00 @ 00414e00 ==== 
 * signature: int __thiscall FUN_00414e00(void * this, byte param_1)
 * body: 00414e00-00414e4e
 */

int __thiscall FUN_00414e00(void *this,byte param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00414e4f;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00414e59();
  if ((param_1 & 1) != 0) {
    FUN_00412c60((int)this);
  }
  *unaff_FS_OFFSET = local_10;
  return (int)this;
}


