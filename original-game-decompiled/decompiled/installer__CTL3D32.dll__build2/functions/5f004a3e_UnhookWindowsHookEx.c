
/* ==== USER32.DLL::UnhookWindowsHookEx @ 5f004a3e ==== 
 * signature: BOOL __stdcall UnhookWindowsHookEx(HHOOK hhk)
 * body: 5f004a3e-5f004a43
 * thunk to: USER32.DLL::UnhookWindowsHookEx
 */

BOOL UnhookWindowsHookEx(HHOOK hhk)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnhookWindowsHookEx(hhk);
  return BVar1;
}


