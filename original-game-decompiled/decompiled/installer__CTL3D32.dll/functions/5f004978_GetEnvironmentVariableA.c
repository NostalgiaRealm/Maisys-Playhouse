
/* ==== KERNEL32.DLL::GetEnvironmentVariableA @ 5f004978 ==== 
 * signature: DWORD __stdcall GetEnvironmentVariableA(LPCSTR lpName, LPSTR lpBuffer, DWORD nSize)
 * body: 5f004978-5f00497d
 * thunk to: KERNEL32.DLL::GetEnvironmentVariableA
 */

DWORD GetEnvironmentVariableA(LPCSTR lpName,LPSTR lpBuffer,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetEnvironmentVariableA(lpName,lpBuffer,nSize);
  return DVar1;
}


