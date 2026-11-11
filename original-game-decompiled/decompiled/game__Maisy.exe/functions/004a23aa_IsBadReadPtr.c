
/* ==== KERNEL32.DLL::IsBadReadPtr @ 004a23aa ==== 
 * signature: BOOL __stdcall IsBadReadPtr(void * lp, UINT_PTR ucb)
 * body: 004a23aa-004a23af
 * thunk to: KERNEL32.DLL::IsBadReadPtr
 */

BOOL IsBadReadPtr(void *lp,UINT_PTR ucb)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a23aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsBadReadPtr(lp,ucb);
  return BVar1;
}


