
/* ==== FUN_00472e80 @ 00472e80 ==== 
 * signature: undefined __stdcall FUN_00472e80(void)
 * body: 00472e80-00472eb6
 */

void FUN_00472e80(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00472eb7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00472ec1();
  *unaff_FS_OFFSET = local_10;
  return;
}


