
/* ==== KERNEL32.DLL::lstrcmpiW @ 5f00498a ==== 
 * signature: int __stdcall lstrcmpiW(LPCWSTR lpString1, LPCWSTR lpString2)
 * body: 5f00498a-5f00498f
 * thunk to: KERNEL32.DLL::lstrcmpiW
 */

int lstrcmpiW(LPCWSTR lpString1,LPCWSTR lpString2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f00498a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrcmpiW(lpString1,lpString2);
  return iVar1;
}


