
/* ==== GDI32.DLL::SetTextJustification @ 004a2908 ==== 
 * signature: BOOL __stdcall SetTextJustification(HDC hdc, int extra, int count)
 * body: 004a2908-004a290d
 * thunk to: GDI32.DLL::SetTextJustification
 */

BOOL SetTextJustification(HDC hdc,int extra,int count)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetTextJustification(hdc,extra,count);
  return BVar1;
}


