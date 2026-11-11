
/* ==== FUN_004430d0 @ 004430d0 ==== 
 * signature: undefined __stdcall FUN_004430d0(undefined4 param_1, int param_2)
 * body: 004430d0-004430fd
 */

void FUN_004430d0(undefined4 param_1,int param_2)

{
  if (param_2 == 0x3bd) {
    if (DAT_004db87c != '\0') {
      FUN_00443760();
      return;
    }
    DAT_004db874 = DAT_004db874 + 1;
  }
  return;
}


