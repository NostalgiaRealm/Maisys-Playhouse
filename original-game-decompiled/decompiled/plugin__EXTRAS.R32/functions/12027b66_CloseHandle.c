
/* ==== KERNEL32.DLL::CloseHandle @ 12027b66 ==== 
 * signature: BOOL __stdcall CloseHandle(HANDLE hObject)
 * body: 12027b66-12027b6b
 * thunk to: KERNEL32.DLL::CloseHandle
 */

BOOL CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


