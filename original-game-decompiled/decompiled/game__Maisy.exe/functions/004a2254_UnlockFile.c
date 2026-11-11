
/* ==== KERNEL32.DLL::UnlockFile @ 004a2254 ==== 
 * signature: BOOL __stdcall UnlockFile(HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToUnlockLow, DWORD nNumberOfBytesToUnlockHigh)
 * body: 004a2254-004a2259
 * thunk to: KERNEL32.DLL::UnlockFile
 */

BOOL UnlockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,
               DWORD nNumberOfBytesToUnlockLow,DWORD nNumberOfBytesToUnlockHigh)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnlockFile(hFile,dwFileOffsetLow,dwFileOffsetHigh,nNumberOfBytesToUnlockLow,
                     nNumberOfBytesToUnlockHigh);
  return BVar1;
}


