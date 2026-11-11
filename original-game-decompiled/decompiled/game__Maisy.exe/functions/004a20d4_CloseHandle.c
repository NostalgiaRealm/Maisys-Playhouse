
/* ==== KERNEL32.DLL::CloseHandle @ 004a20d4 ==== 
 * signature: BOOL __stdcall CloseHandle(HANDLE hObject)
 * body: 004a20d4-004a20d9
 * thunk to: KERNEL32.DLL::CloseHandle
 */

BOOL CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a20d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


