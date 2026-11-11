
/* ==== KERNEL32.DLL::CloseHandle @ 14023976 ==== 
 * signature: BOOL __stdcall CloseHandle(HANDLE hObject)
 * body: 14023976-1402397b
 * thunk to: KERNEL32.DLL::CloseHandle
 */

BOOL CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


