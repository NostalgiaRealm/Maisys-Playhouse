
/* ==== GDI32.DLL::SetStretchBltMode @ 004a27ac ==== 
 * signature: int __stdcall SetStretchBltMode(HDC hdc, int mode)
 * body: 004a27ac-004a27b1
 * thunk to: GDI32.DLL::SetStretchBltMode
 */

int SetStretchBltMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a27ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetStretchBltMode(hdc,mode);
  return iVar1;
}


