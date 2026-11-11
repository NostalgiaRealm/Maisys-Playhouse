
/* ==== KERNEL32.DLL::GlobalLock @ 12027b96 ==== 
 * signature: LPVOID __stdcall GlobalLock(HGLOBAL hMem)
 * body: 12027b96-12027b9b
 * thunk to: KERNEL32.DLL::GlobalLock
 */

LPVOID GlobalLock(HGLOBAL hMem)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027b96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalLock(hMem);
  return pvVar1;
}


