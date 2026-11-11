
/* ==== KERNEL32.DLL::IsBadCodePtr @ 004a23b6 ==== 
 * signature: BOOL __stdcall IsBadCodePtr(FARPROC lpfn)
 * body: 004a23b6-004a23bb
 * thunk to: KERNEL32.DLL::IsBadCodePtr
 */

BOOL IsBadCodePtr(FARPROC lpfn)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a23b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsBadCodePtr(lpfn);
  return BVar1;
}


