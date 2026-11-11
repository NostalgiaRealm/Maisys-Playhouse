
/* ==== KERNEL32.DLL::GetCommandLineA @ 004a22ea ==== 
 * signature: LPSTR __stdcall GetCommandLineA(void)
 * body: 004a22ea-004a22ef
 * thunk to: KERNEL32.DLL::GetCommandLineA
 */

LPSTR GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a22ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCommandLineA();
  return pCVar1;
}


