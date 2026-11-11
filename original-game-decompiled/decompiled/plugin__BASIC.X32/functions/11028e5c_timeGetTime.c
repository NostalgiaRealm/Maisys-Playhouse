
/* ==== WINMM.DLL::timeGetTime @ 11028e5c ==== 
 * signature: DWORD __stdcall timeGetTime(void)
 * body: 11028e5c-11028e61
 * thunk to: WINMM.DLL::timeGetTime
 */

DWORD timeGetTime(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = timeGetTime();
  return DVar1;
}


