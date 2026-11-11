
/* ==== FUN_00481360 @ 00481360 ==== 
 * signature: undefined __fastcall FUN_00481360(undefined4 * param_1)
 * body: 00481360-0048139c
 */

void __fastcall FUN_00481360(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0048139d;
  *param_1 = &PTR_FUN_004ca328;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_004813a7();
  *unaff_FS_OFFSET = local_10;
  return;
}


