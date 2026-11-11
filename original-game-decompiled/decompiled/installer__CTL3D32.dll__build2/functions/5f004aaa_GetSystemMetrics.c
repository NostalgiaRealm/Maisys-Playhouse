
/* ==== USER32.DLL::GetSystemMetrics @ 5f004aaa ==== 
 * signature: int __stdcall GetSystemMetrics(int nIndex)
 * body: 5f004aaa-5f004aaf
 * thunk to: USER32.DLL::GetSystemMetrics
 */

int GetSystemMetrics(int nIndex)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004aaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetSystemMetrics(nIndex);
  return iVar1;
}


