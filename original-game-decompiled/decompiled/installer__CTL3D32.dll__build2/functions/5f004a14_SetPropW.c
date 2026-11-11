
/* ==== USER32.DLL::SetPropW @ 5f004a14 ==== 
 * signature: BOOL __stdcall SetPropW(HWND hWnd, LPCWSTR lpString, HANDLE hData)
 * body: 5f004a14-5f004a19
 * thunk to: USER32.DLL::SetPropW
 */

BOOL SetPropW(HWND hWnd,LPCWSTR lpString,HANDLE hData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetPropW(hWnd,lpString,hData);
  return BVar1;
}


