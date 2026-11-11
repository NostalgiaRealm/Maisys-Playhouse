
/* ==== FUN_1400d620 @ 1400d620 ==== 
 * signature: LRESULT __stdcall FUN_1400d620(HWND param_1, UINT param_2, WPARAM param_3, uint param_4)
 * body: 1400d620-1400d6c4
 */

LRESULT FUN_1400d620(HWND param_1,UINT param_2,WPARAM param_3,uint param_4)

{
  LONG LVar1;
  LRESULT LVar2;
  uint uVar3;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (param_2 != 0x400) {
    if (param_2 == 0xc) {
      return 0;
    }
    LVar2 = DefWindowProcA(param_1,param_2,param_3,param_4);
    return LVar2;
  }
  if ((short)(param_4 >> 0x10) != 0) {
    return 0;
  }
  uVar3 = param_4 & 0xffff;
  if (uVar3 != 1) {
    if (uVar3 == 8) {
      *(short *)(LVar1 + 4) = *(short *)(LVar1 + 4) + 1;
      return 0;
    }
    if (uVar3 == 0x20) {
      *(WPARAM *)(LVar1 + 0xec + *(short *)(LVar1 + 0x1a) * 4) = param_3;
      *(short *)(LVar1 + 0x1a) = *(short *)(LVar1 + 0x1a) + 1;
      return 0;
    }
    return 0;
  }
  *(WPARAM *)(LVar1 + 0x74 + *(short *)(LVar1 + 8) * 4) = param_3;
  *(short *)(LVar1 + 8) = *(short *)(LVar1 + 8) + 1;
  return 0;
}


