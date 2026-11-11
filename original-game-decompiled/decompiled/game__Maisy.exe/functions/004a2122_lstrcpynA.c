
/* ==== KERNEL32.DLL::lstrcpynA @ 004a2122 ==== 
 * signature: LPSTR __stdcall lstrcpynA(LPSTR lpString1, LPCSTR lpString2, int iMaxLength)
 * body: 004a2122-004a2127
 * thunk to: KERNEL32.DLL::lstrcpynA
 */

LPSTR lstrcpynA(LPSTR lpString1,LPCSTR lpString2,int iMaxLength)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpynA(lpString1,lpString2,iMaxLength);
  return pCVar1;
}


