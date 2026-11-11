
/* ==== KERNEL32.DLL::DeleteCriticalSection @ 14023862 ==== 
 * signature: void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 14023862-14023867
 * thunk to: KERNEL32.DLL::DeleteCriticalSection
 */

void DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x14023862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}


