
/* ==== KERNEL32.DLL::GetLocaleInfoW @ 11033988 ==== 
 * signature: int __stdcall GetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)
 * body: 11033988-1103398d
 * thunk to: KERNEL32.DLL::GetLocaleInfoW
 */

int GetLocaleInfoW(LCID Locale,LCTYPE LCType,LPWSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11033988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoW(Locale,LCType,lpLCData,cchData);
  return iVar1;
}


