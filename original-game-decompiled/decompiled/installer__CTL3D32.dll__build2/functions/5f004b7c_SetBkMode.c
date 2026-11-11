
/* ==== GDI32.DLL::SetBkMode @ 5f004b7c ==== 
 * signature: int __stdcall SetBkMode(HDC hdc, int mode)
 * body: 5f004b7c-5f004b81
 * thunk to: GDI32.DLL::SetBkMode
 */

int SetBkMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetBkMode(hdc,mode);
  return iVar1;
}


