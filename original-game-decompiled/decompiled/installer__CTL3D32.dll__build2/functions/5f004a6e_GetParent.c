
/* ==== USER32.DLL::GetParent @ 5f004a6e ==== 
 * signature: HWND __stdcall GetParent(HWND hWnd)
 * body: 5f004a6e-5f004a73
 * thunk to: USER32.DLL::GetParent
 */

HWND GetParent(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetParent(hWnd);
  return pHVar1;
}


