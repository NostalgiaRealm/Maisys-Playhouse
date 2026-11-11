
/* ==== FUN_00418b50 @ 00418b50 ==== 
 * signature: int __thiscall FUN_00418b50(void * this, byte param_1)
 * body: 00418b50-00418b9e
 */

int __thiscall FUN_00418b50(void *this,byte param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00418b9f;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00418ba9();
  if ((param_1 & 1) != 0) {
    FUN_00412c60((int)this);
  }
  *unaff_FS_OFFSET = local_10;
  return (int)this;
}


