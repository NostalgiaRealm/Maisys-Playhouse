
/* ==== FUN_12004e80 @ 12004e80 ==== 
 * signature: undefined __fastcall FUN_12004e80(undefined4 * param_1)
 * body: 12004e80-12004ed3
 */

void __fastcall FUN_12004e80(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_12004ed4;
  *param_1 = &PTR_FUN_120352b0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (*(char *)(param_1 + 1) != '\0') {
    midiOutClose(*(HMIDIOUT *)((int)param_1 + 6));
  }
  local_8 = 0xffffffff;
  FUN_12004ede();
  *unaff_FS_OFFSET = local_10;
  return;
}


