
/* ==== ADVAPI32.DLL::RegCloseKey @ 004a29ec ==== 
 * signature: LSTATUS __stdcall RegCloseKey(HKEY hKey)
 * body: 004a29ec-004a29f1
 * thunk to: ADVAPI32.DLL::RegCloseKey
 */

LSTATUS RegCloseKey(HKEY hKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a29ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCloseKey(hKey);
  return LVar1;
}


