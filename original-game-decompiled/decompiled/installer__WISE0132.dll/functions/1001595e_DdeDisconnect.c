
/* ==== USER32.DLL::DdeDisconnect @ 1001595e ==== 
 * signature: BOOL __stdcall DdeDisconnect(HCONV hConv)
 * body: 1001595e-10015963
 * thunk to: USER32.DLL::DdeDisconnect
 */

BOOL DdeDisconnect(HCONV hConv)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1001595e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeDisconnect(hConv);
  return BVar1;
}


