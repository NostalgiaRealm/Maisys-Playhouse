
/* ==== Ctl3dCtlColorEx @ 5f001d10 ==== 
 * signature: undefined4 __stdcall Ctl3dCtlColorEx(uint param_1, HDC param_2, HWND param_3)
 * body: 5f001d10-5f001d91
 */

undefined4 Ctl3dCtlColorEx(uint param_1,HDC param_2,HWND param_3)

{
  HWND pHVar1;
  LONG LVar2;
  
                    /* 0x1d10  18  Ctl3dCtlColorEx */
  if (((DAT_5f005130 == 0) || (param_1 < 0x134)) || (param_1 == 0x137)) {
    return 0;
  }
  if (param_1 == 0x134) {
    if (DAT_5f005150 < 0x35f) {
      pHVar1 = GetWindow(param_3,5);
      if (pHVar1 != (HWND)0x0) {
        LVar2 = GetWindowLongA(param_3,-0x10);
        if (((byte)LVar2 & 3) != 3) goto LAB_5f001d64;
      }
    }
    return 0;
  }
LAB_5f001d64:
  SetTextColor(param_2,DAT_5f005160);
  SetBkColor(param_2,DAT_5f005158);
  return DAT_5f005178;
}


