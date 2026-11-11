
/* ==== FUN_00408c86 @ 00408c86 ==== 
 * signature: undefined __cdecl FUN_00408c86(HWND param_1)
 * body: 00408c86-00408d98
 */

void __cdecl FUN_00408c86(HWND param_1)

{
  HANDLE h;
  int iVar1;
  HDC hdc;
  int nDenominator;
  LOGFONTA local_50;
  tagRECT local_14;
  
  GetWindowRect(param_1,&local_14);
  local_14.left = local_14.left + local_14.left / 6;
  local_14.right = local_14.right + local_14.right / 6;
  MoveWindow(param_1,local_14.left,local_14.top,local_14.right - local_14.left,
             local_14.bottom - local_14.top,0);
  if ((DAT_0041385c != 0) && (DAT_00413bf0 != (code *)0x0)) {
    (*DAT_00413bf0)(param_1,0x38);
  }
  if (DAT_00413c48 == (HFONT)0x0) {
    DAT_00413c48 = (HFONT)0x0;
    h = (HANDLE)SendMessageA(param_1,0x31,0,0);
    if (h != (HANDLE)0x0) {
      iVar1 = GetObjectA(h,0x3c,&local_50);
      if (iVar1 != 0) {
        local_50.lfWeight = 300;
        local_50.lfCharSet = DAT_00413854;
        hdc = GetDC(param_1);
        nDenominator = 0x48;
        iVar1 = GetDeviceCaps(hdc,0x5a);
        local_50.lfHeight = MulDiv((uint)DAT_004138a0,iVar1,nDenominator);
        local_50.lfHeight = -local_50.lfHeight;
        ReleaseDC(param_1,hdc);
        if (DAT_00413824 != (LPCSTR)0x0) {
          lstrcpyA(local_50.lfFaceName,DAT_00413824);
        }
        DAT_00413c48 = CreateFontIndirectA(&local_50);
      }
    }
  }
  if (DAT_00413c48 != (HFONT)0x0) {
    EnumChildWindows(param_1,FUN_00408d99,(LPARAM)DAT_00413c48);
  }
  return;
}


