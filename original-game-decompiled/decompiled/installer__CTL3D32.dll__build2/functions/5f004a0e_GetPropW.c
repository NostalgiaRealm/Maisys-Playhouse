
/* ==== USER32.DLL::GetPropW @ 5f004a0e ==== 
 * signature: HANDLE __stdcall GetPropW(HWND hWnd, LPCWSTR lpString)
 * body: 5f004a0e-5f004a13
 * thunk to: USER32.DLL::GetPropW
 */

HANDLE GetPropW(HWND hWnd,LPCWSTR lpString)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetPropW(hWnd,lpString);
  return pvVar1;
}


