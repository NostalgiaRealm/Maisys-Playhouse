
/* ==== USER32.DLL::ScrollWindow @ 004a26aa ==== 
 * signature: BOOL __stdcall ScrollWindow(HWND hWnd, int XAmount, int YAmount, RECT * lpRect, RECT * lpClipRect)
 * body: 004a26aa-004a26af
 * thunk to: USER32.DLL::ScrollWindow
 */

BOOL ScrollWindow(HWND hWnd,int XAmount,int YAmount,RECT *lpRect,RECT *lpClipRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a26aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScrollWindow(hWnd,XAmount,YAmount,lpRect,lpClipRect);
  return BVar1;
}


