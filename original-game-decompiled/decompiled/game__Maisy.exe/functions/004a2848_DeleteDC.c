
/* ==== GDI32.DLL::DeleteDC @ 004a2848 ==== 
 * signature: BOOL __stdcall DeleteDC(HDC hdc)
 * body: 004a2848-004a284d
 * thunk to: GDI32.DLL::DeleteDC
 */

BOOL DeleteDC(HDC hdc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteDC(hdc);
  return BVar1;
}


