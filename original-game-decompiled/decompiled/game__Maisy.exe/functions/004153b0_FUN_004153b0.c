
/* ==== FUN_004153b0 @ 004153b0 ==== 
 * signature: undefined __fastcall FUN_004153b0(undefined4 * param_1)
 * body: 004153b0-004153ec
 */

void __fastcall FUN_004153b0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_004153ed;
  *param_1 = &PTR_FUN_004beb40;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004153f7();
  *unaff_FS_OFFSET = local_10;
  return;
}


