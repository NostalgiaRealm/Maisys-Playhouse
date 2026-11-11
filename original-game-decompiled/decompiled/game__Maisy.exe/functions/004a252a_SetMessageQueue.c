
/* ==== USER32.DLL::SetMessageQueue @ 004a252a ==== 
 * signature: BOOL __stdcall SetMessageQueue(int cMessagesMax)
 * body: 004a252a-004a252f
 * thunk to: USER32.DLL::SetMessageQueue
 */

BOOL SetMessageQueue(int cMessagesMax)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a252a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetMessageQueue(cMessagesMax);
  return BVar1;
}


