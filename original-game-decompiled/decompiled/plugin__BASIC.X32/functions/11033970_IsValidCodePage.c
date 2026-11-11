
/* ==== KERNEL32.DLL::IsValidCodePage @ 11033970 ==== 
 * signature: BOOL __stdcall IsValidCodePage(UINT CodePage)
 * body: 11033970-11033975
 * thunk to: KERNEL32.DLL::IsValidCodePage
 */

BOOL IsValidCodePage(UINT CodePage)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11033970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsValidCodePage(CodePage);
  return BVar1;
}


