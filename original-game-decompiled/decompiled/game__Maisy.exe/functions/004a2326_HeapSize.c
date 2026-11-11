
/* ==== KERNEL32.DLL::HeapSize @ 004a2326 ==== 
 * signature: SIZE_T __stdcall HeapSize(HANDLE hHeap, DWORD dwFlags, LPCVOID lpMem)
 * body: 004a2326-004a232b
 * thunk to: KERNEL32.DLL::HeapSize
 */

SIZE_T HeapSize(HANDLE hHeap,DWORD dwFlags,LPCVOID lpMem)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = HeapSize(hHeap,dwFlags,lpMem);
  return SVar1;
}


