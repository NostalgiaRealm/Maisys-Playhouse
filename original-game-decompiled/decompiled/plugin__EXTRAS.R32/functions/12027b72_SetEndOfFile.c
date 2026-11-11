
/* ==== KERNEL32.DLL::SetEndOfFile @ 12027b72 ==== 
 * signature: BOOL __stdcall SetEndOfFile(HANDLE hFile)
 * body: 12027b72-12027b77
 * thunk to: KERNEL32.DLL::SetEndOfFile
 */

BOOL SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027b72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}


