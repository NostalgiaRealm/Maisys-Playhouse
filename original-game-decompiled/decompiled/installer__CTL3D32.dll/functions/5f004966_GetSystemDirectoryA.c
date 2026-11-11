
/* ==== KERNEL32.DLL::GetSystemDirectoryA @ 5f004966 ==== 
 * signature: UINT __stdcall GetSystemDirectoryA(LPSTR lpBuffer, UINT uSize)
 * body: 5f004966-5f00496b
 * thunk to: KERNEL32.DLL::GetSystemDirectoryA
 */

UINT GetSystemDirectoryA(LPSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004966. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemDirectoryA(lpBuffer,uSize);
  return UVar1;
}


