
/* ==== GDI32.DLL::SetStretchBltMode @ 11028f22 ==== 
 * signature: int __stdcall SetStretchBltMode(HDC hdc, int mode)
 * body: 11028f22-11028f27
 * thunk to: GDI32.DLL::SetStretchBltMode
 */

int SetStretchBltMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetStretchBltMode(hdc,mode);
  return iVar1;
}


