
/* ==== USER32.DLL::ClientToScreen @ 004a277c ==== 
 * signature: BOOL __stdcall ClientToScreen(HWND hWnd, LPPOINT lpPoint)
 * body: 004a277c-004a2781
 * thunk to: USER32.DLL::ClientToScreen
 */

BOOL ClientToScreen(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a277c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ClientToScreen(hWnd,lpPoint);
  return BVar1;
}


