
/* ==== FUN_12004b30 @ 12004b30 ==== 
 * signature: undefined4 * __fastcall FUN_12004b30(undefined4 * param_1)
 * body: 12004b30-12004b7c
 */

undefined4 * __fastcall FUN_12004b30(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_12004b7d;
  *unaff_FS_OFFSET = &local_10;
  FUN_12016080((void *)((int)param_1 + 6),param_1);
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


