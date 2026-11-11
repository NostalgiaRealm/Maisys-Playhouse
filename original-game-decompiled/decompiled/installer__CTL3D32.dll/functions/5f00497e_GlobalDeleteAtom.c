
/* ==== KERNEL32.DLL::GlobalDeleteAtom @ 5f00497e ==== 
 * signature: ATOM __stdcall GlobalDeleteAtom(ATOM nAtom)
 * body: 5f00497e-5f004983
 * thunk to: KERNEL32.DLL::GlobalDeleteAtom
 */

ATOM GlobalDeleteAtom(ATOM nAtom)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f00497e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalDeleteAtom(nAtom);
  return AVar1;
}


