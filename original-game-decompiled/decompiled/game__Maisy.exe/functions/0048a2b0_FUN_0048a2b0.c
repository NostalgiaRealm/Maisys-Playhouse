
/* ==== FUN_0048a2b0 @ 0048a2b0 ==== 
 * signature: undefined4 * __fastcall FUN_0048a2b0(undefined4 * param_1)
 * body: 0048a2b0-0048a320
 */

undefined4 * __fastcall FUN_0048a2b0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0048a321;
  *unaff_FS_OFFSET = &local_10;
  FUN_0042f970(param_1,0x1a,8,'\0',0,'\0');
  local_8 = 0;
  *param_1 = &PTR_FUN_004cab40;
  FUN_004374c0((undefined4 *)((int)param_1 + 0x4a),(undefined4 *)&DAT_004da40c);
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


