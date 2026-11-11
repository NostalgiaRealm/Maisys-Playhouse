
/* ==== USER32.DLL::IsWindowEnabled @ 5f004a98 ==== 
 * signature: BOOL __stdcall IsWindowEnabled(HWND hWnd)
 * body: 5f004a98-5f004a9d
 * thunk to: USER32.DLL::IsWindowEnabled
 */

BOOL IsWindowEnabled(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowEnabled(hWnd);
  return BVar1;
}


