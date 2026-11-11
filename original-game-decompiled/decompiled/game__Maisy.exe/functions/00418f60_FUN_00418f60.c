
/* ==== FUN_00418f60 @ 00418f60 ==== 
 * signature: undefined __stdcall FUN_00418f60(void)
 * body: 00418f60-00418f96
 */

void FUN_00418f60(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00418f97;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00418fa1();
  *unaff_FS_OFFSET = local_10;
  return;
}


