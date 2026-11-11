
/* ==== USER32.DLL::ShowCaret @ 5f004b16 ==== 
 * signature: BOOL __stdcall ShowCaret(HWND hWnd)
 * body: 5f004b16-5f004b1b
 * thunk to: USER32.DLL::ShowCaret
 */

BOOL ShowCaret(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowCaret(hWnd);
  return BVar1;
}


