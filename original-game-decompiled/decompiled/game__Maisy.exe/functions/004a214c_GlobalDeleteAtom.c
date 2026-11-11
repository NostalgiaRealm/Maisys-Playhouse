
/* ==== KERNEL32.DLL::GlobalDeleteAtom @ 004a214c ==== 
 * signature: ATOM __stdcall GlobalDeleteAtom(ATOM nAtom)
 * body: 004a214c-004a2151
 * thunk to: KERNEL32.DLL::GlobalDeleteAtom
 */

ATOM GlobalDeleteAtom(ATOM nAtom)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a214c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalDeleteAtom(nAtom);
  return AVar1;
}


