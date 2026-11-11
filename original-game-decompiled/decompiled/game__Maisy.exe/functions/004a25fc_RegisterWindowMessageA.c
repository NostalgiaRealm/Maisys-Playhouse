
/* ==== USER32.DLL::RegisterWindowMessageA @ 004a25fc ==== 
 * signature: UINT __stdcall RegisterWindowMessageA(LPCSTR lpString)
 * body: 004a25fc-004a2601
 * thunk to: USER32.DLL::RegisterWindowMessageA
 */

UINT RegisterWindowMessageA(LPCSTR lpString)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a25fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RegisterWindowMessageA(lpString);
  return UVar1;
}


