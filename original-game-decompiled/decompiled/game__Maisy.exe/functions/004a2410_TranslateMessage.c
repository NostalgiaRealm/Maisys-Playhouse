
/* ==== USER32.DLL::TranslateMessage @ 004a2410 ==== 
 * signature: BOOL __stdcall TranslateMessage(MSG * lpMsg)
 * body: 004a2410-004a2415
 * thunk to: USER32.DLL::TranslateMessage
 */

BOOL TranslateMessage(MSG *lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMessage(lpMsg);
  return BVar1;
}


