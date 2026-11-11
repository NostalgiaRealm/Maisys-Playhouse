
/* ==== WINMM.DLL::timeGetTime @ 0048ca26 ==== 
 * signature: DWORD __stdcall timeGetTime(void)
 * body: 0048ca26-0048ca2b
 * thunk to: WINMM.DLL::timeGetTime
 */

DWORD timeGetTime(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = timeGetTime();
  return DVar1;
}


