
/* ==== USER32.DLL::MoveWindow @ 004a249a ==== 
 * signature: BOOL __stdcall MoveWindow(HWND hWnd, int X, int Y, int nWidth, int nHeight, BOOL bRepaint)
 * body: 004a249a-004a249f
 * thunk to: USER32.DLL::MoveWindow
 */

BOOL MoveWindow(HWND hWnd,int X,int Y,int nWidth,int nHeight,BOOL bRepaint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a249a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveWindow(hWnd,X,Y,nWidth,nHeight,bRepaint);
  return BVar1;
}


