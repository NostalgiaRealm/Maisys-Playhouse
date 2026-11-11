
/* ==== USER32.DLL::GetClassNameW @ 5f004a26 ==== 
 * signature: int __stdcall GetClassNameW(HWND hWnd, LPWSTR lpClassName, int nMaxCount)
 * body: 5f004a26-5f004a2b
 * thunk to: USER32.DLL::GetClassNameW
 */

int GetClassNameW(HWND hWnd,LPWSTR lpClassName,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClassNameW(hWnd,lpClassName,nMaxCount);
  return iVar1;
}


