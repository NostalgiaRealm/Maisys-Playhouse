
/* ==== FUN_00439880 @ 00439880 ==== 
 * signature: undefined __stdcall FUN_00439880(void)
 * body: 00439880-004398f7
 */

void FUN_00439880(void)

{
  HDC hdc;
  HPALETTE pHVar1;
  
  if (DAT_004db4f8 == '\0') {
    DAT_004db4f8 = '\x01';
    hdc = GetDC((HWND)0x0);
    pHVar1 = CreatePalette((LOGPALETTE *)&DAT_004db010);
    SetSystemPaletteUse(hdc,1);
    if (pHVar1 != (HPALETTE)0x0) {
      pHVar1 = SelectPalette(hdc,pHVar1,0);
      RealizePalette(hdc);
      pHVar1 = SelectPalette(hdc,pHVar1,0);
      DeleteObject(pHVar1);
    }
    ReleaseDC((HWND)0x0,hdc);
    SetSysColors(0x1c,&DAT_004db418,&DAT_004db488);
  }
  return;
}


