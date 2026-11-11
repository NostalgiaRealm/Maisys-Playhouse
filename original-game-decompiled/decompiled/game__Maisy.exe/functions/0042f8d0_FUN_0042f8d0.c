
/* ==== FUN_0042f8d0 @ 0042f8d0 ==== 
 * signature: undefined4 * __fastcall FUN_0042f8d0(undefined4 * param_1)
 * body: 0042f8d0-0042f923
 */

undefined4 * __fastcall FUN_0042f8d0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0042f924;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412c90(param_1,0);
  *param_1 = &PTR_FUN_004c7320;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


