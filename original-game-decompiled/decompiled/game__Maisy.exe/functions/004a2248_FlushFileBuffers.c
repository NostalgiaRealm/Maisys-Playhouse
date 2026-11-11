
/* ==== KERNEL32.DLL::FlushFileBuffers @ 004a2248 ==== 
 * signature: BOOL __stdcall FlushFileBuffers(HANDLE hFile)
 * body: 004a2248-004a224d
 * thunk to: KERNEL32.DLL::FlushFileBuffers
 */

BOOL FlushFileBuffers(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlushFileBuffers(hFile);
  return BVar1;
}


