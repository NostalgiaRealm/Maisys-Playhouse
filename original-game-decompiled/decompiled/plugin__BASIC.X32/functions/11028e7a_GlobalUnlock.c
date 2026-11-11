
/* ==== KERNEL32.DLL::GlobalUnlock @ 11028e7a ==== 
 * signature: BOOL __stdcall GlobalUnlock(HGLOBAL hMem)
 * body: 11028e7a-11028e7f
 * thunk to: KERNEL32.DLL::GlobalUnlock
 */

BOOL GlobalUnlock(HGLOBAL hMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028e7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GlobalUnlock(hMem);
  return BVar1;
}


