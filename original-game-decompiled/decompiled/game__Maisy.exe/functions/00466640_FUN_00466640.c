
/* ==== FUN_00466640 @ 00466640 ==== 
 * signature: undefined __fastcall FUN_00466640(void * param_1)
 * body: 00466640-004666c9;004666d2-00466718;00466721-00466767;00466770-004667a3
 */

void __fastcall FUN_00466640(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004667cb;
  *unaff_FS_OFFSET = &local_10;
  FUN_004664f0(param_1);
  puVar1 = FUN_00412c20(0x4e);
  local_8 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0044a8e0(puVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)param_1 + 0x44) = puVar2;
  puVar1 = FUN_00412c20(0x68);
  local_8 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00412c90(puVar1,0);
    *puVar1 = &PTR_FUN_004c9270;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)param_1 + 0x38) = puVar1;
  FUN_0044cce0(puVar1,(int)param_1);
  puVar1 = FUN_00412c20(0x32);
  local_8 = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00412c90(puVar1,0);
    *puVar1 = &PTR_FUN_004c9450;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)param_1 + 0x40) = puVar1;
  FUN_0044fd70(puVar1,(int)param_1);
  puVar1 = FUN_00412c20(0x36);
  local_8 = 5;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00412c90(puVar1,0);
    *puVar1 = &PTR_FUN_004c9368;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)param_1 + 0x3c) = puVar1;
  FUN_00479690(puVar1,param_1);
  *(undefined1 *)((int)param_1 + 0x32) = 1;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined1 *)((int)param_1 + 0x33) = 0;
  *(undefined1 *)((int)param_1 + 0x50) = 0;
  *unaff_FS_OFFSET = local_10;
  return;
}


