
/* ==== USER32.DLL::MessageBoxA @ 5f004abc ==== 
 * signature: int __stdcall MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType)
 * body: 5f004abc-5f004ac1
 * thunk to: USER32.DLL::MessageBoxA
 */

int MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MessageBoxA(hWnd,lpText,lpCaption,uType);
  return iVar1;
}


