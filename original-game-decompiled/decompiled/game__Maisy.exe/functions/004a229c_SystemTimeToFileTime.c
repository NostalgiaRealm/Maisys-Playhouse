
/* ==== KERNEL32.DLL::SystemTimeToFileTime @ 004a229c ==== 
 * signature: BOOL __stdcall SystemTimeToFileTime(SYSTEMTIME * lpSystemTime, LPFILETIME lpFileTime)
 * body: 004a229c-004a22a1
 * thunk to: KERNEL32.DLL::SystemTimeToFileTime
 */

BOOL SystemTimeToFileTime(SYSTEMTIME *lpSystemTime,LPFILETIME lpFileTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a229c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SystemTimeToFileTime(lpSystemTime,lpFileTime);
  return BVar1;
}


