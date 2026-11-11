
/* ==== FUN_0047dde0 @ 0047dde0 ==== 
 * signature: int __thiscall FUN_0047dde0(void * this, byte param_1)
 * body: 0047dde0-0047de3b
 */

int __thiscall FUN_0047dde0(void *this,byte param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0047de4a;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_0047de3c();
  local_8 = 0xffffffff;
  FUN_0047de54();
  if ((param_1 & 1) != 0) {
    FUN_00412c60((int)this);
  }
  *unaff_FS_OFFSET = local_10;
  return (int)this;
}


