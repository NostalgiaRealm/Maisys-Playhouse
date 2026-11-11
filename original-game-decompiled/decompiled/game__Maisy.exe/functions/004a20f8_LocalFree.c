
/* ==== KERNEL32.DLL::LocalFree @ 004a20f8 ==== 
 * signature: HLOCAL __stdcall LocalFree(HLOCAL hMem)
 * body: 004a20f8-004a20fd
 * thunk to: KERNEL32.DLL::LocalFree
 */

HLOCAL LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a20f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}


