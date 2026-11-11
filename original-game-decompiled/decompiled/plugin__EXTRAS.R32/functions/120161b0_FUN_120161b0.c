
/* ==== FUN_120161b0 @ 120161b0 ==== 
 * signature: undefined __fastcall FUN_120161b0(undefined4 * param_1)
 * body: 120161b0-12016211
 */

void __fastcall FUN_120161b0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_12016212;
  *param_1 = &PTR_FUN_12035840;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_12016260((int)param_1);
  timeEndPeriod(*(UINT *)((int)param_1 + 0x16));
  DAT_120378c4 = 0;
  local_8 = 0xffffffff;
  FUN_1201621c();
  *unaff_FS_OFFSET = local_10;
  return;
}


