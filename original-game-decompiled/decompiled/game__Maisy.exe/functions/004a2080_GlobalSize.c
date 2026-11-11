
/* ==== KERNEL32.DLL::GlobalSize @ 004a2080 ==== 
 * signature: SIZE_T __stdcall GlobalSize(HGLOBAL hMem)
 * body: 004a2080-004a2085
 * thunk to: KERNEL32.DLL::GlobalSize
 */

SIZE_T GlobalSize(HGLOBAL hMem)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GlobalSize(hMem);
  return SVar1;
}


