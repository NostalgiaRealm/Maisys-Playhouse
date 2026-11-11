
/* ==== USER32.DLL::ClientToScreen @ 5f004a9e ==== 
 * signature: BOOL __stdcall ClientToScreen(HWND hWnd, LPPOINT lpPoint)
 * body: 5f004a9e-5f004aa3
 * thunk to: USER32.DLL::ClientToScreen
 */

BOOL ClientToScreen(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ClientToScreen(hWnd,lpPoint);
  return BVar1;
}


