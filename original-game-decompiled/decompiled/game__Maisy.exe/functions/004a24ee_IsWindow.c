
/* ==== USER32.DLL::IsWindow @ 004a24ee ==== 
 * signature: BOOL __stdcall IsWindow(HWND hWnd)
 * body: 004a24ee-004a24f3
 * thunk to: USER32.DLL::IsWindow
 */

BOOL IsWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a24ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindow(hWnd);
  return BVar1;
}


