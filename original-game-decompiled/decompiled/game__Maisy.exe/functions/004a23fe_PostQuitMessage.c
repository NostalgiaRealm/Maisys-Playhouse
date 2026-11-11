
/* ==== USER32.DLL::PostQuitMessage @ 004a23fe ==== 
 * signature: void __stdcall PostQuitMessage(int nExitCode)
 * body: 004a23fe-004a2403
 * thunk to: USER32.DLL::PostQuitMessage
 */

void PostQuitMessage(int nExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x004a23fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostQuitMessage(nExitCode);
  return;
}


