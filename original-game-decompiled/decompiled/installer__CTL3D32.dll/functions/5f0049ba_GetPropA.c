
/* ==== USER32.DLL::GetPropA @ 5f0049ba ==== 
 * signature: HANDLE __stdcall GetPropA(HWND hWnd, LPCSTR lpString)
 * body: 5f0049ba-5f0049bf
 * thunk to: USER32.DLL::GetPropA
 */

HANDLE GetPropA(HWND hWnd,LPCSTR lpString)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetPropA(hWnd,lpString);
  return pvVar1;
}


