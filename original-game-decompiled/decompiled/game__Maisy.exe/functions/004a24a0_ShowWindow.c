
/* ==== USER32.DLL::ShowWindow @ 004a24a0 ==== 
 * signature: BOOL __stdcall ShowWindow(HWND hWnd, int nCmdShow)
 * body: 004a24a0-004a24a5
 * thunk to: USER32.DLL::ShowWindow
 */

BOOL ShowWindow(HWND hWnd,int nCmdShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a24a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowWindow(hWnd,nCmdShow);
  return BVar1;
}


