
/* ==== KERNEL32.DLL::GetSystemInfo @ 11028e80 ==== 
 * signature: void __stdcall GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)
 * body: 11028e80-11028e85
 * thunk to: KERNEL32.DLL::GetSystemInfo
 */

void GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)

{
                    /* WARNING: Could not recover jumptable at 0x11028e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemInfo(lpSystemInfo);
  return;
}


