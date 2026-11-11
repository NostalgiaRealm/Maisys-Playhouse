
/* ==== KERNEL32.DLL::HeapDestroy @ 140238da ==== 
 * signature: BOOL __stdcall HeapDestroy(HANDLE hHeap)
 * body: 140238da-140238df
 * thunk to: KERNEL32.DLL::HeapDestroy
 */

BOOL HeapDestroy(HANDLE hHeap)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapDestroy(hHeap);
  return BVar1;
}


