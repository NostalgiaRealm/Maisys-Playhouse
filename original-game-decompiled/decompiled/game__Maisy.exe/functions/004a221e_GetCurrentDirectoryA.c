
/* ==== KERNEL32.DLL::GetCurrentDirectoryA @ 004a221e ==== 
 * signature: DWORD __stdcall GetCurrentDirectoryA(DWORD nBufferLength, LPSTR lpBuffer)
 * body: 004a221e-004a2223
 * thunk to: KERNEL32.DLL::GetCurrentDirectoryA
 */

DWORD GetCurrentDirectoryA(DWORD nBufferLength,LPSTR lpBuffer)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a221e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentDirectoryA(nBufferLength,lpBuffer);
  return DVar1;
}


