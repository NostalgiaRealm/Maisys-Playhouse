
/* ==== FUN_004489d0 @ 004489d0 ==== 
 * signature: undefined __fastcall FUN_004489d0(undefined4 * param_1)
 * body: 004489d0-00448a0c
 */

void __fastcall FUN_004489d0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00448a0d;
  *param_1 = &PTR_FUN_004c8368;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00448a17();
  *unaff_FS_OFFSET = local_10;
  return;
}


