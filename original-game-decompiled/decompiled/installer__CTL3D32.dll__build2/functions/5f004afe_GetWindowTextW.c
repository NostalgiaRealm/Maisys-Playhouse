
/* ==== USER32.DLL::GetWindowTextW @ 5f004afe ==== 
 * signature: int __stdcall GetWindowTextW(HWND hWnd, LPWSTR lpString, int nMaxCount)
 * body: 5f004afe-5f004b03
 * thunk to: USER32.DLL::GetWindowTextW
 */

int GetWindowTextW(HWND hWnd,LPWSTR lpString,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004afe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowTextW(hWnd,lpString,nMaxCount);
  return iVar1;
}


