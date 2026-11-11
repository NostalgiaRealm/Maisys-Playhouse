
/* ==== KERNEL32.DLL::GetThreadLocale @ 004a227e ==== 
 * signature: LCID __stdcall GetThreadLocale(void)
 * body: 004a227e-004a2283
 * thunk to: KERNEL32.DLL::GetThreadLocale
 */

LCID GetThreadLocale(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a227e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetThreadLocale();
  return LVar1;
}


