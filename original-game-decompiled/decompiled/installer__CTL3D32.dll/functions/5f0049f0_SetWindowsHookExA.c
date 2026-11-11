
/* ==== USER32.DLL::SetWindowsHookExA @ 5f0049f0 ==== 
 * signature: HHOOK __stdcall SetWindowsHookExA(int idHook, HOOKPROC lpfn, HINSTANCE hmod, DWORD dwThreadId)
 * body: 5f0049f0-5f0049f5
 * thunk to: USER32.DLL::SetWindowsHookExA
 */

HHOOK SetWindowsHookExA(int idHook,HOOKPROC lpfn,HINSTANCE hmod,DWORD dwThreadId)

{
  HHOOK pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetWindowsHookExA(idHook,lpfn,hmod,dwThreadId);
  return pHVar1;
}


