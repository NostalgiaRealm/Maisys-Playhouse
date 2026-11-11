
/* ==== KERNEL32.DLL::GetLocaleInfoW @ 004a2362 ==== 
 * signature: int __stdcall GetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)
 * body: 004a2362-004a2367
 * thunk to: KERNEL32.DLL::GetLocaleInfoW
 */

int GetLocaleInfoW(LCID Locale,LCTYPE LCType,LPWSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoW(Locale,LCType,lpLCData,cchData);
  return iVar1;
}


