
/* ==== FUN_10015b60 @ 10015b60 ==== 
 * signature: uint __cdecl FUN_10015b60(uint param_1)
 * body: 10015b60-10015be1
 */

uint __cdecl FUN_10015b60(uint param_1)

{
  bool bVar1;
  
  if (DAT_100233f8 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10025328);
    bVar1 = DAT_10025324 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10025328);
      FUN_10016e20(0x13);
    }
    param_1 = FUN_10015bf0(param_1);
    if (bVar1) {
      FUN_10016ea0(0x13);
      return param_1;
    }
    InterlockedDecrement((LONG *)&DAT_10025328);
  }
  return param_1;
}


