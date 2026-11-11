
/* ==== KERNEL32.DLL::LocalAlloc @ 004a20f2 ==== 
 * signature: HLOCAL __stdcall LocalAlloc(UINT uFlags, SIZE_T uBytes)
 * body: 004a20f2-004a20f7
 * thunk to: KERNEL32.DLL::LocalAlloc
 */

HLOCAL LocalAlloc(UINT uFlags,SIZE_T uBytes)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a20f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalAlloc(uFlags,uBytes);
  return pvVar1;
}


