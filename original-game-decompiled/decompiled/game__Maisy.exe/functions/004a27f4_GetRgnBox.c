
/* ==== GDI32.DLL::GetRgnBox @ 004a27f4 ==== 
 * signature: int __stdcall GetRgnBox(HRGN hrgn, LPRECT lprc)
 * body: 004a27f4-004a27f9
 * thunk to: GDI32.DLL::GetRgnBox
 */

int GetRgnBox(HRGN hrgn,LPRECT lprc)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a27f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetRgnBox(hrgn,lprc);
  return iVar1;
}


