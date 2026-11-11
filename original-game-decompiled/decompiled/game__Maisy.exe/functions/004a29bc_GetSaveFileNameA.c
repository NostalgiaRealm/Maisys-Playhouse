
/* ==== COMDLG32.DLL::GetSaveFileNameA @ 004a29bc ==== 
 * signature: BOOL __stdcall GetSaveFileNameA(LPOPENFILENAMEA param_1)
 * body: 004a29bc-004a29c1
 * thunk to: COMDLG32.DLL::GetSaveFileNameA
 */

BOOL GetSaveFileNameA(LPOPENFILENAMEA param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a29bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetSaveFileNameA(param_1);
  return BVar1;
}


