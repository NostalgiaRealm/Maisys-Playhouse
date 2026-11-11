
/* ==== USER32.DLL::DdeGetData @ 00409fb6 ==== 
 * signature: DWORD __stdcall DdeGetData(HDDEDATA hData, LPBYTE pDst, DWORD cbMax, DWORD cbOff)
 * body: 00409fb6-00409fbb
 * thunk to: USER32.DLL::DdeGetData
 */

DWORD DdeGetData(HDDEDATA hData,LPBYTE pDst,DWORD cbMax,DWORD cbOff)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409fb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = DdeGetData(hData,pDst,cbMax,cbOff);
  return DVar1;
}


