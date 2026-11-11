
/* ==== USER32.DLL::DdeUninitialize @ 10015922 ==== 
 * signature: BOOL __stdcall DdeUninitialize(DWORD idInst)
 * body: 10015922-10015927
 * thunk to: USER32.DLL::DdeUninitialize
 */

BOOL DdeUninitialize(DWORD idInst)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeUninitialize(idInst);
  return BVar1;
}


