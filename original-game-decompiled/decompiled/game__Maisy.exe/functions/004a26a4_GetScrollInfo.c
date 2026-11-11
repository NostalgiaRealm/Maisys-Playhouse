
/* ==== USER32.DLL::GetScrollInfo @ 004a26a4 ==== 
 * signature: BOOL __stdcall GetScrollInfo(HWND hwnd, int nBar, LPSCROLLINFO lpsi)
 * body: 004a26a4-004a26a9
 * thunk to: USER32.DLL::GetScrollInfo
 */

BOOL GetScrollInfo(HWND hwnd,int nBar,LPSCROLLINFO lpsi)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a26a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetScrollInfo(hwnd,nBar,lpsi);
  return BVar1;
}


