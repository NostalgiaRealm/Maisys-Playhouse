
/* ==== KERNEL32.DLL::GlobalUnlock @ 12027b8a ==== 
 * signature: BOOL __stdcall GlobalUnlock(HGLOBAL hMem)
 * body: 12027b8a-12027b8f
 * thunk to: KERNEL32.DLL::GlobalUnlock
 */

BOOL GlobalUnlock(HGLOBAL hMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027b8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GlobalUnlock(hMem);
  return BVar1;
}


