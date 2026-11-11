
/* ==== USER32.DLL::DdeQueryStringA @ 1001594c ==== 
 * signature: DWORD __stdcall DdeQueryStringA(DWORD idInst, HSZ hsz, LPSTR psz, DWORD cchMax, int iCodePage)
 * body: 1001594c-10015951
 * thunk to: USER32.DLL::DdeQueryStringA
 */

DWORD DdeQueryStringA(DWORD idInst,HSZ hsz,LPSTR psz,DWORD cchMax,int iCodePage)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001594c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = DdeQueryStringA(idInst,hsz,psz,cchMax,iCodePage);
  return DVar1;
}


