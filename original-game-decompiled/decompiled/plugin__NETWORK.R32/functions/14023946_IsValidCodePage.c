
/* ==== KERNEL32.DLL::IsValidCodePage @ 14023946 ==== 
 * signature: BOOL __stdcall IsValidCodePage(UINT CodePage)
 * body: 14023946-1402394b
 * thunk to: KERNEL32.DLL::IsValidCodePage
 */

BOOL IsValidCodePage(UINT CodePage)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsValidCodePage(CodePage);
  return BVar1;
}


