
/* ==== KERNEL32.DLL::DeleteCriticalSection @ 110338da ==== 
 * signature: void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 110338da-110338df
 * thunk to: KERNEL32.DLL::DeleteCriticalSection
 */

void DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x110338da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}


