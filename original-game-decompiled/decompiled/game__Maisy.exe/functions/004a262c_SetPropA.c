
/* ==== USER32.DLL::SetPropA @ 004a262c ==== 
 * signature: BOOL __stdcall SetPropA(HWND hWnd, LPCSTR lpString, HANDLE hData)
 * body: 004a262c-004a2631
 * thunk to: USER32.DLL::SetPropA
 */

BOOL SetPropA(HWND hWnd,LPCSTR lpString,HANDLE hData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a262c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetPropA(hWnd,lpString,hData);
  return BVar1;
}


