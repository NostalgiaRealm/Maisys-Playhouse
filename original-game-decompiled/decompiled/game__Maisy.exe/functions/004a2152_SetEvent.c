
/* ==== KERNEL32.DLL::SetEvent @ 004a2152 ==== 
 * signature: BOOL __stdcall SetEvent(HANDLE hEvent)
 * body: 004a2152-004a2157
 * thunk to: KERNEL32.DLL::SetEvent
 */

BOOL SetEvent(HANDLE hEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEvent(hEvent);
  return BVar1;
}


