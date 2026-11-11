
/* ==== KERNEL32.DLL::GetVersion @ 5f004972 ==== 
 * signature: DWORD __stdcall GetVersion(void)
 * body: 5f004972-5f004977
 * thunk to: KERNEL32.DLL::GetVersion
 */

DWORD GetVersion(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetVersion();
  return DVar1;
}


