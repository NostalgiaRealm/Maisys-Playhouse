
/* ==== FUN_0046e210 @ 0046e210 ==== 
 * signature: undefined4 * __fastcall FUN_0046e210(undefined4 * param_1)
 * body: 0046e210-0046e264
 */

undefined4 * __fastcall FUN_0046e210(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0046e265;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042f970(param_1,8,0,'\0',0,'\0');
  *param_1 = &PTR_FUN_004c9540;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


