
/* ==== KERNEL32.DLL::GetTempFileNameA @ 004a21b8 ==== 
 * signature: UINT __stdcall GetTempFileNameA(LPCSTR lpPathName, LPCSTR lpPrefixString, UINT uUnique, LPSTR lpTempFileName)
 * body: 004a21b8-004a21bd
 * thunk to: KERNEL32.DLL::GetTempFileNameA
 */

UINT GetTempFileNameA(LPCSTR lpPathName,LPCSTR lpPrefixString,UINT uUnique,LPSTR lpTempFileName)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a21b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetTempFileNameA(lpPathName,lpPrefixString,uUnique,lpTempFileName);
  return UVar1;
}


