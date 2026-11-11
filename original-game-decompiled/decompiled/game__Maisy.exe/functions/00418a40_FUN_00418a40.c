
/* ==== FUN_00418a40 @ 00418a40 ==== 
 * signature: undefined __stdcall FUN_00418a40(void)
 * body: 00418a40-00418a76
 */

void FUN_00418a40(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00418a77;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00418a81();
  *unaff_FS_OFFSET = local_10;
  return;
}


