
/* ==== GDI32.DLL::SetTextCharacterExtra @ 004a290e ==== 
 * signature: int __stdcall SetTextCharacterExtra(HDC hdc, int extra)
 * body: 004a290e-004a2913
 * thunk to: GDI32.DLL::SetTextCharacterExtra
 */

int SetTextCharacterExtra(HDC hdc,int extra)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a290e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetTextCharacterExtra(hdc,extra);
  return iVar1;
}


