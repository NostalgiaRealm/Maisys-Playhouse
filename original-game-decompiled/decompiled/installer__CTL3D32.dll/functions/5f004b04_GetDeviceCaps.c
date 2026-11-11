
/* ==== GDI32.DLL::GetDeviceCaps @ 5f004b04 ==== 
 * signature: int __stdcall GetDeviceCaps(HDC hdc, int index)
 * body: 5f004b04-5f004b09
 * thunk to: GDI32.DLL::GetDeviceCaps
 */

int GetDeviceCaps(HDC hdc,int index)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDeviceCaps(hdc,index);
  return iVar1;
}


