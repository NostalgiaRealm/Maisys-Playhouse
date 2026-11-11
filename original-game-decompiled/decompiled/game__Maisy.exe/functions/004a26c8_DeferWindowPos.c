
/* ==== USER32.DLL::DeferWindowPos @ 004a26c8 ==== 
 * signature: HDWP __stdcall DeferWindowPos(HDWP hWinPosInfo, HWND hWnd, HWND hWndInsertAfter, int x, int y, int cx, int cy, UINT uFlags)
 * body: 004a26c8-004a26cd
 * thunk to: USER32.DLL::DeferWindowPos
 */

HDWP DeferWindowPos(HDWP hWinPosInfo,HWND hWnd,HWND hWndInsertAfter,int x,int y,int cx,int cy,
                   UINT uFlags)

{
  HDWP pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a26c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = DeferWindowPos(hWinPosInfo,hWnd,hWndInsertAfter,x,y,cx,cy,uFlags);
  return pvVar1;
}


