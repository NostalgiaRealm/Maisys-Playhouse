
/* ==== GDI32.DLL::MoveToEx @ 004a28f6 ==== 
 * signature: BOOL __stdcall MoveToEx(HDC hdc, int x, int y, LPPOINT lppt)
 * body: 004a28f6-004a28fb
 * thunk to: GDI32.DLL::MoveToEx
 */

BOOL MoveToEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a28f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveToEx(hdc,x,y,lppt);
  return BVar1;
}


