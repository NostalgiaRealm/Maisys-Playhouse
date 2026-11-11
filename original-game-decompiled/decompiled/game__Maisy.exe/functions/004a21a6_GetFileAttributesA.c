
/* ==== KERNEL32.DLL::GetFileAttributesA @ 004a21a6 ==== 
 * signature: DWORD __stdcall GetFileAttributesA(LPCSTR lpFileName)
 * body: 004a21a6-004a21ab
 * thunk to: KERNEL32.DLL::GetFileAttributesA
 */

DWORD GetFileAttributesA(LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a21a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesA(lpFileName);
  return DVar1;
}


