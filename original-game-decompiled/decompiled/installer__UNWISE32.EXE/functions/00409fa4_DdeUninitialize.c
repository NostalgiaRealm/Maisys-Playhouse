
/* ==== USER32.DLL::DdeUninitialize @ 00409fa4 ==== 
 * signature: BOOL __stdcall DdeUninitialize(DWORD idInst)
 * body: 00409fa4-00409fa9
 * thunk to: USER32.DLL::DdeUninitialize
 */

BOOL DdeUninitialize(DWORD idInst)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeUninitialize(idInst);
  return BVar1;
}


