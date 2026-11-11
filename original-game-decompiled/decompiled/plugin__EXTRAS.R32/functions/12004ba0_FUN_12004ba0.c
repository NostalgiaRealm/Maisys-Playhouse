
/* ==== FUN_12004ba0 @ 12004ba0 ==== 
 * signature: undefined __stdcall FUN_12004ba0(void)
 * body: 12004ba0-12004bd6
 */

void FUN_12004ba0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_12004bd7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_12004be1();
  *unaff_FS_OFFSET = local_10;
  return;
}


