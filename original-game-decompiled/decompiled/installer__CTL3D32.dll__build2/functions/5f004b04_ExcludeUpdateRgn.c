
/* ==== USER32.DLL::ExcludeUpdateRgn @ 5f004b04 ==== 
 * signature: int __stdcall ExcludeUpdateRgn(HDC hDC, HWND hWnd)
 * body: 5f004b04-5f004b09
 * thunk to: USER32.DLL::ExcludeUpdateRgn
 */

int ExcludeUpdateRgn(HDC hDC,HWND hWnd)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ExcludeUpdateRgn(hDC,hWnd);
  return iVar1;
}


