
/* ==== USER32.DLL::SetForegroundWindow @ 004a23f2 ==== 
 * signature: BOOL __stdcall SetForegroundWindow(HWND hWnd)
 * body: 004a23f2-004a23f7
 * thunk to: USER32.DLL::SetForegroundWindow
 */

BOOL SetForegroundWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a23f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetForegroundWindow(hWnd);
  return BVar1;
}


