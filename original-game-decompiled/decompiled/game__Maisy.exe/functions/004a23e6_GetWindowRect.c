
/* ==== USER32.DLL::GetWindowRect @ 004a23e6 ==== 
 * signature: BOOL __stdcall GetWindowRect(HWND hWnd, LPRECT lpRect)
 * body: 004a23e6-004a23eb
 * thunk to: USER32.DLL::GetWindowRect
 */

BOOL GetWindowRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a23e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowRect(hWnd,lpRect);
  return BVar1;
}


