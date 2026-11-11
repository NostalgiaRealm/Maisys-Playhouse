
/* ==== VERSION.DLL::VerFindFileA @ 1001596a ==== 
 * signature: DWORD __stdcall VerFindFileA(DWORD uFlags, LPCSTR szFileName, LPCSTR szWinDir, LPCSTR szAppDir, LPSTR szCurDir, PUINT lpuCurDirLen, LPSTR szDestDir, PUINT lpuDestDirLen)
 * body: 1001596a-1001596f
 * thunk to: VERSION.DLL::VerFindFileA
 */

DWORD VerFindFileA(DWORD uFlags,LPCSTR szFileName,LPCSTR szWinDir,LPCSTR szAppDir,LPSTR szCurDir,
                  PUINT lpuCurDirLen,LPSTR szDestDir,PUINT lpuDestDirLen)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001596a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = VerFindFileA(uFlags,szFileName,szWinDir,szAppDir,szCurDir,lpuCurDirLen,szDestDir,
                       lpuDestDirLen);
  return DVar1;
}


