
/* ==== FUN_100157eb @ 100157eb ==== 
 * signature: UINT __cdecl FUN_100157eb(int param_1, HWND param_2, HWND param_3, HWND param_4)
 * body: 100157eb-10015896
 */

UINT __cdecl FUN_100157eb(int param_1,HWND param_2,HWND param_3,HWND param_4)

{
  HDC hdc;
  HPALETTE pHVar1;
  UINT UVar2;
  
  if (((param_1 == 0x30f) || ((param_1 == 0x311 && (param_4 != param_2)))) &&
     ((DAT_10023f28 != (HPALETTE)0x0 ||
      ((*(int *)(DAT_1002392c + 0x40) != 0 || (*(int *)(DAT_1002392c + 0x3c) != 0)))))) {
    pHVar1 = DAT_10023f28;
    if ((DAT_10023f28 == (HPALETTE)0x0) &&
       (pHVar1 = *(HPALETTE *)(DAT_1002392c + 0x3c), pHVar1 == (HPALETTE)0x0)) {
      pHVar1 = *(HPALETTE *)(DAT_1002392c + 0x40);
    }
    hdc = GetDC(param_2);
    pHVar1 = SelectPalette(hdc,pHVar1,0);
    UVar2 = RealizePalette(hdc);
    if (UVar2 != 0) {
      InvalidateRect(DAT_100238d8,(RECT *)0x0,1);
      InvalidateRect(param_3,(RECT *)0x0,1);
    }
    SelectPalette(hdc,pHVar1,1);
    RealizePalette(hdc);
    ReleaseDC(param_2,hdc);
    return UVar2;
  }
  return 0;
}


