
/* ==== KERNEL32.DLL::GlobalFree @ 5f0049f0 ==== 
 * signature: HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)
 * body: 5f0049f0-5f0049f5
 * thunk to: KERNEL32.DLL::GlobalFree
 */

HGLOBAL GlobalFree(HGLOBAL hMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalFree(hMem);
  return pvVar1;
}


