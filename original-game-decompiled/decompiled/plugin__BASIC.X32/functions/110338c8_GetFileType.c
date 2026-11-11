
/* ==== KERNEL32.DLL::GetFileType @ 110338c8 ==== 
 * signature: DWORD __stdcall GetFileType(HANDLE hFile)
 * body: 110338c8-110338cd
 * thunk to: KERNEL32.DLL::GetFileType
 */

DWORD GetFileType(HANDLE hFile)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x110338c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileType(hFile);
  return DVar1;
}


