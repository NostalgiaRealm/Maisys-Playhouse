
/* ==== KERNEL32.DLL::HeapDestroy @ 110338aa ==== 
 * signature: BOOL __stdcall HeapDestroy(HANDLE hHeap)
 * body: 110338aa-110338af
 * thunk to: KERNEL32.DLL::HeapDestroy
 */

BOOL HeapDestroy(HANDLE hHeap)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x110338aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapDestroy(hHeap);
  return BVar1;
}


