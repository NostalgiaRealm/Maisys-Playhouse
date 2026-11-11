
/* ==== USER32.DLL::GetScrollPos @ 004a2686 ==== 
 * signature: int __stdcall GetScrollPos(HWND hWnd, int nBar)
 * body: 004a2686-004a268b
 * thunk to: USER32.DLL::GetScrollPos
 */

int GetScrollPos(HWND hWnd,int nBar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetScrollPos(hWnd,nBar);
  return iVar1;
}


