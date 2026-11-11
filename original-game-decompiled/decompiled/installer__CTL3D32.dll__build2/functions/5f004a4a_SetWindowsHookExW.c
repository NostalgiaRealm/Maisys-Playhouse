
/* ==== USER32.DLL::SetWindowsHookExW @ 5f004a4a ==== 
 * signature: HHOOK __stdcall SetWindowsHookExW(int idHook, HOOKPROC lpfn, HINSTANCE hmod, DWORD dwThreadId)
 * body: 5f004a4a-5f004a4f
 * thunk to: USER32.DLL::SetWindowsHookExW
 */

HHOOK SetWindowsHookExW(int idHook,HOOKPROC lpfn,HINSTANCE hmod,DWORD dwThreadId)

{
  HHOOK pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetWindowsHookExW(idHook,lpfn,hmod,dwThreadId);
  return pHVar1;
}


