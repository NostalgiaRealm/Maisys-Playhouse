
/* ==== USER32.DLL::ShowOwnedPopups @ 004a2518 ==== 
 * signature: BOOL __stdcall ShowOwnedPopups(HWND hWnd, BOOL fShow)
 * body: 004a2518-004a251d
 * thunk to: USER32.DLL::ShowOwnedPopups
 */

BOOL ShowOwnedPopups(HWND hWnd,BOOL fShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowOwnedPopups(hWnd,fShow);
  return BVar1;
}


