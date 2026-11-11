
/* ==== USER32.DLL::RemovePropW @ 5f004a50 ==== 
 * signature: HANDLE __stdcall RemovePropW(HWND hWnd, LPCWSTR lpString)
 * body: 5f004a50-5f004a55
 * thunk to: USER32.DLL::RemovePropW
 */

HANDLE RemovePropW(HWND hWnd,LPCWSTR lpString)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = RemovePropW(hWnd,lpString);
  return pvVar1;
}


