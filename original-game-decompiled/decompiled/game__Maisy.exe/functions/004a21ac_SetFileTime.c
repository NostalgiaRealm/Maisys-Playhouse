
/* ==== KERNEL32.DLL::SetFileTime @ 004a21ac ==== 
 * signature: BOOL __stdcall SetFileTime(HANDLE hFile, FILETIME * lpCreationTime, FILETIME * lpLastAccessTime, FILETIME * lpLastWriteTime)
 * body: 004a21ac-004a21b1
 * thunk to: KERNEL32.DLL::SetFileTime
 */

BOOL SetFileTime(HANDLE hFile,FILETIME *lpCreationTime,FILETIME *lpLastAccessTime,
                FILETIME *lpLastWriteTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a21ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetFileTime(hFile,lpCreationTime,lpLastAccessTime,lpLastWriteTime);
  return BVar1;
}


