
/* ==== USER32.DLL::SetWindowTextA @ 004a25c0 ==== 
 * signature: BOOL __stdcall SetWindowTextA(HWND hWnd, LPCSTR lpString)
 * body: 004a25c0-004a25c5
 * thunk to: USER32.DLL::SetWindowTextA
 */

BOOL SetWindowTextA(HWND hWnd,LPCSTR lpString)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a25c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowTextA(hWnd,lpString);
  return BVar1;
}


