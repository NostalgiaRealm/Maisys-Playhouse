
/* ==== USER32.DLL::GetClassNameA @ 5f0049cc ==== 
 * signature: int __stdcall GetClassNameA(HWND hWnd, LPSTR lpClassName, int nMaxCount)
 * body: 5f0049cc-5f0049d1
 * thunk to: USER32.DLL::GetClassNameA
 */

int GetClassNameA(HWND hWnd,LPSTR lpClassName,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClassNameA(hWnd,lpClassName,nMaxCount);
  return iVar1;
}


