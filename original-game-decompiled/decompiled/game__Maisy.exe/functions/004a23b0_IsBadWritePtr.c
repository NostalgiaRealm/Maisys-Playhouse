
/* ==== KERNEL32.DLL::IsBadWritePtr @ 004a23b0 ==== 
 * signature: BOOL __stdcall IsBadWritePtr(LPVOID lp, UINT_PTR ucb)
 * body: 004a23b0-004a23b5
 * thunk to: KERNEL32.DLL::IsBadWritePtr
 */

BOOL IsBadWritePtr(LPVOID lp,UINT_PTR ucb)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a23b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsBadWritePtr(lp,ucb);
  return BVar1;
}


