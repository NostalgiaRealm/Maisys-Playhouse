
/* ==== KERNEL32.DLL::GetSystemDirectoryA @ 004a20b0 ==== 
 * signature: UINT __stdcall GetSystemDirectoryA(LPSTR lpBuffer, UINT uSize)
 * body: 004a20b0-004a20b5
 * thunk to: KERNEL32.DLL::GetSystemDirectoryA
 */

UINT GetSystemDirectoryA(LPSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a20b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemDirectoryA(lpBuffer,uSize);
  return UVar1;
}


