
/* ==== USER32.DLL::SetWindowPlacement @ 004a263e ==== 
 * signature: BOOL __stdcall SetWindowPlacement(HWND hWnd, WINDOWPLACEMENT * lpwndpl)
 * body: 004a263e-004a2643
 * thunk to: USER32.DLL::SetWindowPlacement
 */

BOOL SetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a263e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}


