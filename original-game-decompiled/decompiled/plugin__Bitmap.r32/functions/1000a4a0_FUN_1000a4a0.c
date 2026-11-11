
/* ==== FUN_1000a4a0 @ 1000a4a0 ==== 
 * signature: uint __cdecl FUN_1000a4a0(uint param_1)
 * body: 1000a4a0-1000a521
 */

uint __cdecl FUN_1000a4a0(uint param_1)

{
  bool bVar1;
  
  if (DAT_10016fb0 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10018510);
    bVar1 = DAT_1001850c != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10018510);
      FUN_1000a320(0x13);
    }
    param_1 = FUN_1000a530(param_1);
    if (bVar1) {
      FUN_1000a3a0(0x13);
      return param_1;
    }
    InterlockedDecrement((LONG *)&DAT_10018510);
  }
  return param_1;
}


