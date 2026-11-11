
/* ==== KERNEL32.DLL::GetUserDefaultLCID @ 11033976 ==== 
 * signature: LCID __stdcall GetUserDefaultLCID(void)
 * body: 11033976-1103397b
 * thunk to: KERNEL32.DLL::GetUserDefaultLCID
 */

LCID GetUserDefaultLCID(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11033976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetUserDefaultLCID();
  return LVar1;
}


