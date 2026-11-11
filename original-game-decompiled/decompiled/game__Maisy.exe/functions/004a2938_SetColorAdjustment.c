
/* ==== GDI32.DLL::SetColorAdjustment @ 004a2938 ==== 
 * signature: BOOL __stdcall SetColorAdjustment(HDC hdc, COLORADJUSTMENT * lpca)
 * body: 004a2938-004a293d
 * thunk to: GDI32.DLL::SetColorAdjustment
 */

BOOL SetColorAdjustment(HDC hdc,COLORADJUSTMENT *lpca)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetColorAdjustment(hdc,lpca);
  return BVar1;
}


