
/* ==== USER32.DLL::GetMessageTime @ 004a2608 ==== 
 * signature: LONG __stdcall GetMessageTime(void)
 * body: 004a2608-004a260d
 * thunk to: USER32.DLL::GetMessageTime
 */

LONG GetMessageTime(void)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetMessageTime();
  return LVar1;
}


