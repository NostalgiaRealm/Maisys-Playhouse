
/* ==== KERNEL32.DLL::FindNextFileA @ 004a22cc ==== 
 * signature: BOOL __stdcall FindNextFileA(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData)
 * body: 004a22cc-004a22d1
 * thunk to: KERNEL32.DLL::FindNextFileA
 */

BOOL FindNextFileA(HANDLE hFindFile,LPWIN32_FIND_DATAA lpFindFileData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a22cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindNextFileA(hFindFile,lpFindFileData);
  return BVar1;
}


