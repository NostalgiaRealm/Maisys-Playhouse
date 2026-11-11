
/* ==== FUN_00479690 @ 00479690 ==== 
 * signature: undefined __thiscall FUN_00479690(void * this, undefined4 param_1)
 * body: 00479690-00479735
 */

void __thiscall FUN_00479690(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00479743;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412d60(this,0);
  *(undefined4 *)((int)this + 0x26) = param_1;
  puVar1 = FUN_00412c20(0x56);
  local_8 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00422bd0(puVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x2e) = puVar2;
  puVar1 = FUN_00412c20(0x56);
  local_8 = 1;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00422bd0(puVar1);
  }
  *(undefined4 *)((int)this + 0x32) = 0;
  *(undefined4 **)((int)this + 0x2a) = puVar2;
  *unaff_FS_OFFSET = local_10;
  return;
}


