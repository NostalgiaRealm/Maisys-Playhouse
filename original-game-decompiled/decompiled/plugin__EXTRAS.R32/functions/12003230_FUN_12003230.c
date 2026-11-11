
/* ==== FUN_12003230 @ 12003230 ==== 
 * signature: undefined __fastcall FUN_12003230(int param_1)
 * body: 12003230-12003290
 */

void __fastcall FUN_12003230(int param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_12003291;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_12003670(param_1);
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    FUN_12004c80(*(void **)(param_1 + 4),*(int **)(param_1 + 8));
  }
  FUN_120032b0(param_1);
  local_8 = 0xffffffff;
  FUN_1200329b();
  *unaff_FS_OFFSET = local_10;
  return;
}


