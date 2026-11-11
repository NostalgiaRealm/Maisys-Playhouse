
/* ==== FUN_004074cb @ 004074cb ==== 
 * signature: undefined __cdecl FUN_004074cb(UINT param_1)
 * body: 004074cb-0040754d
 */

void __cdecl FUN_004074cb(UINT param_1)

{
  BOOL BVar1;
  tagMSG local_20;
  
  if (param_1 == 0) {
    DAT_00413be4 = 0;
  }
  else {
    DAT_00413be4 = 1;
    SetTimer(DAT_00413820,0x206a,param_1,(TIMERPROC)0x0);
  }
  do {
    while (BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1), BVar1 != 0) {
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
    }
  } while (DAT_00413be4 != 0);
  if (param_1 != 0) {
    KillTimer(DAT_00413820,0x206a);
  }
  return;
}


