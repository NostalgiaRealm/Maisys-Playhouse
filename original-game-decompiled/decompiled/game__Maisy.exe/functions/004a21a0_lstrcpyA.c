
/* ==== KERNEL32.DLL::lstrcpyA @ 004a21a0 ==== 
 * signature: LPSTR __stdcall lstrcpyA(LPSTR lpString1, LPCSTR lpString2)
 * body: 004a21a0-004a21a5
 * thunk to: KERNEL32.DLL::lstrcpyA
 */

LPSTR lstrcpyA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a21a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpyA(lpString1,lpString2);
  return pCVar1;
}


