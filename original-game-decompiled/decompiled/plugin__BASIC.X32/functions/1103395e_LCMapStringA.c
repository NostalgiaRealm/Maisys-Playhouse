
/* ==== KERNEL32.DLL::LCMapStringA @ 1103395e ==== 
 * signature: int __stdcall LCMapStringA(LCID Locale, DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, LPSTR lpDestStr, int cchDest)
 * body: 1103395e-11033963
 * thunk to: KERNEL32.DLL::LCMapStringA
 */

int LCMapStringA(LCID Locale,DWORD dwMapFlags,LPCSTR lpSrcStr,int cchSrc,LPSTR lpDestStr,int cchDest
                )

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1103395e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LCMapStringA(Locale,dwMapFlags,lpSrcStr,cchSrc,lpDestStr,cchDest);
  return iVar1;
}


