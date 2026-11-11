
/* ==== FUN_0041b060 @ 0041b060 ==== 
 * signature: undefined __stdcall FUN_0041b060(void)
 * body: 0041b060-0041b096
 */

void FUN_0041b060(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0041b097;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0041b0a1();
  *unaff_FS_OFFSET = local_10;
  return;
}


