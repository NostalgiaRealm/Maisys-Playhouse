
/* ==== KERNEL32.DLL::GetProfileStringA @ 5f004954 ==== 
 * signature: DWORD __stdcall GetProfileStringA(LPCSTR lpAppName, LPCSTR lpKeyName, LPCSTR lpDefault, LPSTR lpReturnedString, DWORD nSize)
 * body: 5f004954-5f004959
 * thunk to: KERNEL32.DLL::GetProfileStringA
 */

DWORD GetProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpDefault,LPSTR lpReturnedString,
                       DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetProfileStringA(lpAppName,lpKeyName,lpDefault,lpReturnedString,nSize);
  return DVar1;
}


