
/* ==== FUN_00418de0 @ 00418de0 ==== 
 * signature: undefined __stdcall FUN_00418de0(void)
 * body: 00418de0-00418e16
 */

void FUN_00418de0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00418e17;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00418e21();
  *unaff_FS_OFFSET = local_10;
  return;
}


