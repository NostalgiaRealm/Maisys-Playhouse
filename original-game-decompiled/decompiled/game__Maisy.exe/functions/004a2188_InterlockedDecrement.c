
/* ==== KERNEL32.DLL::InterlockedDecrement @ 004a2188 ==== 
 * signature: LONG __stdcall InterlockedDecrement(LONG * lpAddend)
 * body: 004a2188-004a218d
 * thunk to: KERNEL32.DLL::InterlockedDecrement
 */

LONG InterlockedDecrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedDecrement(lpAddend);
  return LVar1;
}


