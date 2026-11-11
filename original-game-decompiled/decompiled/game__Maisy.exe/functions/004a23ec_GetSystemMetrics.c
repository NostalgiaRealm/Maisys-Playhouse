
/* ==== USER32.DLL::GetSystemMetrics @ 004a23ec ==== 
 * signature: int __stdcall GetSystemMetrics(int nIndex)
 * body: 004a23ec-004a23f1
 * thunk to: USER32.DLL::GetSystemMetrics
 */

int GetSystemMetrics(int nIndex)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a23ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetSystemMetrics(nIndex);
  return iVar1;
}


