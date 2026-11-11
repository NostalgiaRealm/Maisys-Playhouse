
/* ==== GDI32.DLL::GetClipBox @ 004a27e8 ==== 
 * signature: int __stdcall GetClipBox(HDC hdc, LPRECT lprect)
 * body: 004a27e8-004a27ed
 * thunk to: GDI32.DLL::GetClipBox
 */

int GetClipBox(HDC hdc,LPRECT lprect)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a27e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClipBox(hdc,lprect);
  return iVar1;
}


