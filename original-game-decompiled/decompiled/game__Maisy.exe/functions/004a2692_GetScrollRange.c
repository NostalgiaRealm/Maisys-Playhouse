
/* ==== USER32.DLL::GetScrollRange @ 004a2692 ==== 
 * signature: BOOL __stdcall GetScrollRange(HWND hWnd, int nBar, LPINT lpMinPos, LPINT lpMaxPos)
 * body: 004a2692-004a2697
 * thunk to: USER32.DLL::GetScrollRange
 */

BOOL GetScrollRange(HWND hWnd,int nBar,LPINT lpMinPos,LPINT lpMaxPos)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetScrollRange(hWnd,nBar,lpMinPos,lpMaxPos);
  return BVar1;
}


