
/* ==== KERNEL32.DLL::GlobalUnlock @ 004a2074 ==== 
 * signature: BOOL __stdcall GlobalUnlock(HGLOBAL hMem)
 * body: 004a2074-004a2079
 * thunk to: KERNEL32.DLL::GlobalUnlock
 */

BOOL GlobalUnlock(HGLOBAL hMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GlobalUnlock(hMem);
  return BVar1;
}


