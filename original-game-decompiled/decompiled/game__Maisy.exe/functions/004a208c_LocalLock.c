
/* ==== KERNEL32.DLL::LocalLock @ 004a208c ==== 
 * signature: LPVOID __stdcall LocalLock(HLOCAL hMem)
 * body: 004a208c-004a2091
 * thunk to: KERNEL32.DLL::LocalLock
 */

LPVOID LocalLock(HLOCAL hMem)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a208c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalLock(hMem);
  return pvVar1;
}


