
/* ==== KERNEL32.DLL::LocalFileTimeToFileTime @ 004a2296 ==== 
 * signature: BOOL __stdcall LocalFileTimeToFileTime(FILETIME * lpLocalFileTime, LPFILETIME lpFileTime)
 * body: 004a2296-004a229b
 * thunk to: KERNEL32.DLL::LocalFileTimeToFileTime
 */

BOOL LocalFileTimeToFileTime(FILETIME *lpLocalFileTime,LPFILETIME lpFileTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LocalFileTimeToFileTime(lpLocalFileTime,lpFileTime);
  return BVar1;
}


