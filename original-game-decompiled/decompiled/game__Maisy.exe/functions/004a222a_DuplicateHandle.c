
/* ==== KERNEL32.DLL::DuplicateHandle @ 004a222a ==== 
 * signature: BOOL __stdcall DuplicateHandle(HANDLE hSourceProcessHandle, HANDLE hSourceHandle, HANDLE hTargetProcessHandle, LPHANDLE lpTargetHandle, DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwOptions)
 * body: 004a222a-004a222f
 * thunk to: KERNEL32.DLL::DuplicateHandle
 */

BOOL DuplicateHandle(HANDLE hSourceProcessHandle,HANDLE hSourceHandle,HANDLE hTargetProcessHandle,
                    LPHANDLE lpTargetHandle,DWORD dwDesiredAccess,BOOL bInheritHandle,
                    DWORD dwOptions)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a222a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          dwDesiredAccess,bInheritHandle,dwOptions);
  return BVar1;
}


