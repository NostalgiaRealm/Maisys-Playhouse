
/* ==== USER32.DLL::TabbedTextOutA @ 004a271c ==== 
 * signature: LONG __stdcall TabbedTextOutA(HDC hdc, int x, int y, LPCSTR lpString, int chCount, int nTabPositions, INT * lpnTabStopPositions, int nTabOrigin)
 * body: 004a271c-004a2721
 * thunk to: USER32.DLL::TabbedTextOutA
 */

LONG TabbedTextOutA(HDC hdc,int x,int y,LPCSTR lpString,int chCount,int nTabPositions,
                   INT *lpnTabStopPositions,int nTabOrigin)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a271c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = TabbedTextOutA(hdc,x,y,lpString,chCount,nTabPositions,lpnTabStopPositions,nTabOrigin);
  return LVar1;
}


