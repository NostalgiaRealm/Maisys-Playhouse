
/* ==== GDI32.DLL::GetBkMode @ 004a2800 ==== 
 * signature: int __stdcall GetBkMode(HDC hdc)
 * body: 004a2800-004a2805
 * thunk to: GDI32.DLL::GetBkMode
 */

int GetBkMode(HDC hdc)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetBkMode(hdc);
  return iVar1;
}


