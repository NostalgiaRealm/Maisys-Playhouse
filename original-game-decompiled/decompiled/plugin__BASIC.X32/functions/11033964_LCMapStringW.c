
/* ==== KERNEL32.DLL::LCMapStringW @ 11033964 ==== 
 * signature: int __stdcall LCMapStringW(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest)
 * body: 11033964-11033969
 * thunk to: KERNEL32.DLL::LCMapStringW
 */

int LCMapStringW(LCID Locale,DWORD dwMapFlags,LPCWSTR lpSrcStr,int cchSrc,LPWSTR lpDestStr,
                int cchDest)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11033964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LCMapStringW(Locale,dwMapFlags,lpSrcStr,cchSrc,lpDestStr,cchDest);
  return iVar1;
}


