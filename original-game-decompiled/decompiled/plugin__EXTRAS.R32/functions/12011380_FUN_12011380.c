
/* ==== FUN_12011380 @ 12011380 ==== 
 * signature: LRESULT __stdcall FUN_12011380(HWND param_1, uint param_2, uint param_3, undefined4 * param_4)
 * body: 12011380-120113f7
 */

LRESULT FUN_12011380(HWND param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  LRESULT LVar1;
  
  if (param_2 < 0x10) {
    if ((param_2 == 0xf) || (param_2 == 1)) {
      return 0;
    }
    if (param_2 == 2) {
      LVar1 = DefWindowProcA(param_1,2,param_3,(LPARAM)param_4);
      return LVar1;
    }
  }
  else if (param_2 == 0x111) {
    if ((param_3 & 0xffff) != 0x464) {
      return 0;
    }
    (**(code **)*param_4)();
    *(undefined1 *)(param_4 + 1) = 0;
    return 0;
  }
  LVar1 = DefWindowProcA(param_1,param_2,param_3,(LPARAM)param_4);
  return LVar1;
}


