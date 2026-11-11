
/* ==== KERNEL32.DLL::GlobalLock @ 11028e68 ==== 
 * signature: LPVOID __stdcall GlobalLock(HGLOBAL hMem)
 * body: 11028e68-11028e6d
 * thunk to: KERNEL32.DLL::GlobalLock
 */

LPVOID GlobalLock(HGLOBAL hMem)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalLock(hMem);
  return pvVar1;
}


