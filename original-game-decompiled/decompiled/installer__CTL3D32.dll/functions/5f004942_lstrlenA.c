
/* ==== KERNEL32.DLL::lstrlenA @ 5f004942 ==== 
 * signature: int __stdcall lstrlenA(LPCSTR lpString)
 * body: 5f004942-5f004947
 * thunk to: KERNEL32.DLL::lstrlenA
 */

int lstrlenA(LPCSTR lpString)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrlenA(lpString);
  return iVar1;
}


