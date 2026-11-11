
/* ==== USER32.DLL::SystemParametersInfoA @ 004a26da ==== 
 * signature: BOOL __stdcall SystemParametersInfoA(UINT uiAction, UINT uiParam, PVOID pvParam, UINT fWinIni)
 * body: 004a26da-004a26df
 * thunk to: USER32.DLL::SystemParametersInfoA
 */

BOOL SystemParametersInfoA(UINT uiAction,UINT uiParam,PVOID pvParam,UINT fWinIni)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a26da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SystemParametersInfoA(uiAction,uiParam,pvParam,fWinIni);
  return BVar1;
}


