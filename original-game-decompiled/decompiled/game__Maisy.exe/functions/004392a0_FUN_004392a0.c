
/* ==== FUN_004392a0 @ 004392a0 ==== 
 * signature: undefined4 * __fastcall FUN_004392a0(undefined4 * param_1)
 * body: 004392a0-004392f7
 */

undefined4 * __fastcall FUN_004392a0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004392f8;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042f970(param_1,8,0xc,'\0',0,'\0');
  *param_1 = &PTR_FUN_004c7b10;
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


