
/* ==== KERNEL32.DLL::lstrlenA @ 004a218e ==== 
 * signature: int __stdcall lstrlenA(LPCSTR lpString)
 * body: 004a218e-004a2193
 * thunk to: KERNEL32.DLL::lstrlenA
 */

int lstrlenA(LPCSTR lpString)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a218e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrlenA(lpString);
  return iVar1;
}


