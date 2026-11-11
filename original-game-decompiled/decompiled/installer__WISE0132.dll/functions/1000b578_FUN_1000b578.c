
/* ==== FUN_1000b578 @ 1000b578 ==== 
 * signature: undefined __cdecl FUN_1000b578(UINT param_1, int param_2)
 * body: 1000b578-1000b5c9
 */

void __cdecl FUN_1000b578(UINT param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(DAT_1002392c + 0x2c) = 1;
    SetTimer(DAT_100238d8,0x2069,param_1,(TIMERPROC)0x0);
  }
  do {
    FUN_10012db9();
  } while (*(int *)(DAT_1002392c + 0x2c) != 0);
  if (param_2 != 0) {
    KillTimer(DAT_100238d8,0x2069);
  }
  return;
}


