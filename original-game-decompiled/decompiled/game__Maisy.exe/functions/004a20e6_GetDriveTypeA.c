
/* ==== KERNEL32.DLL::GetDriveTypeA @ 004a20e6 ==== 
 * signature: UINT __stdcall GetDriveTypeA(LPCSTR lpRootPathName)
 * body: 004a20e6-004a20eb
 * thunk to: KERNEL32.DLL::GetDriveTypeA
 */

UINT GetDriveTypeA(LPCSTR lpRootPathName)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a20e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetDriveTypeA(lpRootPathName);
  return UVar1;
}


