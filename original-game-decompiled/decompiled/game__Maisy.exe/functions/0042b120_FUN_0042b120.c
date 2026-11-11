
/* ==== FUN_0042b120 @ 0042b120 ==== 
 * signature: undefined __stdcall FUN_0042b120(void)
 * body: 0042b120-0042b163
 */

void FUN_0042b120(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0042b172;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_0042b164();
  local_8 = 0xffffffff;
  FUN_0042b17c();
  *unaff_FS_OFFSET = local_10;
  return;
}


