
/* ==== KERNEL32.DLL::GetUserDefaultLCID @ 1402394c ==== 
 * signature: LCID __stdcall GetUserDefaultLCID(void)
 * body: 1402394c-14023951
 * thunk to: KERNEL32.DLL::GetUserDefaultLCID
 */

LCID GetUserDefaultLCID(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402394c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetUserDefaultLCID();
  return LVar1;
}


