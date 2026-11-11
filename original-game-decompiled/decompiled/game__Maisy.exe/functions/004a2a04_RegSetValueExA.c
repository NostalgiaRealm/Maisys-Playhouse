
/* ==== ADVAPI32.DLL::RegSetValueExA @ 004a2a04 ==== 
 * signature: LSTATUS __stdcall RegSetValueExA(HKEY hKey, LPCSTR lpValueName, DWORD Reserved, DWORD dwType, BYTE * lpData, DWORD cbData)
 * body: 004a2a04-004a2a09
 * thunk to: ADVAPI32.DLL::RegSetValueExA
 */

LSTATUS RegSetValueExA(HKEY hKey,LPCSTR lpValueName,DWORD Reserved,DWORD dwType,BYTE *lpData,
                      DWORD cbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegSetValueExA(hKey,lpValueName,Reserved,dwType,lpData,cbData);
  return LVar1;
}


