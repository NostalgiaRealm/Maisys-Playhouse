
/* ==== USER32.DLL::IsIconic @ 004a2764 ==== 
 * signature: BOOL __stdcall IsIconic(HWND hWnd)
 * body: 004a2764-004a2769
 * thunk to: USER32.DLL::IsIconic
 */

BOOL IsIconic(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsIconic(hWnd);
  return BVar1;
}


