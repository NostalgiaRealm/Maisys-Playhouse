
/* ==== USER32.DLL::ValidateRect @ 5f004a7a ==== 
 * signature: BOOL __stdcall ValidateRect(HWND hWnd, RECT * lpRect)
 * body: 5f004a7a-5f004a7f
 * thunk to: USER32.DLL::ValidateRect
 */

BOOL ValidateRect(HWND hWnd,RECT *lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ValidateRect(hWnd,lpRect);
  return BVar1;
}


