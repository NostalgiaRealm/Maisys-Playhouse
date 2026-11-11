
/* ==== USER32.DLL::CreateDialogIndirectParamA @ 004a24e8 ==== 
 * signature: HWND __stdcall CreateDialogIndirectParamA(HINSTANCE hInstance, LPCDLGTEMPLATEA lpTemplate, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)
 * body: 004a24e8-004a24ed
 * thunk to: USER32.DLL::CreateDialogIndirectParamA
 */

HWND CreateDialogIndirectParamA
               (HINSTANCE hInstance,LPCDLGTEMPLATEA lpTemplate,HWND hWndParent,DLGPROC lpDialogFunc,
               LPARAM dwInitParam)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a24e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDialogIndirectParamA(hInstance,lpTemplate,hWndParent,lpDialogFunc,dwInitParam);
  return pHVar1;
}


