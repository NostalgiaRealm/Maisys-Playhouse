
/* ==== FUN_00418ea0 @ 00418ea0 ==== 
 * signature: undefined __stdcall FUN_00418ea0(void)
 * body: 00418ea0-00418ed6
 */

void FUN_00418ea0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00418ed7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00418ee1();
  *unaff_FS_OFFSET = local_10;
  return;
}


