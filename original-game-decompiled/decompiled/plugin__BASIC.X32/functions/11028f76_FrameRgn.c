
/* ==== GDI32.DLL::FrameRgn @ 11028f76 ==== 
 * signature: BOOL __stdcall FrameRgn(HDC hdc, HRGN hrgn, HBRUSH hbr, int w, int h)
 * body: 11028f76-11028f7b
 * thunk to: GDI32.DLL::FrameRgn
 */

BOOL FrameRgn(HDC hdc,HRGN hrgn,HBRUSH hbr,int w,int h)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FrameRgn(hdc,hrgn,hbr,w,h);
  return BVar1;
}


