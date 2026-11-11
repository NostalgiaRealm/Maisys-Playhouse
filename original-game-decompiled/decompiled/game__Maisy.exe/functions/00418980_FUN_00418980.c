
/* ==== FUN_00418980 @ 00418980 ==== 
 * signature: undefined __stdcall FUN_00418980(void)
 * body: 00418980-004189b6
 */

void FUN_00418980(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_004189b7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004189c1();
  *unaff_FS_OFFSET = local_10;
  return;
}


