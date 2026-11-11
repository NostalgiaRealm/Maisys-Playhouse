
/* ==== FUN_12004bf0 @ 12004bf0 ==== 
 * signature: int __thiscall FUN_12004bf0(void * this, undefined4 param_1, undefined4 param_2)
 * body: 12004bf0-12004c59
 */

int __thiscall FUN_12004bf0(void *this,undefined4 param_1,undefined4 param_2)

{
  void *this_00;
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_12004c5a;
  *unaff_FS_OFFSET = &local_10;
  this_00 = (void *)FUN_12016010(0x1c);
  local_8 = 0;
  if (this_00 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_12004b10(this_00,param_1,param_2,*(undefined2 *)((int)this + 0x10));
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}


