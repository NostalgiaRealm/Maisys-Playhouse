
/* ==== KERNEL32.DLL::LockFile @ 004a224e ==== 
 * signature: BOOL __stdcall LockFile(HANDLE hFile, DWORD dwFileOffsetLow, DWORD dwFileOffsetHigh, DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh)
 * body: 004a224e-004a2253
 * thunk to: KERNEL32.DLL::LockFile
 */

BOOL LockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,
             DWORD nNumberOfBytesToLockLow,DWORD nNumberOfBytesToLockHigh)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a224e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LockFile(hFile,dwFileOffsetLow,dwFileOffsetHigh,nNumberOfBytesToLockLow,
                   nNumberOfBytesToLockHigh);
  return BVar1;
}


