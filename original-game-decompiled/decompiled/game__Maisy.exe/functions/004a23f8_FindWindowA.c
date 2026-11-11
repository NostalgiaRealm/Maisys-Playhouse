
/* ==== USER32.DLL::FindWindowA @ 004a23f8 ==== 
 * signature: HWND __stdcall FindWindowA(LPCSTR lpClassName, LPCSTR lpWindowName)
 * body: 004a23f8-004a23fd
 * thunk to: USER32.DLL::FindWindowA
 */

HWND FindWindowA(LPCSTR lpClassName,LPCSTR lpWindowName)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a23f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindWindowA(lpClassName,lpWindowName);
  return pHVar1;
}


