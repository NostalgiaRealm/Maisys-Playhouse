
/* ==== KERNEL32.DLL::RaiseException @ 004a22f0 ==== 
 * signature: void __stdcall RaiseException(DWORD dwExceptionCode, DWORD dwExceptionFlags, DWORD nNumberOfArguments, ULONG_PTR * lpArguments)
 * body: 004a22f0-004a22f5
 * thunk to: KERNEL32.DLL::RaiseException
 */

void RaiseException(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments,
                   ULONG_PTR *lpArguments)

{
                    /* WARNING: Could not recover jumptable at 0x004a22f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,lpArguments);
  return;
}


