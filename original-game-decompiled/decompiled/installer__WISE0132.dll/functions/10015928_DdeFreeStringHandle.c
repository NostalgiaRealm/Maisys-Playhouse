
/* ==== USER32.DLL::DdeFreeStringHandle @ 10015928 ==== 
 * signature: BOOL __stdcall DdeFreeStringHandle(DWORD idInst, HSZ hsz)
 * body: 10015928-1001592d
 * thunk to: USER32.DLL::DdeFreeStringHandle
 */

BOOL DdeFreeStringHandle(DWORD idInst,HSZ hsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10015928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeFreeStringHandle(idInst,hsz);
  return BVar1;
}


