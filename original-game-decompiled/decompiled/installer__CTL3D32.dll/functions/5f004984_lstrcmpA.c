
/* ==== KERNEL32.DLL::lstrcmpA @ 5f004984 ==== 
 * signature: int __stdcall lstrcmpA(LPCSTR lpString1, LPCSTR lpString2)
 * body: 5f004984-5f004989
 * thunk to: KERNEL32.DLL::lstrcmpA
 */

int lstrcmpA(LPCSTR lpString1,LPCSTR lpString2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrcmpA(lpString1,lpString2);
  return iVar1;
}


