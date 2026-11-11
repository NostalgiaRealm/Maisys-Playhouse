
/* ==== KERNEL32.DLL::GetLocaleInfoW @ 14023964 ==== 
 * signature: int __stdcall GetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)
 * body: 14023964-14023969
 * thunk to: KERNEL32.DLL::GetLocaleInfoW
 */

int GetLocaleInfoW(LCID Locale,LCTYPE LCType,LPWSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoW(Locale,LCType,lpLCData,cchData);
  return iVar1;
}


