
/* ==== KERNEL32.DLL::lstrcmpiA @ 5f004936 ==== 
 * signature: int __stdcall lstrcmpiA(LPCSTR lpString1, LPCSTR lpString2)
 * body: 5f004936-5f00493b
 * thunk to: KERNEL32.DLL::lstrcmpiA
 */

int lstrcmpiA(LPCSTR lpString1,LPCSTR lpString2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrcmpiA(lpString1,lpString2);
  return iVar1;
}


