
/* ==== GDI32.DLL::Rectangle @ 11028ef8 ==== 
 * signature: BOOL __stdcall Rectangle(HDC hdc, int left, int top, int right, int bottom)
 * body: 11028ef8-11028efd
 * thunk to: GDI32.DLL::Rectangle
 */

BOOL Rectangle(HDC hdc,int left,int top,int right,int bottom)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Rectangle(hdc,left,top,right,bottom);
  return BVar1;
}


