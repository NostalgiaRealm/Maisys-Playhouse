
/* ==== FUN_00409e03 @ 00409e03 ==== 
 * signature: HBITMAP __cdecl FUN_00409e03(uint param_1, undefined4 * param_2)
 * body: 00409e03-00409e9c
 */

HBITMAP __cdecl FUN_00409e03(uint param_1,undefined4 *param_2)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  BITMAPINFOHEADER *pbmi;
  HDC hdc;
  HPALETTE hPal;
  HBITMAP pHVar1;
  
  pHVar1 = (HBITMAP)0x0;
  hResInfo = FindResourceA(DAT_00413bd0,(LPCSTR)(param_1 & 0xffff),(LPCSTR)0x2);
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource(DAT_00413bd0,hResInfo);
    pbmi = LockResource(hResData);
    hdc = GetDC((HWND)0x0);
    hPal = FUN_00409e9d((int)pbmi,(WORD *)&param_1);
    *param_2 = hPal;
    if (hPal != (HPALETTE)0x0) {
      SelectPalette(hdc,hPal,0);
      RealizePalette(hdc);
    }
    pHVar1 = CreateDIBitmap(hdc,pbmi,4,(void *)((int)&pbmi->biSize + pbmi->biSize + param_1 * 4),
                            (BITMAPINFO *)pbmi,0);
    ReleaseDC((HWND)0x0,hdc);
    FreeResource(hResData);
  }
  return pHVar1;
}


