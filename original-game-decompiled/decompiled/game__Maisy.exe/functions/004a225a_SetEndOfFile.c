
/* ==== KERNEL32.DLL::SetEndOfFile @ 004a225a ==== 
 * signature: BOOL __stdcall SetEndOfFile(HANDLE hFile)
 * body: 004a225a-004a225f
 * thunk to: KERNEL32.DLL::SetEndOfFile
 */

BOOL SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a225a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}


