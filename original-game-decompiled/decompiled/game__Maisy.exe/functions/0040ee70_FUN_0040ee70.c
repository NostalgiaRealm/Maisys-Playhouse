
/* ==== FUN_0040ee70 @ 0040ee70 ==== 
 * signature: undefined4 * __fastcall FUN_0040ee70(undefined4 * param_1)
 * body: 0040ee70-0040eedf
 */

undefined4 * __fastcall FUN_0040ee70(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0040eee0;
  *unaff_FS_OFFSET = &local_10;
  FUN_004b9f49();
  *param_1 = &PTR_FUN_004be200;
  DAT_004d99a8 = param_1;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *unaff_FS_OFFSET = local_10;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  return param_1;
}


