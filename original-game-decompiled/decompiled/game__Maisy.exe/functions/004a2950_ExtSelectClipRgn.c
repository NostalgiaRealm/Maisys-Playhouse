
/* ==== GDI32.DLL::ExtSelectClipRgn @ 004a2950 ==== 
 * signature: int __stdcall ExtSelectClipRgn(HDC hdc, HRGN hrgn, int mode)
 * body: 004a2950-004a2955
 * thunk to: GDI32.DLL::ExtSelectClipRgn
 */

int ExtSelectClipRgn(HDC hdc,HRGN hrgn,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ExtSelectClipRgn(hdc,hrgn,mode);
  return iVar1;
}


