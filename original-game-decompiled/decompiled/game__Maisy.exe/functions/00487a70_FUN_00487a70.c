
/* ==== FUN_00487a70 @ 00487a70 ==== 
 * signature: int __thiscall FUN_00487a70(void * this, byte param_1)
 * body: 00487a70-00487abe
 */

int __thiscall FUN_00487a70(void *this,byte param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00487abf;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00487ac9();
  if ((param_1 & 1) != 0) {
    FUN_00412c60((int)this);
  }
  *unaff_FS_OFFSET = local_10;
  return (int)this;
}


