
/* ==== USER32.DLL::GetClientRect @ 5f004a5c ==== 
 * signature: BOOL __stdcall GetClientRect(HWND hWnd, LPRECT lpRect)
 * body: 5f004a5c-5f004a61
 * thunk to: USER32.DLL::GetClientRect
 */

BOOL GetClientRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClientRect(hWnd,lpRect);
  return BVar1;
}


