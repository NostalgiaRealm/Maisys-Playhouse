
/* ==== ADVAPI32.DLL::GetFileSecurityA @ 004a29e6 ==== 
 * signature: BOOL __stdcall GetFileSecurityA(LPCSTR lpFileName, SECURITY_INFORMATION RequestedInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor, DWORD nLength, LPDWORD lpnLengthNeeded)
 * body: 004a29e6-004a29eb
 * thunk to: ADVAPI32.DLL::GetFileSecurityA
 */

BOOL GetFileSecurityA(LPCSTR lpFileName,SECURITY_INFORMATION RequestedInformation,
                     PSECURITY_DESCRIPTOR pSecurityDescriptor,DWORD nLength,LPDWORD lpnLengthNeeded)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a29e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileSecurityA(lpFileName,RequestedInformation,pSecurityDescriptor,nLength,
                           lpnLengthNeeded);
  return BVar1;
}


