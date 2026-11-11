
/* ==== SHELL32.DLL::SHGetFileInfoA @ 004a2a40 ==== 
 * signature: DWORD_PTR __stdcall SHGetFileInfoA(LPCSTR pszPath, DWORD dwFileAttributes, SHFILEINFOA * psfi, UINT cbFileInfo, UINT uFlags)
 * body: 004a2a40-004a2a45
 * thunk to: SHELL32.DLL::SHGetFileInfoA
 */

DWORD_PTR SHGetFileInfoA(LPCSTR pszPath,DWORD dwFileAttributes,SHFILEINFOA *psfi,UINT cbFileInfo,
                        UINT uFlags)

{
  DWORD_PTR DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SHGetFileInfoA(pszPath,dwFileAttributes,psfi,cbFileInfo,uFlags);
  return DVar1;
}


