
/* ==== ADVAPI32.DLL::RegOpenKeyA @ 004a2a16 ==== 
 * signature: LSTATUS __stdcall RegOpenKeyA(HKEY hKey, LPCSTR lpSubKey, PHKEY phkResult)
 * body: 004a2a16-004a2a1b
 * thunk to: ADVAPI32.DLL::RegOpenKeyA
 */

LSTATUS RegOpenKeyA(HKEY hKey,LPCSTR lpSubKey,PHKEY phkResult)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2a16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegOpenKeyA(hKey,lpSubKey,phkResult);
  return LVar1;
}


