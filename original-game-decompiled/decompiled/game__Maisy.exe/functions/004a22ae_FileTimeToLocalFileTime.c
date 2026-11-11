
/* ==== KERNEL32.DLL::FileTimeToLocalFileTime @ 004a22ae ==== 
 * signature: BOOL __stdcall FileTimeToLocalFileTime(FILETIME * lpFileTime, LPFILETIME lpLocalFileTime)
 * body: 004a22ae-004a22b3
 * thunk to: KERNEL32.DLL::FileTimeToLocalFileTime
 */

BOOL FileTimeToLocalFileTime(FILETIME *lpFileTime,LPFILETIME lpLocalFileTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a22ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToLocalFileTime(lpFileTime,lpLocalFileTime);
  return BVar1;
}


