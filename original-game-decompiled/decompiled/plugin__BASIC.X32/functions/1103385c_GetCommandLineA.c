
/* ==== KERNEL32.DLL::GetCommandLineA @ 1103385c ==== 
 * signature: LPSTR __stdcall GetCommandLineA(void)
 * body: 1103385c-11033861
 * thunk to: KERNEL32.DLL::GetCommandLineA
 */

LPSTR GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1103385c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCommandLineA();
  return pCVar1;
}


