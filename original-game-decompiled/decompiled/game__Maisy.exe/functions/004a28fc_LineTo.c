
/* ==== GDI32.DLL::LineTo @ 004a28fc ==== 
 * signature: BOOL __stdcall LineTo(HDC hdc, int x, int y)
 * body: 004a28fc-004a2901
 * thunk to: GDI32.DLL::LineTo
 */

BOOL LineTo(HDC hdc,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a28fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LineTo(hdc,x,y);
  return BVar1;
}


