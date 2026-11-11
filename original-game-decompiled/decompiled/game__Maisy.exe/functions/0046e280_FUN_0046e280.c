
/* ==== FUN_0046e280 @ 0046e280 ==== 
 * signature: int __thiscall FUN_0046e280(void * this, byte param_1)
 * body: 0046e280-0046e2ce
 */

int __thiscall FUN_0046e280(void *this,byte param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0046e2cf;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0046e2d9();
  if ((param_1 & 1) != 0) {
    FUN_00412c60((int)this);
  }
  *unaff_FS_OFFSET = local_10;
  return (int)this;
}


