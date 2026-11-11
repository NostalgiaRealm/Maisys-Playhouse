
/* ==== USER32.DLL::TranslateAcceleratorA @ 004a2734 ==== 
 * signature: int __stdcall TranslateAcceleratorA(HWND hWnd, HACCEL hAccTable, LPMSG lpMsg)
 * body: 004a2734-004a2739
 * thunk to: USER32.DLL::TranslateAcceleratorA
 */

int TranslateAcceleratorA(HWND hWnd,HACCEL hAccTable,LPMSG lpMsg)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = TranslateAcceleratorA(hWnd,hAccTable,lpMsg);
  return iVar1;
}


