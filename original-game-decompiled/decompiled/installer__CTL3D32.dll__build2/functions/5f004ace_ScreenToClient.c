
/* ==== USER32.DLL::ScreenToClient @ 5f004ace ==== 
 * signature: BOOL __stdcall ScreenToClient(HWND hWnd, LPPOINT lpPoint)
 * body: 5f004ace-5f004ad3
 * thunk to: USER32.DLL::ScreenToClient
 */

BOOL ScreenToClient(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004ace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScreenToClient(hWnd,lpPoint);
  return BVar1;
}


