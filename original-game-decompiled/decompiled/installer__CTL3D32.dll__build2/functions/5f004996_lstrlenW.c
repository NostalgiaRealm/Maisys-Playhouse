
/* ==== KERNEL32.DLL::lstrlenW @ 5f004996 ==== 
 * signature: int __stdcall lstrlenW(LPCWSTR lpString)
 * body: 5f004996-5f00499b
 * thunk to: KERNEL32.DLL::lstrlenW
 */

int lstrlenW(LPCWSTR lpString)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrlenW(lpString);
  return iVar1;
}


