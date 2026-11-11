
/* ==== FUN_0042b190 @ 0042b190 ==== 
 * signature: undefined __stdcall FUN_0042b190(void)
 * body: 0042b190-0042b1c6
 */

void FUN_0042b190(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0042b1c7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0042b1d1();
  *unaff_FS_OFFSET = local_10;
  return;
}


