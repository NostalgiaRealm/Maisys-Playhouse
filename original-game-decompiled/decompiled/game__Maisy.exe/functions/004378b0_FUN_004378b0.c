
/* ==== FUN_004378b0 @ 004378b0 ==== 
 * signature: int __thiscall FUN_004378b0(void * this, byte param_1)
 * body: 004378b0-004378fe
 */

int __thiscall FUN_004378b0(void *this,byte param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_004378ff;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00437909();
  if ((param_1 & 1) != 0) {
    FUN_00412c60((int)this);
  }
  *unaff_FS_OFFSET = local_10;
  return (int)this;
}


