
/* ==== USER32.DLL::InvalidateRect @ 5f004a6e ==== 
 * signature: BOOL __stdcall InvalidateRect(HWND hWnd, RECT * lpRect, BOOL bErase)
 * body: 5f004a6e-5f004a73
 * thunk to: USER32.DLL::InvalidateRect
 */

BOOL InvalidateRect(HWND hWnd,RECT *lpRect,BOOL bErase)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InvalidateRect(hWnd,lpRect,bErase);
  return BVar1;
}


