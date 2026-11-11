
/* ==== FUN_0041ff30 @ 0041ff30 ==== 
 * signature: undefined __stdcall FUN_0041ff30(void)
 * body: 0041ff30-0041ff66
 */

void FUN_0041ff30(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0041ff67;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0041ff71();
  *unaff_FS_OFFSET = local_10;
  return;
}


