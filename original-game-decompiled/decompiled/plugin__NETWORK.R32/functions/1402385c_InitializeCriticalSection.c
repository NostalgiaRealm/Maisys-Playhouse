
/* ==== KERNEL32.DLL::InitializeCriticalSection @ 1402385c ==== 
 * signature: void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 1402385c-14023861
 * thunk to: KERNEL32.DLL::InitializeCriticalSection
 */

void InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x1402385c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}


