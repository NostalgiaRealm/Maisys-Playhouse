
/* ==== USER32.DLL::GetPropA @ 004a261a ==== 
 * signature: HANDLE __stdcall GetPropA(HWND hWnd, LPCSTR lpString)
 * body: 004a261a-004a261f
 * thunk to: USER32.DLL::GetPropA
 */

HANDLE GetPropA(HWND hWnd,LPCSTR lpString)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a261a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetPropA(hWnd,lpString);
  return pvVar1;
}


