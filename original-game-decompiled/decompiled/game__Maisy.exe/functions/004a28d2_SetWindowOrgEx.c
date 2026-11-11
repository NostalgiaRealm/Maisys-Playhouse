
/* ==== GDI32.DLL::SetWindowOrgEx @ 004a28d2 ==== 
 * signature: BOOL __stdcall SetWindowOrgEx(HDC hdc, int x, int y, LPPOINT lppt)
 * body: 004a28d2-004a28d7
 * thunk to: GDI32.DLL::SetWindowOrgEx
 */

BOOL SetWindowOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a28d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowOrgEx(hdc,x,y,lppt);
  return BVar1;
}


