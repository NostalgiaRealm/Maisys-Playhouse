
/* ==== USER32.DLL::wvsprintfA @ 004a2704 ==== 
 * signature: int __stdcall wvsprintfA(LPSTR param_1, LPCSTR param_2, va_list arglist)
 * body: 004a2704-004a2709
 * thunk to: USER32.DLL::wvsprintfA
 */

int wvsprintfA(LPSTR param_1,LPCSTR param_2,va_list arglist)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = wvsprintfA(param_1,param_2,arglist);
  return iVar1;
}


