
/* ==== USER32.DLL::MessageBeep @ 004a247c ==== 
 * signature: BOOL __stdcall MessageBeep(UINT uType)
 * body: 004a247c-004a2481
 * thunk to: USER32.DLL::MessageBeep
 */

BOOL MessageBeep(UINT uType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a247c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MessageBeep(uType);
  return BVar1;
}


