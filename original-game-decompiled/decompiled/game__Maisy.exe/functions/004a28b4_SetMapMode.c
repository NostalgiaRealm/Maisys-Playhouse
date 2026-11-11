
/* ==== GDI32.DLL::SetMapMode @ 004a28b4 ==== 
 * signature: int __stdcall SetMapMode(HDC hdc, int iMode)
 * body: 004a28b4-004a28b9
 * thunk to: GDI32.DLL::SetMapMode
 */

int SetMapMode(HDC hdc,int iMode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a28b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMapMode(hdc,iMode);
  return iVar1;
}


