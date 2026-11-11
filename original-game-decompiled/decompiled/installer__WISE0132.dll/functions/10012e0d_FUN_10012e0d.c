
/* ==== FUN_10012e0d @ 10012e0d ==== 
 * signature: undefined __cdecl FUN_10012e0d(HWND param_1, int * param_2)
 * body: 10012e0d-10012f5b
 */

void __cdecl FUN_10012e0d(HWND param_1,int *param_2)

{
  HWND hWnd;
  HANDLE h;
  int iVar1;
  HFONT pHVar2;
  int nDenominator;
  LOGFONTA local_54;
  tagRECT local_18;
  HDC local_8;
  
  hWnd = param_1;
  GetWindowRect(param_1,&local_18);
  local_18.left = local_18.left + local_18.left / 6;
  local_18.right = local_18.right + local_18.right / 6;
  MoveWindow(param_1,local_18.left,local_18.top,local_18.right - local_18.left,
             local_18.bottom - local_18.top,0);
  FUN_10012dfb(param_1);
  iVar1 = DAT_10024120;
  if (DAT_10023e90 != 0) {
    if (param_2 == (int *)0x0) {
      param_1 = (HWND)&DAT_10024120;
    }
    else {
      param_1 = (HWND)param_2;
    }
    if (param_1->unused == 0) {
      param_1->unused = 0;
      h = (HANDLE)SendMessageA(hWnd,0x31,0,0);
      if (h != (HANDLE)0x0) {
        iVar1 = GetObjectA(h,0x3c,&local_54);
        if (iVar1 != 0) {
          local_54.lfWeight = 300;
          local_54.lfCharSet = DAT_10023ea9;
          if (DAT_10023ea9 != '\0') {
            local_8 = GetDC(hWnd);
            nDenominator = 0x48;
            iVar1 = GetDeviceCaps(local_8,0x5a);
            iVar1 = MulDiv((uint)DAT_10023910,iVar1,nDenominator);
            ReleaseDC(hWnd,local_8);
            local_54.lfHeight = -iVar1;
            lstrcpyA(local_54.lfFaceName,DAT_10023f08);
          }
          pHVar2 = CreateFontIndirectA(&local_54);
          param_1->unused = (int)pHVar2;
        }
      }
    }
    iVar1 = DAT_10024120;
    if (param_2 == (int *)0x0) {
      if (DAT_10024120 != 0) {
        EnumChildWindows(hWnd,FUN_10012f5c,(LPARAM)hWnd);
        iVar1 = DAT_10024120;
      }
    }
    else {
      DAT_10024120 = *param_2;
      if (DAT_10024120 != 0) {
        EnumChildWindows(hWnd,FUN_10012f5c,(LPARAM)hWnd);
      }
    }
  }
  DAT_10024120 = iVar1;
  return;
}


