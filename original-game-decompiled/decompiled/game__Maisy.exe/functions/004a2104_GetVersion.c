
/* ==== KERNEL32.DLL::GetVersion @ 004a2104 ==== 
 * signature: DWORD __stdcall GetVersion(void)
 * body: 004a2104-004a2109
 * thunk to: KERNEL32.DLL::GetVersion
 */

DWORD GetVersion(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetVersion();
  return DVar1;
}


