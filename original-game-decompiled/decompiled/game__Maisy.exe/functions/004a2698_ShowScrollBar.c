
/* ==== USER32.DLL::ShowScrollBar @ 004a2698 ==== 
 * signature: BOOL __stdcall ShowScrollBar(HWND hWnd, int wBar, BOOL bShow)
 * body: 004a2698-004a269d
 * thunk to: USER32.DLL::ShowScrollBar
 */

BOOL ShowScrollBar(HWND hWnd,int wBar,BOOL bShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowScrollBar(hWnd,wBar,bShow);
  return BVar1;
}


