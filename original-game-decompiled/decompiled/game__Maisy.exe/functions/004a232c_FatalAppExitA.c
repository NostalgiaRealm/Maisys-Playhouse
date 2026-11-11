
/* ==== KERNEL32.DLL::FatalAppExitA @ 004a232c ==== 
 * signature: void __stdcall FatalAppExitA(UINT uAction, LPCSTR lpMessageText)
 * body: 004a232c-004a2331
 * thunk to: KERNEL32.DLL::FatalAppExitA
 */

void FatalAppExitA(UINT uAction,LPCSTR lpMessageText)

{
                    /* WARNING: Could not recover jumptable at 0x004a232c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FatalAppExitA(uAction,lpMessageText);
  return;
}


