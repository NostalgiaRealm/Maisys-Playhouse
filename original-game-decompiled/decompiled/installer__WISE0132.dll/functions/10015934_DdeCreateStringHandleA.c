
/* ==== USER32.DLL::DdeCreateStringHandleA @ 10015934 ==== 
 * signature: HSZ __stdcall DdeCreateStringHandleA(DWORD idInst, LPCSTR psz, int iCodePage)
 * body: 10015934-10015939
 * thunk to: USER32.DLL::DdeCreateStringHandleA
 */

HSZ DdeCreateStringHandleA(DWORD idInst,LPCSTR psz,int iCodePage)

{
  HSZ pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateStringHandleA(idInst,psz,iCodePage);
  return pHVar1;
}


