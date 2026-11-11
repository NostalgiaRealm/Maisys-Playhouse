
/* ==== USER32.DLL::GetKeyState @ 004a2470 ==== 
 * signature: SHORT __stdcall GetKeyState(int nVirtKey)
 * body: 004a2470-004a2475
 * thunk to: USER32.DLL::GetKeyState
 */

SHORT GetKeyState(int nVirtKey)

{
  SHORT SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GetKeyState(nVirtKey);
  return SVar1;
}


