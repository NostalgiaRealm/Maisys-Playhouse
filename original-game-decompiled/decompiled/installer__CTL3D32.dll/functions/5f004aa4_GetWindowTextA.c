
/* ==== USER32.DLL::GetWindowTextA @ 5f004aa4 ==== 
 * signature: int __stdcall GetWindowTextA(HWND hWnd, LPSTR lpString, int nMaxCount)
 * body: 5f004aa4-5f004aa9
 * thunk to: USER32.DLL::GetWindowTextA
 */

int GetWindowTextA(HWND hWnd,LPSTR lpString,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowTextA(hWnd,lpString,nMaxCount);
  return iVar1;
}


