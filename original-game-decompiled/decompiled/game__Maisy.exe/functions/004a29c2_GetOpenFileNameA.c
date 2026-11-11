
/* ==== COMDLG32.DLL::GetOpenFileNameA @ 004a29c2 ==== 
 * signature: BOOL __stdcall GetOpenFileNameA(LPOPENFILENAMEA param_1)
 * body: 004a29c2-004a29c7
 * thunk to: COMDLG32.DLL::GetOpenFileNameA
 */

BOOL GetOpenFileNameA(LPOPENFILENAMEA param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a29c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetOpenFileNameA(param_1);
  return BVar1;
}


