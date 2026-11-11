
/* ==== USER32.DLL::GetKeyboardState @ 004a24dc ==== 
 * signature: BOOL __stdcall GetKeyboardState(PBYTE lpKeyState)
 * body: 004a24dc-004a24e1
 * thunk to: USER32.DLL::GetKeyboardState
 */

BOOL GetKeyboardState(PBYTE lpKeyState)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a24dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetKeyboardState(lpKeyState);
  return BVar1;
}


