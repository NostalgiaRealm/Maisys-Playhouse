
/* ==== USER32.DLL::DdeClientTransaction @ 10015958 ==== 
 * signature: HDDEDATA __stdcall DdeClientTransaction(LPBYTE pData, DWORD cbData, HCONV hConv, HSZ hszItem, UINT wFmt, UINT wType, DWORD dwTimeout, LPDWORD pdwResult)
 * body: 10015958-1001595d
 * thunk to: USER32.DLL::DdeClientTransaction
 */

HDDEDATA DdeClientTransaction
                   (LPBYTE pData,DWORD cbData,HCONV hConv,HSZ hszItem,UINT wFmt,UINT wType,
                   DWORD dwTimeout,LPDWORD pdwResult)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeClientTransaction(pData,cbData,hConv,hszItem,wFmt,wType,dwTimeout,pdwResult);
  return pHVar1;
}


