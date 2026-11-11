
/* ==== KERNEL32.DLL::IsValidLocale @ 004a23bc ==== 
 * signature: BOOL __stdcall IsValidLocale(LCID Locale, DWORD dwFlags)
 * body: 004a23bc-004a23c1
 * thunk to: KERNEL32.DLL::IsValidLocale
 */

BOOL IsValidLocale(LCID Locale,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a23bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsValidLocale(Locale,dwFlags);
  return BVar1;
}


