
/* ==== WINMM.DLL::DefDriverProc @ 0048ca5c ==== 
 * signature: LRESULT __stdcall DefDriverProc(DWORD_PTR dwDriverIdentifier, HDRVR hdrvr, UINT uMsg, LPARAM lParam1, LPARAM lParam2)
 * body: 0048ca5c-0048ca61
 * thunk to: WINMM.DLL::DefDriverProc
 */

LRESULT DefDriverProc(DWORD_PTR dwDriverIdentifier,HDRVR hdrvr,UINT uMsg,LPARAM lParam1,
                     LPARAM lParam2)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0048ca5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefDriverProc(dwDriverIdentifier,hdrvr,uMsg,lParam1,lParam2);
  return LVar1;
}


