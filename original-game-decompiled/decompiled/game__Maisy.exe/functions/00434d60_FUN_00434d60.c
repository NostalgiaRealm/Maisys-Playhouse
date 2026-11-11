
/* ==== FUN_00434d60 @ 00434d60 ==== 
 * signature: undefined __stdcall FUN_00434d60(void)
 * body: 00434d60-00434dc5
 */

void FUN_00434d60(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00434dc6;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = FUN_00412c20(0x7260);
  local_8 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00435240(puVar1);
  }
  local_8 = 0xffffffff;
  DAT_004dae3c = puVar2;
  FUN_004353e0(puVar2);
  *unaff_FS_OFFSET = local_10;
  return;
}


