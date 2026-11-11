
/* ==== GDI32.DLL::DeleteObject @ 5f004b2e ==== 
 * signature: BOOL __stdcall DeleteObject(HGDIOBJ ho)
 * body: 5f004b2e-5f004b33
 * thunk to: GDI32.DLL::DeleteObject
 */

BOOL DeleteObject(HGDIOBJ ho)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x5f004b2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteObject(ho);
  return BVar1;
}


