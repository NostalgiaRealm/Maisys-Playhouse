
/* ==== FUN_00418b00 @ 00418b00 ==== 
 * signature: undefined __stdcall FUN_00418b00(void)
 * body: 00418b00-00418b36
 */

void FUN_00418b00(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00418b37;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00418b41();
  *unaff_FS_OFFSET = local_10;
  return;
}


