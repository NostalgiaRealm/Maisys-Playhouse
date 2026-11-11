
/* ==== KERNEL32.DLL::WinExec @ 12027b7e ==== 
 * signature: UINT __stdcall WinExec(LPCSTR lpCmdLine, UINT uCmdShow)
 * body: 12027b7e-12027b83
 * thunk to: KERNEL32.DLL::WinExec
 */

UINT WinExec(LPCSTR lpCmdLine,UINT uCmdShow)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027b7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = WinExec(lpCmdLine,uCmdShow);
  return UVar1;
}


