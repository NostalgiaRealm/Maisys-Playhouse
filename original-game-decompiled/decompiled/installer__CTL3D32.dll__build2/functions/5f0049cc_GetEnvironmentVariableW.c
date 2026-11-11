
/* ==== KERNEL32.DLL::GetEnvironmentVariableW @ 5f0049cc ==== 
 * signature: DWORD __stdcall GetEnvironmentVariableW(LPCWSTR lpName, LPWSTR lpBuffer, DWORD nSize)
 * body: 5f0049cc-5f0049d1
 * thunk to: KERNEL32.DLL::GetEnvironmentVariableW
 */

DWORD GetEnvironmentVariableW(LPCWSTR lpName,LPWSTR lpBuffer,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetEnvironmentVariableW(lpName,lpBuffer,nSize);
  return DVar1;
}


