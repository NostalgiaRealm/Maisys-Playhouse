
/* ==== GDI32.DLL::SetBkMode @ 004a27ca ==== 
 * signature: int __stdcall SetBkMode(HDC hdc, int mode)
 * body: 004a27ca-004a27cf
 * thunk to: GDI32.DLL::SetBkMode
 */

int SetBkMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a27ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetBkMode(hdc,mode);
  return iVar1;
}


