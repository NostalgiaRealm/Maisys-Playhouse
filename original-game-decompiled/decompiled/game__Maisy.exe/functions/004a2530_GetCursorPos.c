
/* ==== USER32.DLL::GetCursorPos @ 004a2530 ==== 
 * signature: BOOL __stdcall GetCursorPos(LPPOINT lpPoint)
 * body: 004a2530-004a2535
 * thunk to: USER32.DLL::GetCursorPos
 */

BOOL GetCursorPos(LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCursorPos(lpPoint);
  return BVar1;
}


