
/* ==== USER32.DLL::IsWindowUnicode @ 5f0049d2 ==== 
 * signature: BOOL __stdcall IsWindowUnicode(HWND hWnd)
 * body: 5f0049d2-5f0049d7
 * thunk to: USER32.DLL::IsWindowUnicode
 */

BOOL IsWindowUnicode(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowUnicode(hWnd);
  return BVar1;
}


