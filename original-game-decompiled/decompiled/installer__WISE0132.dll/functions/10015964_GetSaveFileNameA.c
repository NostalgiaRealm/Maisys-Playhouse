
/* ==== COMDLG32.DLL::GetSaveFileNameA @ 10015964 ==== 
 * signature: BOOL __stdcall GetSaveFileNameA(LPOPENFILENAMEA param_1)
 * body: 10015964-10015969
 * thunk to: COMDLG32.DLL::GetSaveFileNameA
 */

BOOL GetSaveFileNameA(LPOPENFILENAMEA param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetSaveFileNameA(param_1);
  return BVar1;
}


