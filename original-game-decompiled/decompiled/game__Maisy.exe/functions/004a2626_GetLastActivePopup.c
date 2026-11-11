
/* ==== USER32.DLL::GetLastActivePopup @ 004a2626 ==== 
 * signature: HWND __stdcall GetLastActivePopup(HWND hWnd)
 * body: 004a2626-004a262b
 * thunk to: USER32.DLL::GetLastActivePopup
 */

HWND GetLastActivePopup(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetLastActivePopup(hWnd);
  return pHVar1;
}


