
/* ==== ADVAPI32.DLL::RegDeleteKeyA @ 004a2a10 ==== 
 * signature: LSTATUS __stdcall RegDeleteKeyA(HKEY hKey, LPCSTR lpSubKey)
 * body: 004a2a10-004a2a15
 * thunk to: ADVAPI32.DLL::RegDeleteKeyA
 */

LSTATUS RegDeleteKeyA(HKEY hKey,LPCSTR lpSubKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegDeleteKeyA(hKey,lpSubKey);
  return LVar1;
}


