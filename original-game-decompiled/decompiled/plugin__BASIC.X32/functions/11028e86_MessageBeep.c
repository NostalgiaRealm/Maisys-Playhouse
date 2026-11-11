
/* ==== USER32.DLL::MessageBeep @ 11028e86 ==== 
 * signature: BOOL __stdcall MessageBeep(UINT uType)
 * body: 11028e86-11028e8b
 * thunk to: USER32.DLL::MessageBeep
 */

BOOL MessageBeep(UINT uType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028e86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MessageBeep(uType);
  return BVar1;
}


