
/* ==== KERNEL32.DLL::IsValidCodePage @ 004a23c2 ==== 
 * signature: BOOL __stdcall IsValidCodePage(UINT CodePage)
 * body: 004a23c2-004a23c7
 * thunk to: KERNEL32.DLL::IsValidCodePage
 */

BOOL IsValidCodePage(UINT CodePage)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a23c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsValidCodePage(CodePage);
  return BVar1;
}


