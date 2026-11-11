
/* ==== KERNEL32.DLL::EnterCriticalSection @ 14023868 ==== 
 * signature: void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 14023868-1402386d
 * thunk to: KERNEL32.DLL::EnterCriticalSection
 */

void EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x14023868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}


