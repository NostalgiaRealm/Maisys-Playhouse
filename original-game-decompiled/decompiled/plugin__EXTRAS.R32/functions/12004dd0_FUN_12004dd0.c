
/* ==== FUN_12004dd0 @ 12004dd0 ==== 
 * signature: undefined4 * __fastcall FUN_12004dd0(undefined4 * param_1)
 * body: 12004dd0-12004e3e
 */

undefined4 * __fastcall FUN_12004dd0(undefined4 *param_1)

{
  MMRESULT MVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_12004e3f;
  *unaff_FS_OFFSET = &local_10;
  FUN_1201a460(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_120352b0;
  *(LPHMIDIOUT)((int)param_1 + 6) = (HMIDIOUT)0x0;
  *(undefined1 *)(param_1 + 1) = 0;
  MVar1 = midiOutOpen((LPHMIDIOUT)((int)param_1 + 6),0xffffffff,0,0,0);
  if (MVar1 == 0) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


