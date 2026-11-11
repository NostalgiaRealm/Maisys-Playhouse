
/* ==== USER32.DLL::PostMessageA @ 004a2512 ==== 
 * signature: BOOL __stdcall PostMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 004a2512-004a2517
 * thunk to: USER32.DLL::PostMessageA
 */

BOOL PostMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PostMessageA(hWnd,Msg,wParam,lParam);
  return BVar1;
}


