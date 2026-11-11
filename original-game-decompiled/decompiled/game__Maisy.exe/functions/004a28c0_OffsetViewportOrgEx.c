
/* ==== GDI32.DLL::OffsetViewportOrgEx @ 004a28c0 ==== 
 * signature: BOOL __stdcall OffsetViewportOrgEx(HDC hdc, int x, int y, LPPOINT lppt)
 * body: 004a28c0-004a28c5
 * thunk to: GDI32.DLL::OffsetViewportOrgEx
 */

BOOL OffsetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a28c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OffsetViewportOrgEx(hdc,x,y,lppt);
  return BVar1;
}


