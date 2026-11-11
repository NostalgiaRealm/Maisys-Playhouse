
/* ==== KERNEL32.DLL::GlobalFree @ 12027bba ==== 
 * signature: HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)
 * body: 12027bba-12027bbf
 * thunk to: KERNEL32.DLL::GlobalFree
 */

HGLOBAL GlobalFree(HGLOBAL hMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027bba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalFree(hMem);
  return pvVar1;
}


