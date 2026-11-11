
/* ==== KERNEL32.DLL::SetLastError @ 1103388c ==== 
 * signature: void __stdcall SetLastError(DWORD dwErrCode)
 * body: 1103388c-11033891
 * thunk to: KERNEL32.DLL::SetLastError
 */

void SetLastError(DWORD dwErrCode)

{
                    /* WARNING: Could not recover jumptable at 0x1103388c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}


