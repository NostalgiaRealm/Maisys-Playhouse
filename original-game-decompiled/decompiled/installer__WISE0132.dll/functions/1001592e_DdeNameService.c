
/* ==== USER32.DLL::DdeNameService @ 1001592e ==== 
 * signature: HDDEDATA __stdcall DdeNameService(DWORD idInst, HSZ hsz1, HSZ hsz2, UINT afCmd)
 * body: 1001592e-10015933
 * thunk to: USER32.DLL::DdeNameService
 */

HDDEDATA DdeNameService(DWORD idInst,HSZ hsz1,HSZ hsz2,UINT afCmd)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001592e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeNameService(idInst,hsz1,hsz2,afCmd);
  return pHVar1;
}


