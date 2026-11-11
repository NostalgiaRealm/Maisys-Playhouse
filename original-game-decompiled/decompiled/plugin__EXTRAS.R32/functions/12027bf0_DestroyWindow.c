
/* ==== USER32.DLL::DestroyWindow @ 12027bf0 ==== 
 * signature: BOOL __stdcall DestroyWindow(HWND hWnd)
 * body: 12027bf0-12027bf5
 * thunk to: USER32.DLL::DestroyWindow
 */

BOOL DestroyWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyWindow(hWnd);
  return BVar1;
}


