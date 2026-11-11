
/* ==== GDI32.DLL::FillRgn @ 11028f6a ==== 
 * signature: BOOL __stdcall FillRgn(HDC hdc, HRGN hrgn, HBRUSH hbr)
 * body: 11028f6a-11028f6f
 * thunk to: GDI32.DLL::FillRgn
 */

BOOL FillRgn(HDC hdc,HRGN hrgn,HBRUSH hbr)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FillRgn(hdc,hrgn,hbr);
  return BVar1;
}


