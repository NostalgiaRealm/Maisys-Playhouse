
/* ==== GDI32.DLL::DeleteDC @ 5f004b6a ==== 
 * signature: BOOL __stdcall DeleteDC(HDC hdc)
 * body: 5f004b6a-5f004b6f
 * thunk to: GDI32.DLL::DeleteDC
 */

BOOL DeleteDC(HDC hdc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteDC(hdc);
  return BVar1;
}


