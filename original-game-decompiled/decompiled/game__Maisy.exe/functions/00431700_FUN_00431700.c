
/* ==== FUN_00431700 @ 00431700 ==== 
 * signature: undefined __fastcall FUN_00431700(undefined4 * param_1)
 * body: 00431700-0043173c
 */

void __fastcall FUN_00431700(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0043173d;
  *param_1 = &PTR_FUN_004c7520;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_00431747();
  *unaff_FS_OFFSET = local_10;
  return;
}


