
/* ==== FUN_00422bd0 @ 00422bd0 ==== 
 * signature: undefined4 * __fastcall FUN_00422bd0(undefined4 * param_1)
 * body: 00422bd0-00422c24
 */

undefined4 * __fastcall FUN_00422bd0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00422c25;
  *unaff_FS_OFFSET = &local_10;
  FUN_00417fb0(param_1,0x14,0,'\0',0,'\0');
  *param_1 = &PTR_FUN_004c6988;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


