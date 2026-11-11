
/* ==== KERNEL32.DLL::GlobalAddAtomA @ 004a2176 ==== 
 * signature: ATOM __stdcall GlobalAddAtomA(LPCSTR lpString)
 * body: 004a2176-004a217b
 * thunk to: KERNEL32.DLL::GlobalAddAtomA
 */

ATOM GlobalAddAtomA(LPCSTR lpString)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalAddAtomA(lpString);
  return AVar1;
}


