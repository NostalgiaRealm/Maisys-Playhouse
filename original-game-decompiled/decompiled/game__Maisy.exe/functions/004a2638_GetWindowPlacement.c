
/* ==== USER32.DLL::GetWindowPlacement @ 004a2638 ==== 
 * signature: BOOL __stdcall GetWindowPlacement(HWND hWnd, WINDOWPLACEMENT * lpwndpl)
 * body: 004a2638-004a263d
 * thunk to: USER32.DLL::GetWindowPlacement
 */

BOOL GetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}


