
/* ==== GDI32.DLL::SetViewportOrgEx @ 004a28ba ==== 
 * signature: BOOL __stdcall SetViewportOrgEx(HDC hdc, int x, int y, LPPOINT lppt)
 * body: 004a28ba-004a28bf
 * thunk to: GDI32.DLL::SetViewportOrgEx
 */

BOOL SetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a28ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetViewportOrgEx(hdc,x,y,lppt);
  return BVar1;
}


