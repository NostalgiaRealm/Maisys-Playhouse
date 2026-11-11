
/* ==== KERNEL32.DLL::WritePrivateProfileStringA @ 004a204a ==== 
 * signature: BOOL __stdcall WritePrivateProfileStringA(LPCSTR lpAppName, LPCSTR lpKeyName, LPCSTR lpString, LPCSTR lpFileName)
 * body: 004a204a-004a204f
 * thunk to: KERNEL32.DLL::WritePrivateProfileStringA
 */

BOOL WritePrivateProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpString,LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a204a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WritePrivateProfileStringA(lpAppName,lpKeyName,lpString,lpFileName);
  return BVar1;
}


