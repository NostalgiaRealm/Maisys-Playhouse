
/* ==== USER32.DLL::DestroyWindow @ 140183a6 ==== 
 * signature: BOOL __stdcall DestroyWindow(HWND hWnd)
 * body: 140183a6-140183ab
 * thunk to: USER32.DLL::DestroyWindow
 */

BOOL DestroyWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140183a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyWindow(hWnd);
  return BVar1;
}


