
/* ==== KERNEL32.DLL::GetSystemTime @ 004a22d8 ==== 
 * signature: void __stdcall GetSystemTime(LPSYSTEMTIME lpSystemTime)
 * body: 004a22d8-004a22dd
 * thunk to: KERNEL32.DLL::GetSystemTime
 */

void GetSystemTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x004a22d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemTime(lpSystemTime);
  return;
}


