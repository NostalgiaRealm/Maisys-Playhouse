
/* ==== GDI32.DLL::CreateRectRgn @ 004a27e2 ==== 
 * signature: HRGN __stdcall CreateRectRgn(int x1, int y1, int x2, int y2)
 * body: 004a27e2-004a27e7
 * thunk to: GDI32.DLL::CreateRectRgn
 */

HRGN CreateRectRgn(int x1,int y1,int x2,int y2)

{
  HRGN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a27e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateRectRgn(x1,y1,x2,y2);
  return pHVar1;
}


