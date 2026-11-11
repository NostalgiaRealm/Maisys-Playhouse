
/* ==== USER32.DLL::GetParent @ 004a248e ==== 
 * signature: HWND __stdcall GetParent(HWND hWnd)
 * body: 004a248e-004a2493
 * thunk to: USER32.DLL::GetParent
 */

HWND GetParent(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a248e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetParent(hWnd);
  return pHVar1;
}


