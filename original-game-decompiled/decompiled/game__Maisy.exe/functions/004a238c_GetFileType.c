
/* ==== KERNEL32.DLL::GetFileType @ 004a238c ==== 
 * signature: DWORD __stdcall GetFileType(HANDLE hFile)
 * body: 004a238c-004a2391
 * thunk to: KERNEL32.DLL::GetFileType
 */

DWORD GetFileType(HANDLE hFile)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a238c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileType(hFile);
  return DVar1;
}


