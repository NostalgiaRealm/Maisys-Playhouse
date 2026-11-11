
/* ==== GDI32.DLL::SetWindowExtEx @ 004a28de ==== 
 * signature: BOOL __stdcall SetWindowExtEx(HDC hdc, int x, int y, LPSIZE lpsz)
 * body: 004a28de-004a28e3
 * thunk to: GDI32.DLL::SetWindowExtEx
 */

BOOL SetWindowExtEx(HDC hdc,int x,int y,LPSIZE lpsz)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a28de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowExtEx(hdc,x,y,lpsz);
  return BVar1;
}


