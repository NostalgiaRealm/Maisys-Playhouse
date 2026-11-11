
/* ==== GDI32.DLL::GetDeviceCaps @ 12027c3e ==== 
 * signature: int __stdcall GetDeviceCaps(HDC hdc, int index)
 * body: 12027c3e-12027c43
 * thunk to: GDI32.DLL::GetDeviceCaps
 */

int GetDeviceCaps(HDC hdc,int index)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x12027c3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDeviceCaps(hdc,index);
  return iVar1;
}


