
/* ==== KERNEL32.DLL::EnterCriticalSection @ 11033928 ==== 
 * signature: void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 11033928-1103392d
 * thunk to: KERNEL32.DLL::EnterCriticalSection
 */

void EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x11033928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}


