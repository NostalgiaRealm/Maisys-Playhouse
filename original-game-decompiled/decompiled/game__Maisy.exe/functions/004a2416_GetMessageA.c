
/* ==== USER32.DLL::GetMessageA @ 004a2416 ==== 
 * signature: BOOL __stdcall GetMessageA(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax)
 * body: 004a2416-004a241b
 * thunk to: USER32.DLL::GetMessageA
 */

BOOL GetMessageA(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetMessageA(lpMsg,hWnd,wMsgFilterMin,wMsgFilterMax);
  return BVar1;
}


