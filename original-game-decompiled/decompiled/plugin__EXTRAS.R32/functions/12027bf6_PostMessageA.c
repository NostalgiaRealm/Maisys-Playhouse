
/* ==== USER32.DLL::PostMessageA @ 12027bf6 ==== 
 * signature: BOOL __stdcall PostMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 12027bf6-12027bfb
 * thunk to: USER32.DLL::PostMessageA
 */

BOOL PostMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PostMessageA(hWnd,Msg,wParam,lParam);
  return BVar1;
}


