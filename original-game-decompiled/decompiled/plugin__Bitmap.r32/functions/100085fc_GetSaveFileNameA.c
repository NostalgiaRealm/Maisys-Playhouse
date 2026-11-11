
/* ==== COMDLG32.DLL::GetSaveFileNameA @ 100085fc ==== 
 * signature: BOOL __stdcall GetSaveFileNameA(LPOPENFILENAMEA param_1)
 * body: 100085fc-10008601
 * thunk to: COMDLG32.DLL::GetSaveFileNameA
 */

BOOL GetSaveFileNameA(LPOPENFILENAMEA param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100085fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetSaveFileNameA(param_1);
  return BVar1;
}


