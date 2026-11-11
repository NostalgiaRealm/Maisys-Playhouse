
/* ==== USER32.DLL::EnableWindow @ 004a241c ==== 
 * signature: BOOL __stdcall EnableWindow(HWND hWnd, BOOL bEnable)
 * body: 004a241c-004a2421
 * thunk to: USER32.DLL::EnableWindow
 */

BOOL EnableWindow(HWND hWnd,BOOL bEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a241c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableWindow(hWnd,bEnable);
  return BVar1;
}


