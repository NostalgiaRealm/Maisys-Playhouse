
/* ==== FUN_004a2cef @ 004a2cef ==== 
 * signature: undefined __stdcall FUN_004a2cef(void)
 * body: 004a2cef-004a2d3f
 */

void FUN_004a2cef(void)

{
  HWND pHVar1;
  int iVar2;
  HWND__ *hWnd;
  int unaff_EBP;
  HWND unaff_ESI;
  
  pHVar1 = GetParent(unaff_ESI);
  if ((pHVar1 == (HWND)0x0) || (iVar2 = _AfxIsComboBoxControl(pHVar1,2), iVar2 == 0)) {
    ScreenToClient(unaff_ESI,(LPPOINT)(unaff_EBP + -8));
    hWnd = _AfxChildWindowFromPoint(unaff_ESI,*(tagPOINT *)(unaff_EBP + -8));
    if (hWnd != (HWND__ *)0x0) {
      IsWindowEnabled(hWnd);
    }
  }
  return;
}


