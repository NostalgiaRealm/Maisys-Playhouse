
/* ==== USER32.DLL::BringWindowToTop @ 004a24be ==== 
 * signature: BOOL __stdcall BringWindowToTop(HWND hWnd)
 * body: 004a24be-004a24c3
 * thunk to: USER32.DLL::BringWindowToTop
 */

BOOL BringWindowToTop(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a24be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = BringWindowToTop(hWnd);
  return BVar1;
}


