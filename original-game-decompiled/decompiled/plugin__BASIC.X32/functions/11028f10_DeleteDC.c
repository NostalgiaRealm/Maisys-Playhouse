
/* ==== GDI32.DLL::DeleteDC @ 11028f10 ==== 
 * signature: BOOL __stdcall DeleteDC(HDC hdc)
 * body: 11028f10-11028f15
 * thunk to: GDI32.DLL::DeleteDC
 */

BOOL DeleteDC(HDC hdc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteDC(hdc);
  return BVar1;
}


