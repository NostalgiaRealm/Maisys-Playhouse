
/* ==== KERNEL32.DLL::GetWindowsDirectoryW @ 5f0049b4 ==== 
 * signature: UINT __stdcall GetWindowsDirectoryW(LPWSTR lpBuffer, UINT uSize)
 * body: 5f0049b4-5f0049b9
 * thunk to: KERNEL32.DLL::GetWindowsDirectoryW
 */

UINT GetWindowsDirectoryW(LPWSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetWindowsDirectoryW(lpBuffer,uSize);
  return UVar1;
}


