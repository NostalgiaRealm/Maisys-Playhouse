
/* ==== USER32.DLL::SetScrollInfo @ 004a269e ==== 
 * signature: int __stdcall SetScrollInfo(HWND hwnd, int nBar, LPCSCROLLINFO lpsi, BOOL redraw)
 * body: 004a269e-004a26a3
 * thunk to: USER32.DLL::SetScrollInfo
 */

int SetScrollInfo(HWND hwnd,int nBar,LPCSCROLLINFO lpsi,BOOL redraw)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a269e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetScrollInfo(hwnd,nBar,lpsi,redraw);
  return iVar1;
}


