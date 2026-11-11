
/* ==== ADVAPI32.DLL::RegDeleteValueA @ 004a2a0a ==== 
 * signature: LSTATUS __stdcall RegDeleteValueA(HKEY hKey, LPCSTR lpValueName)
 * body: 004a2a0a-004a2a0f
 * thunk to: ADVAPI32.DLL::RegDeleteValueA
 */

LSTATUS RegDeleteValueA(HKEY hKey,LPCSTR lpValueName)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegDeleteValueA(hKey,lpValueName);
  return LVar1;
}


