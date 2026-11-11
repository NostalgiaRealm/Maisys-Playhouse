
/* ==== FUN_00415360 @ 00415360 ==== 
 * signature: undefined __stdcall FUN_00415360(void)
 * body: 00415360-00415396
 */

void FUN_00415360(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00415397;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004153a1();
  *unaff_FS_OFFSET = local_10;
  return;
}


