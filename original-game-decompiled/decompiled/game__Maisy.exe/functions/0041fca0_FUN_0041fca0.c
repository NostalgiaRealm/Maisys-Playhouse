
/* ==== FUN_0041fca0 @ 0041fca0 ==== 
 * signature: undefined4 * __fastcall FUN_0041fca0(undefined4 * param_1)
 * body: 0041fca0-0041fcfa
 */

undefined4 * __fastcall FUN_0041fca0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0041fd03;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412c90(param_1,0);
  *param_1 = &PTR_FUN_004bf780;
  *param_1 = &PTR_FUN_004c5280;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


