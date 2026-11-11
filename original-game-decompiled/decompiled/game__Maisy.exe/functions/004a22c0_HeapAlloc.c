
/* ==== KERNEL32.DLL::HeapAlloc @ 004a22c0 ==== 
 * signature: LPVOID __stdcall HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)
 * body: 004a22c0-004a22c5
 * thunk to: KERNEL32.DLL::HeapAlloc
 */

LPVOID HeapAlloc(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a22c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapAlloc(hHeap,dwFlags,dwBytes);
  return pvVar1;
}


