
/* ==== KERNEL32.DLL::GetCommandLineA @ 14023844 ==== 
 * signature: LPSTR __stdcall GetCommandLineA(void)
 * body: 14023844-14023849
 * thunk to: KERNEL32.DLL::GetCommandLineA
 */

LPSTR GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCommandLineA();
  return pCVar1;
}


