
/* ==== GDI32.DLL::GetClipRgn @ 004a2944 ==== 
 * signature: int __stdcall GetClipRgn(HDC hdc, HRGN hrgn)
 * body: 004a2944-004a2949
 * thunk to: GDI32.DLL::GetClipRgn
 */

int GetClipRgn(HDC hdc,HRGN hrgn)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClipRgn(hdc,hrgn);
  return iVar1;
}


