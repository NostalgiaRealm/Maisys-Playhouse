
/* ==== ADVAPI32.DLL::RegSetValueA @ 004a2a28 ==== 
 * signature: LSTATUS __stdcall RegSetValueA(HKEY hKey, LPCSTR lpSubKey, DWORD dwType, LPCSTR lpData, DWORD cbData)
 * body: 004a2a28-004a2a2d
 * thunk to: ADVAPI32.DLL::RegSetValueA
 */

LSTATUS RegSetValueA(HKEY hKey,LPCSTR lpSubKey,DWORD dwType,LPCSTR lpData,DWORD cbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegSetValueA(hKey,lpSubKey,dwType,lpData,cbData);
  return LVar1;
}


