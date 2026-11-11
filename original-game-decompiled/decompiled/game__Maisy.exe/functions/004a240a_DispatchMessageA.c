
/* ==== USER32.DLL::DispatchMessageA @ 004a240a ==== 
 * signature: LRESULT __stdcall DispatchMessageA(MSG * lpMsg)
 * body: 004a240a-004a240f
 * thunk to: USER32.DLL::DispatchMessageA
 */

LRESULT DispatchMessageA(MSG *lpMsg)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a240a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DispatchMessageA(lpMsg);
  return LVar1;
}


