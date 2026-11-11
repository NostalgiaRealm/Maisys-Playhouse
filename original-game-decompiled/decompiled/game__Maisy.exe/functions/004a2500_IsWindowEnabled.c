
/* ==== USER32.DLL::IsWindowEnabled @ 004a2500 ==== 
 * signature: BOOL __stdcall IsWindowEnabled(HWND hWnd)
 * body: 004a2500-004a2505
 * thunk to: USER32.DLL::IsWindowEnabled
 */

BOOL IsWindowEnabled(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowEnabled(hWnd);
  return BVar1;
}


