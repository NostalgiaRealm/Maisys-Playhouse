
/* ==== USER32.DLL::DrawMenuBar @ 004a273a ==== 
 * signature: BOOL __stdcall DrawMenuBar(HWND hWnd)
 * body: 004a273a-004a273f
 * thunk to: USER32.DLL::DrawMenuBar
 */

BOOL DrawMenuBar(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a273a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawMenuBar(hWnd);
  return BVar1;
}


