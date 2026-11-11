
/* ==== WINSPOOL.DRV::DocumentPropertiesA @ 004a29d4 ==== 
 * signature: LONG __stdcall DocumentPropertiesA(HWND hWnd, HANDLE hPrinter, LPSTR pDeviceName, PDEVMODEA pDevModeOutput, PDEVMODEA pDevModeInput, DWORD fMode)
 * body: 004a29d4-004a29d9
 * thunk to: WINSPOOL.DRV::DocumentPropertiesA
 */

LONG DocumentPropertiesA(HWND hWnd,HANDLE hPrinter,LPSTR pDeviceName,PDEVMODEA pDevModeOutput,
                        PDEVMODEA pDevModeInput,DWORD fMode)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a29d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DocumentPropertiesA(hWnd,hPrinter,pDeviceName,pDevModeOutput,pDevModeInput,fMode);
  return LVar1;
}


