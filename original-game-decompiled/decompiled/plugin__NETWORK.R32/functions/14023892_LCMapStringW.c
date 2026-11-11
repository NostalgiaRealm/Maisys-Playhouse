
/* ==== KERNEL32.DLL::LCMapStringW @ 14023892 ==== 
 * signature: int __stdcall LCMapStringW(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest)
 * body: 14023892-14023897
 * thunk to: KERNEL32.DLL::LCMapStringW
 */

int LCMapStringW(LCID Locale,DWORD dwMapFlags,LPCWSTR lpSrcStr,int cchSrc,LPWSTR lpDestStr,
                int cchDest)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LCMapStringW(Locale,dwMapFlags,lpSrcStr,cchSrc,lpDestStr,cchDest);
  return iVar1;
}


