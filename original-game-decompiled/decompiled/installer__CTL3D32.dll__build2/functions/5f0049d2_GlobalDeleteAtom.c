
/* ==== KERNEL32.DLL::GlobalDeleteAtom @ 5f0049d2 ==== 
 * signature: ATOM __stdcall GlobalDeleteAtom(ATOM nAtom)
 * body: 5f0049d2-5f0049d7
 * thunk to: KERNEL32.DLL::GlobalDeleteAtom
 */

ATOM GlobalDeleteAtom(ATOM nAtom)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalDeleteAtom(nAtom);
  return AVar1;
}


