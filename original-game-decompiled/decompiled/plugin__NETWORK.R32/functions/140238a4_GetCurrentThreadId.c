
/* ==== KERNEL32.DLL::GetCurrentThreadId @ 140238a4 ==== 
 * signature: DWORD __stdcall GetCurrentThreadId(void)
 * body: 140238a4-140238a9
 * thunk to: KERNEL32.DLL::GetCurrentThreadId
 */

DWORD GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


