
/* ==== FUN_0041fe00 @ 0041fe00 ==== 
 * signature: undefined __stdcall FUN_0041fe00(void)
 * body: 0041fe00-0041fe36
 */

void FUN_0041fe00(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0041fe37;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0041fe41();
  *unaff_FS_OFFSET = local_10;
  return;
}


