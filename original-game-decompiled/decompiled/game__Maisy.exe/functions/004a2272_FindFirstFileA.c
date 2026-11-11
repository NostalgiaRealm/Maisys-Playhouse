
/* ==== KERNEL32.DLL::FindFirstFileA @ 004a2272 ==== 
 * signature: HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData)
 * body: 004a2272-004a2277
 * thunk to: KERNEL32.DLL::FindFirstFileA
 */

HANDLE FindFirstFileA(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FindFirstFileA(lpFileName,lpFindFileData);
  return pvVar1;
}


