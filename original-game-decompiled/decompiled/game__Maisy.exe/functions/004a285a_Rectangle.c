
/* ==== GDI32.DLL::Rectangle @ 004a285a ==== 
 * signature: BOOL __stdcall Rectangle(HDC hdc, int left, int top, int right, int bottom)
 * body: 004a285a-004a285f
 * thunk to: GDI32.DLL::Rectangle
 */

BOOL Rectangle(HDC hdc,int left,int top,int right,int bottom)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a285a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Rectangle(hdc,left,top,right,bottom);
  return BVar1;
}


