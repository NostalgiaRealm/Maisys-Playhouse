
/* ==== GDI32.DLL::OffsetWindowOrgEx @ 004a28d8 ==== 
 * signature: BOOL __stdcall OffsetWindowOrgEx(HDC hdc, int x, int y, LPPOINT lppt)
 * body: 004a28d8-004a28dd
 * thunk to: GDI32.DLL::OffsetWindowOrgEx
 */

BOOL OffsetWindowOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a28d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OffsetWindowOrgEx(hdc,x,y,lppt);
  return BVar1;
}


