
/* ==== FUN_120031e0 @ 120031e0 ==== 
 * signature: undefined __stdcall FUN_120031e0(void)
 * body: 120031e0-12003216
 */

void FUN_120031e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_12003217;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_12003221();
  *unaff_FS_OFFSET = local_10;
  return;
}


