
/* ==== USER32.DLL::EndDeferWindowPos @ 004a26b6 ==== 
 * signature: BOOL __stdcall EndDeferWindowPos(HDWP hWinPosInfo)
 * body: 004a26b6-004a26bb
 * thunk to: USER32.DLL::EndDeferWindowPos
 */

BOOL EndDeferWindowPos(HDWP hWinPosInfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a26b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EndDeferWindowPos(hWinPosInfo);
  return BVar1;
}


