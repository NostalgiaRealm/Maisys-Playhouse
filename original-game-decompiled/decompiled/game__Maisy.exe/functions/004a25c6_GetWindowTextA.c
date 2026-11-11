
/* ==== USER32.DLL::GetWindowTextA @ 004a25c6 ==== 
 * signature: int __stdcall GetWindowTextA(HWND hWnd, LPSTR lpString, int nMaxCount)
 * body: 004a25c6-004a25cb
 * thunk to: USER32.DLL::GetWindowTextA
 */

int GetWindowTextA(HWND hWnd,LPSTR lpString,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a25c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowTextA(hWnd,lpString,nMaxCount);
  return iVar1;
}


