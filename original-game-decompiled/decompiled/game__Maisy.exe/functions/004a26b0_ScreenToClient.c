
/* ==== USER32.DLL::ScreenToClient @ 004a26b0 ==== 
 * signature: BOOL __stdcall ScreenToClient(HWND hWnd, LPPOINT lpPoint)
 * body: 004a26b0-004a26b5
 * thunk to: USER32.DLL::ScreenToClient
 */

BOOL ScreenToClient(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a26b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScreenToClient(hWnd,lpPoint);
  return BVar1;
}


