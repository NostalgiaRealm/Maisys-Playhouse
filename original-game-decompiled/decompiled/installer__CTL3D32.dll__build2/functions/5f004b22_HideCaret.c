
/* ==== USER32.DLL::HideCaret @ 5f004b22 ==== 
 * signature: BOOL __stdcall HideCaret(HWND hWnd)
 * body: 5f004b22-5f004b27
 * thunk to: USER32.DLL::HideCaret
 */

BOOL HideCaret(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HideCaret(hWnd);
  return BVar1;
}


