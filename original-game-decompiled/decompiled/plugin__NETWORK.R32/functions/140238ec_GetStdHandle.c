
/* ==== KERNEL32.DLL::GetStdHandle @ 140238ec ==== 
 * signature: HANDLE __stdcall GetStdHandle(DWORD nStdHandle)
 * body: 140238ec-140238f1
 * thunk to: KERNEL32.DLL::GetStdHandle
 */

HANDLE GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}


