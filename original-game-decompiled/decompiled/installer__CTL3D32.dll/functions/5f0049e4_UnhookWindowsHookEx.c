
/* ==== USER32.DLL::UnhookWindowsHookEx @ 5f0049e4 ==== 
 * signature: BOOL __stdcall UnhookWindowsHookEx(HHOOK hhk)
 * body: 5f0049e4-5f0049e9
 * thunk to: USER32.DLL::UnhookWindowsHookEx
 */

BOOL UnhookWindowsHookEx(HHOOK hhk)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnhookWindowsHookEx(hhk);
  return BVar1;
}


