
/* ==== USER32.DLL::RemovePropA @ 004a2614 ==== 
 * signature: HANDLE __stdcall RemovePropA(HWND hWnd, LPCSTR lpString)
 * body: 004a2614-004a2619
 * thunk to: USER32.DLL::RemovePropA
 */

HANDLE RemovePropA(HWND hWnd,LPCSTR lpString)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = RemovePropA(hWnd,lpString);
  return pvVar1;
}


