
/* ==== KERNEL32.DLL::FlushFileBuffers @ 14023970 ==== 
 * signature: BOOL __stdcall FlushFileBuffers(HANDLE hFile)
 * body: 14023970-14023975
 * thunk to: KERNEL32.DLL::FlushFileBuffers
 */

BOOL FlushFileBuffers(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlushFileBuffers(hFile);
  return BVar1;
}


