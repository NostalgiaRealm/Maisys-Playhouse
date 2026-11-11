
/* ==== USER32.DLL::SetScrollRange @ 004a268c ==== 
 * signature: BOOL __stdcall SetScrollRange(HWND hWnd, int nBar, int nMinPos, int nMaxPos, BOOL bRedraw)
 * body: 004a268c-004a2691
 * thunk to: USER32.DLL::SetScrollRange
 */

BOOL SetScrollRange(HWND hWnd,int nBar,int nMinPos,int nMaxPos,BOOL bRedraw)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a268c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetScrollRange(hWnd,nBar,nMinPos,nMaxPos,bRedraw);
  return BVar1;
}


