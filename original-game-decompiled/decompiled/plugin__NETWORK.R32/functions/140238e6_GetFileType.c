
/* ==== KERNEL32.DLL::GetFileType @ 140238e6 ==== 
 * signature: DWORD __stdcall GetFileType(HANDLE hFile)
 * body: 140238e6-140238eb
 * thunk to: KERNEL32.DLL::GetFileType
 */

DWORD GetFileType(HANDLE hFile)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileType(hFile);
  return DVar1;
}


