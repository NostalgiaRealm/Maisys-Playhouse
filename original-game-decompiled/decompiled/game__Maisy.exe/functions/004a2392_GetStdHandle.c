
/* ==== KERNEL32.DLL::GetStdHandle @ 004a2392 ==== 
 * signature: HANDLE __stdcall GetStdHandle(DWORD nStdHandle)
 * body: 004a2392-004a2397
 * thunk to: KERNEL32.DLL::GetStdHandle
 */

HANDLE GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}


