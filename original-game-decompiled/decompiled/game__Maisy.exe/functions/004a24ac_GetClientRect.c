
/* ==== USER32.DLL::GetClientRect @ 004a24ac ==== 
 * signature: BOOL __stdcall GetClientRect(HWND hWnd, LPRECT lpRect)
 * body: 004a24ac-004a24b1
 * thunk to: USER32.DLL::GetClientRect
 */

BOOL GetClientRect(HWND hWnd,LPRECT lpRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a24ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetClientRect(hWnd,lpRect);
  return BVar1;
}


