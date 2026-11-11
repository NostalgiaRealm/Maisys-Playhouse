
/* ==== KERNEL32.DLL::GlobalGetAtomNameA @ 004a21d0 ==== 
 * signature: UINT __stdcall GlobalGetAtomNameA(ATOM nAtom, LPSTR lpBuffer, int nSize)
 * body: 004a21d0-004a21d5
 * thunk to: KERNEL32.DLL::GlobalGetAtomNameA
 */

UINT GlobalGetAtomNameA(ATOM nAtom,LPSTR lpBuffer,int nSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a21d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GlobalGetAtomNameA(nAtom,lpBuffer,nSize);
  return UVar1;
}


