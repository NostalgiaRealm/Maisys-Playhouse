
/* ==== GDI32.DLL::SelectClipRgn @ 004a27d6 ==== 
 * signature: int __stdcall SelectClipRgn(HDC hdc, HRGN hrgn)
 * body: 004a27d6-004a27db
 * thunk to: GDI32.DLL::SelectClipRgn
 */

int SelectClipRgn(HDC hdc,HRGN hrgn)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a27d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SelectClipRgn(hdc,hrgn);
  return iVar1;
}


