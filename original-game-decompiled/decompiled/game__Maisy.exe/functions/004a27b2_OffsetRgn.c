
/* ==== GDI32.DLL::OffsetRgn @ 004a27b2 ==== 
 * signature: int __stdcall OffsetRgn(HRGN hrgn, int x, int y)
 * body: 004a27b2-004a27b7
 * thunk to: GDI32.DLL::OffsetRgn
 */

int OffsetRgn(HRGN hrgn,int x,int y)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a27b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OffsetRgn(hrgn,x,y);
  return iVar1;
}


