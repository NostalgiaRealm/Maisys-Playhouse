
/* ==== KERNEL32.DLL::FileTimeToSystemTime @ 004a22a8 ==== 
 * signature: BOOL __stdcall FileTimeToSystemTime(FILETIME * lpFileTime, LPSYSTEMTIME lpSystemTime)
 * body: 004a22a8-004a22ad
 * thunk to: KERNEL32.DLL::FileTimeToSystemTime
 */

BOOL FileTimeToSystemTime(FILETIME *lpFileTime,LPSYSTEMTIME lpSystemTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a22a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToSystemTime(lpFileTime,lpSystemTime);
  return BVar1;
}


