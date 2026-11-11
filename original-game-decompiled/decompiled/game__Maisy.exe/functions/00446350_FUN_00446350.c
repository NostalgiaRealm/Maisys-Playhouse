
/* ==== FUN_00446350 @ 00446350 ==== 
 * signature: int __thiscall FUN_00446350(void * this, byte param_1)
 * body: 00446350-0044639e
 */

int __thiscall FUN_00446350(void *this,byte param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0044639f;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004463a9();
  if ((param_1 & 1) != 0) {
    FUN_00412c60((int)this);
  }
  *unaff_FS_OFFSET = local_10;
  return (int)this;
}


