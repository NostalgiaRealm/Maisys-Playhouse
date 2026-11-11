
/* ==== GDI32.DLL::SetBkMode @ 5f004b22 ==== 
 * signature: int __stdcall SetBkMode(HDC hdc, int mode)
 * body: 5f004b22-5f004b27
 * thunk to: GDI32.DLL::SetBkMode
 */

int SetBkMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetBkMode(hdc,mode);
  return iVar1;
}


