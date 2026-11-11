
/* ==== USER32.DLL::ScrollWindowEx @ 004a25ae ==== 
 * signature: int __stdcall ScrollWindowEx(HWND hWnd, int dx, int dy, RECT * prcScroll, RECT * prcClip, HRGN hrgnUpdate, LPRECT prcUpdate, UINT flags)
 * body: 004a25ae-004a25b3
 * thunk to: USER32.DLL::ScrollWindowEx
 */

int ScrollWindowEx(HWND hWnd,int dx,int dy,RECT *prcScroll,RECT *prcClip,HRGN hrgnUpdate,
                  LPRECT prcUpdate,UINT flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a25ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ScrollWindowEx(hWnd,dx,dy,prcScroll,prcClip,hrgnUpdate,prcUpdate,flags);
  return iVar1;
}


