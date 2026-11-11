
/* ==== COMDLG32.DLL::GetOpenFileNameA @ 00409fda ==== 
 * signature: BOOL __stdcall GetOpenFileNameA(LPOPENFILENAMEA param_1)
 * body: 00409fda-00409fdf
 * thunk to: COMDLG32.DLL::GetOpenFileNameA
 */

BOOL GetOpenFileNameA(LPOPENFILENAMEA param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409fda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetOpenFileNameA(param_1);
  return BVar1;
}


