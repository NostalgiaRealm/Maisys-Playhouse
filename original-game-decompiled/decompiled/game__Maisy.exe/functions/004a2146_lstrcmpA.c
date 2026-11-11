
/* ==== KERNEL32.DLL::lstrcmpA @ 004a2146 ==== 
 * signature: int __stdcall lstrcmpA(LPCSTR lpString1, LPCSTR lpString2)
 * body: 004a2146-004a214b
 * thunk to: KERNEL32.DLL::lstrcmpA
 */

int lstrcmpA(LPCSTR lpString1,LPCSTR lpString2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrcmpA(lpString1,lpString2);
  return iVar1;
}


