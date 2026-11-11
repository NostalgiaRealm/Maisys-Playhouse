
/* ==== KERNEL32.DLL::GetModuleFileNameW @ 5f0049c0 ==== 
 * signature: DWORD __stdcall GetModuleFileNameW(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)
 * body: 5f0049c0-5f0049c5
 * thunk to: KERNEL32.DLL::GetModuleFileNameW
 */

DWORD GetModuleFileNameW(HMODULE hModule,LPWSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameW(hModule,lpFilename,nSize);
  return DVar1;
}


