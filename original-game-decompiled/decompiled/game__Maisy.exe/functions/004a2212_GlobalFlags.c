
/* ==== KERNEL32.DLL::GlobalFlags @ 004a2212 ==== 
 * signature: UINT __stdcall GlobalFlags(HGLOBAL hMem)
 * body: 004a2212-004a2217
 * thunk to: KERNEL32.DLL::GlobalFlags
 */

UINT GlobalFlags(HGLOBAL hMem)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GlobalFlags(hMem);
  return UVar1;
}


