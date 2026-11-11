
/* ==== FUN_1200dc40 @ 1200dc40 ==== 
 * signature: undefined4 __stdcall FUN_1200dc40(void)
 * body: 1200dc40-1200dcd0;1200dcde-1200dd27;1200dd35-1200dd6c
 */

undefined4 FUN_1200dc40(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *this;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_1200dd6d;
  *unaff_FS_OFFSET = &local_10;
  DAT_120373b0 = (undefined4 *)0x0;
  DAT_120373b4 = (undefined4 *)0x0;
  DAT_120373b8 = (undefined4 *)0x0;
  DAT_120373bc = 0;
  puVar1 = (undefined4 *)FUN_12016010(0x14);
  local_8 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_12016340(puVar1);
  }
  local_8 = 0xffffffff;
  DAT_120373b0 = puVar2;
  if (DAT_120373b4 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_12016010(0x20);
    local_8 = 1;
    if (puVar1 == (undefined4 *)0x0) {
      DAT_120373b4 = (undefined4 *)0x0;
    }
    else {
      DAT_120373b4 = FUN_12004b30(puVar1);
    }
  }
  local_8 = 0xffffffff;
  if (DAT_120373b8 == (undefined4 *)0x0) {
    this = (void *)FUN_12016010(0x1f6);
    local_8 = 2;
    if (this == (void *)0x0) {
      DAT_120373b8 = (undefined4 *)0x0;
    }
    else {
      DAT_120373b8 = FUN_1201a2e0(this,DAT_120373b0,DAT_120373b4);
    }
  }
  local_8 = 0xffffffff;
  if (DAT_120373c0 == 0) {
    DAT_120373c0 = FUN_12015de0(0x4c);
  }
  *unaff_FS_OFFSET = local_10;
  return 0;
}


