
/* ==== ADVAPI32.DLL::RegCreateKeyA @ 004a2a22 ==== 
 * signature: LSTATUS __stdcall RegCreateKeyA(HKEY hKey, LPCSTR lpSubKey, PHKEY phkResult)
 * body: 004a2a22-004a2a27
 * thunk to: ADVAPI32.DLL::RegCreateKeyA
 */

LSTATUS RegCreateKeyA(HKEY hKey,LPCSTR lpSubKey,PHKEY phkResult)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2a22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCreateKeyA(hKey,lpSubKey,phkResult);
  return LVar1;
}


