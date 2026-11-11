
/* ==== USER32.DLL::TranslateMDISysAccel @ 004a272e ==== 
 * signature: BOOL __stdcall TranslateMDISysAccel(HWND hWndClient, LPMSG lpMsg)
 * body: 004a272e-004a2733
 * thunk to: USER32.DLL::TranslateMDISysAccel
 */

BOOL TranslateMDISysAccel(HWND hWndClient,LPMSG lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a272e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMDISysAccel(hWndClient,lpMsg);
  return BVar1;
}


