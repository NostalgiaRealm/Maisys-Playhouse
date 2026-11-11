
/* ==== GDI32.DLL::FillRgn @ 004a27be ==== 
 * signature: BOOL __stdcall FillRgn(HDC hdc, HRGN hrgn, HBRUSH hbr)
 * body: 004a27be-004a27c3
 * thunk to: GDI32.DLL::FillRgn
 */

BOOL FillRgn(HDC hdc,HRGN hrgn,HBRUSH hbr)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a27be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FillRgn(hdc,hrgn,hbr);
  return BVar1;
}


