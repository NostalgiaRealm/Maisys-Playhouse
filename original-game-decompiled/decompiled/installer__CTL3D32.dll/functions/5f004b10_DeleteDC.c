
/* ==== GDI32.DLL::DeleteDC @ 5f004b10 ==== 
 * signature: BOOL __stdcall DeleteDC(HDC hdc)
 * body: 5f004b10-5f004b15
 * thunk to: GDI32.DLL::DeleteDC
 */

BOOL DeleteDC(HDC hdc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteDC(hdc);
  return BVar1;
}


