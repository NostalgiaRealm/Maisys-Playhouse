
/* ==== KERNEL32.DLL::HeapCreate @ 140238d4 ==== 
 * signature: HANDLE __stdcall HeapCreate(DWORD flOptions, SIZE_T dwInitialSize, SIZE_T dwMaximumSize)
 * body: 140238d4-140238d9
 * thunk to: KERNEL32.DLL::HeapCreate
 */

HANDLE HeapCreate(DWORD flOptions,SIZE_T dwInitialSize,SIZE_T dwMaximumSize)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapCreate(flOptions,dwInitialSize,dwMaximumSize);
  return pvVar1;
}


