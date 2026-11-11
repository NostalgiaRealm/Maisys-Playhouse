
/* ==== KERNEL32.DLL::GetTickCount @ 11028e62 ==== 
 * signature: DWORD __stdcall GetTickCount(void)
 * body: 11028e62-11028e67
 * thunk to: KERNEL32.DLL::GetTickCount
 */

DWORD GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028e62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}


