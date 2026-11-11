
/* ==== KERNEL32.DLL::GetPrivateProfileIntA @ 004a2218 ==== 
 * signature: UINT __stdcall GetPrivateProfileIntA(LPCSTR lpAppName, LPCSTR lpKeyName, INT nDefault, LPCSTR lpFileName)
 * body: 004a2218-004a221d
 * thunk to: KERNEL32.DLL::GetPrivateProfileIntA
 */

UINT GetPrivateProfileIntA(LPCSTR lpAppName,LPCSTR lpKeyName,INT nDefault,LPCSTR lpFileName)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetPrivateProfileIntA(lpAppName,lpKeyName,nDefault,lpFileName);
  return UVar1;
}


