
/* ==== FUN_0040fb90 @ 0040fb90 ==== 
 * signature: LPVOID __thiscall FUN_0040fb90(void * this, byte param_1)
 * body: 0040fb90-0040fbde
 */

LPVOID __thiscall FUN_0040fb90(void *this,byte param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0040fbdf;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0040fbe9();
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  *unaff_FS_OFFSET = local_10;
  return this;
}


