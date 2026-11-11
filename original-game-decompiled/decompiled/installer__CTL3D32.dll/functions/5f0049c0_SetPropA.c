
/* ==== USER32.DLL::SetPropA @ 5f0049c0 ==== 
 * signature: BOOL __stdcall SetPropA(HWND hWnd, LPCSTR lpString, HANDLE hData)
 * body: 5f0049c0-5f0049c5
 * thunk to: USER32.DLL::SetPropA
 */

BOOL SetPropA(HWND hWnd,LPCSTR lpString,HANDLE hData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetPropA(hWnd,lpString,hData);
  return BVar1;
}


