
/* ==== KERNEL32.DLL::GetFileSize @ 004a2290 ==== 
 * signature: DWORD __stdcall GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh)
 * body: 004a2290-004a2295
 * thunk to: KERNEL32.DLL::GetFileSize
 */

DWORD GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileSize(hFile,lpFileSizeHigh);
  return DVar1;
}


