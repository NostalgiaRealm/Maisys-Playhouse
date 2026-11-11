
/* ==== USER32.DLL::DdeConnect @ 00409fc2 ==== 
 * signature: HCONV __stdcall DdeConnect(DWORD idInst, HSZ hszService, HSZ hszTopic, PCONVCONTEXT pCC)
 * body: 00409fc2-00409fc7
 * thunk to: USER32.DLL::DdeConnect
 */

HCONV DdeConnect(DWORD idInst,HSZ hszService,HSZ hszTopic,PCONVCONTEXT pCC)

{
  HCONV pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409fc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeConnect(idInst,hszService,hszTopic,pCC);
  return pHVar1;
}


