
/* ==== GDI32.DLL::SetViewportExtEx @ 004a28c6 ==== 
 * signature: BOOL __stdcall SetViewportExtEx(HDC hdc, int x, int y, LPSIZE lpsz)
 * body: 004a28c6-004a28cb
 * thunk to: GDI32.DLL::SetViewportExtEx
 */

BOOL SetViewportExtEx(HDC hdc,int x,int y,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a28c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetViewportExtEx(hdc,x,y,lpsz);
  return BVar1;
}


