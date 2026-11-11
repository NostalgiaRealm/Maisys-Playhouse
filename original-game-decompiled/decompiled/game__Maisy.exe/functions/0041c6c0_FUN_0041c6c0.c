
/* ==== FUN_0041c6c0 @ 0041c6c0 ==== 
 * signature: undefined __stdcall FUN_0041c6c0(void)
 * body: 0041c6c0-0041c6f6
 */

void FUN_0041c6c0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0041c6f7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0041c701();
  *unaff_FS_OFFSET = local_10;
  return;
}


