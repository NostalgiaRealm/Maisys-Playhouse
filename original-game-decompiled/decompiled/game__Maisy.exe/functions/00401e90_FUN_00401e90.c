
/* ==== FUN_00401e90 @ 00401e90 ==== 
 * signature: undefined __fastcall FUN_00401e90(undefined4 * param_1)
 * body: 00401e90-00401efd
 */

void __fastcall FUN_00401e90(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00401efe;
  *param_1 = &PTR_FUN_004be068;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_0048b790((int)(param_1 + 1));
  FUN_0048b790((int)param_1 + 0x16);
  FUN_0048b790((int)(param_1 + 10));
  local_8 = 0xffffffff;
  FUN_00401f08();
  *unaff_FS_OFFSET = local_10;
  return;
}


