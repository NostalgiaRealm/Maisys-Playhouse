
/* ==== FUN_00439340 @ 00439340 ==== 
 * signature: undefined __fastcall FUN_00439340(undefined4 * param_1)
 * body: 00439340-0043937c
 */

void __fastcall FUN_00439340(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0043937d;
  *param_1 = &PTR_FUN_004c7b10;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00439387();
  *unaff_FS_OFFSET = local_10;
  return;
}


