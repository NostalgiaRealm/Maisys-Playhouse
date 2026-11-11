
/* ==== KERNEL32.DLL::LocalReAlloc @ 004a20fe ==== 
 * signature: HLOCAL __stdcall LocalReAlloc(HLOCAL hMem, SIZE_T uBytes, UINT uFlags)
 * body: 004a20fe-004a2103
 * thunk to: KERNEL32.DLL::LocalReAlloc
 */

HLOCAL LocalReAlloc(HLOCAL hMem,SIZE_T uBytes,UINT uFlags)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a20fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalReAlloc(hMem,uBytes,uFlags);
  return pvVar1;
}


