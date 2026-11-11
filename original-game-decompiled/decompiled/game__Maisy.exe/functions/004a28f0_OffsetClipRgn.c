
/* ==== GDI32.DLL::OffsetClipRgn @ 004a28f0 ==== 
 * signature: int __stdcall OffsetClipRgn(HDC hdc, int x, int y)
 * body: 004a28f0-004a28f5
 * thunk to: GDI32.DLL::OffsetClipRgn
 */

int OffsetClipRgn(HDC hdc,int x,int y)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a28f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OffsetClipRgn(hdc,x,y);
  return iVar1;
}


