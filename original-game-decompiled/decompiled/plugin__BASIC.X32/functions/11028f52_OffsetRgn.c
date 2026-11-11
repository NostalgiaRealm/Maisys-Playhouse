
/* ==== GDI32.DLL::OffsetRgn @ 11028f52 ==== 
 * signature: int __stdcall OffsetRgn(HRGN hrgn, int x, int y)
 * body: 11028f52-11028f57
 * thunk to: GDI32.DLL::OffsetRgn
 */

int OffsetRgn(HRGN hrgn,int x,int y)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OffsetRgn(hrgn,x,y);
  return iVar1;
}


