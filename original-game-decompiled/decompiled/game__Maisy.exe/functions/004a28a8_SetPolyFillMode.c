
/* ==== GDI32.DLL::SetPolyFillMode @ 004a28a8 ==== 
 * signature: int __stdcall SetPolyFillMode(HDC hdc, int mode)
 * body: 004a28a8-004a28ad
 * thunk to: GDI32.DLL::SetPolyFillMode
 */

int SetPolyFillMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a28a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetPolyFillMode(hdc,mode);
  return iVar1;
}


