
/* ==== USER32.DLL::CallNextHookEx @ 5f004a44 ==== 
 * signature: LRESULT __stdcall CallNextHookEx(HHOOK hhk, int nCode, WPARAM wParam, LPARAM lParam)
 * body: 5f004a44-5f004a49
 * thunk to: USER32.DLL::CallNextHookEx
 */

LRESULT CallNextHookEx(HHOOK hhk,int nCode,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = CallNextHookEx(hhk,nCode,wParam,lParam);
  return LVar1;
}


