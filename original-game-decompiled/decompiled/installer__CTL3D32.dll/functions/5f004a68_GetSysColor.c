
/* ==== USER32.DLL::GetSysColor @ 5f004a68 ==== 
 * signature: DWORD __stdcall GetSysColor(int nIndex)
 * body: 5f004a68-5f004a6d
 * thunk to: USER32.DLL::GetSysColor
 */

DWORD GetSysColor(int nIndex)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetSysColor(nIndex);
  return DVar1;
}


