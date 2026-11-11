
/* ==== USER32.DLL::RedrawWindow @ 004a2482 ==== 
 * signature: BOOL __stdcall RedrawWindow(HWND hWnd, RECT * lprcUpdate, HRGN hrgnUpdate, UINT flags)
 * body: 004a2482-004a2487
 * thunk to: USER32.DLL::RedrawWindow
 */

BOOL RedrawWindow(HWND hWnd,RECT *lprcUpdate,HRGN hrgnUpdate,UINT flags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RedrawWindow(hWnd,lprcUpdate,hrgnUpdate,flags);
  return BVar1;
}


