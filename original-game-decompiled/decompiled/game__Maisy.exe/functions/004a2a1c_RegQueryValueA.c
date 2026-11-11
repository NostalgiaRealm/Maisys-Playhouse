
/* ==== ADVAPI32.DLL::RegQueryValueA @ 004a2a1c ==== 
 * signature: LSTATUS __stdcall RegQueryValueA(HKEY hKey, LPCSTR lpSubKey, LPSTR lpData, PLONG lpcbData)
 * body: 004a2a1c-004a2a21
 * thunk to: ADVAPI32.DLL::RegQueryValueA
 */

LSTATUS RegQueryValueA(HKEY hKey,LPCSTR lpSubKey,LPSTR lpData,PLONG lpcbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegQueryValueA(hKey,lpSubKey,lpData,lpcbData);
  return LVar1;
}


