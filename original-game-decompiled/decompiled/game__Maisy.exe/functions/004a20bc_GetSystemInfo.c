
/* ==== KERNEL32.DLL::GetSystemInfo @ 004a20bc ==== 
 * signature: void __stdcall GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)
 * body: 004a20bc-004a20c1
 * thunk to: KERNEL32.DLL::GetSystemInfo
 */

void GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)

{
                    /* WARNING: Could not recover jumptable at 0x004a20bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemInfo(lpSystemInfo);
  return;
}


