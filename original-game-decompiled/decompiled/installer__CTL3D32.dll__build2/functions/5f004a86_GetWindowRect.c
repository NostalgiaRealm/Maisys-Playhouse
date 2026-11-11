
/* ==== USER32.DLL::GetWindowRect @ 5f004a86 ==== 
 * signature: BOOL __stdcall GetWindowRect(HWND hWnd, LPRECT lpRect)
 * body: 5f004a86-5f004a8b
 * thunk to: USER32.DLL::GetWindowRect
 */

BOOL GetWindowRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowRect(hWnd,lpRect);
  return BVar1;
}


