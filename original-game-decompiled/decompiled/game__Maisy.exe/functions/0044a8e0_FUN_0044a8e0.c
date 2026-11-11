
/* ==== FUN_0044a8e0 @ 0044a8e0 ==== 
 * signature: undefined4 * __fastcall FUN_0044a8e0(undefined4 * param_1)
 * body: 0044a8e0-0044a941
 */

undefined4 * __fastcall FUN_0044a8e0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0044a942;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042f970(param_1,0xc,0,'\0',0,'\0');
  *param_1 = &PTR_FUN_004c8440;
  *(undefined4 *)((int)param_1 + 0x4a) = 1;
  *(undefined2 *)((int)param_1 + 0x22) = 0x69;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


