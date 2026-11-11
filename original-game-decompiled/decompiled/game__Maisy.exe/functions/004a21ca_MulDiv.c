
/* ==== KERNEL32.DLL::MulDiv @ 004a21ca ==== 
 * signature: int __stdcall MulDiv(int nNumber, int nNumerator, int nDenominator)
 * body: 004a21ca-004a21cf
 * thunk to: KERNEL32.DLL::MulDiv
 */

int MulDiv(int nNumber,int nNumerator,int nDenominator)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a21ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MulDiv(nNumber,nNumerator,nDenominator);
  return iVar1;
}


