
/* ==== ADVAPI32.DLL::RegCloseKey @ 12027bc0 ==== 
 * signature: LSTATUS __stdcall RegCloseKey(HKEY hKey)
 * body: 12027bc0-12027bc5
 * thunk to: ADVAPI32.DLL::RegCloseKey
 */

LSTATUS RegCloseKey(HKEY hKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCloseKey(hKey);
  return LVar1;
}


