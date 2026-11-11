
/* ==== USER32.DLL::SetCursor @ 004a2428 ==== 
 * signature: HCURSOR __stdcall SetCursor(HCURSOR hCursor)
 * body: 004a2428-004a242d
 * thunk to: USER32.DLL::SetCursor
 */

HCURSOR SetCursor(HCURSOR hCursor)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCursor(hCursor);
  return pHVar1;
}


