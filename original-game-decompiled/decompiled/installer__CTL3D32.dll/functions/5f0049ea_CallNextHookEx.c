
/* ==== USER32.DLL::CallNextHookEx @ 5f0049ea ==== 
 * signature: LRESULT __stdcall CallNextHookEx(HHOOK hhk, int nCode, WPARAM wParam, LPARAM lParam)
 * body: 5f0049ea-5f0049ef
 * thunk to: USER32.DLL::CallNextHookEx
 */

LRESULT CallNextHookEx(HHOOK hhk,int nCode,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = CallNextHookEx(hhk,nCode,wParam,lParam);
  return LVar1;
}


