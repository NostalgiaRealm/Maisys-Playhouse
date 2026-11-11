
/* ==== COMDLG32.DLL::GetOpenFileNameA @ 12027c44 ==== 
 * signature: BOOL __stdcall GetOpenFileNameA(LPOPENFILENAMEA param_1)
 * body: 12027c44-12027c49
 * thunk to: COMDLG32.DLL::GetOpenFileNameA
 */

BOOL GetOpenFileNameA(LPOPENFILENAMEA param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetOpenFileNameA(param_1);
  return BVar1;
}


