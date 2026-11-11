
/* ==== KERNEL32.DLL::GetFileSize @ 12027b6c ==== 
 * signature: DWORD __stdcall GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh)
 * body: 12027b6c-12027b71
 * thunk to: KERNEL32.DLL::GetFileSize
 */

DWORD GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileSize(hFile,lpFileSizeHigh);
  return DVar1;
}


