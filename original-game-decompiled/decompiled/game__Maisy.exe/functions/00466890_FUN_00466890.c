
/* ==== FUN_00466890 @ 00466890 ==== 
 * signature: int __thiscall FUN_00466890(void * this, byte param_1)
 * body: 00466890-004668de
 */

int __thiscall FUN_00466890(void *this,byte param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_004668df;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004668e9();
  if ((param_1 & 1) != 0) {
    FUN_00412c60((int)this);
  }
  *unaff_FS_OFFSET = local_10;
  return (int)this;
}


