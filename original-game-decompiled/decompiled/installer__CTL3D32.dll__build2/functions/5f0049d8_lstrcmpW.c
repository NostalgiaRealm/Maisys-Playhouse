
/* ==== KERNEL32.DLL::lstrcmpW @ 5f0049d8 ==== 
 * signature: int __stdcall lstrcmpW(LPCWSTR lpString1, LPCWSTR lpString2)
 * body: 5f0049d8-5f0049dd
 * thunk to: KERNEL32.DLL::lstrcmpW
 */

int lstrcmpW(LPCWSTR lpString1,LPCWSTR lpString2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrcmpW(lpString1,lpString2);
  return iVar1;
}


