
/* ==== KERNEL32.DLL::HeapReAlloc @ 1402399a ==== 
 * signature: LPVOID __stdcall HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes)
 * body: 1402399a-1402399f
 * thunk to: KERNEL32.DLL::HeapReAlloc
 */

LPVOID HeapReAlloc(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem,SIZE_T dwBytes)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402399a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapReAlloc(hHeap,dwFlags,lpMem,dwBytes);
  return pvVar1;
}


