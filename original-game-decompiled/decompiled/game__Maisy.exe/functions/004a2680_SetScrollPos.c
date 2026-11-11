
/* ==== USER32.DLL::SetScrollPos @ 004a2680 ==== 
 * signature: int __stdcall SetScrollPos(HWND hWnd, int nBar, int nPos, BOOL bRedraw)
 * body: 004a2680-004a2685
 * thunk to: USER32.DLL::SetScrollPos
 */

int SetScrollPos(HWND hWnd,int nBar,int nPos,BOOL bRedraw)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetScrollPos(hWnd,nBar,nPos,bRedraw);
  return iVar1;
}


