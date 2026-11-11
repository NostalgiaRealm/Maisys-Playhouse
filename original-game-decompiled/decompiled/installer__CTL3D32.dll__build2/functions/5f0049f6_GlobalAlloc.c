
/* ==== KERNEL32.DLL::GlobalAlloc @ 5f0049f6 ==== 
 * signature: HGLOBAL __stdcall GlobalAlloc(UINT uFlags, SIZE_T dwBytes)
 * body: 5f0049f6-5f0049fb
 * thunk to: KERNEL32.DLL::GlobalAlloc
 */

HGLOBAL GlobalAlloc(UINT uFlags,SIZE_T dwBytes)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalAlloc(uFlags,dwBytes);
  return pvVar1;
}


