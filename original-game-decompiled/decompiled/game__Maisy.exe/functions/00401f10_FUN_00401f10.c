
/* ==== FUN_00401f10 @ 00401f10 ==== 
 * signature: undefined __thiscall FUN_00401f10(void * this, int * param_1, undefined4 * param_2)
 * body: 00401f10-00401f83
 */

void __thiscall FUN_00401f10(void *this,int *param_1,undefined4 *param_2)

{
  void *this_00;
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00401f84;
  *unaff_FS_OFFSET = &local_10;
  this_00 = (void *)FUN_004a5fed(0x8c);
  local_8 = 0;
  puVar1 = (undefined4 *)0x0;
  if (this_00 != (void *)0x0) {
    puVar1 = FUN_00401ca0(this_00,param_1,param_2);
  }
  local_8 = 0xffffffff;
  FUN_0047dad0(*(void **)((int)this + 0x86),puVar1);
  *unaff_FS_OFFSET = local_10;
  return;
}


