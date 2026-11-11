
/* ==== USER32.DLL::IsWindowUnicode @ 5f004a2c ==== 
 * signature: BOOL __stdcall IsWindowUnicode(HWND hWnd)
 * body: 5f004a2c-5f004a31
 * thunk to: USER32.DLL::IsWindowUnicode
 */

BOOL IsWindowUnicode(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowUnicode(hWnd);
  return BVar1;
}


