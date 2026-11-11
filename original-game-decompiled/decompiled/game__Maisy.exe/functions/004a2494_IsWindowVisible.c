
/* ==== USER32.DLL::IsWindowVisible @ 004a2494 ==== 
 * signature: BOOL __stdcall IsWindowVisible(HWND hWnd)
 * body: 004a2494-004a2499
 * thunk to: USER32.DLL::IsWindowVisible
 */

BOOL IsWindowVisible(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowVisible(hWnd);
  return BVar1;
}


