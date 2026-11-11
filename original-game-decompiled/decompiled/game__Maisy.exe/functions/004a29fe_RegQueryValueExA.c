
/* ==== ADVAPI32.DLL::RegQueryValueExA @ 004a29fe ==== 
 * signature: LSTATUS __stdcall RegQueryValueExA(HKEY hKey, LPCSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData)
 * body: 004a29fe-004a2a03
 * thunk to: ADVAPI32.DLL::RegQueryValueExA
 */

LSTATUS RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,
                        LPBYTE lpData,LPDWORD lpcbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a29fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegQueryValueExA(hKey,lpValueName,lpReserved,lpType,lpData,lpcbData);
  return LVar1;
}


