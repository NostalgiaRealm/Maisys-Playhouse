
/* ==== KERNEL32.DLL::GetProfileStringW @ 5f0049a8 ==== 
 * signature: DWORD __stdcall GetProfileStringW(LPCWSTR lpAppName, LPCWSTR lpKeyName, LPCWSTR lpDefault, LPWSTR lpReturnedString, DWORD nSize)
 * body: 5f0049a8-5f0049ad
 * thunk to: KERNEL32.DLL::GetProfileStringW
 */

DWORD GetProfileStringW(LPCWSTR lpAppName,LPCWSTR lpKeyName,LPCWSTR lpDefault,
                       LPWSTR lpReturnedString,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetProfileStringW(lpAppName,lpKeyName,lpDefault,lpReturnedString,nSize);
  return DVar1;
}


