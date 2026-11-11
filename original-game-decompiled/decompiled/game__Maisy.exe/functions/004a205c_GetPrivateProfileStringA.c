
/* ==== KERNEL32.DLL::GetPrivateProfileStringA @ 004a205c ==== 
 * signature: DWORD __stdcall GetPrivateProfileStringA(LPCSTR lpAppName, LPCSTR lpKeyName, LPCSTR lpDefault, LPSTR lpReturnedString, DWORD nSize, LPCSTR lpFileName)
 * body: 004a205c-004a2061
 * thunk to: KERNEL32.DLL::GetPrivateProfileStringA
 */

DWORD GetPrivateProfileStringA
                (LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpDefault,LPSTR lpReturnedString,
                DWORD nSize,LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a205c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,lpReturnedString,nSize,lpFileName);
  return DVar1;
}


