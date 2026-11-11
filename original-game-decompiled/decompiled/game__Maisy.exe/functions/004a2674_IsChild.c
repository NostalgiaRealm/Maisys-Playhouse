
/* ==== USER32.DLL::IsChild @ 004a2674 ==== 
 * signature: BOOL __stdcall IsChild(HWND hWndParent, HWND hWnd)
 * body: 004a2674-004a2679
 * thunk to: USER32.DLL::IsChild
 */

BOOL IsChild(HWND hWndParent,HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsChild(hWndParent,hWnd);
  return BVar1;
}


