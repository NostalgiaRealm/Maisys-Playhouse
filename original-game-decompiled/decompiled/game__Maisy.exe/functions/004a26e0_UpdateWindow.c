
/* ==== USER32.DLL::UpdateWindow @ 004a26e0 ==== 
 * signature: BOOL __stdcall UpdateWindow(HWND hWnd)
 * body: 004a26e0-004a26e5
 * thunk to: USER32.DLL::UpdateWindow
 */

BOOL UpdateWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a26e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UpdateWindow(hWnd);
  return BVar1;
}


