
/* ==== KERNEL32.DLL::GetCPInfo @ 110338e6 ==== 
 * signature: BOOL __stdcall GetCPInfo(UINT CodePage, LPCPINFO lpCPInfo)
 * body: 110338e6-110338eb
 * thunk to: KERNEL32.DLL::GetCPInfo
 */

BOOL GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x110338e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCPInfo(CodePage,lpCPInfo);
  return BVar1;
}


