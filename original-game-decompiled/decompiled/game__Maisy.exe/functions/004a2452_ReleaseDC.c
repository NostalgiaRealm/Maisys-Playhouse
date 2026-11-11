
/* ==== USER32.DLL::ReleaseDC @ 004a2452 ==== 
 * signature: int __stdcall ReleaseDC(HWND hWnd, HDC hDC)
 * body: 004a2452-004a2457
 * thunk to: USER32.DLL::ReleaseDC
 */

int ReleaseDC(HWND hWnd,HDC hDC)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ReleaseDC(hWnd,hDC);
  return iVar1;
}


