
/* ==== USER32.DLL::GetSystemMetrics @ 5f004a50 ==== 
 * signature: int __stdcall GetSystemMetrics(int nIndex)
 * body: 5f004a50-5f004a55
 * thunk to: USER32.DLL::GetSystemMetrics
 */

int GetSystemMetrics(int nIndex)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetSystemMetrics(nIndex);
  return iVar1;
}


