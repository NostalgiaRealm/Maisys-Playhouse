
/* ==== KERNEL32.DLL::HeapDestroy @ 004a2338 ==== 
 * signature: BOOL __stdcall HeapDestroy(HANDLE hHeap)
 * body: 004a2338-004a233d
 * thunk to: KERNEL32.DLL::HeapDestroy
 */

BOOL HeapDestroy(HANDLE hHeap)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapDestroy(hHeap);
  return BVar1;
}


