
/* ==== FUN_00418bc0 @ 00418bc0 ==== 
 * signature: undefined __stdcall FUN_00418bc0(void)
 * body: 00418bc0-00418bf6
 */

void FUN_00418bc0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00418bf7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00418c01();
  *unaff_FS_OFFSET = local_10;
  return;
}


