
/* ==== FUN_004189d0 @ 004189d0 ==== 
 * signature: int __thiscall FUN_004189d0(void * this, byte param_1)
 * body: 004189d0-00418a1e
 */

int __thiscall FUN_004189d0(void *this,byte param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00418a1f;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00418a29();
  if ((param_1 & 1) != 0) {
    FUN_00412c60((int)this);
  }
  *unaff_FS_OFFSET = local_10;
  return (int)this;
}


