
/* ==== GDI32.DLL::DeleteObject @ 11028eaa ==== 
 * signature: BOOL __stdcall DeleteObject(HGDIOBJ ho)
 * body: 11028eaa-11028eaf
 * thunk to: GDI32.DLL::DeleteObject
 */

BOOL DeleteObject(HGDIOBJ ho)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x11028eaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteObject(ho);
  return BVar1;
}


