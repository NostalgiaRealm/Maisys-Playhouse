
/* ==== KERNEL32.DLL::HeapReAlloc @ 110339b8 ==== 
 * signature: LPVOID __stdcall HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes)
 * body: 110339b8-110339bd
 * thunk to: KERNEL32.DLL::HeapReAlloc
 */

LPVOID HeapReAlloc(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem,SIZE_T dwBytes)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x110339b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapReAlloc(hHeap,dwFlags,lpMem,dwBytes);
  return pvVar1;
}


