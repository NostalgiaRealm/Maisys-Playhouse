
/* ==== USER32.DLL::GetClassNameA @ 004a2770 ==== 
 * signature: int __stdcall GetClassNameA(HWND hWnd, LPSTR lpClassName, int nMaxCount)
 * body: 004a2770-004a2775
 * thunk to: USER32.DLL::GetClassNameA
 */

int GetClassNameA(HWND hWnd,LPSTR lpClassName,int nMaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClassNameA(hWnd,lpClassName,nMaxCount);
  return iVar1;
}


