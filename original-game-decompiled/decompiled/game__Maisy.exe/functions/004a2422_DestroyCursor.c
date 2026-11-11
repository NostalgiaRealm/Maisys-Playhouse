
/* ==== USER32.DLL::DestroyCursor @ 004a2422 ==== 
 * signature: BOOL __stdcall DestroyCursor(HCURSOR hCursor)
 * body: 004a2422-004a2427
 * thunk to: USER32.DLL::DestroyCursor
 */

BOOL DestroyCursor(HCURSOR hCursor)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyCursor(hCursor);
  return BVar1;
}


