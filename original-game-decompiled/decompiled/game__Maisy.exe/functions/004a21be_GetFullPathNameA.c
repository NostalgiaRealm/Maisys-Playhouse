
/* ==== KERNEL32.DLL::GetFullPathNameA @ 004a21be ==== 
 * signature: DWORD __stdcall GetFullPathNameA(LPCSTR lpFileName, DWORD nBufferLength, LPSTR lpBuffer, LPSTR * lpFilePart)
 * body: 004a21be-004a21c3
 * thunk to: KERNEL32.DLL::GetFullPathNameA
 */

DWORD GetFullPathNameA(LPCSTR lpFileName,DWORD nBufferLength,LPSTR lpBuffer,LPSTR *lpFilePart)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a21be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFullPathNameA(lpFileName,nBufferLength,lpBuffer,lpFilePart);
  return DVar1;
}


