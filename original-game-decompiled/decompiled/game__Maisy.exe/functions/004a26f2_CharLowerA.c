
/* ==== USER32.DLL::CharLowerA @ 004a26f2 ==== 
 * signature: LPSTR __stdcall CharLowerA(LPSTR lpsz)
 * body: 004a26f2-004a26f7
 * thunk to: USER32.DLL::CharLowerA
 */

LPSTR CharLowerA(LPSTR lpsz)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a26f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CharLowerA(lpsz);
  return pCVar1;
}


