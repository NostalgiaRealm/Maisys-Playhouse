
/* ==== USER32.DLL::ReleaseDC @ 5f004a74 ==== 
 * signature: int __stdcall ReleaseDC(HWND hWnd, HDC hDC)
 * body: 5f004a74-5f004a79
 * thunk to: USER32.DLL::ReleaseDC
 */

int ReleaseDC(HWND hWnd,HDC hDC)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ReleaseDC(hWnd,hDC);
  return iVar1;
}


