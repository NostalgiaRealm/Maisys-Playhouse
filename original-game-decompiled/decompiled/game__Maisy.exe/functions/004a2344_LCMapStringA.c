
/* ==== KERNEL32.DLL::LCMapStringA @ 004a2344 ==== 
 * signature: int __stdcall LCMapStringA(LCID Locale, DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, LPSTR lpDestStr, int cchDest)
 * body: 004a2344-004a2349
 * thunk to: KERNEL32.DLL::LCMapStringA
 */

int LCMapStringA(LCID Locale,DWORD dwMapFlags,LPCSTR lpSrcStr,int cchSrc,LPSTR lpDestStr,int cchDest
                )

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LCMapStringA(Locale,dwMapFlags,lpSrcStr,cchSrc,lpDestStr,cchDest);
  return iVar1;
}


