
/* ==== KERNEL32.DLL::GetWindowsDirectoryA @ 5f004960 ==== 
 * signature: UINT __stdcall GetWindowsDirectoryA(LPSTR lpBuffer, UINT uSize)
 * body: 5f004960-5f004965
 * thunk to: KERNEL32.DLL::GetWindowsDirectoryA
 */

UINT GetWindowsDirectoryA(LPSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetWindowsDirectoryA(lpBuffer,uSize);
  return UVar1;
}


