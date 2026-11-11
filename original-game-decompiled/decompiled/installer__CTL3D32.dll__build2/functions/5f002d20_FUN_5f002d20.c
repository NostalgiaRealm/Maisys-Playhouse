
/* ==== FUN_5f002d20 @ 5f002d20 ==== 
 * signature: undefined4 __cdecl FUN_5f002d20(HWND param_1, uint param_2, undefined4 param_3, short param_4)
 * body: 5f002d20-5f002de8
 */

undefined4 __cdecl FUN_5f002d20(HWND param_1,uint param_2,undefined4 param_3,short param_4)

{
  HWND pHVar1;
  
  if (0x35e < DAT_5f005260) {
    return 0;
  }
  if ((param_2 & 3) == 2) {
    if (param_4 == 1) {
      return 0;
    }
    pHVar1 = GetWindow(param_1,5);
    if (pHVar1 != (HWND)0x0) {
      FUN_5f002e40(pHVar1,4,param_4,param_1);
    }
    return 1;
  }
  if ((param_2 & 3) == 3) {
    return 1;
  }
  if (param_4 == 1) {
    return 1;
  }
  pHVar1 = GetWindow(param_1,5);
  if (pHVar1 != (HWND)0x0) {
    FUN_5f002e40(pHVar1,2,param_4,param_1);
    pHVar1 = GetWindow(pHVar1,2);
    if (pHVar1 != (HWND)0x0) {
      FUN_5f002e40(pHVar1,4,param_4,param_1);
    }
    return 1;
  }
  return 0;
}


