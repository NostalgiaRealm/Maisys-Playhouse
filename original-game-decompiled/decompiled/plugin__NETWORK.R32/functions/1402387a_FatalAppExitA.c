
/* ==== KERNEL32.DLL::FatalAppExitA @ 1402387a ==== 
 * signature: void __stdcall FatalAppExitA(UINT uAction, LPCSTR lpMessageText)
 * body: 1402387a-1402387f
 * thunk to: KERNEL32.DLL::FatalAppExitA
 */

void FatalAppExitA(UINT uAction,LPCSTR lpMessageText)

{
                    /* WARNING: Could not recover jumptable at 0x1402387a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FatalAppExitA(uAction,lpMessageText);
  return;
}


