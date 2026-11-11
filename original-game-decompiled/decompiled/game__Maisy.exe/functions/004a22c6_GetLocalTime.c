
/* ==== KERNEL32.DLL::GetLocalTime @ 004a22c6 ==== 
 * signature: void __stdcall GetLocalTime(LPSYSTEMTIME lpSystemTime)
 * body: 004a22c6-004a22cb
 * thunk to: KERNEL32.DLL::GetLocalTime
 */

void GetLocalTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x004a22c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetLocalTime(lpSystemTime);
  return;
}


