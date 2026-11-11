
/* ==== USER32.DLL::UnhookWindowsHookEx @ 004a2572 ==== 
 * signature: BOOL __stdcall UnhookWindowsHookEx(HHOOK hhk)
 * body: 004a2572-004a2577
 * thunk to: USER32.DLL::UnhookWindowsHookEx
 */

BOOL UnhookWindowsHookEx(HHOOK hhk)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnhookWindowsHookEx(hhk);
  return BVar1;
}


