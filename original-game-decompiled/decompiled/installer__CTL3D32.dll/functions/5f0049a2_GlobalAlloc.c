
/* ==== KERNEL32.DLL::GlobalAlloc @ 5f0049a2 ==== 
 * signature: HGLOBAL __stdcall GlobalAlloc(UINT uFlags, SIZE_T dwBytes)
 * body: 5f0049a2-5f0049a7
 * thunk to: KERNEL32.DLL::GlobalAlloc
 */

HGLOBAL GlobalAlloc(UINT uFlags,SIZE_T dwBytes)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f0049a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalAlloc(uFlags,dwBytes);
  return pvVar1;
}


