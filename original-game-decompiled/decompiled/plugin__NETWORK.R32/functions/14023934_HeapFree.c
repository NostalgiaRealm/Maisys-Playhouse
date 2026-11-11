
/* ==== KERNEL32.DLL::HeapFree @ 14023934 ==== 
 * signature: BOOL __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem)
 * body: 14023934-14023939
 * thunk to: KERNEL32.DLL::HeapFree
 */

BOOL HeapFree(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapFree(hHeap,dwFlags,lpMem);
  return BVar1;
}


