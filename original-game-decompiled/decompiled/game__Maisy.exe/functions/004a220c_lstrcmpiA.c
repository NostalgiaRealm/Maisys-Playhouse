
/* ==== KERNEL32.DLL::lstrcmpiA @ 004a220c ==== 
 * signature: int __stdcall lstrcmpiA(LPCSTR lpString1, LPCSTR lpString2)
 * body: 004a220c-004a2211
 * thunk to: KERNEL32.DLL::lstrcmpiA
 */

int lstrcmpiA(LPCSTR lpString1,LPCSTR lpString2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a220c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrcmpiA(lpString1,lpString2);
  return iVar1;
}


