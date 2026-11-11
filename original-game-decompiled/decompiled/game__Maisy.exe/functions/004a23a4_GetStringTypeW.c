
/* ==== KERNEL32.DLL::GetStringTypeW @ 004a23a4 ==== 
 * signature: BOOL __stdcall GetStringTypeW(DWORD dwInfoType, LPCWSTR lpSrcStr, int cchSrc, LPWORD lpCharType)
 * body: 004a23a4-004a23a9
 * thunk to: KERNEL32.DLL::GetStringTypeW
 */

BOOL GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a23a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetStringTypeW(dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return BVar1;
}


