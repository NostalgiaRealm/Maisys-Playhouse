
/* ==== USER32.DLL::DdeDisconnect @ 00409faa ==== 
 * signature: BOOL __stdcall DdeDisconnect(HCONV hConv)
 * body: 00409faa-00409faf
 * thunk to: USER32.DLL::DdeDisconnect
 */

BOOL DdeDisconnect(HCONV hConv)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00409faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeDisconnect(hConv);
  return BVar1;
}


