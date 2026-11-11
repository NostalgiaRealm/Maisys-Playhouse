
/* ==== KERNEL32.DLL::GlobalAddAtomW @ 5f0049ae ==== 
 * signature: ATOM __stdcall GlobalAddAtomW(LPCWSTR lpString)
 * body: 5f0049ae-5f0049b3
 * thunk to: KERNEL32.DLL::GlobalAddAtomW
 */

ATOM GlobalAddAtomW(LPCWSTR lpString)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalAddAtomW(lpString);
  return AVar1;
}


