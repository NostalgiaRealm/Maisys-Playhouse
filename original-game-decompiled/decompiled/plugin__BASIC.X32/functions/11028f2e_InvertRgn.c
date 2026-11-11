
/* ==== GDI32.DLL::InvertRgn @ 11028f2e ==== 
 * signature: BOOL __stdcall InvertRgn(HDC hdc, HRGN hrgn)
 * body: 11028f2e-11028f33
 * thunk to: GDI32.DLL::InvertRgn
 */

BOOL InvertRgn(HDC hdc,HRGN hrgn)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InvertRgn(hdc,hrgn);
  return BVar1;
}


