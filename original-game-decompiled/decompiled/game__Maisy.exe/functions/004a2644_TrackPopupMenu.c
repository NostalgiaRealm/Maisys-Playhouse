
/* ==== USER32.DLL::TrackPopupMenu @ 004a2644 ==== 
 * signature: BOOL __stdcall TrackPopupMenu(HMENU hMenu, UINT uFlags, int x, int y, int nReserved, HWND hWnd, RECT * prcRect)
 * body: 004a2644-004a2649
 * thunk to: USER32.DLL::TrackPopupMenu
 */

BOOL TrackPopupMenu(HMENU hMenu,UINT uFlags,int x,int y,int nReserved,HWND hWnd,RECT *prcRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TrackPopupMenu(hMenu,uFlags,x,y,nReserved,hWnd,prcRect);
  return BVar1;
}


