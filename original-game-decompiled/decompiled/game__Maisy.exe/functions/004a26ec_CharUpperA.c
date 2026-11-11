
/* ==== USER32.DLL::CharUpperA @ 004a26ec ==== 
 * signature: LPSTR __stdcall CharUpperA(LPSTR lpsz)
 * body: 004a26ec-004a26f1
 * thunk to: USER32.DLL::CharUpperA
 */

LPSTR CharUpperA(LPSTR lpsz)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a26ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CharUpperA(lpsz);
  return pCVar1;
}


