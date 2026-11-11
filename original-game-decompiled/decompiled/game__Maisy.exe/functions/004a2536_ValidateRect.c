
/* ==== USER32.DLL::ValidateRect @ 004a2536 ==== 
 * signature: BOOL __stdcall ValidateRect(HWND hWnd, RECT * lpRect)
 * body: 004a2536-004a253b
 * thunk to: USER32.DLL::ValidateRect
 */

BOOL ValidateRect(HWND hWnd,RECT *lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ValidateRect(hWnd,lpRect);
  return BVar1;
}


