
/* ==== USER32.DLL::IsDialogMessageA @ 004a25b4 ==== 
 * signature: BOOL __stdcall IsDialogMessageA(HWND hDlg, LPMSG lpMsg)
 * body: 004a25b4-004a25b9
 * thunk to: USER32.DLL::IsDialogMessageA
 */

BOOL IsDialogMessageA(HWND hDlg,LPMSG lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a25b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsDialogMessageA(hDlg,lpMsg);
  return BVar1;
}


