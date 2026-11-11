
/* ==== VERSION.DLL::VerInstallFileA @ 10015970 ==== 
 * signature: DWORD __stdcall VerInstallFileA(DWORD uFlags, LPCSTR szSrcFileName, LPCSTR szDestFileName, LPCSTR szSrcDir, LPCSTR szDestDir, LPCSTR szCurDir, LPSTR szTmpFile, PUINT lpuTmpFileLen)
 * body: 10015970-10015975
 * thunk to: VERSION.DLL::VerInstallFileA
 */

DWORD VerInstallFileA(DWORD uFlags,LPCSTR szSrcFileName,LPCSTR szDestFileName,LPCSTR szSrcDir,
                     LPCSTR szDestDir,LPCSTR szCurDir,LPSTR szTmpFile,PUINT lpuTmpFileLen)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = VerInstallFileA(uFlags,szSrcFileName,szDestFileName,szSrcDir,szDestDir,szCurDir,szTmpFile,
                          lpuTmpFileLen);
  return DVar1;
}


