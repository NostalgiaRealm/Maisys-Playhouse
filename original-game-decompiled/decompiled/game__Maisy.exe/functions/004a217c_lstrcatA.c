
/* ==== KERNEL32.DLL::lstrcatA @ 004a217c ==== 
 * signature: LPSTR __stdcall lstrcatA(LPSTR lpString1, LPCSTR lpString2)
 * body: 004a217c-004a2181
 * thunk to: KERNEL32.DLL::lstrcatA
 */

LPSTR lstrcatA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a217c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcatA(lpString1,lpString2);
  return pCVar1;
}


