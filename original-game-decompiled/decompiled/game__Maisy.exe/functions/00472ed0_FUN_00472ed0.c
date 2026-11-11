
/* ==== FUN_00472ed0 @ 00472ed0 ==== 
 * signature: undefined __fastcall FUN_00472ed0(undefined4 * param_1)
 * body: 00472ed0-00472f0c
 */

void __fastcall FUN_00472ed0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00472f0d;
  *param_1 = &PTR_FUN_004c99c0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00472f17();
  *unaff_FS_OFFSET = local_10;
  return;
}


