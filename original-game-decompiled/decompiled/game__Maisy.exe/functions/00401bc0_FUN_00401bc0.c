
/* ==== FUN_00401bc0 @ 00401bc0 ==== 
 * signature: undefined __fastcall FUN_00401bc0(undefined4 * param_1)
 * body: 00401bc0-00401c83
 */

void __fastcall FUN_00401bc0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *unaff_FS_OFFSET;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00401c84;
  *param_1 = &PTR_FUN_004be058;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  local_14 = param_1;
  pcVar1 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,&local_1c);
  DAT_004e34cc = (*pcVar1)(local_1c,0,(int)local_14 + 0x4e);
  pcVar1 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,&local_18);
  DAT_004e34cc = (*pcVar1)(local_18,0,local_14 + 0xf);
  FUN_0048b790((int)(local_14 + 1));
  FUN_0048b790((int)local_14 + 0x16);
  local_8 = 0xffffffff;
  FUN_00401c8e();
  *unaff_FS_OFFSET = local_10;
  return;
}


