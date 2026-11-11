
/* ==== KERNEL32.DLL::GetVersion @ 1103386e ==== 
 * signature: DWORD __stdcall GetVersion(void)
 * body: 1103386e-11033873
 * thunk to: KERNEL32.DLL::GetVersion
 */

DWORD GetVersion(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1103386e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetVersion();
  return DVar1;
}


