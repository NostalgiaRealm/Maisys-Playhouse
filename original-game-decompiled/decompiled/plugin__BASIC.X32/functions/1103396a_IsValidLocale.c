
/* ==== KERNEL32.DLL::IsValidLocale @ 1103396a ==== 
 * signature: BOOL __stdcall IsValidLocale(LCID Locale, DWORD dwFlags)
 * body: 1103396a-1103396f
 * thunk to: KERNEL32.DLL::IsValidLocale
 */

BOOL IsValidLocale(LCID Locale,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1103396a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsValidLocale(Locale,dwFlags);
  return BVar1;
}


