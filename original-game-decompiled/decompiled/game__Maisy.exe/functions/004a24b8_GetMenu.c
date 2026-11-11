
/* ==== USER32.DLL::GetMenu @ 004a24b8 ==== 
 * signature: HMENU __stdcall GetMenu(HWND hWnd)
 * body: 004a24b8-004a24bd
 * thunk to: USER32.DLL::GetMenu
 */

HMENU GetMenu(HWND hWnd)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a24b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetMenu(hWnd);
  return pHVar1;
}


