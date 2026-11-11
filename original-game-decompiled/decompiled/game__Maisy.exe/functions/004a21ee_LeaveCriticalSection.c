
/* ==== KERNEL32.DLL::LeaveCriticalSection @ 004a21ee ==== 
 * signature: void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 004a21ee-004a21f3
 * thunk to: KERNEL32.DLL::LeaveCriticalSection
 */

void LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004a21ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}


