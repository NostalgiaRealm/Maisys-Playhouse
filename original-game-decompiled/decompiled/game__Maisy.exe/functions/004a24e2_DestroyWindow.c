
/* ==== USER32.DLL::DestroyWindow @ 004a24e2 ==== 
 * signature: BOOL __stdcall DestroyWindow(HWND hWnd)
 * body: 004a24e2-004a24e7
 * thunk to: USER32.DLL::DestroyWindow
 */

BOOL DestroyWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a24e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyWindow(hWnd);
  return BVar1;
}


