
/* ==== ADVAPI32.DLL::SetFileSecurityA @ 004a29e0 ==== 
 * signature: BOOL __stdcall SetFileSecurityA(LPCSTR lpFileName, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor)
 * body: 004a29e0-004a29e5
 * thunk to: ADVAPI32.DLL::SetFileSecurityA
 */

BOOL SetFileSecurityA(LPCSTR lpFileName,SECURITY_INFORMATION SecurityInformation,
                     PSECURITY_DESCRIPTOR pSecurityDescriptor)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a29e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetFileSecurityA(lpFileName,SecurityInformation,pSecurityDescriptor);
  return BVar1;
}


