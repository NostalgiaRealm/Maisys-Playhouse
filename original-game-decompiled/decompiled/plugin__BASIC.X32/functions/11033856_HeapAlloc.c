
/* ==== KERNEL32.DLL::HeapAlloc @ 11033856 ==== 
 * signature: LPVOID __stdcall HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)
 * body: 11033856-1103385b
 * thunk to: KERNEL32.DLL::HeapAlloc
 */

LPVOID HeapAlloc(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11033856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapAlloc(hHeap,dwFlags,dwBytes);
  return pvVar1;
}


