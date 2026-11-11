
/* ==== KERNEL32.DLL::GetSystemDirectoryW @ 5f0049ba ==== 
 * signature: UINT __stdcall GetSystemDirectoryW(LPWSTR lpBuffer, UINT uSize)
 * body: 5f0049ba-5f0049bf
 * thunk to: KERNEL32.DLL::GetSystemDirectoryW
 */

UINT GetSystemDirectoryW(LPWSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemDirectoryW(lpBuffer,uSize);
  return UVar1;
}


