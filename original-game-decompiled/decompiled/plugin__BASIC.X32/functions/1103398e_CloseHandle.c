
/* ==== KERNEL32.DLL::CloseHandle @ 1103398e ==== 
 * signature: BOOL __stdcall CloseHandle(HANDLE hObject)
 * body: 1103398e-11033993
 * thunk to: KERNEL32.DLL::CloseHandle
 */

BOOL CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1103398e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


