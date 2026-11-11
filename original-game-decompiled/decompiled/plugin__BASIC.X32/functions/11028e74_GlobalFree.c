
/* ==== KERNEL32.DLL::GlobalFree @ 11028e74 ==== 
 * signature: HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)
 * body: 11028e74-11028e79
 * thunk to: KERNEL32.DLL::GlobalFree
 */

HGLOBAL GlobalFree(HGLOBAL hMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalFree(hMem);
  return pvVar1;
}


