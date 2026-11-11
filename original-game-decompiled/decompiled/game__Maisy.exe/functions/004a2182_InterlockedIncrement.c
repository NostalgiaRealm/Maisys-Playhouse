
/* ==== KERNEL32.DLL::InterlockedIncrement @ 004a2182 ==== 
 * signature: LONG __stdcall InterlockedIncrement(LONG * lpAddend)
 * body: 004a2182-004a2187
 * thunk to: KERNEL32.DLL::InterlockedIncrement
 */

LONG InterlockedIncrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedIncrement(lpAddend);
  return LVar1;
}


