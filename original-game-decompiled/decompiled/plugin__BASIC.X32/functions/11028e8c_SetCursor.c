
/* ==== USER32.DLL::SetCursor @ 11028e8c ==== 
 * signature: HCURSOR __stdcall SetCursor(HCURSOR hCursor)
 * body: 11028e8c-11028e91
 * thunk to: USER32.DLL::SetCursor
 */

HCURSOR SetCursor(HCURSOR hCursor)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCursor(hCursor);
  return pHVar1;
}


