
/* ==== FUN_004aa3c6 @ 004aa3c6 ==== 
 * signature: CWnd * __fastcall FUN_004aa3c6(int param_1)
 * body: 004aa3c6-004aa3ee
 */

CWnd * __fastcall FUN_004aa3c6(int param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  HWND hWnd;
  
  if ((param_1 == 0) || (pHVar1 = *(HWND *)(param_1 + 0x1c), *(HWND *)(param_1 + 0x1c) == (HWND)0x0)
     ) {
    pCVar2 = (CWnd *)0x0;
  }
  else {
    do {
      hWnd = pHVar1;
      pHVar1 = GetWindow(hWnd,4);
    } while (pHVar1 != (HWND)0x0);
    pCVar2 = CWnd::FromHandle(hWnd);
  }
  return pCVar2;
}


