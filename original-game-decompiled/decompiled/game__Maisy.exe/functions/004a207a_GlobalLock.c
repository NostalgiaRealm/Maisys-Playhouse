
/* ==== KERNEL32.DLL::GlobalLock @ 004a207a ==== 
 * signature: LPVOID __stdcall GlobalLock(HGLOBAL hMem)
 * body: 004a207a-004a207f
 * thunk to: KERNEL32.DLL::GlobalLock
 */

LPVOID GlobalLock(HGLOBAL hMem)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a207a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalLock(hMem);
  return pvVar1;
}


