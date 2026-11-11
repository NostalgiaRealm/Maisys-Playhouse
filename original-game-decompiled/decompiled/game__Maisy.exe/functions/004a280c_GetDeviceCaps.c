
/* ==== GDI32.DLL::GetDeviceCaps @ 004a280c ==== 
 * signature: int __stdcall GetDeviceCaps(HDC hdc, int index)
 * body: 004a280c-004a2811
 * thunk to: GDI32.DLL::GetDeviceCaps
 */

int GetDeviceCaps(HDC hdc,int index)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a280c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDeviceCaps(hdc,index);
  return iVar1;
}


