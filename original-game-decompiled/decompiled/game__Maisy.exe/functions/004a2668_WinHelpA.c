
/* ==== USER32.DLL::WinHelpA @ 004a2668 ==== 
 * signature: BOOL __stdcall WinHelpA(HWND hWndMain, LPCSTR lpszHelp, UINT uCommand, ULONG_PTR dwData)
 * body: 004a2668-004a266d
 * thunk to: USER32.DLL::WinHelpA
 */

BOOL WinHelpA(HWND hWndMain,LPCSTR lpszHelp,UINT uCommand,ULONG_PTR dwData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WinHelpA(hWndMain,lpszHelp,uCommand,dwData);
  return BVar1;
}


