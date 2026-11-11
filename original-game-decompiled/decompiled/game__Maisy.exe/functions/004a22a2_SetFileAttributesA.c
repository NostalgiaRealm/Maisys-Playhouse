
/* ==== KERNEL32.DLL::SetFileAttributesA @ 004a22a2 ==== 
 * signature: BOOL __stdcall SetFileAttributesA(LPCSTR lpFileName, DWORD dwFileAttributes)
 * body: 004a22a2-004a22a7
 * thunk to: KERNEL32.DLL::SetFileAttributesA
 */

BOOL SetFileAttributesA(LPCSTR lpFileName,DWORD dwFileAttributes)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a22a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetFileAttributesA(lpFileName,dwFileAttributes);
  return BVar1;
}


