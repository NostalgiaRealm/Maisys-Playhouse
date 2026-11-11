
/* ==== USER32.DLL::IsIconic @ 5f004a92 ==== 
 * signature: BOOL __stdcall IsIconic(HWND hWnd)
 * body: 5f004a92-5f004a97
 * thunk to: USER32.DLL::IsIconic
 */

BOOL IsIconic(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsIconic(hWnd);
  return BVar1;
}


