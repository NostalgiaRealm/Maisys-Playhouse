
/* ==== KERNEL32.DLL::GetUserDefaultLCID @ 004a23c8 ==== 
 * signature: LCID __stdcall GetUserDefaultLCID(void)
 * body: 004a23c8-004a23cd
 * thunk to: KERNEL32.DLL::GetUserDefaultLCID
 */

LCID GetUserDefaultLCID(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a23c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetUserDefaultLCID();
  return LVar1;
}


