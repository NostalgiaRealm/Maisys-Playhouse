
/* ==== KERNEL32.DLL::HeapFree @ 11033850 ==== 
 * signature: BOOL __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem)
 * body: 11033850-11033855
 * thunk to: KERNEL32.DLL::HeapFree
 */

BOOL HeapFree(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11033850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapFree(hHeap,dwFlags,lpMem);
  return BVar1;
}


