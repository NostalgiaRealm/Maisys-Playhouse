
/* ==== KERNEL32.DLL::SetLastError @ 140238bc ==== 
 * signature: void __stdcall SetLastError(DWORD dwErrCode)
 * body: 140238bc-140238c1
 * thunk to: KERNEL32.DLL::SetLastError
 */

void SetLastError(DWORD dwErrCode)

{
                    /* WARNING: Could not recover jumptable at 0x140238bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}


