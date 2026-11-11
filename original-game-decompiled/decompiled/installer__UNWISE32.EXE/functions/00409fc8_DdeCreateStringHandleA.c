
/* ==== USER32.DLL::DdeCreateStringHandleA @ 00409fc8 ==== 
 * signature: HSZ __stdcall DdeCreateStringHandleA(DWORD idInst, LPCSTR psz, int iCodePage)
 * body: 00409fc8-00409fcd
 * thunk to: USER32.DLL::DdeCreateStringHandleA
 */

HSZ DdeCreateStringHandleA(DWORD idInst,LPCSTR psz,int iCodePage)

{
  HSZ pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateStringHandleA(idInst,psz,iCodePage);
  return pHVar1;
}


