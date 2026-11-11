
/* ==== KERNEL32.DLL::SetLastError @ 004a211c ==== 
 * signature: void __stdcall SetLastError(DWORD dwErrCode)
 * body: 004a211c-004a2121
 * thunk to: KERNEL32.DLL::SetLastError
 */

void SetLastError(DWORD dwErrCode)

{
                    /* WARNING: Could not recover jumptable at 0x004a211c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}


