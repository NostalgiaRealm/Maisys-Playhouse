
/* ==== FUN_00451d60 @ 00451d60 ==== 
 * signature: undefined4 * __fastcall FUN_00451d60(undefined4 * param_1)
 * body: 00451d60-00451dc2
 */

undefined4 * __fastcall FUN_00451d60(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00451dc3;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412c90(param_1,0);
  local_8 = 0;
  *param_1 = &PTR_FUN_004c8ad0;
  FUN_00412d60(param_1,0);
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x2a) = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


