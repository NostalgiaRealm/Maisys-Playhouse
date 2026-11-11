
/* ==== KERNEL32.DLL::GetStringTypeExA @ 004a2278 ==== 
 * signature: BOOL __stdcall GetStringTypeExA(LCID Locale, DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, LPWORD lpCharType)
 * body: 004a2278-004a227d
 * thunk to: KERNEL32.DLL::GetStringTypeExA
 */

BOOL GetStringTypeExA(LCID Locale,DWORD dwInfoType,LPCSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetStringTypeExA(Locale,dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return BVar1;
}


