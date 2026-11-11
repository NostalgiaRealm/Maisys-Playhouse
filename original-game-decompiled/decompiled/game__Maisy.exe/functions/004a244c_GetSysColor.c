
/* ==== USER32.DLL::GetSysColor @ 004a244c ==== 
 * signature: DWORD __stdcall GetSysColor(int nIndex)
 * body: 004a244c-004a2451
 * thunk to: USER32.DLL::GetSysColor
 */

DWORD GetSysColor(int nIndex)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a244c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetSysColor(nIndex);
  return DVar1;
}


